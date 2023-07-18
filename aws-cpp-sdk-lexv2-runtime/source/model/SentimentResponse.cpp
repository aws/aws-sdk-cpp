/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/SentimentResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

SentimentResponse::SentimentResponse() : 
    m_sentiment(SentimentType::NOT_SET),
    m_sentimentHasBeenSet(false),
    m_sentimentScoreHasBeenSet(false)
{
}

SentimentResponse::SentimentResponse(JsonView jsonValue) : 
    m_sentiment(SentimentType::NOT_SET),
    m_sentimentHasBeenSet(false),
    m_sentimentScoreHasBeenSet(false)
{
  *this = jsonValue;
}

SentimentResponse& SentimentResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sentiment"))
  {
    m_sentiment = SentimentTypeMapper::GetSentimentTypeForName(jsonValue.GetString("sentiment"));

    m_sentimentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sentimentScore"))
  {
    m_sentimentScore = jsonValue.GetObject("sentimentScore");

    m_sentimentScoreHasBeenSet = true;
  }

  return *this;
}

JsonValue SentimentResponse::Jsonize() const
{
  JsonValue payload;

  if(m_sentimentHasBeenSet)
  {
   payload.WithString("sentiment", SentimentTypeMapper::GetNameForSentimentType(m_sentiment));
  }

  if(m_sentimentScoreHasBeenSet)
  {
   payload.WithObject("sentimentScore", m_sentimentScore.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
