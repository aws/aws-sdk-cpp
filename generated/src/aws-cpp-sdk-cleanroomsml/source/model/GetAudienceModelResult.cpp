/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/GetAudienceModelResult.h>
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

GetAudienceModelResult::GetAudienceModelResult() : 
    m_status(AudienceModelStatus::NOT_SET)
{
}

GetAudienceModelResult::GetAudienceModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(AudienceModelStatus::NOT_SET)
{
  *this = result;
}

GetAudienceModelResult& GetAudienceModelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("audienceModelArn"))
  {
    m_audienceModelArn = jsonValue.GetString("audienceModelArn");

  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetString("createTime");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");

  }

  if(jsonValue.ValueExists("metrics"))
  {
    Aws::Utils::Array<JsonView> metricsJsonList = jsonValue.GetArray("metrics");
    for(unsigned metricsIndex = 0; metricsIndex < metricsJsonList.GetLength(); ++metricsIndex)
    {
      m_metrics.push_back(metricsJsonList[metricsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AudienceModelStatusMapper::GetAudienceModelStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusDetails"))
  {
    m_statusDetails = jsonValue.GetObject("statusDetails");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("trainingDataEndTime"))
  {
    m_trainingDataEndTime = jsonValue.GetString("trainingDataEndTime");

  }

  if(jsonValue.ValueExists("trainingDataStartTime"))
  {
    m_trainingDataStartTime = jsonValue.GetString("trainingDataStartTime");

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
