/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/ListRecommendationFeedbackResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeGuruReviewer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRecommendationFeedbackResult::ListRecommendationFeedbackResult()
{
}

ListRecommendationFeedbackResult::ListRecommendationFeedbackResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRecommendationFeedbackResult& ListRecommendationFeedbackResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RecommendationFeedbackSummaries"))
  {
    Aws::Utils::Array<JsonView> recommendationFeedbackSummariesJsonList = jsonValue.GetArray("RecommendationFeedbackSummaries");
    for(unsigned recommendationFeedbackSummariesIndex = 0; recommendationFeedbackSummariesIndex < recommendationFeedbackSummariesJsonList.GetLength(); ++recommendationFeedbackSummariesIndex)
    {
      m_recommendationFeedbackSummaries.push_back(recommendationFeedbackSummariesJsonList[recommendationFeedbackSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
