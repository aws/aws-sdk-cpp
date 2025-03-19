/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/BatchGetFrameMetricDataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetFrameMetricDataResult::BatchGetFrameMetricDataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetFrameMetricDataResult& BatchGetFrameMetricDataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endTimes"))
  {
    Aws::Utils::Array<JsonView> endTimesJsonList = jsonValue.GetArray("endTimes");
    for(unsigned endTimesIndex = 0; endTimesIndex < endTimesJsonList.GetLength(); ++endTimesIndex)
    {
      m_endTimes.push_back(endTimesJsonList[endTimesIndex].AsObject());
    }
    m_endTimesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("frameMetricData"))
  {
    Aws::Utils::Array<JsonView> frameMetricDataJsonList = jsonValue.GetArray("frameMetricData");
    for(unsigned frameMetricDataIndex = 0; frameMetricDataIndex < frameMetricDataJsonList.GetLength(); ++frameMetricDataIndex)
    {
      m_frameMetricData.push_back(frameMetricDataJsonList[frameMetricDataIndex].AsObject());
    }
    m_frameMetricDataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resolution"))
  {
    m_resolution = AggregationPeriodMapper::GetAggregationPeriodForName(jsonValue.GetString("resolution"));
    m_resolutionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unprocessedEndTimes"))
  {
    Aws::Map<Aws::String, JsonView> unprocessedEndTimesJsonMap = jsonValue.GetObject("unprocessedEndTimes").GetAllObjects();
    for(auto& unprocessedEndTimesItem : unprocessedEndTimesJsonMap)
    {
      Aws::Utils::Array<JsonView> listOfTimestampsJsonList = unprocessedEndTimesItem.second.AsArray();
      Aws::Vector<TimestampStructure> listOfTimestampsList;
      listOfTimestampsList.reserve((size_t)listOfTimestampsJsonList.GetLength());
      for(unsigned listOfTimestampsIndex = 0; listOfTimestampsIndex < listOfTimestampsJsonList.GetLength(); ++listOfTimestampsIndex)
      {
        listOfTimestampsList.push_back(listOfTimestampsJsonList[listOfTimestampsIndex].AsObject());
      }
      m_unprocessedEndTimes[unprocessedEndTimesItem.first] = std::move(listOfTimestampsList);
    }
    m_unprocessedEndTimesHasBeenSet = true;
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
