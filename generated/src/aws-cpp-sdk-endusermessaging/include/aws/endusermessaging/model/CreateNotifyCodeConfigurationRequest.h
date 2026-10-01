/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/endusermessaging/EndUserMessagingRequest.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>
#include <aws/endusermessaging/model/ChannelParameters.h>
#include <aws/endusermessaging/model/CodeConfigurationParameters.h>
#include <aws/endusermessaging/model/Tag.h>

#include <utility>

namespace Aws {
namespace EndUserMessaging {
namespace Model {

/**
 */
class CreateNotifyCodeConfigurationRequest : public EndUserMessagingRequest {
 public:
  AWS_ENDUSERMESSAGING_API CreateNotifyCodeConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateNotifyCodeConfiguration"; }

  AWS_ENDUSERMESSAGING_API Aws::String SerializePayload() const override;

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
  CreateNotifyCodeConfigurationRequest& WithNotifyCodeConfigurationName(NotifyCodeConfigurationNameT&& value) {
    SetNotifyCodeConfigurationName(std::forward<NotifyCodeConfigurationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The passcode policy parameters, including the code type, length, validity
   * period, and maximum number of attempts. Each member is optional. When you omit a
   * member, no value is applied at create time and the default is applied when a
   * passcode is sent.</p>
   */
  inline const CodeConfigurationParameters& GetCodeConfigurationParameters() const { return m_codeConfigurationParameters; }
  inline bool CodeConfigurationParametersHasBeenSet() const { return m_codeConfigurationParametersHasBeenSet; }
  template <typename CodeConfigurationParametersT = CodeConfigurationParameters>
  void SetCodeConfigurationParameters(CodeConfigurationParametersT&& value) {
    m_codeConfigurationParametersHasBeenSet = true;
    m_codeConfigurationParameters = std::forward<CodeConfigurationParametersT>(value);
  }
  template <typename CodeConfigurationParametersT = CodeConfigurationParameters>
  CreateNotifyCodeConfigurationRequest& WithCodeConfigurationParameters(CodeConfigurationParametersT&& value) {
    SetCodeConfigurationParameters(std::forward<CodeConfigurationParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The channel-specific parameters used to render and deliver the one-time
   * passcode. Provide parameters for any subset of channels. Each member configures
   * one delivery route, and the route that is selected at send time uses the
   * matching channel.</p>
   */
  inline const ChannelParameters& GetChannelParameters() const { return m_channelParameters; }
  inline bool ChannelParametersHasBeenSet() const { return m_channelParametersHasBeenSet; }
  template <typename ChannelParametersT = ChannelParameters>
  void SetChannelParameters(ChannelParametersT&& value) {
    m_channelParametersHasBeenSet = true;
    m_channelParameters = std::forward<ChannelParametersT>(value);
  }
  template <typename ChannelParametersT = ChannelParameters>
  CreateNotifyCodeConfigurationRequest& WithChannelParameters(ChannelParametersT&& value) {
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
  inline CreateNotifyCodeConfigurationRequest& WithDeletionProtectionEnabled(bool value) {
    SetDeletionProtectionEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If you do not specify a client token, the AWS SDK
   * automatically generates one.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateNotifyCodeConfigurationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of key and value pair tags that are associated with the
   * resource.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateNotifyCodeConfigurationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateNotifyCodeConfigurationRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_notifyCodeConfigurationName;

  CodeConfigurationParameters m_codeConfigurationParameters;

  ChannelParameters m_channelParameters;

  bool m_deletionProtectionEnabled{false};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Vector<Tag> m_tags;
  bool m_notifyCodeConfigurationNameHasBeenSet = false;
  bool m_codeConfigurationParametersHasBeenSet = false;
  bool m_channelParametersHasBeenSet = false;
  bool m_deletionProtectionEnabledHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
