/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/AgentAccessSetting.h>
#include <aws/appstream/model/ScreenImageFormat.h>
#include <aws/appstream/model/ScreenResolution.h>
#include <aws/appstream/model/UserControlMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace AppStream {
namespace Model {

/**
 * <p>The configuration for agent access on an image builder. Agent access enables
 * AI agents to interact with desktop applications during streaming sessions to the
 * image builder.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ImageBuilderAgentAccessConfig">AWS
 * API Reference</a></p>
 */
class ImageBuilderAgentAccessConfig {
 public:
  AWS_APPSTREAM_API ImageBuilderAgentAccessConfig() = default;
  AWS_APPSTREAM_API ImageBuilderAgentAccessConfig(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_APPSTREAM_API ImageBuilderAgentAccessConfig& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_APPSTREAM_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The list of agent access settings that define permissions for each agent
   * action. You must specify at least one setting, and at least one agent action
   * must be enabled.</p>
   */
  inline const Aws::Vector<AgentAccessSetting>& GetSettings() const { return m_settings; }
  inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
  template <typename SettingsT = Aws::Vector<AgentAccessSetting>>
  void SetSettings(SettingsT&& value) {
    m_settingsHasBeenSet = true;
    m_settings = std::forward<SettingsT>(value);
  }
  template <typename SettingsT = Aws::Vector<AgentAccessSetting>>
  ImageBuilderAgentAccessConfig& WithSettings(SettingsT&& value) {
    SetSettings(std::forward<SettingsT>(value));
    return *this;
  }
  template <typename SettingsT = AgentAccessSetting>
  ImageBuilderAgentAccessConfig& AddSettings(SettingsT&& value) {
    m_settingsHasBeenSet = true;
    m_settings.emplace_back(std::forward<SettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket where agent
   * screenshots are stored. Required when ScreenshotsUploadEnabled is true.</p>
   */
  inline const Aws::String& GetS3BucketArn() const { return m_s3BucketArn; }
  inline bool S3BucketArnHasBeenSet() const { return m_s3BucketArnHasBeenSet; }
  template <typename S3BucketArnT = Aws::String>
  void SetS3BucketArn(S3BucketArnT&& value) {
    m_s3BucketArnHasBeenSet = true;
    m_s3BucketArn = std::forward<S3BucketArnT>(value);
  }
  template <typename S3BucketArnT = Aws::String>
  ImageBuilderAgentAccessConfig& WithS3BucketArn(S3BucketArnT&& value) {
    SetS3BucketArn(std::forward<S3BucketArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether screenshot uploads to Amazon S3 are enabled for agent
   * sessions.</p>
   */
  inline bool GetScreenshotsUploadEnabled() const { return m_screenshotsUploadEnabled; }
  inline bool ScreenshotsUploadEnabledHasBeenSet() const { return m_screenshotsUploadEnabledHasBeenSet; }
  inline void SetScreenshotsUploadEnabled(bool value) {
    m_screenshotsUploadEnabledHasBeenSet = true;
    m_screenshotsUploadEnabled = value;
  }
  inline ImageBuilderAgentAccessConfig& WithScreenshotsUploadEnabled(bool value) {
    SetScreenshotsUploadEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The screen resolution for the agent streaming environment.</p> <ul> <li>
   * <p>W_1280xH_720 - 1280 x 720 pixels.</p> </li> </ul>
   */
  inline ScreenResolution GetScreenResolution() const { return m_screenResolution; }
  inline bool ScreenResolutionHasBeenSet() const { return m_screenResolutionHasBeenSet; }
  inline void SetScreenResolution(ScreenResolution value) {
    m_screenResolutionHasBeenSet = true;
    m_screenResolution = value;
  }
  inline ImageBuilderAgentAccessConfig& WithScreenResolution(ScreenResolution value) {
    SetScreenResolution(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The image format for agent screen captures.</p> <ul> <li> <p>PNG - PNG
   * format.</p> </li> <li> <p>JPEG - JPEG format.</p> </li> </ul>
   */
  inline ScreenImageFormat GetScreenImageFormat() const { return m_screenImageFormat; }
  inline bool ScreenImageFormatHasBeenSet() const { return m_screenImageFormatHasBeenSet; }
  inline void SetScreenImageFormat(ScreenImageFormat value) {
    m_screenImageFormatHasBeenSet = true;
    m_screenImageFormat = value;
  }
  inline ImageBuilderAgentAccessConfig& WithScreenImageFormat(ScreenImageFormat value) {
    SetScreenImageFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user control mode for agent sessions. This setting determines how users
   * can interact with agent sessions.</p> <ul> <li> <p>VIEW_ONLY - Users can view
   * and observe agent actions as they happen.</p> </li> <li> <p>VIEW_STOP - Users
   * can view agent actions and stop the agent if needed.</p> </li> <li> <p>DISABLED
   * - Users cannot view or stop the agent session.</p> </li> </ul>
   */
  inline UserControlMode GetUserControlMode() const { return m_userControlMode; }
  inline bool UserControlModeHasBeenSet() const { return m_userControlModeHasBeenSet; }
  inline void SetUserControlMode(UserControlMode value) {
    m_userControlModeHasBeenSet = true;
    m_userControlMode = value;
  }
  inline ImageBuilderAgentAccessConfig& WithUserControlMode(UserControlMode value) {
    SetUserControlMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AgentAccessSetting> m_settings;

  Aws::String m_s3BucketArn;

  bool m_screenshotsUploadEnabled{false};

  ScreenResolution m_screenResolution{ScreenResolution::NOT_SET};

  ScreenImageFormat m_screenImageFormat{ScreenImageFormat::NOT_SET};

  UserControlMode m_userControlMode{UserControlMode::NOT_SET};
  bool m_settingsHasBeenSet = false;
  bool m_s3BucketArnHasBeenSet = false;
  bool m_screenshotsUploadEnabledHasBeenSet = false;
  bool m_screenResolutionHasBeenSet = false;
  bool m_screenImageFormatHasBeenSet = false;
  bool m_userControlModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
