/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/DescribeMetricSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMetricSetResult::DescribeMetricSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeMetricSetResult& DescribeMetricSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MetricSetArn"))
  {
    m_metricSetArn = jsonValue.GetString("MetricSetArn");
    m_metricSetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AnomalyDetectorArn"))
  {
    m_anomalyDetectorArn = jsonValue.GetString("AnomalyDetectorArn");
    m_anomalyDetectorArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetricSetName"))
  {
    m_metricSetName = jsonValue.GetString("MetricSetName");
    m_metricSetNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetricSetDescription"))
  {
    m_metricSetDescription = jsonValue.GetString("MetricSetDescription");
    m_metricSetDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("LastModificationTime");
    m_lastModificationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Offset"))
  {
    m_offset = jsonValue.GetInteger("Offset");
    m_offsetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetricList"))
  {
    Aws::Utils::Array<JsonView> metricListJsonList = jsonValue.GetArray("MetricList");
    for(unsigned metricListIndex = 0; metricListIndex < metricListJsonList.GetLength(); ++metricListIndex)
    {
      m_metricList.push_back(metricListJsonList[metricListIndex].AsObject());
    }
    m_metricListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimestampColumn"))
  {
    m_timestampColumn = jsonValue.GetObject("TimestampColumn");
    m_timestampColumnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DimensionList"))
  {
    Aws::Utils::Array<JsonView> dimensionListJsonList = jsonValue.GetArray("DimensionList");
    for(unsigned dimensionListIndex = 0; dimensionListIndex < dimensionListJsonList.GetLength(); ++dimensionListIndex)
    {
      m_dimensionList.push_back(dimensionListJsonList[dimensionListIndex].AsString());
    }
    m_dimensionListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetricSetFrequency"))
  {
    m_metricSetFrequency = FrequencyMapper::GetFrequencyForName(jsonValue.GetString("MetricSetFrequency"));
    m_metricSetFrequencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Timezone"))
  {
    m_timezone = jsonValue.GetString("Timezone");
    m_timezoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetricSource"))
  {
    m_metricSource = jsonValue.GetObject("MetricSource");
    m_metricSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DimensionFilterList"))
  {
    Aws::Utils::Array<JsonView> dimensionFilterListJsonList = jsonValue.GetArray("DimensionFilterList");
    for(unsigned dimensionFilterListIndex = 0; dimensionFilterListIndex < dimensionFilterListJsonList.GetLength(); ++dimensionFilterListIndex)
    {
      m_dimensionFilterList.push_back(dimensionFilterListJsonList[dimensionFilterListIndex].AsObject());
    }
    m_dimensionFilterListHasBeenSet = true;
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
