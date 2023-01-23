/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/ListRecommendationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeGuruReviewer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRecommendationsResult::ListRecommendationsResult()
{
}

ListRecommendationsResult::ListRecommendationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRecommendationsResult& ListRecommendationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RecommendationSummaries"))
  {
    Aws::Utils::Array<JsonView> recommendationSummariesJsonList = jsonValue.GetArray("RecommendationSummaries");
    for(unsigned recommendationSummariesIndex = 0; recommendationSummariesIndex < recommendationSummariesJsonList.GetLength(); ++recommendationSummariesIndex)
    {
      m_recommendationSummaries.push_back(recommendationSummariesJsonList[recommendationSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
