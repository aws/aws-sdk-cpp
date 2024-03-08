/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/GetTrainingDatasetResult.h>
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

GetTrainingDatasetResult::GetTrainingDatasetResult() : 
    m_status(TrainingDatasetStatus::NOT_SET)
{
}

GetTrainingDatasetResult::GetTrainingDatasetResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(TrainingDatasetStatus::NOT_SET)
{
  *this = result;
}

GetTrainingDatasetResult& GetTrainingDatasetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetString("createTime");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TrainingDatasetStatusMapper::GetTrainingDatasetStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("trainingData"))
  {
    Aws::Utils::Array<JsonView> trainingDataJsonList = jsonValue.GetArray("trainingData");
    for(unsigned trainingDataIndex = 0; trainingDataIndex < trainingDataJsonList.GetLength(); ++trainingDataIndex)
    {
      m_trainingData.push_back(trainingDataJsonList[trainingDataIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("trainingDatasetArn"))
  {
    m_trainingDatasetArn = jsonValue.GetString("trainingDatasetArn");

  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
