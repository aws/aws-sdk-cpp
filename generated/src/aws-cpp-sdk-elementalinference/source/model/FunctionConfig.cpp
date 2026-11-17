/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/FunctionConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

FunctionConfig::FunctionConfig(JsonView jsonValue) { *this = jsonValue; }

FunctionConfig& FunctionConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("functionArn")) {
    m_functionArn = jsonValue.GetString("functionArn");
    m_functionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("trigger")) {
    m_trigger = jsonValue.GetObject("trigger");
    m_triggerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("frameSettings")) {
    m_frameSettings = jsonValue.GetObject("frameSettings");
    m_frameSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subtitlingSettings")) {
    m_subtitlingSettings = jsonValue.GetObject("subtitlingSettings");
    m_subtitlingSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contextualMetadataSettings")) {
    m_contextualMetadataSettings = jsonValue.GetObject("contextualMetadataSettings");
    m_contextualMetadataSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clippingSettings")) {
    m_clippingSettings = jsonValue.GetObject("clippingSettings");
    m_clippingSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue FunctionConfig::Jsonize() const {
  JsonValue payload;

  if (m_functionArnHasBeenSet) {
    payload.WithString("functionArn", m_functionArn);
  }

  if (m_triggerHasBeenSet) {
    payload.WithObject("trigger", m_trigger.Jsonize());
  }

  if (m_frameSettingsHasBeenSet) {
    payload.WithObject("frameSettings", m_frameSettings.Jsonize());
  }

  if (m_subtitlingSettingsHasBeenSet) {
    payload.WithObject("subtitlingSettings", m_subtitlingSettings.Jsonize());
  }

  if (m_contextualMetadataSettingsHasBeenSet) {
    payload.WithObject("contextualMetadataSettings", m_contextualMetadataSettings.Jsonize());
  }

  if (m_clippingSettingsHasBeenSet) {
    payload.WithObject("clippingSettings", m_clippingSettings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
