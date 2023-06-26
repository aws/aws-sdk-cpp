/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/SentimentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

SentimentConfiguration::SentimentConfiguration() : 
    m_ruleNameHasBeenSet(false),
    m_sentimentType(SentimentType::NOT_SET),
    m_sentimentTypeHasBeenSet(false),
    m_timePeriod(0),
    m_timePeriodHasBeenSet(false)
{
}

SentimentConfiguration::SentimentConfiguration(JsonView jsonValue) : 
    m_ruleNameHasBeenSet(false),
    m_sentimentType(SentimentType::NOT_SET),
    m_sentimentTypeHasBeenSet(false),
    m_timePeriod(0),
    m_timePeriodHasBeenSet(false)
{
  *this = jsonValue;
}

SentimentConfiguration& SentimentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleName"))
  {
    m_ruleName = jsonValue.GetString("RuleName");

    m_ruleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SentimentType"))
  {
    m_sentimentType = SentimentTypeMapper::GetSentimentTypeForName(jsonValue.GetString("SentimentType"));

    m_sentimentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimePeriod"))
  {
    m_timePeriod = jsonValue.GetInteger("TimePeriod");

    m_timePeriodHasBeenSet = true;
  }

  return *this;
}

JsonValue SentimentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("RuleName", m_ruleName);

  }

  if(m_sentimentTypeHasBeenSet)
  {
   payload.WithString("SentimentType", SentimentTypeMapper::GetNameForSentimentType(m_sentimentType));
  }

  if(m_timePeriodHasBeenSet)
  {
   payload.WithInteger("TimePeriod", m_timePeriod);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
