/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/DescribeRecommendationFeedbackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeGuruReviewer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeRecommendationFeedbackRequest::DescribeRecommendationFeedbackRequest() : 
    m_codeReviewArnHasBeenSet(false),
    m_recommendationIdHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

Aws::String DescribeRecommendationFeedbackRequest::SerializePayload() const
{
  return {};
}

void DescribeRecommendationFeedbackRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_recommendationIdHasBeenSet)
    {
      ss << m_recommendationId;
      uri.AddQueryStringParameter("RecommendationId", ss.str());
      ss.str("");
    }

    if(m_userIdHasBeenSet)
    {
      ss << m_userId;
      uri.AddQueryStringParameter("UserId", ss.str());
      ss.str("");
    }

}



