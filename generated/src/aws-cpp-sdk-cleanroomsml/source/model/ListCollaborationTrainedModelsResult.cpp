/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/ListCollaborationTrainedModelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCollaborationTrainedModelsResult::ListCollaborationTrainedModelsResult()
{
}

ListCollaborationTrainedModelsResult::ListCollaborationTrainedModelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCollaborationTrainedModelsResult& ListCollaborationTrainedModelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("collaborationTrainedModels"))
  {
    Aws::Utils::Array<JsonView> collaborationTrainedModelsJsonList = jsonValue.GetArray("collaborationTrainedModels");
    for(unsigned collaborationTrainedModelsIndex = 0; collaborationTrainedModelsIndex < collaborationTrainedModelsJsonList.GetLength(); ++collaborationTrainedModelsIndex)
    {
      m_collaborationTrainedModels.push_back(collaborationTrainedModelsJsonList[collaborationTrainedModelsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
