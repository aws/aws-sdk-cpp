/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/PutRecommendationFeedbackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeGuruReviewer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutRecommendationFeedbackRequest::PutRecommendationFeedbackRequest() : 
    m_codeReviewArnHasBeenSet(false),
    m_recommendationIdHasBeenSet(false),
    m_reactionsHasBeenSet(false)
{
}

Aws::String PutRecommendationFeedbackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_codeReviewArnHasBeenSet)
  {
   payload.WithString("CodeReviewArn", m_codeReviewArn);

  }

  if(m_recommendationIdHasBeenSet)
  {
   payload.WithString("RecommendationId", m_recommendationId);

  }

  if(m_reactionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> reactionsJsonList(m_reactions.size());
   for(unsigned reactionsIndex = 0; reactionsIndex < reactionsJsonList.GetLength(); ++reactionsIndex)
   {
     reactionsJsonList[reactionsIndex].AsString(ReactionMapper::GetNameForReaction(m_reactions[reactionsIndex]));
   }
   payload.WithArray("Reactions", std::move(reactionsJsonList));

  }

  return payload.View().WriteReadable();
}




