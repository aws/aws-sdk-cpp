/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/FormatSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

FormatSettings::FormatSettings(JsonView jsonValue) { *this = jsonValue; }

FormatSettings& FormatSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("framesPerSecond")) {
    m_framesPerSecond = jsonValue.GetInteger("framesPerSecond");
    m_framesPerSecondHasBeenSet = true;
  }
  if (jsonValue.ValueExists("widthInPixels")) {
    m_widthInPixels = jsonValue.GetInteger("widthInPixels");
    m_widthInPixelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("heightInPixels")) {
    m_heightInPixels = jsonValue.GetInteger("heightInPixels");
    m_heightInPixelsHasBeenSet = true;
  }
  return *this;
}

JsonValue FormatSettings::Jsonize() const {
  JsonValue payload;

  if (m_framesPerSecondHasBeenSet) {
    payload.WithInteger("framesPerSecond", m_framesPerSecond);
  }

  if (m_widthInPixelsHasBeenSet) {
    payload.WithInteger("widthInPixels", m_widthInPixels);
  }

  if (m_heightInPixelsHasBeenSet) {
    payload.WithInteger("heightInPixels", m_heightInPixels);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
