/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/Anomaly.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

Anomaly::Anomaly() : 
    m_anomalyIdHasBeenSet(false),
    m_patternIdHasBeenSet(false),
    m_anomalyDetectorArnHasBeenSet(false),
    m_patternStringHasBeenSet(false),
    m_patternRegexHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_firstSeen(0),
    m_firstSeenHasBeenSet(false),
    m_lastSeen(0),
    m_lastSeenHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false),
    m_histogramHasBeenSet(false),
    m_logSamplesHasBeenSet(false),
    m_patternTokensHasBeenSet(false),
    m_logGroupArnListHasBeenSet(false),
    m_suppressed(false),
    m_suppressedHasBeenSet(false),
    m_suppressedDate(0),
    m_suppressedDateHasBeenSet(false),
    m_suppressedUntil(0),
    m_suppressedUntilHasBeenSet(false),
    m_isPatternLevelSuppression(false),
    m_isPatternLevelSuppressionHasBeenSet(false)
{
}

Anomaly::Anomaly(JsonView jsonValue) : 
    m_anomalyIdHasBeenSet(false),
    m_patternIdHasBeenSet(false),
    m_anomalyDetectorArnHasBeenSet(false),
    m_patternStringHasBeenSet(false),
    m_patternRegexHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_firstSeen(0),
    m_firstSeenHasBeenSet(false),
    m_lastSeen(0),
    m_lastSeenHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false),
    m_histogramHasBeenSet(false),
    m_logSamplesHasBeenSet(false),
    m_patternTokensHasBeenSet(false),
    m_logGroupArnListHasBeenSet(false),
    m_suppressed(false),
    m_suppressedHasBeenSet(false),
    m_suppressedDate(0),
    m_suppressedDateHasBeenSet(false),
    m_suppressedUntil(0),
    m_suppressedUntilHasBeenSet(false),
    m_isPatternLevelSuppression(false),
    m_isPatternLevelSuppressionHasBeenSet(false)
{
  *this = jsonValue;
}

