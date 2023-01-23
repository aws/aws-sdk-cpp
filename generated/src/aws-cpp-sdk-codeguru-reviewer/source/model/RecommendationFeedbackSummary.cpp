/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/RecommendationFeedbackSummary.h>
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

RecommendationFeedbackSummary::RecommendationFeedbackSummary() : 
    m_recommendationIdHasBeenSet(false),
    m_reactionsHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

RecommendationFeedbackSummary::RecommendationFeedbackSummary(JsonView jsonValue) : 
    m_recommendationIdHasBeenSet(false),
    m_reactionsHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationFeedbackSummary& RecommendationFeedbackSummary::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue RecommendationFeedbackSummary::Jsonize() const
{
  JsonValue payload;

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

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
