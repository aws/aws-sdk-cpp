/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessagingRequest.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>
#include <aws/endusermessaging/model/UpdateChannelParameters.h>
#include <aws/endusermessaging/model/UpdateCodeConfigurationParameters.h>

#include <utility>

namespace Aws {
namespace EndUserMessaging {
namespace Model {

/**
 */
class UpdateNotifyCodeConfigurationRequest : public EndUserMessagingRequest {
 public:
  AWS_ENDUSERMESSAGING_API UpdateNotifyCodeConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateNotifyCodeConfiguration"; }

  AWS_ENDUSERMESSAGING_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the notify code configuration. You can specify
   * either the bare ID or the full Amazon Resource Name (ARN).</p>
   */
  inline const Aws::String& GetNotifyCodeConfigurationId() const { return m_notifyCodeConfigurationId; }
  inline bool NotifyCodeConfigurationIdHasBeenSet() const { return m_notifyCodeConfigurationIdHasBeenSet; }
  template <typename NotifyCodeConfigurationIdT = Aws::String>
  void SetNotifyCodeConfigurationId(NotifyCodeConfigurationIdT&& value) {
    m_notifyCodeConfigurationIdHasBeenSet = true;
    m_notifyCodeConfigurationId = std::forward<NotifyCodeConfigurationIdT>(value);
  }
  template <typename NotifyCodeConfigurationIdT = Aws::String>
  UpdateNotifyCodeConfigurationRequest& WithNotifyCodeConfigurationId(NotifyCodeConfigurationIdT&& value) {
    SetNotifyCodeConfigurationId(std::forward<NotifyCodeConfigurationIdT>(value));
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
  UpdateNotifyCodeConfigurationRequest& WithNotifyCodeConfigurationName(NotifyCodeConfigurationNameT&& value) {
    SetNotifyCodeConfigurationName(std::forward<NotifyCodeConfigurationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated passcode policy parameters, including the code type, length,
   * validity period, and maximum number of attempts. When you omit a member, its
   * current value is preserved.</p>
   */
  inline const UpdateCodeConfigurationParameters& GetCodeConfigurationParameters() const { return m_codeConfigurationParameters; }
  inline bool CodeConfigurationParametersHasBeenSet() const { return m_codeConfigurationParametersHasBeenSet; }
  template <typename CodeConfigurationParametersT = UpdateCodeConfigurationParameters>
  void SetCodeConfigurationParameters(CodeConfigurationParametersT&& value) {
    m_codeConfigurationParametersHasBeenSet = true;
    m_codeConfigurationParameters = std::forward<CodeConfigurationParametersT>(value);
  }
  template <typename CodeConfigurationParametersT = UpdateCodeConfigurationParameters>
  UpdateNotifyCodeConfigurationRequest& WithCodeConfigurationParameters(CodeConfigurationParametersT&& value) {
    SetCodeConfigurationParameters(std::forward<CodeConfigurationParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated channel-specific parameters used to render and deliver the
   * one-time passcode. This is a loose, nested update: when you omit a channel, that
   * channel's parameters remain unchanged. Within a supplied channel, an empty
   * string on a string member, or an empty map on the destination-country
   * parameters, clears the currently stored value, and absent members preserve the
   * current value.</p>
   */
  inline const UpdateChannelParameters& GetChannelParameters() const { return m_channelParameters; }
  inline bool ChannelParametersHasBeenSet() const { return m_channelParametersHasBeenSet; }
  template <typename ChannelParametersT = UpdateChannelParameters>
  void SetChannelParameters(ChannelParametersT&& value) {
    m_channelParametersHasBeenSet = true;
    m_channelParameters = std::forward<ChannelParametersT>(value);
  }
  template <typename ChannelParametersT = UpdateChannelParameters>
  UpdateNotifyCodeConfigurationRequest& WithChannelParameters(ChannelParametersT&& value) {
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
  inline UpdateNotifyCodeConfigurationRequest& WithDeletionProtectionEnabled(bool value) {
    SetDeletionProtectionEnabled(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_notifyCodeConfigurationId;

  Aws::String m_notifyCodeConfigurationName;

  UpdateCodeConfigurationParameters m_codeConfigurationParameters;

  UpdateChannelParameters m_channelParameters;

  bool m_deletionProtectionEnabled{false};
  bool m_notifyCodeConfigurationIdHasBeenSet = false;
  bool m_notifyCodeConfigurationNameHasBeenSet = false;
  bool m_codeConfigurationParametersHasBeenSet = false;
  bool m_channelParametersHasBeenSet = false;
  bool m_deletionProtectionEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
