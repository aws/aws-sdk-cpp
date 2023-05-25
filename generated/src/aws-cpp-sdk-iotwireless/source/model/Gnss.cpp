/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/Gnss.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

Gnss::Gnss() : 
    m_payloadHasBeenSet(false),
    m_captureTime(0.0),
    m_captureTimeHasBeenSet(false),
    m_captureTimeAccuracy(0.0),
    m_captureTimeAccuracyHasBeenSet(false),
    m_assistPositionHasBeenSet(false),
    m_assistAltitude(0.0),
    m_assistAltitudeHasBeenSet(false),
    m_use2DSolver(false),
    m_use2DSolverHasBeenSet(false)
{
}

Gnss::Gnss(JsonView jsonValue) : 
    m_payloadHasBeenSet(false),
    m_captureTime(0.0),
    m_captureTimeHasBeenSet(false),
    m_captureTimeAccuracy(0.0),
    m_captureTimeAccuracyHasBeenSet(false),
    m_assistPositionHasBeenSet(false),
    m_assistAltitude(0.0),
    m_assistAltitudeHasBeenSet(false),
    m_use2DSolver(false),
    m_use2DSolverHasBeenSet(false)
{
  *this = jsonValue;
}

Gnss& Gnss::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Payload"))
  {
    m_payload = jsonValue.GetString("Payload");

    m_payloadHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CaptureTime"))
  {
    m_captureTime = jsonValue.GetDouble("CaptureTime");

    m_captureTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CaptureTimeAccuracy"))
  {
    m_captureTimeAccuracy = jsonValue.GetDouble("CaptureTimeAccuracy");

    m_captureTimeAccuracyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssistPosition"))
  {
    Aws::Utils::Array<JsonView> assistPositionJsonList = jsonValue.GetArray("AssistPosition");
    for(unsigned assistPositionIndex = 0; assistPositionIndex < assistPositionJsonList.GetLength(); ++assistPositionIndex)
    {
      m_assistPosition.push_back(assistPositionJsonList[assistPositionIndex].AsDouble());
    }
    m_assistPositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssistAltitude"))
  {
    m_assistAltitude = jsonValue.GetDouble("AssistAltitude");

    m_assistAltitudeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Use2DSolver"))
  {
    m_use2DSolver = jsonValue.GetBool("Use2DSolver");

    m_use2DSolverHasBeenSet = true;
  }

  return *this;
}

JsonValue Gnss::Jsonize() const
{
  JsonValue payload;

  if(m_payloadHasBeenSet)
  {
   payload.WithString("Payload", m_payload);

  }

  if(m_captureTimeHasBeenSet)
  {
   payload.WithDouble("CaptureTime", m_captureTime);

  }

  if(m_captureTimeAccuracyHasBeenSet)
  {
   payload.WithDouble("CaptureTimeAccuracy", m_captureTimeAccuracy);

  }

  if(m_assistPositionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assistPositionJsonList(m_assistPosition.size());
   for(unsigned assistPositionIndex = 0; assistPositionIndex < assistPositionJsonList.GetLength(); ++assistPositionIndex)
   {
     assistPositionJsonList[assistPositionIndex].AsDouble(m_assistPosition[assistPositionIndex]);
   }
   payload.WithArray("AssistPosition", std::move(assistPositionJsonList));

  }

  if(m_assistAltitudeHasBeenSet)
  {
   payload.WithDouble("AssistAltitude", m_assistAltitude);

  }

  if(m_use2DSolverHasBeenSet)
  {
   payload.WithBool("Use2DSolver", m_use2DSolver);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
