/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/GetECSServiceRecommendationProjectedMetricsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetECSServiceRecommendationProjectedMetricsResult::GetECSServiceRecommendationProjectedMetricsResult()
{
}

GetECSServiceRecommendationProjectedMetricsResult::GetECSServiceRecommendationProjectedMetricsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetECSServiceRecommendationProjectedMetricsResult& GetECSServiceRecommendationProjectedMetricsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("recommendedOptionProjectedMetrics"))
  {
    Aws::Utils::Array<JsonView> recommendedOptionProjectedMetricsJsonList = jsonValue.GetArray("recommendedOptionProjectedMetrics");
    for(unsigned recommendedOptionProjectedMetricsIndex = 0; recommendedOptionProjectedMetricsIndex < recommendedOptionProjectedMetricsJsonList.GetLength(); ++recommendedOptionProjectedMetricsIndex)
    {
      m_recommendedOptionProjectedMetrics.push_back(recommendedOptionProjectedMetricsJsonList[recommendedOptionProjectedMetricsIndex].AsObject());
    }
  }



  return *this;
}
