/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/RecommendationFeedback.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{

RecommendationFeedback::RecommendationFeedback() : 
    m_codeReviewArnHasBeenSet(false),
    m_recommendationIdHasBeenSet(false),
    m_reactionsHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_createdTimeStampHasBeenSet(false),
    m_lastUpdatedTimeStampHasBeenSet(false)
{
}

RecommendationFeedback::RecommendationFeedback(JsonView jsonValue) : 
    m_codeReviewArnHasBeenSet(false),
    m_recommendationIdHasBeenSet(false),
    m_reactionsHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_createdTimeStampHasBeenSet(false),
    m_lastUpdatedTimeStampHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationFeedback& RecommendationFeedback::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CodeReviewArn"))
  {
    m_codeReviewArn = jsonValue.GetString("CodeReviewArn");

    m_codeReviewArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecommendationId"))
  {
    m_recommendationId = jsonValue.GetString("RecommendationId");

    m_recommendationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reactions"))
  {
    Aws::Utils::Array<JsonView> reactionsJsonList = jsonValue.GetArray("Reactions");
    for(unsigned reactionsIndex = 0; reactionsIndex < reactionsJsonList.GetLength(); ++reactionsIndex)
    {
      m_reactions.push_back(ReactionMapper::GetReactionForName(reactionsJsonList[reactionsIndex].AsString()));
    }
    m_reactionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimeStamp"))
  {
    m_createdTimeStamp = jsonValue.GetDouble("CreatedTimeStamp");

    m_createdTimeStampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTimeStamp"))
  {
    m_lastUpdatedTimeStamp = jsonValue.GetDouble("LastUpdatedTimeStamp");

    m_lastUpdatedTimeStampHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationFeedback::Jsonize() const
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

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_createdTimeStampHasBeenSet)
  {
   payload.WithDouble("CreatedTimeStamp", m_createdTimeStamp.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeStampHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTimeStamp", m_lastUpdatedTimeStamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
