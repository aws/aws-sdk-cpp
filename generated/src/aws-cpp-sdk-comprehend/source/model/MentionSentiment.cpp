/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/MentionSentiment.h>
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

MentionSentiment::MentionSentiment() : 
    m_sentiment(SentimentType::NOT_SET),
    m_sentimentHasBeenSet(false),
    m_sentimentScoreHasBeenSet(false)
{
}

MentionSentiment::MentionSentiment(JsonView jsonValue) : 
    m_sentiment(SentimentType::NOT_SET),
    m_sentimentHasBeenSet(false),
    m_sentimentScoreHasBeenSet(false)
{
  *this = jsonValue;
}

MentionSentiment& MentionSentiment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Sentiment"))
  {
    m_sentiment = SentimentTypeMapper::GetSentimentTypeForName(jsonValue.GetString("Sentiment"));

    m_sentimentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SentimentScore"))
  {
    m_sentimentScore = jsonValue.GetObject("SentimentScore");

    m_sentimentScoreHasBeenSet = true;
  }

  return *this;
}

JsonValue MentionSentiment::Jsonize() const
{
  JsonValue payload;

  if(m_sentimentHasBeenSet)
  {
   payload.WithString("Sentiment", SentimentTypeMapper::GetNameForSentimentType(m_sentiment));
  }

  if(m_sentimentScoreHasBeenSet)
  {
   payload.WithObject("SentimentScore", m_sentimentScore.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
