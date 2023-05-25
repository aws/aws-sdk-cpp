/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/GetDataQualityMetricsResult.h>
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

GetDataQualityMetricsResult::GetDataQualityMetricsResult()
{
}

GetDataQualityMetricsResult::GetDataQualityMetricsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDataQualityMetricsResult& GetDataQualityMetricsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AnomalyDetectorDataQualityMetricList"))
  {
    Aws::Utils::Array<JsonView> anomalyDetectorDataQualityMetricListJsonList = jsonValue.GetArray("AnomalyDetectorDataQualityMetricList");
    for(unsigned anomalyDetectorDataQualityMetricListIndex = 0; anomalyDetectorDataQualityMetricListIndex < anomalyDetectorDataQualityMetricListJsonList.GetLength(); ++anomalyDetectorDataQualityMetricListIndex)
    {
      m_anomalyDetectorDataQualityMetricList.push_back(anomalyDetectorDataQualityMetricListJsonList[anomalyDetectorDataQualityMetricListIndex].AsObject());
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
