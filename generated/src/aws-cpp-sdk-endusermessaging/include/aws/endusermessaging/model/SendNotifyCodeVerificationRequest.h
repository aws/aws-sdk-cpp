/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessagingRequest.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>
#include <aws/endusermessaging/model/ChannelParameters.h>
#include <aws/endusermessaging/model/CodeConfigurationParameters.h>
#include <aws/endusermessaging/model/NotifyChannel.h>

#include <utility>

namespace Aws {
namespace EndUserMessaging {
namespace Model {

/**
 */
class SendNotifyCodeVerificationRequest : public EndUserMessagingRequest {
 public:
  AWS_ENDUSERMESSAGING_API SendNotifyCodeVerificationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SendNotifyCodeVerification"; }

  AWS_ENDUSERMESSAGING_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The channel used to deliver the one-time passcode to the recipient.</p>
   */
  inline NotifyChannel GetChannel() const { return m_channel; }
  inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
  inline void SetChannel(NotifyChannel value) {
    m_channelHasBeenSet = true;
    m_channel = value;
  }
  inline SendNotifyCodeVerificationRequest& WithChannel(NotifyChannel value) {
    SetChannel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recipient identifier. For the TEXT and VOICE channels, specify an E.164
   * phone number. For the WhatsApp channel, specify a WhatsApp address.</p>
   */
  inline const Aws::String& GetDestinationIdentity() const { return m_destinationIdentity; }
  inline bool DestinationIdentityHasBeenSet() const { return m_destinationIdentityHasBeenSet; }
  template <typename DestinationIdentityT = Aws::String>
  void SetDestinationIdentity(DestinationIdentityT&& value) {
    m_destinationIdentityHasBeenSet = true;
    m_destinationIdentity = std::forward<DestinationIdentityT>(value);
  }
  template <typename DestinationIdentityT = Aws::String>
  SendNotifyCodeVerificationRequest& WithDestinationIdentity(DestinationIdentityT&& value) {
    SetDestinationIdentity(std::forward<DestinationIdentityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identity used to send the message, such as a phone number, sender ID, or
   * pool that is owned by your account.</p>
   */
  inline const Aws::String& GetOriginationIdentity() const { return m_originationIdentity; }
  inline bool OriginationIdentityHasBeenSet() const { return m_originationIdentityHasBeenSet; }
  template <typename OriginationIdentityT = Aws::String>
  void SetOriginationIdentity(OriginationIdentityT&& value) {
    m_originationIdentityHasBeenSet = true;
    m_originationIdentity = std::forward<OriginationIdentityT>(value);
  }
  template <typename OriginationIdentityT = Aws::String>
  SendNotifyCodeVerificationRequest& WithOriginationIdentity(OriginationIdentityT&& value) {
    SetOriginationIdentity(std::forward<OriginationIdentityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier or Amazon Resource Name (ARN) of the notify code configuration
   * that supplies the passcode policy and template defaults. When you do not specify
   * a configuration, you must supply the template in the request.</p>
   */
  inline const Aws::String& GetNotifyCodeConfiguration() const { return m_notifyCodeConfiguration; }
  inline bool NotifyCodeConfigurationHasBeenSet() const { return m_notifyCodeConfigurationHasBeenSet; }
  template <typename NotifyCodeConfigurationT = Aws::String>
  void SetNotifyCodeConfiguration(NotifyCodeConfigurationT&& value) {
    m_notifyCodeConfigurationHasBeenSet = true;
    m_notifyCodeConfiguration = std::forward<NotifyCodeConfigurationT>(value);
  }
  template <typename NotifyCodeConfigurationT = Aws::String>
  SendNotifyCodeVerificationRequest& WithNotifyCodeConfiguration(NotifyCodeConfigurationT&& value) {
    SetNotifyCodeConfiguration(std::forward<NotifyCodeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The channel-specific parameters used to render and deliver the one-time
   * passcode for this request. The route that is derived from the channel and the
   * origination identity selects the matching channel. When you do not specify
   * channel parameters, the service uses the parameters from the referenced notify
   * code configuration.</p>
   */
  inline const ChannelParameters& GetOverrideChannelParameters() const { return m_overrideChannelParameters; }
  inline bool OverrideChannelParametersHasBeenSet() const { return m_overrideChannelParametersHasBeenSet; }
  template <typename OverrideChannelParametersT = ChannelParameters>
  void SetOverrideChannelParameters(OverrideChannelParametersT&& value) {
    m_overrideChannelParametersHasBeenSet = true;
    m_overrideChannelParameters = std::forward<OverrideChannelParametersT>(value);
  }
  template <typename OverrideChannelParametersT = ChannelParameters>
  SendNotifyCodeVerificationRequest& WithOverrideChannelParameters(OverrideChannelParametersT&& value) {
    SetOverrideChannelParameters(std::forward<OverrideChannelParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The per-send overrides for the passcode policy parameters, including the code
   * type, length, validity period, and maximum number of attempts. These values
   * override the values from the referenced notify code configuration. When you do
   * not specify a value, the value from the configuration is used, and if neither is
   * set, the service default applies.</p>
   */
  inline const CodeConfigurationParameters& GetOverrideCodeConfigurationParameters() const { return m_overrideCodeConfigurationParameters; }
  inline bool OverrideCodeConfigurationParametersHasBeenSet() const { return m_overrideCodeConfigurationParametersHasBeenSet; }
  template <typename OverrideCodeConfigurationParametersT = CodeConfigurationParameters>
  void SetOverrideCodeConfigurationParameters(OverrideCodeConfigurationParametersT&& value) {
    m_overrideCodeConfigurationParametersHasBeenSet = true;
    m_overrideCodeConfigurationParameters = std::forward<OverrideCodeConfigurationParametersT>(value);
  }
  template <typename OverrideCodeConfigurationParametersT = CodeConfigurationParameters>
  SendNotifyCodeVerificationRequest& WithOverrideCodeConfigurationParameters(OverrideCodeConfigurationParametersT&& value) {
    SetOverrideCodeConfigurationParameters(std::forward<OverrideCodeConfigurationParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the configuration set used to control how delivery events for the
   * message are handled.</p>
   */
  inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
  inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
  template <typename ConfigurationSetNameT = Aws::String>
  void SetConfigurationSetName(ConfigurationSetNameT&& value) {
    m_configurationSetNameHasBeenSet = true;
    m_configurationSetName = std::forward<ConfigurationSetNameT>(value);
  }
  template <typename ConfigurationSetNameT = Aws::String>
  SendNotifyCodeVerificationRequest& WithConfigurationSetName(ConfigurationSetNameT&& value) {
    SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of custom key and value pairs that are propagated to the delivery
   * events for this verification.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetContext() const { return m_context; }
  inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
  template <typename ContextT = Aws::Map<Aws::String, Aws::String>>
  void SetContext(ContextT&& value) {
    m_contextHasBeenSet = true;
    m_context = std::forward<ContextT>(value);
  }
  template <typename ContextT = Aws::Map<Aws::String, Aws::String>>
  SendNotifyCodeVerificationRequest& WithContext(ContextT&& value) {
    SetContext(std::forward<ContextT>(value));
    return *this;
  }
  template <typename ContextKeyT = Aws::String, typename ContextValueT = Aws::String>
  SendNotifyCodeVerificationRequest& AddContext(ContextKeyT&& key, ContextValueT&& value) {
    m_contextHasBeenSet = true;
    m_context.emplace(std::forward<ContextKeyT>(key), std::forward<ContextValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A caller-supplied reference identifier that binds a send request to a later
   * validate request. Specify the same value in both requests.</p>
   */
  inline const Aws::String& GetReferenceId() const { return m_referenceId; }
  inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
  template <typename ReferenceIdT = Aws::String>
  void SetReferenceId(ReferenceIdT&& value) {
    m_referenceIdHasBeenSet = true;
    m_referenceId = std::forward<ReferenceIdT>(value);
  }
  template <typename ReferenceIdT = Aws::String>
  SendNotifyCodeVerificationRequest& WithReferenceId(ReferenceIdT&& value) {
    SetReferenceId(std::forward<ReferenceIdT>(value));
    return *this;
  }
  ///@}
 private:
  NotifyChannel m_channel{NotifyChannel::NOT_SET};

  Aws::String m_destinationIdentity;

  Aws::String m_originationIdentity;

  Aws::String m_notifyCodeConfiguration;

  ChannelParameters m_overrideChannelParameters;

  CodeConfigurationParameters m_overrideCodeConfigurationParameters;

  Aws::String m_configurationSetName;

  Aws::Map<Aws::String, Aws::String> m_context;

  Aws::String m_referenceId;
  bool m_channelHasBeenSet = false;
  bool m_destinationIdentityHasBeenSet = false;
  bool m_originationIdentityHasBeenSet = false;
  bool m_notifyCodeConfigurationHasBeenSet = false;
  bool m_overrideChannelParametersHasBeenSet = false;
  bool m_overrideCodeConfigurationParametersHasBeenSet = false;
  bool m_configurationSetNameHasBeenSet = false;
  bool m_contextHasBeenSet = false;
  bool m_referenceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
