/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/UpdateDeploymentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateDeploymentResult::UpdateDeploymentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateDeploymentResult& UpdateDeploymentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");
    m_createdDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("apiSummary"))
  {
    Aws::Map<Aws::String, JsonView> apiSummaryJsonMap = jsonValue.GetObject("apiSummary").GetAllObjects();
    for(auto& apiSummaryItem : apiSummaryJsonMap)
    {
      Aws::Map<Aws::String, JsonView> mapOfMethodSnapshotJsonMap = apiSummaryItem.second.GetAllObjects();
      Aws::Map<Aws::String, MethodSnapshot> mapOfMethodSnapshotMap;
      for(auto& mapOfMethodSnapshotItem : mapOfMethodSnapshotJsonMap)
      {
        mapOfMethodSnapshotMap[mapOfMethodSnapshotItem.first] = mapOfMethodSnapshotItem.second.AsObject();
      }
      m_apiSummary[apiSummaryItem.first] = std::move(mapOfMethodSnapshotMap);
    }
    m_apiSummaryHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
