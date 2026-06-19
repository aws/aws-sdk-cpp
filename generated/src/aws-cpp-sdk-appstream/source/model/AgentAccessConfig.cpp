/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/AgentAccessConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {

AgentAccessConfig::AgentAccessConfig(JsonView jsonValue) { *this = jsonValue; }

AgentAccessConfig& AgentAccessConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Settings")) {
    Aws::Utils::Array<JsonView> settingsJsonList = jsonValue.GetArray("Settings");
    for (unsigned settingsIndex = 0; settingsIndex < settingsJsonList.GetLength(); ++settingsIndex) {
      m_settings.push_back(settingsJsonList[settingsIndex].AsObject());
    }
    m_settingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("S3BucketArn")) {
    m_s3BucketArn = jsonValue.GetString("S3BucketArn");
    m_s3BucketArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScreenshotsUploadEnabled")) {
    m_screenshotsUploadEnabled = jsonValue.GetBool("ScreenshotsUploadEnabled");
    m_screenshotsUploadEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScreenResolution")) {
    m_screenResolution = ScreenResolutionMapper::GetScreenResolutionForName(jsonValue.GetString("ScreenResolution"));
    m_screenResolutionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScreenImageFormat")) {
    m_screenImageFormat = ScreenImageFormatMapper::GetScreenImageFormatForName(jsonValue.GetString("ScreenImageFormat"));
    m_screenImageFormatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UserControlMode")) {
    m_userControlMode = UserControlModeMapper::GetUserControlModeForName(jsonValue.GetString("UserControlMode"));
    m_userControlModeHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentAccessConfig::Jsonize() const {
  JsonValue payload;

  if (m_settingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> settingsJsonList(m_settings.size());
    for (unsigned settingsIndex = 0; settingsIndex < settingsJsonList.GetLength(); ++settingsIndex) {
      settingsJsonList[settingsIndex].AsObject(m_settings[settingsIndex].Jsonize());
    }
    payload.WithArray("Settings", std::move(settingsJsonList));
  }

  if (m_s3BucketArnHasBeenSet) {
    payload.WithString("S3BucketArn", m_s3BucketArn);
  }

  if (m_screenshotsUploadEnabledHasBeenSet) {
    payload.WithBool("ScreenshotsUploadEnabled", m_screenshotsUploadEnabled);
  }

  if (m_screenResolutionHasBeenSet) {
    payload.WithString("ScreenResolution", ScreenResolutionMapper::GetNameForScreenResolution(m_screenResolution));
  }

  if (m_screenImageFormatHasBeenSet) {
    payload.WithString("ScreenImageFormat", ScreenImageFormatMapper::GetNameForScreenImageFormat(m_screenImageFormat));
  }

  if (m_userControlModeHasBeenSet) {
    payload.WithString("UserControlMode", UserControlModeMapper::GetNameForUserControlMode(m_userControlMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
