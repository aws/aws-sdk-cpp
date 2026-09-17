/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotwireless/model/GnssCapture.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTWireless {
namespace Model {

GnssCapture::GnssCapture(JsonView jsonValue) { *this = jsonValue; }

GnssCapture& GnssCapture::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Payload")) {
    m_payload = jsonValue.GetString("Payload");
    m_payloadHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CaptureTime")) {
    m_captureTime = jsonValue.GetDouble("CaptureTime");
    m_captureTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue GnssCapture::Jsonize() const {
  JsonValue payload;

  if (m_payloadHasBeenSet) {
    payload.WithString("Payload", m_payload);
  }

  if (m_captureTimeHasBeenSet) {
    payload.WithDouble("CaptureTime", m_captureTime);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
