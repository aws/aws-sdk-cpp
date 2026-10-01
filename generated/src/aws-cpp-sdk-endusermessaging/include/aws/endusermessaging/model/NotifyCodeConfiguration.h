/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>
#include <aws/endusermessaging/model/ChannelParameters.h>
#include <aws/endusermessaging/model/CodeConfigurationParameters.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EndUserMessaging {
namespace Model {

/**
 * <p>Contains the settings of a notify code configuration, which is a reusable
 * one-time passcode policy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/NotifyCodeConfiguration">AWS
 * API Reference</a></p>
 */
class NotifyCodeConfiguration {
 public:
  AWS_ENDUSERMESSAGING_API NotifyCodeConfiguration() = default;
  AWS_ENDUSERMESSAGING_API NotifyCodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API NotifyCodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the notify code configuration.</p>
   */
  inline const Aws::String& GetNotifyCodeConfigurationId() const { return m_notifyCodeConfigurationId; }
  inline bool NotifyCodeConfigurationIdHasBeenSet() const { return m_notifyCodeConfigurationIdHasBeenSet; }
  template <typename NotifyCodeConfigurationIdT = Aws::String>
  void SetNotifyCodeConfigurationId(NotifyCodeConfigurationIdT&& value) {
    m_notifyCodeConfigurationIdHasBeenSet = true;
    m_notifyCodeConfigurationId = std::forward<NotifyCodeConfigurationIdT>(value);
  }
  template <typename NotifyCodeConfigurationIdT = Aws::String>
  NotifyCodeConfiguration& WithNotifyCodeConfigurationId(NotifyCodeConfigurationIdT&& value) {
    SetNotifyCodeConfigurationId(std::forward<NotifyCodeConfigurationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the notify code configuration.</p>
   */
  inline const Aws::String& GetNotifyCodeConfigurationArn() const { return m_notifyCodeConfigurationArn; }
  inline bool NotifyCodeConfigurationArnHasBeenSet() const { return m_notifyCodeConfigurationArnHasBeenSet; }
  template <typename NotifyCodeConfigurationArnT = Aws::String>
  void SetNotifyCodeConfigurationArn(NotifyCodeConfigurationArnT&& value) {
    m_notifyCodeConfigurationArnHasBeenSet = true;
    m_notifyCodeConfigurationArn = std::forward<NotifyCodeConfigurationArnT>(value);
  }
  template <typename NotifyCodeConfigurationArnT = Aws::String>
  NotifyCodeConfiguration& WithNotifyCodeConfigurationArn(NotifyCodeConfigurationArnT&& value) {
    SetNotifyCodeConfigurationArn(std::forward<NotifyCodeConfigurationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the notify code configuration.</p>
   */
  inline const Aws::String& GetNotifyCodeConfigurationName() const { return m_notifyCodeConfigurationName; }
  inline bool NotifyCodeConfigurationNameHasBeenSet() const { return m_notifyCodeConfigurationNameHasBeenSet; }
  template <typename NotifyCodeConfigurationNameT = Aws::String>
  void SetNotifyCodeConfigurationName(NotifyCodeConfigurationNameT&& value) {
    m_notifyCodeConfigurationNameHasBeenSet = true;
    m_notifyCodeConfigurationName = std::forward<NotifyCodeConfigurationNameT>(value);
  }
  template <typename NotifyCodeConfigurationNameT = Aws::String>
  NotifyCodeConfiguration& WithNotifyCodeConfigurationName(NotifyCodeConfigurationNameT&& value) {
    SetNotifyCodeConfigurationName(std::forward<NotifyCodeConfigurationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The passcode policy parameters, including the code type, length, validity
   * period, and maximum number of attempts.</p>
   */
  inline const CodeConfigurationParameters& GetCodeConfigurationParameters() const { return m_codeConfigurationParameters; }
  inline bool CodeConfigurationParametersHasBeenSet() const { return m_codeConfigurationParametersHasBeenSet; }
  template <typename CodeConfigurationParametersT = CodeConfigurationParameters>
  void SetCodeConfigurationParameters(CodeConfigurationParametersT&& value) {
    m_codeConfigurationParametersHasBeenSet = true;
    m_codeConfigurationParameters = std::forward<CodeConfigurationParametersT>(value);
  }
  template <typename CodeConfigurationParametersT = CodeConfigurationParameters>
  NotifyCodeConfiguration& WithCodeConfigurationParameters(CodeConfigurationParametersT&& value) {
    SetCodeConfigurationParameters(std::forward<CodeConfigurationParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The channel-specific parameters used to render and deliver the one-time
   * passcode. A configuration can carry parameters for every channel at once, and
   * the send route selects the matching channel at send time.</p>
   */
  inline const ChannelParameters& GetChannelParameters() const { return m_channelParameters; }
  inline bool ChannelParametersHasBeenSet() const { return m_channelParametersHasBeenSet; }
  template <typename ChannelParametersT = ChannelParameters>
  void SetChannelParameters(ChannelParametersT&& value) {
    m_channelParametersHasBeenSet = true;
    m_channelParameters = std::forward<ChannelParametersT>(value);
  }
  template <typename ChannelParametersT = ChannelParameters>
  NotifyCodeConfiguration& WithChannelParameters(ChannelParametersT&& value) {
    SetChannelParameters(std::forward<ChannelParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether deletion protection is enabled. When enabled, the resource
   * cannot be deleted until deletion protection is turned off.</p>
   */
  inline bool GetDeletionProtectionEnabled() const { return m_deletionProtectionEnabled; }
  inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }
  inline void SetDeletionProtectionEnabled(bool value) {
    m_deletionProtectionEnabledHasBeenSet = true;
    m_deletionProtectionEnabled = value;
  }
  inline NotifyCodeConfiguration& WithDeletionProtectionEnabled(bool value) {
    SetDeletionProtectionEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the resource was created, in Unix epoch time.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  NotifyCodeConfiguration& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the resource was last updated, in Unix epoch time.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  NotifyCodeConfiguration& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_notifyCodeConfigurationId;

  Aws::String m_notifyCodeConfigurationArn;

  Aws::String m_notifyCodeConfigurationName;

  CodeConfigurationParameters m_codeConfigurationParameters;

  ChannelParameters m_channelParameters;

  bool m_deletionProtectionEnabled{false};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_notifyCodeConfigurationIdHasBeenSet = false;
  bool m_notifyCodeConfigurationArnHasBeenSet = false;
  bool m_notifyCodeConfigurationNameHasBeenSet = false;
  bool m_codeConfigurationParametersHasBeenSet = false;
  bool m_channelParametersHasBeenSet = false;
  bool m_deletionProtectionEnabledHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
