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
 * <p>The configuration for agent access on a stack. Agent access enables AI agents
 * to interact with desktop applications during streaming sessions.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/AgentAccessConfig">AWS
 * API Reference</a></p>
 */
class AgentAccessConfig {
 public:
  AWS_APPSTREAM_API AgentAccessConfig() = default;
  AWS_APPSTREAM_API AgentAccessConfig(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_APPSTREAM_API AgentAccessConfig& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
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
  AgentAccessConfig& WithSettings(SettingsT&& value) {
    SetSettings(std::forward<SettingsT>(value));
    return *this;
  }
  template <typename SettingsT = AgentAccessSetting>
  AgentAccessConfig& AddSettings(SettingsT&& value) {
    m_settingsHasBeenSet = true;
    m_settings.emplace_back(std::forward<SettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket where agent
   * screenshots and Replay Session artifacts are stored. Required when
   * ScreenshotsUploadEnabled or ReplaySessionEnabled is true.</p>
   */
  inline const Aws::String& GetS3BucketArn() const { return m_s3BucketArn; }
  inline bool S3BucketArnHasBeenSet() const { return m_s3BucketArnHasBeenSet; }
  template <typename S3BucketArnT = Aws::String>
  void SetS3BucketArn(S3BucketArnT&& value) {
    m_s3BucketArnHasBeenSet = true;
    m_s3BucketArn = std::forward<S3BucketArnT>(value);
  }
  template <typename S3BucketArnT = Aws::String>
  AgentAccessConfig& WithS3BucketArn(S3BucketArnT&& value) {
    SetS3BucketArn(std::forward<S3BucketArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether screenshot uploads to Amazon S3 are enabled for agent
   * sessions.</p>
   */
  inline bool GetScreenshotsUploadEnabled() const { return m_screenshotsUploadEnabled; }
  inline bool ScreenshotsUploadEnabledHasBeenSet() const { return m_screenshotsUploadEnabledHasBeenSet; }
  inline void SetScreenshotsUploadEnabled(bool value) {
    m_screenshotsUploadEnabledHasBeenSet = true;
    m_screenshotsUploadEnabled = value;
  }
  inline AgentAccessConfig& WithScreenshotsUploadEnabled(bool value) {
    SetScreenshotsUploadEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether Replay Session is enabled for agent sessions. WorkSpaces
   * Applications delivers a video combining session screenshots, a transcript, and a
   * report for each session. Requires the COMPUTER_VISION agent action.</p>
   */
  inline bool GetReplaySessionEnabled() const { return m_replaySessionEnabled; }
  inline bool ReplaySessionEnabledHasBeenSet() const { return m_replaySessionEnabledHasBeenSet; }
  inline void SetReplaySessionEnabled(bool value) {
    m_replaySessionEnabledHasBeenSet = true;
    m_replaySessionEnabled = value;
  }
  inline AgentAccessConfig& WithReplaySessionEnabled(bool value) {
    SetReplaySessionEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the customer managed symmetric encryption
   * KMS key that encrypts Replay Session artifacts while WorkSpaces Applications
   * processes them. The key must be in the same Region as the stack, and
   * ReplaySessionEnabled must be true.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  AgentAccessConfig& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The screen resolution for the agent streaming environment.</p>
   */
  inline ScreenResolution GetScreenResolution() const { return m_screenResolution; }
  inline bool ScreenResolutionHasBeenSet() const { return m_screenResolutionHasBeenSet; }
  inline void SetScreenResolution(ScreenResolution value) {
    m_screenResolutionHasBeenSet = true;
    m_screenResolution = value;
  }
  inline AgentAccessConfig& WithScreenResolution(ScreenResolution value) {
    SetScreenResolution(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The image format for agent screen captures.</p>
   */
  inline ScreenImageFormat GetScreenImageFormat() const { return m_screenImageFormat; }
  inline bool ScreenImageFormatHasBeenSet() const { return m_screenImageFormatHasBeenSet; }
  inline void SetScreenImageFormat(ScreenImageFormat value) {
    m_screenImageFormatHasBeenSet = true;
    m_screenImageFormat = value;
  }
  inline AgentAccessConfig& WithScreenImageFormat(ScreenImageFormat value) {
    SetScreenImageFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user control mode for agent sessions. This setting determines how users
   * can interact with agent sessions.</p>
   */
  inline UserControlMode GetUserControlMode() const { return m_userControlMode; }
  inline bool UserControlModeHasBeenSet() const { return m_userControlModeHasBeenSet; }
  inline void SetUserControlMode(UserControlMode value) {
    m_userControlModeHasBeenSet = true;
    m_userControlMode = value;
  }
  inline AgentAccessConfig& WithUserControlMode(UserControlMode value) {
    SetUserControlMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AgentAccessSetting> m_settings;

  Aws::String m_s3BucketArn;

  bool m_screenshotsUploadEnabled{false};

  bool m_replaySessionEnabled{false};

  Aws::String m_kmsKeyArn;

  ScreenResolution m_screenResolution{ScreenResolution::NOT_SET};

  ScreenImageFormat m_screenImageFormat{ScreenImageFormat::NOT_SET};

  UserControlMode m_userControlMode{UserControlMode::NOT_SET};
  bool m_settingsHasBeenSet = false;
  bool m_s3BucketArnHasBeenSet = false;
  bool m_screenshotsUploadEnabledHasBeenSet = false;
  bool m_replaySessionEnabledHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
  bool m_screenResolutionHasBeenSet = false;
  bool m_screenImageFormatHasBeenSet = false;
  bool m_userControlModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
