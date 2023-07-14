/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SentimentAnalysisSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

SentimentAnalysisSettings::SentimentAnalysisSettings() : 
    m_detectSentiment(false),
    m_detectSentimentHasBeenSet(false)
{
}

SentimentAnalysisSettings::SentimentAnalysisSettings(JsonView jsonValue) : 
    m_detectSentiment(false),
    m_detectSentimentHasBeenSet(false)
{
  *this = jsonValue;
}

SentimentAnalysisSettings& SentimentAnalysisSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("detectSentiment"))
  {
    m_detectSentiment = jsonValue.GetBool("detectSentiment");

    m_detectSentimentHasBeenSet = true;
  }

  return *this;
}

JsonValue SentimentAnalysisSettings::Jsonize() const
{
  JsonValue payload;

  if(m_detectSentimentHasBeenSet)
  {
   payload.WithBool("detectSentiment", m_detectSentiment);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
