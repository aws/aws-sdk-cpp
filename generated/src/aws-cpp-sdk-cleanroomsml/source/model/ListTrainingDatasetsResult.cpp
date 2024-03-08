/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/ListTrainingDatasetsResult.h>
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

ListTrainingDatasetsResult::ListTrainingDatasetsResult()
{
}

ListTrainingDatasetsResult::ListTrainingDatasetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTrainingDatasetsResult& ListTrainingDatasetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("trainingDatasets"))
  {
    Aws::Utils::Array<JsonView> trainingDatasetsJsonList = jsonValue.GetArray("trainingDatasets");
    for(unsigned trainingDatasetsIndex = 0; trainingDatasetsIndex < trainingDatasetsJsonList.GetLength(); ++trainingDatasetsIndex)
    {
      m_trainingDatasets.push_back(trainingDatasetsJsonList[trainingDatasetsIndex].AsObject());
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
