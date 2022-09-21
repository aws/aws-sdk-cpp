/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/TargetedSentimentMention.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

TargetedSentimentMention::TargetedSentimentMention() : 
    m_score(0.0),
    m_scoreHasBeenSet(false),
    m_groupScore(0.0),
    m_groupScoreHasBeenSet(false),
    m_textHasBeenSet(false),
    m_type(TargetedSentimentEntityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_mentionSentimentHasBeenSet(false),
    m_beginOffset(0),
    m_beginOffsetHasBeenSet(false),
    m_endOffset(0),
    m_endOffsetHasBeenSet(false)
{
}

TargetedSentimentMention::TargetedSentimentMention(JsonView jsonValue) : 
    m_score(0.0),
    m_scoreHasBeenSet(false),
    m_groupScore(0.0),
    m_groupScoreHasBeenSet(false),
    m_textHasBeenSet(false),
    m_type(TargetedSentimentEntityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_mentionSentimentHasBeenSet(false),
    m_beginOffset(0),
    m_beginOffsetHasBeenSet(false),
    m_endOffset(0),
    m_endOffsetHasBeenSet(false)
{
  *this = jsonValue;
}

TargetedSentimentMention& TargetedSentimentMention::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Score"))
  {
    m_score = jsonValue.GetDouble("Score");

    m_scoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupScore"))
  {
    m_groupScore = jsonValue.GetDouble("GroupScore");

    m_groupScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = TargetedSentimentEntityTypeMapper::GetTargetedSentimentEntityTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MentionSentiment"))
  {
    m_mentionSentiment = jsonValue.GetObject("MentionSentiment");

    m_mentionSentimentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BeginOffset"))
  {
    m_beginOffset = jsonValue.GetInteger("BeginOffset");

    m_beginOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndOffset"))
  {
    m_endOffset = jsonValue.GetInteger("EndOffset");

    m_endOffsetHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetedSentimentMention::Jsonize() const
{
  JsonValue payload;

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("Score", m_score);

  }

  if(m_groupScoreHasBeenSet)
  {
   payload.WithDouble("GroupScore", m_groupScore);

  }

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TargetedSentimentEntityTypeMapper::GetNameForTargetedSentimentEntityType(m_type));
  }

  if(m_mentionSentimentHasBeenSet)
  {
   payload.WithObject("MentionSentiment", m_mentionSentiment.Jsonize());

  }

  if(m_beginOffsetHasBeenSet)
  {
   payload.WithInteger("BeginOffset", m_beginOffset);

  }

  if(m_endOffsetHasBeenSet)
  {
   payload.WithInteger("EndOffset", m_endOffset);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
