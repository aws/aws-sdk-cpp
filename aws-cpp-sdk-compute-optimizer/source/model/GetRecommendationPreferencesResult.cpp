/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/GetRecommendationPreferencesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRecommendationPreferencesResult::GetRecommendationPreferencesResult()
{
}

GetRecommendationPreferencesResult::GetRecommendationPreferencesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRecommendationPreferencesResult& GetRecommendationPreferencesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("recommendationPreferencesDetails"))
  {
    Aws::Utils::Array<JsonView> recommendationPreferencesDetailsJsonList = jsonValue.GetArray("recommendationPreferencesDetails");
    for(unsigned recommendationPreferencesDetailsIndex = 0; recommendationPreferencesDetailsIndex < recommendationPreferencesDetailsJsonList.GetLength(); ++recommendationPreferencesDetailsIndex)
    {
      m_recommendationPreferencesDetails.push_back(recommendationPreferencesDetailsJsonList[recommendationPreferencesDetailsIndex].AsObject());
    }
  }



  return *this;
}
