/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/GetMissionProfileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMissionProfileResult::GetMissionProfileResult() : 
    m_contactPostPassDurationSeconds(0),
    m_contactPrePassDurationSeconds(0),
    m_minimumViableContactDurationSeconds(0)
{
}

GetMissionProfileResult::GetMissionProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_contactPostPassDurationSeconds(0),
    m_contactPrePassDurationSeconds(0),
    m_minimumViableContactDurationSeconds(0)
{
  *this = result;
}

GetMissionProfileResult& GetMissionProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("contactPostPassDurationSeconds"))
  {
    m_contactPostPassDurationSeconds = jsonValue.GetInteger("contactPostPassDurationSeconds");

  }

  if(jsonValue.ValueExists("contactPrePassDurationSeconds"))
  {
    m_contactPrePassDurationSeconds = jsonValue.GetInteger("contactPrePassDurationSeconds");

  }

  if(jsonValue.ValueExists("dataflowEdges"))
  {
    Aws::Utils::Array<JsonView> dataflowEdgesJsonList = jsonValue.GetArray("dataflowEdges");
    for(unsigned dataflowEdgesIndex = 0; dataflowEdgesIndex < dataflowEdgesJsonList.GetLength(); ++dataflowEdgesIndex)
    {
      Aws::Utils::Array<JsonView> dataflowEdgeJsonList = dataflowEdgesJsonList[dataflowEdgesIndex].AsArray();
      Aws::Vector<Aws::String> dataflowEdgeList;
      dataflowEdgeList.reserve((size_t)dataflowEdgeJsonList.GetLength());
      for(unsigned dataflowEdgeIndex = 0; dataflowEdgeIndex < dataflowEdgeJsonList.GetLength(); ++dataflowEdgeIndex)
      {
        dataflowEdgeList.push_back(dataflowEdgeJsonList[dataflowEdgeIndex].AsString());
      }
      m_dataflowEdges.push_back(std::move(dataflowEdgeList));
    }
  }

  if(jsonValue.ValueExists("minimumViableContactDurationSeconds"))
  {
    m_minimumViableContactDurationSeconds = jsonValue.GetInteger("minimumViableContactDurationSeconds");

  }

  if(jsonValue.ValueExists("missionProfileArn"))
  {
    m_missionProfileArn = jsonValue.GetString("missionProfileArn");

  }

  if(jsonValue.ValueExists("missionProfileId"))
  {
    m_missionProfileId = jsonValue.GetString("missionProfileId");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("trackingConfigArn"))
  {
    m_trackingConfigArn = jsonValue.GetString("trackingConfigArn");

  }



  return *this;
}
