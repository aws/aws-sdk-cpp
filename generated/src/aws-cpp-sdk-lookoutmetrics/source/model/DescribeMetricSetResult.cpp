/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/DescribeMetricSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMetricSetResult::DescribeMetricSetResult() : 
    m_offset(0),
    m_metricSetFrequency(Frequency::NOT_SET)
{
}

DescribeMetricSetResult::DescribeMetricSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_offset(0),
    m_metricSetFrequency(Frequency::NOT_SET)
{
  *this = result;
}

DescribeMetricSetResult& DescribeMetricSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MetricSetArn"))
  {
    m_metricSetArn = jsonValue.GetString("MetricSetArn");

  }

  if(jsonValue.ValueExists("AnomalyDetectorArn"))
  {
    m_anomalyDetectorArn = jsonValue.GetString("AnomalyDetectorArn");

  }

  if(jsonValue.ValueExists("MetricSetName"))
  {
    m_metricSetName = jsonValue.GetString("MetricSetName");

  }

  if(jsonValue.ValueExists("MetricSetDescription"))
  {
    m_metricSetDescription = jsonValue.GetString("MetricSetDescription");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("LastModificationTime");

  }

  if(jsonValue.ValueExists("Offset"))
  {
    m_offset = jsonValue.GetInteger("Offset");

  }

  if(jsonValue.ValueExists("MetricList"))
  {
    Aws::Utils::Array<JsonView> metricListJsonList = jsonValue.GetArray("MetricList");
    for(unsigned metricListIndex = 0; metricListIndex < metricListJsonList.GetLength(); ++metricListIndex)
    {
      m_metricList.push_back(metricListJsonList[metricListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("TimestampColumn"))
  {
    m_timestampColumn = jsonValue.GetObject("TimestampColumn");

  }

  if(jsonValue.ValueExists("DimensionList"))
  {
    Aws::Utils::Array<JsonView> dimensionListJsonList = jsonValue.GetArray("DimensionList");
    for(unsigned dimensionListIndex = 0; dimensionListIndex < dimensionListJsonList.GetLength(); ++dimensionListIndex)
    {
      m_dimensionList.push_back(dimensionListJsonList[dimensionListIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("MetricSetFrequency"))
  {
    m_metricSetFrequency = FrequencyMapper::GetFrequencyForName(jsonValue.GetString("MetricSetFrequency"));

  }

  if(jsonValue.ValueExists("Timezone"))
  {
    m_timezone = jsonValue.GetString("Timezone");

  }

  if(jsonValue.ValueExists("MetricSource"))
  {
    m_metricSource = jsonValue.GetObject("MetricSource");

  }

  if(jsonValue.ValueExists("DimensionFilterList"))
  {
    Aws::Utils::Array<JsonView> dimensionFilterListJsonList = jsonValue.GetArray("DimensionFilterList");
    for(unsigned dimensionFilterListIndex = 0; dimensionFilterListIndex < dimensionFilterListJsonList.GetLength(); ++dimensionFilterListIndex)
    {
      m_dimensionFilterList.push_back(dimensionFilterListJsonList[dimensionFilterListIndex].AsObject());
    }
  }



  return *this;
}
