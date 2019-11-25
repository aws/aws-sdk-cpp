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

#include <aws/sesv2/model/GetAccountResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAccountResult::GetAccountResult() : 
    m_dedicatedIpAutoWarmupEnabled(false),
    m_productionAccessEnabled(false),
    m_sendingEnabled(false)
{
}

GetAccountResult::GetAccountResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_dedicatedIpAutoWarmupEnabled(false),
    m_productionAccessEnabled(false),
    m_sendingEnabled(false)
{
  *this = result;
}

GetAccountResult& GetAccountResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DedicatedIpAutoWarmupEnabled"))
  {
    m_dedicatedIpAutoWarmupEnabled = jsonValue.GetBool("DedicatedIpAutoWarmupEnabled");

  }

  if(jsonValue.ValueExists("EnforcementStatus"))
  {
    m_enforcementStatus = jsonValue.GetString("EnforcementStatus");

  }

  if(jsonValue.ValueExists("ProductionAccessEnabled"))
  {
    m_productionAccessEnabled = jsonValue.GetBool("ProductionAccessEnabled");

  }

  if(jsonValue.ValueExists("SendQuota"))
  {
    m_sendQuota = jsonValue.GetObject("SendQuota");

  }

  if(jsonValue.ValueExists("SendingEnabled"))
  {
    m_sendingEnabled = jsonValue.GetBool("SendingEnabled");

  }

  if(jsonValue.ValueExists("SuppressionAttributes"))
  {
    m_suppressionAttributes = jsonValue.GetObject("SuppressionAttributes");

  }



  return *this;
}
