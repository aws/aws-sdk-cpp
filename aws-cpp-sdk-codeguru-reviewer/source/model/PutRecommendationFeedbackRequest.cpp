/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> reactionsJsonList(m_reactions.size());
   for(unsigned reactionsIndex = 0; reactionsIndex < reactionsJsonList.GetLength(); ++reactionsIndex)
   {
     reactionsJsonList[reactionsIndex].AsString(ReactionMapper::GetNameForReaction(m_reactions[reactionsIndex]));
   }
   payload.WithArray("Reactions", std::move(reactionsJsonList));

  }

  return payload.View().WriteReadable();
}




