/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotwireless/model/GnssMultiFrame.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTWireless {
namespace Model {

GnssMultiFrame::GnssMultiFrame(JsonView jsonValue) { *this = jsonValue; }

GnssMultiFrame& GnssMultiFrame::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Captures")) {
    Aws::Utils::Array<JsonView> capturesJsonList = jsonValue.GetArray("Captures");
    for (unsigned capturesIndex = 0; capturesIndex < capturesJsonList.GetLength(); ++capturesIndex) {
      m_captures.push_back(capturesJsonList[capturesIndex].AsObject());
    }
    m_capturesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CaptureTimeAccuracy")) {
    m_captureTimeAccuracy = jsonValue.GetDouble("CaptureTimeAccuracy");
    m_captureTimeAccuracyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssistPosition")) {
    Aws::Utils::Array<JsonView> assistPositionJsonList = jsonValue.GetArray("AssistPosition");
    for (unsigned assistPositionIndex = 0; assistPositionIndex < assistPositionJsonList.GetLength(); ++assistPositionIndex) {
      m_assistPosition.push_back(assistPositionJsonList[assistPositionIndex].AsDouble());
    }
    m_assistPositionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssistAltitude")) {
    m_assistAltitude = jsonValue.GetDouble("AssistAltitude");
    m_assistAltitudeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Use2DSolver")) {
    m_use2DSolver = jsonValue.GetBool("Use2DSolver");
    m_use2DSolverHasBeenSet = true;
  }
  return *this;
}

JsonValue GnssMultiFrame::Jsonize() const {
  JsonValue payload;

  if (m_capturesHasBeenSet) {
    Aws::Utils::Array<JsonValue> capturesJsonList(m_captures.size());
    for (unsigned capturesIndex = 0; capturesIndex < capturesJsonList.GetLength(); ++capturesIndex) {
      capturesJsonList[capturesIndex].AsObject(m_captures[capturesIndex].Jsonize());
    }
    payload.WithArray("Captures", std::move(capturesJsonList));
  }

  if (m_captureTimeAccuracyHasBeenSet) {
    payload.WithDouble("CaptureTimeAccuracy", m_captureTimeAccuracy);
  }

  if (m_assistPositionHasBeenSet) {
    Aws::Utils::Array<JsonValue> assistPositionJsonList(m_assistPosition.size());
    for (unsigned assistPositionIndex = 0; assistPositionIndex < assistPositionJsonList.GetLength(); ++assistPositionIndex) {
      assistPositionJsonList[assistPositionIndex].AsDouble(m_assistPosition[assistPositionIndex]);
    }
    payload.WithArray("AssistPosition", std::move(assistPositionJsonList));
  }

  if (m_assistAltitudeHasBeenSet) {
    payload.WithDouble("AssistAltitude", m_assistAltitude);
  }

  if (m_use2DSolverHasBeenSet) {
    payload.WithBool("Use2DSolver", m_use2DSolver);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
