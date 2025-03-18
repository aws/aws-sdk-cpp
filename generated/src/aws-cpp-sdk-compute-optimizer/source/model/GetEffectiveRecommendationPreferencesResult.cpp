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

GetEffectiveRecommendationPreferencesResult::GetEffectiveRecommendationPreferencesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEffectiveRecommendationPreferencesResult& GetEffectiveRecommendationPreferencesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("enhancedInfrastructureMetrics"))
  {
    m_enhancedInfrastructureMetrics = EnhancedInfrastructureMetricsMapper::GetEnhancedInfrastructureMetricsForName(jsonValue.GetString("enhancedInfrastructureMetrics"));
    m_enhancedInfrastructureMetricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("externalMetricsPreference"))
  {
    m_externalMetricsPreference = jsonValue.GetObject("externalMetricsPreference");
    m_externalMetricsPreferenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lookBackPeriod"))
  {
    m_lookBackPeriod = LookBackPeriodPreferenceMapper::GetLookBackPeriodPreferenceForName(jsonValue.GetString("lookBackPeriod"));
    m_lookBackPeriodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("utilizationPreferences"))
  {
    Aws::Utils::Array<JsonView> utilizationPreferencesJsonList = jsonValue.GetArray("utilizationPreferences");
    for(unsigned utilizationPreferencesIndex = 0; utilizationPreferencesIndex < utilizationPreferencesJsonList.GetLength(); ++utilizationPreferencesIndex)
    {
      m_utilizationPreferences.push_back(utilizationPreferencesJsonList[utilizationPreferencesIndex].AsObject());
    }
    m_utilizationPreferencesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("preferredResources"))
  {
    Aws::Utils::Array<JsonView> preferredResourcesJsonList = jsonValue.GetArray("preferredResources");
    for(unsigned preferredResourcesIndex = 0; preferredResourcesIndex < preferredResourcesJsonList.GetLength(); ++preferredResourcesIndex)
    {
      m_preferredResources.push_back(preferredResourcesJsonList[preferredResourcesIndex].AsObject());
    }
    m_preferredResourcesHasBeenSet = true;
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
