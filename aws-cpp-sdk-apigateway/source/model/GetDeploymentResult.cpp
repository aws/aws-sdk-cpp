/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/apigateway/model/GetDeploymentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDeploymentResult::GetDeploymentResult()
{
}

GetDeploymentResult::GetDeploymentResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDeploymentResult& GetDeploymentResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");

  }

  if(jsonValue.ValueExists("apiSummary"))
  {
    Aws::Map<Aws::String, JsonValue> apiSummaryJsonMap = jsonValue.GetObject("apiSummary").GetAllObjects();
    for(auto& apiSummaryItem : apiSummaryJsonMap)
    {
      Aws::Map<Aws::String, JsonValue> mapOfMethodSnapshotJsonMap = apiSummaryItem.second.GetAllObjects();
      Aws::Map<Aws::String, MethodSnapshot> mapOfMethodSnapshotMap;
      for(auto& mapOfMethodSnapshotItem : mapOfMethodSnapshotJsonMap)
      {
        mapOfMethodSnapshotMap[mapOfMethodSnapshotItem.first] = mapOfMethodSnapshotItem.second.AsObject();
      }
      m_apiSummary[apiSummaryItem.first] = std::move(mapOfMethodSnapshotMap);
    }
  }



  return *this;
}
