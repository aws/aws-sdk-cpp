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
    Array<JsonView> dataflowEdgesJsonList = jsonValue.GetArray("dataflowEdges");
    for(unsigned dataflowEdgesIndex = 0; dataflowEdgesIndex < dataflowEdgesJsonList.GetLength(); ++dataflowEdgesIndex)
    {
      Array<JsonView> dataflowEdgeJsonList = dataflowEdgesJsonList[dataflowEdgesIndex].AsArray();
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
