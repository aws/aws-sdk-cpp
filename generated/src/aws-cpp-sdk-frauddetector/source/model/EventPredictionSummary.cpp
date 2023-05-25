/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/EventPredictionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

EventPredictionSummary::EventPredictionSummary() : 
    m_eventIdHasBeenSet(false),
    m_eventTypeNameHasBeenSet(false),
    m_eventTimestampHasBeenSet(false),
    m_predictionTimestampHasBeenSet(false),
    m_detectorIdHasBeenSet(false),
    m_detectorVersionIdHasBeenSet(false)
{
}

EventPredictionSummary::EventPredictionSummary(JsonView jsonValue) : 
    m_eventIdHasBeenSet(false),
    m_eventTypeNameHasBeenSet(false),
    m_eventTimestampHasBeenSet(false),
    m_predictionTimestampHasBeenSet(false),
    m_detectorIdHasBeenSet(false),
    m_detectorVersionIdHasBeenSet(false)
{
  *this = jsonValue;
}

EventPredictionSummary& EventPredictionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventId"))
  {
    m_eventId = jsonValue.GetString("eventId");

    m_eventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventTypeName"))
  {
    m_eventTypeName = jsonValue.GetString("eventTypeName");

    m_eventTypeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventTimestamp"))
  {
    m_eventTimestamp = jsonValue.GetString("eventTimestamp");

    m_eventTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("predictionTimestamp"))
  {
    m_predictionTimestamp = jsonValue.GetString("predictionTimestamp");

    m_predictionTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("detectorId"))
  {
    m_detectorId = jsonValue.GetString("detectorId");

    m_detectorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("detectorVersionId"))
  {
    m_detectorVersionId = jsonValue.GetString("detectorVersionId");

    m_detectorVersionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue EventPredictionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("eventId", m_eventId);

  }

  if(m_eventTypeNameHasBeenSet)
  {
   payload.WithString("eventTypeName", m_eventTypeName);

  }

  if(m_eventTimestampHasBeenSet)
  {
   payload.WithString("eventTimestamp", m_eventTimestamp);

  }

  if(m_predictionTimestampHasBeenSet)
  {
   payload.WithString("predictionTimestamp", m_predictionTimestamp);

  }

  if(m_detectorIdHasBeenSet)
  {
   payload.WithString("detectorId", m_detectorId);

  }

  if(m_detectorVersionIdHasBeenSet)
  {
   payload.WithString("detectorVersionId", m_detectorVersionId);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
