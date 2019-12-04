/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/lambda/model/GetProvisionedConcurrencyConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetProvisionedConcurrencyConfigResult::GetProvisionedConcurrencyConfigResult() : 
    m_requestedProvisionedConcurrentExecutions(0),
    m_availableProvisionedConcurrentExecutions(0),
    m_allocatedProvisionedConcurrentExecutions(0),
    m_status(ProvisionedConcurrencyStatusEnum::NOT_SET)
{
}

GetProvisionedConcurrencyConfigResult::GetProvisionedConcurrencyConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_requestedProvisionedConcurrentExecutions(0),
    m_availableProvisionedConcurrentExecutions(0),
    m_allocatedProvisionedConcurrentExecutions(0),
    m_status(ProvisionedConcurrencyStatusEnum::NOT_SET)
{
  *this = result;
}

GetProvisionedConcurrencyConfigResult& GetProvisionedConcurrencyConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RequestedProvisionedConcurrentExecutions"))
  {
    m_requestedProvisionedConcurrentExecutions = jsonValue.GetInteger("RequestedProvisionedConcurrentExecutions");

  }

  if(jsonValue.ValueExists("AvailableProvisionedConcurrentExecutions"))
  {
    m_availableProvisionedConcurrentExecutions = jsonValue.GetInteger("AvailableProvisionedConcurrentExecutions");

  }

  if(jsonValue.ValueExists("AllocatedProvisionedConcurrentExecutions"))
  {
    m_allocatedProvisionedConcurrentExecutions = jsonValue.GetInteger("AllocatedProvisionedConcurrentExecutions");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ProvisionedConcurrencyStatusEnumMapper::GetProvisionedConcurrencyStatusEnumForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = jsonValue.GetString("StatusReason");

  }

  if(jsonValue.ValueExists("LastModified"))
  {
    m_lastModified = jsonValue.GetString("LastModified");

  }



  return *this;
}
