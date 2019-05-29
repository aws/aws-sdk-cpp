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

#include <aws/iotthingsgraph/model/GetNamespaceDeletionStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTThingsGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetNamespaceDeletionStatusResult::GetNamespaceDeletionStatusResult() : 
    m_status(NamespaceDeletionStatus::NOT_SET),
    m_errorCode(NamespaceDeletionStatusErrorCodes::NOT_SET)
{
}

GetNamespaceDeletionStatusResult::GetNamespaceDeletionStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(NamespaceDeletionStatus::NOT_SET),
    m_errorCode(NamespaceDeletionStatusErrorCodes::NOT_SET)
{
  *this = result;
}

GetNamespaceDeletionStatusResult& GetNamespaceDeletionStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("namespaceArn"))
  {
    m_namespaceArn = jsonValue.GetString("namespaceArn");

  }

  if(jsonValue.ValueExists("namespaceName"))
  {
    m_namespaceName = jsonValue.GetString("namespaceName");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = NamespaceDeletionStatusMapper::GetNamespaceDeletionStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = NamespaceDeletionStatusErrorCodesMapper::GetNamespaceDeletionStatusErrorCodesForName(jsonValue.GetString("errorCode"));

  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

  }



  return *this;
}
