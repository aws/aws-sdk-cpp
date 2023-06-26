/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AggregatedUtterancesSummary.h>
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

AggregatedUtterancesSummary::AggregatedUtterancesSummary() : 
    m_utteranceHasBeenSet(false),
    m_hitCount(0),
    m_hitCountHasBeenSet(false),
    m_missedCount(0),
    m_missedCountHasBeenSet(false),
    m_utteranceFirstRecordedInAggregationDurationHasBeenSet(false),
    m_utteranceLastRecordedInAggregationDurationHasBeenSet(false),
    m_containsDataFromDeletedResources(false),
    m_containsDataFromDeletedResourcesHasBeenSet(false)
{
}

AggregatedUtterancesSummary::AggregatedUtterancesSummary(JsonView jsonValue) : 
    m_utteranceHasBeenSet(false),
    m_hitCount(0),
    m_hitCountHasBeenSet(false),
    m_missedCount(0),
    m_missedCountHasBeenSet(false),
    m_utteranceFirstRecordedInAggregationDurationHasBeenSet(false),
    m_utteranceLastRecordedInAggregationDurationHasBeenSet(false),
    m_containsDataFromDeletedResources(false),
    m_containsDataFromDeletedResourcesHasBeenSet(false)
{
  *this = jsonValue;
}

AggregatedUtterancesSummary& AggregatedUtterancesSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("utterance"))
  {
    m_utterance = jsonValue.GetString("utterance");

    m_utteranceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hitCount"))
  {
    m_hitCount = jsonValue.GetInteger("hitCount");

    m_hitCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("missedCount"))
  {
    m_missedCount = jsonValue.GetInteger("missedCount");

    m_missedCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("utteranceFirstRecordedInAggregationDuration"))
  {
    m_utteranceFirstRecordedInAggregationDuration = jsonValue.GetDouble("utteranceFirstRecordedInAggregationDuration");

    m_utteranceFirstRecordedInAggregationDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("utteranceLastRecordedInAggregationDuration"))
  {
    m_utteranceLastRecordedInAggregationDuration = jsonValue.GetDouble("utteranceLastRecordedInAggregationDuration");

    m_utteranceLastRecordedInAggregationDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containsDataFromDeletedResources"))
  {
    m_containsDataFromDeletedResources = jsonValue.GetBool("containsDataFromDeletedResources");

    m_containsDataFromDeletedResourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue AggregatedUtterancesSummary::Jsonize() const
{
  JsonValue payload;

  if(m_utteranceHasBeenSet)
  {
   payload.WithString("utterance", m_utterance);

  }

  if(m_hitCountHasBeenSet)
  {
   payload.WithInteger("hitCount", m_hitCount);

  }

  if(m_missedCountHasBeenSet)
  {
   payload.WithInteger("missedCount", m_missedCount);

  }

  if(m_utteranceFirstRecordedInAggregationDurationHasBeenSet)
  {
   payload.WithDouble("utteranceFirstRecordedInAggregationDuration", m_utteranceFirstRecordedInAggregationDuration.SecondsWithMSPrecision());
  }

  if(m_utteranceLastRecordedInAggregationDurationHasBeenSet)
  {
   payload.WithDouble("utteranceLastRecordedInAggregationDuration", m_utteranceLastRecordedInAggregationDuration.SecondsWithMSPrecision());
  }

  if(m_containsDataFromDeletedResourcesHasBeenSet)
  {
   payload.WithBool("containsDataFromDeletedResources", m_containsDataFromDeletedResources);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
