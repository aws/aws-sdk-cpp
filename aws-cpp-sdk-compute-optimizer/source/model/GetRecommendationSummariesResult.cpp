/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/GetRecommendationSummariesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRecommendationSummariesResult::GetRecommendationSummariesResult()
{
}

GetRecommendationSummariesResult::GetRecommendationSummariesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRecommendationSummariesResult& GetRecommendationSummariesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("recommendationSummaries"))
  {
    Aws::Utils::Array<JsonView> recommendationSummariesJsonList = jsonValue.GetArray("recommendationSummaries");
    for(unsigned recommendationSummariesIndex = 0; recommendationSummariesIndex < recommendationSummariesJsonList.GetLength(); ++recommendationSummariesIndex)
    {
      m_recommendationSummaries.push_back(recommendationSummariesJsonList[recommendationSummariesIndex].AsObject());
    }
  }



  return *this;
}
