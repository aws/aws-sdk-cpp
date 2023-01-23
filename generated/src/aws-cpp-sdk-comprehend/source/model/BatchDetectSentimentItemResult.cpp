/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/BatchDetectSentimentItemResult.h>
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

BatchDetectSentimentItemResult::BatchDetectSentimentItemResult() : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_sentiment(SentimentType::NOT_SET),
    m_sentimentHasBeenSet(false),
    m_sentimentScoreHasBeenSet(false)
{
}

BatchDetectSentimentItemResult::BatchDetectSentimentItemResult(JsonView jsonValue) : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_sentiment(SentimentType::NOT_SET),
    m_sentimentHasBeenSet(false),
    m_sentimentScoreHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDetectSentimentItemResult& BatchDetectSentimentItemResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Index"))
  {
    m_index = jsonValue.GetInteger("Index");

    m_indexHasBeenSet = true;
  }

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

JsonValue BatchDetectSentimentItemResult::Jsonize() const
{
  JsonValue payload;

  if(m_indexHasBeenSet)
  {
   payload.WithInteger("Index", m_index);

  }

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