Anomaly& Anomaly::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("anomalyId"))
  {
    m_anomalyId = jsonValue.GetString("anomalyId");

    m_anomalyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("patternId"))
  {
    m_patternId = jsonValue.GetString("patternId");

    m_patternIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("anomalyDetectorArn"))
  {
    m_anomalyDetectorArn = jsonValue.GetString("anomalyDetectorArn");

    m_anomalyDetectorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("patternString"))
  {
    m_patternString = jsonValue.GetString("patternString");

    m_patternStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("patternRegex"))
  {
    m_patternRegex = jsonValue.GetString("patternRegex");

    m_patternRegexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("priority"))
  {
    m_priority = jsonValue.GetString("priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("firstSeen"))
  {
    m_firstSeen = jsonValue.GetInt64("firstSeen");

    m_firstSeenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastSeen"))
  {
    m_lastSeen = jsonValue.GetInt64("lastSeen");

    m_lastSeenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("active"))
  {
    m_active = jsonValue.GetBool("active");

    m_activeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = StateMapper::GetStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("histogram"))
  {
    Aws::Map<Aws::String, JsonView> histogramJsonMap = jsonValue.GetObject("histogram").GetAllObjects();
    for(auto& histogramItem : histogramJsonMap)
    {
      m_histogram[histogramItem.first] = histogramItem.second.AsInt64();
    }
    m_histogramHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logSamples"))
  {
    Aws::Utils::Array<JsonView> logSamplesJsonList = jsonValue.GetArray("logSamples");
    for(unsigned logSamplesIndex = 0; logSamplesIndex < logSamplesJsonList.GetLength(); ++logSamplesIndex)
    {
      m_logSamples.push_back(logSamplesJsonList[logSamplesIndex].AsString());
    }
    m_logSamplesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("patternTokens"))
  {
    Aws::Utils::Array<JsonView> patternTokensJsonList = jsonValue.GetArray("patternTokens");
    for(unsigned patternTokensIndex = 0; patternTokensIndex < patternTokensJsonList.GetLength(); ++patternTokensIndex)
    {
      m_patternTokens.push_back(patternTokensJsonList[patternTokensIndex].AsObject());
    }
    m_patternTokensHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logGroupArnList"))
  {
    Aws::Utils::Array<JsonView> logGroupArnListJsonList = jsonValue.GetArray("logGroupArnList");
    for(unsigned logGroupArnListIndex = 0; logGroupArnListIndex < logGroupArnListJsonList.GetLength(); ++logGroupArnListIndex)
    {
      m_logGroupArnList.push_back(logGroupArnListJsonList[logGroupArnListIndex].AsString());
    }
    m_logGroupArnListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("suppressed"))
  {
    m_suppressed = jsonValue.GetBool("suppressed");

    m_suppressedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("suppressedDate"))
  {
    m_suppressedDate = jsonValue.GetInt64("suppressedDate");

    m_suppressedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("suppressedUntil"))
  {
    m_suppressedUntil = jsonValue.GetInt64("suppressedUntil");

    m_suppressedUntilHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isPatternLevelSuppression"))
  {
    m_isPatternLevelSuppression = jsonValue.GetBool("isPatternLevelSuppression");

    m_isPatternLevelSuppressionHasBeenSet = true;
  }

  return *this;
}

JsonValue Anomaly::Jsonize() const
{
  JsonValue payload;

  if(m_anomalyIdHasBeenSet)
  {
   payload.WithString("anomalyId", m_anomalyId);

  }

  if(m_patternIdHasBeenSet)
  {
   payload.WithString("patternId", m_patternId);

  }

  if(m_anomalyDetectorArnHasBeenSet)
  {
   payload.WithString("anomalyDetectorArn", m_anomalyDetectorArn);

  }

  if(m_patternStringHasBeenSet)
  {
   payload.WithString("patternString", m_patternString);

  }

  if(m_patternRegexHasBeenSet)
  {
   payload.WithString("patternRegex", m_patternRegex);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithString("priority", m_priority);

  }

  if(m_firstSeenHasBeenSet)
  {
   payload.WithInt64("firstSeen", m_firstSeen);

  }

  if(m_lastSeenHasBeenSet)
  {
   payload.WithInt64("lastSeen", m_lastSeen);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_activeHasBeenSet)
  {
   payload.WithBool("active", m_active);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", StateMapper::GetNameForState(m_state));
  }

  if(m_histogramHasBeenSet)
  {
   JsonValue histogramJsonMap;
   for(auto& histogramItem : m_histogram)
   {
     histogramJsonMap.WithInt64(histogramItem.first, histogramItem.second);
   }
   payload.WithObject("histogram", std::move(histogramJsonMap));

  }

  if(m_logSamplesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logSamplesJsonList(m_logSamples.size());
   for(unsigned logSamplesIndex = 0; logSamplesIndex < logSamplesJsonList.GetLength(); ++logSamplesIndex)
   {
     logSamplesJsonList[logSamplesIndex].AsString(m_logSamples[logSamplesIndex]);
   }
   payload.WithArray("logSamples", std::move(logSamplesJsonList));

  }

  if(m_patternTokensHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> patternTokensJsonList(m_patternTokens.size());
   for(unsigned patternTokensIndex = 0; patternTokensIndex < patternTokensJsonList.GetLength(); ++patternTokensIndex)
   {
     patternTokensJsonList[patternTokensIndex].AsObject(m_patternTokens[patternTokensIndex].Jsonize());
   }
   payload.WithArray("patternTokens", std::move(patternTokensJsonList));

  }

  if(m_logGroupArnListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logGroupArnListJsonList(m_logGroupArnList.size());
   for(unsigned logGroupArnListIndex = 0; logGroupArnListIndex < logGroupArnListJsonList.GetLength(); ++logGroupArnListIndex)
   {
     logGroupArnListJsonList[logGroupArnListIndex].AsString(m_logGroupArnList[logGroupArnListIndex]);
   }
   payload.WithArray("logGroupArnList", std::move(logGroupArnListJsonList));

  }

  if(m_suppressedHasBeenSet)
  {
   payload.WithBool("suppressed", m_suppressed);

  }

  if(m_suppressedDateHasBeenSet)
  {
   payload.WithInt64("suppressedDate", m_suppressedDate);

  }

  if(m_suppressedUntilHasBeenSet)
  {
   payload.WithInt64("suppressedUntil", m_suppressedUntil);

  }

  if(m_isPatternLevelSuppressionHasBeenSet)
  {
   payload.WithBool("isPatternLevelSuppression", m_isPatternLevelSuppression);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
