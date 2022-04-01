/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/SentimentScore.h>
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
  if(jsonValue.ValueExists("positive"))
  {
    m_positive = jsonValue.GetDouble("positive");

    m_positiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("negative"))
  {
    m_negative = jsonValue.GetDouble("negative");

    m_negativeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("neutral"))
  {
    m_neutral = jsonValue.GetDouble("neutral");

    m_neutralHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mixed"))
  {
    m_mixed = jsonValue.GetDouble("mixed");

    m_mixedHasBeenSet = true;
  }

  return *this;
}

JsonValue SentimentScore::Jsonize() const
{
  JsonValue payload;

  if(m_positiveHasBeenSet)
  {
   payload.WithDouble("positive", m_positive);

  }

  if(m_negativeHasBeenSet)
  {
   payload.WithDouble("negative", m_negative);

  }

  if(m_neutralHasBeenSet)
  {
   payload.WithDouble("neutral", m_neutral);

  }

  if(m_mixedHasBeenSet)
  {
   payload.WithDouble("mixed", m_mixed);

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
