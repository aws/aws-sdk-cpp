/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/GetEffectiveRecommendationPreferencesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEffectiveRecommendationPreferencesResult::GetEffectiveRecommendationPreferencesResult() : 
    m_enhancedInfrastructureMetrics(EnhancedInfrastructureMetrics::NOT_SET),
    m_lookBackPeriod(LookBackPeriodPreference::NOT_SET)
{
}

GetEffectiveRecommendationPreferencesResult::GetEffectiveRecommendationPreferencesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_enhancedInfrastructureMetrics(EnhancedInfrastructureMetrics::NOT_SET),
    m_lookBackPeriod(LookBackPeriodPreference::NOT_SET)
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

  if(jsonValue.ValueExists("lookBackPeriod"))
  {
    m_lookBackPeriod = LookBackPeriodPreferenceMapper::GetLookBackPeriodPreferenceForName(jsonValue.GetString("lookBackPeriod"));

  }

  if(jsonValue.ValueExists("utilizationPreferences"))
  {
    Aws::Utils::Array<JsonView> utilizationPreferencesJsonList = jsonValue.GetArray("utilizationPreferences");
    for(unsigned utilizationPreferencesIndex = 0; utilizationPreferencesIndex < utilizationPreferencesJsonList.GetLength(); ++utilizationPreferencesIndex)
    {
      m_utilizationPreferences.push_back(utilizationPreferencesJsonList[utilizationPreferencesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("preferredResources"))
  {
    Aws::Utils::Array<JsonView> preferredResourcesJsonList = jsonValue.GetArray("preferredResources");
    for(unsigned preferredResourcesIndex = 0; preferredResourcesIndex < preferredResourcesJsonList.GetLength(); ++preferredResourcesIndex)
    {
      m_preferredResources.push_back(preferredResourcesJsonList[preferredResourcesIndex].AsObject());
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
