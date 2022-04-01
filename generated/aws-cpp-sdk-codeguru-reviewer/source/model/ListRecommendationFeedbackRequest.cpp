/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/ListRecommendationFeedbackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeGuruReviewer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListRecommendationFeedbackRequest::ListRecommendationFeedbackRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_codeReviewArnHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_recommendationIdsHasBeenSet(false)
{
}

Aws::String ListRecommendationFeedbackRequest::SerializePayload() const
{
  return {};
}

void ListRecommendationFeedbackRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("MaxResults", ss.str());
      ss.str("");
    }

    if(m_userIdsHasBeenSet)
    {
      for(const auto& item : m_userIds)
      {
        ss << item;
        uri.AddQueryStringParameter("UserIds", ss.str());
        ss.str("");
      }
    }

    if(m_recommendationIdsHasBeenSet)
    {
      for(const auto& item : m_recommendationIds)
      {
        ss << item;
        uri.AddQueryStringParameter("RecommendationIds", ss.str());
        ss.str("");
      }
    }

}



