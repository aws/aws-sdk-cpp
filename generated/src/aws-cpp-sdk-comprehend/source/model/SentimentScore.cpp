/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/SentimentScore.h>
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

SentimentScore::SentimentScore() : 
    m_positive(0.0),
    m_positiveHasBeenSet(false),
    m_negative(0.0),
    m_negativeHasBeenSet(false),
    m_neutral(0.0),
    m_neutralHasBeenSet(false),
    m_mixed(0.0),
    m_mixedHasBeenSet(false)
{
}

SentimentScore::SentimentScore(JsonView jsonValue) : 
    m_positive(0.0),
    m_positiveHasBeenSet(false),
    m_negative(0.0),
    m_negativeHasBeenSet(false),
    m_neutral(0.0),
    m_neutralHasBeenSet(false),
    m_mixed(0.0),
    m_mixedHasBeenSet(false)
{
  *this = jsonValue;
}

SentimentScore& SentimentScore::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Positive"))
  {
    m_positive = jsonValue.GetDouble("Positive");

    m_positiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Negative"))
  {
    m_negative = jsonValue.GetDouble("Negative");

    m_negativeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Neutral"))
  {
    m_neutral = jsonValue.GetDouble("Neutral");

    m_neutralHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mixed"))
  {
    m_mixed = jsonValue.GetDouble("Mixed");

    m_mixedHasBeenSet = true;
  }

  return *this;
}

JsonValue SentimentScore::Jsonize() const
{
  JsonValue payload;

  if(m_positiveHasBeenSet)
  {
   payload.WithDouble("Positive", m_positive);

  }

  if(m_negativeHasBeenSet)
  {
   payload.WithDouble("Negative", m_negative);

  }

  if(m_neutralHasBeenSet)
  {
   payload.WithDouble("Neutral", m_neutral);

  }

  if(m_mixedHasBeenSet)
  {
   payload.WithDouble("Mixed", m_mixed);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
