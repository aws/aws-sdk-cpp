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

BatchDetectSentimentItemResult::BatchDetectSentimentItemResult(const JsonValue& jsonValue) : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_sentiment(SentimentType::NOT_SET),
    m_sentimentHasBeenSet(false),
    m_sentimentScoreHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDetectSentimentItemResult& BatchDetectSentimentItemResult::operator =(const JsonValue& jsonValue)
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
