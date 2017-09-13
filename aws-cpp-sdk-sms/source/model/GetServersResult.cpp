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

#include <aws/sms/model/GetServersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetServersResult::GetServersResult() : 
    m_serverCatalogStatus(ServerCatalogStatus::NOT_SET)
{
}

GetServersResult::GetServersResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_serverCatalogStatus(ServerCatalogStatus::NOT_SET)
{
  *this = result;
}

GetServersResult& GetServersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("lastModifiedOn"))
  {
    m_lastModifiedOn = jsonValue.GetDouble("lastModifiedOn");

  }

  if(jsonValue.ValueExists("serverCatalogStatus"))
  {
    m_serverCatalogStatus = ServerCatalogStatusMapper::GetServerCatalogStatusForName(jsonValue.GetString("serverCatalogStatus"));

  }

  if(jsonValue.ValueExists("serverList"))
  {
    Array<JsonValue> serverListJsonList = jsonValue.GetArray("serverList");
    for(unsigned serverListIndex = 0; serverListIndex < serverListJsonList.GetLength(); ++serverListIndex)
    {
      m_serverList.push_back(serverListJsonList[serverListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
