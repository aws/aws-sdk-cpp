/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/GetEffectiveRecommendationPreferencesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEffectiveRecommendationPreferencesResult::GetEffectiveRecommendationPreferencesResult() : 
    m_enhancedInfrastructureMetrics(EnhancedInfrastructureMetrics::NOT_SET)
{
}

GetEffectiveRecommendationPreferencesResult::GetEffectiveRecommendationPreferencesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_enhancedInfrastructureMetrics(EnhancedInfrastructureMetrics::NOT_SET)
{
  *this = result;
}

GetEffectiveRecommendationPreferencesResult& GetEffectiveRecommendationPreferencesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("enhancedInfrastructureMetrics"))
  {
    m_enhancedInfrastructureMetrics = EnhancedInfrastructureMetricsMapper::GetEnhancedInfrastructureMetricsForName(jsonValue.GetString("enhancedInfrastructureMetrics"));

  }

  if(jsonValue.ValueExists("externalMetricsPreference"))
  {
    m_externalMetricsPreference = jsonValue.GetObject("externalMetricsPreference");

  }



  return *this;
}
