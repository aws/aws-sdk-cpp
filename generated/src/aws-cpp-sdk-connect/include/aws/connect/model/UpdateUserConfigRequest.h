/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AfterContactWorkConfigPerChannel.h>
#include <aws/connect/model/AutoAcceptConfig.h>
#include <aws/connect/model/PersistentConnectionConfig.h>
#include <aws/connect/model/PhoneNumberConfig.h>
#include <aws/connect/model/VoiceEnhancementConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class UpdateUserConfigRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API UpdateUserConfigRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateUserConfig"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The list of auto-accept configuration settings for each channel. When
   * auto-accept is enabled for a channel, available agents are automatically
   * connected to contacts from that channel without needing to manually accept.
   * Auto-accept connects agents to contacts in less than one second.</p>
   */
  inline const Aws::Vector<AutoAcceptConfig>& GetAutoAcceptConfigs() const { return m_autoAcceptConfigs; }
  inline bool AutoAcceptConfigsHasBeenSet() const { return m_autoAcceptConfigsHasBeenSet; }
  template <typename AutoAcceptConfigsT = Aws::Vector<AutoAcceptConfig>>
  void SetAutoAcceptConfigs(AutoAcceptConfigsT&& value) {
    m_autoAcceptConfigsHasBeenSet = true;
    m_autoAcceptConfigs = std::forward<AutoAcceptConfigsT>(value);
  }
  template <typename AutoAcceptConfigsT = Aws::Vector<AutoAcceptConfig>>
  UpdateUserConfigRequest& WithAutoAcceptConfigs(AutoAcceptConfigsT&& value) {
    SetAutoAcceptConfigs(std::forward<AutoAcceptConfigsT>(value));
    return *this;
  }
  template <typename AutoAcceptConfigsT = AutoAcceptConfig>
  UpdateUserConfigRequest& AddAutoAcceptConfigs(AutoAcceptConfigsT&& value) {
    m_autoAcceptConfigsHasBeenSet = true;
    m_autoAcceptConfigs.emplace_back(std::forward<AutoAcceptConfigsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of after contact work (ACW) timeout configuration settings for each
   * channel. ACW timeout specifies how many seconds agents have for after contact
   * work, such as entering notes about the contact. The minimum setting is 1 second,
   * and the maximum is 2,000,000 seconds (24 days). Enter 0 for an indefinite amount
   * of time, meaning agents must manually choose to end ACW.</p>
   */
  inline const Aws::Vector<AfterContactWorkConfigPerChannel>& GetAfterContactWorkConfigs() const { return m_afterContactWorkConfigs; }
  inline bool AfterContactWorkConfigsHasBeenSet() const { return m_afterContactWorkConfigsHasBeenSet; }
  template <typename AfterContactWorkConfigsT = Aws::Vector<AfterContactWorkConfigPerChannel>>
  void SetAfterContactWorkConfigs(AfterContactWorkConfigsT&& value) {
    m_afterContactWorkConfigsHasBeenSet = true;
    m_afterContactWorkConfigs = std::forward<AfterContactWorkConfigsT>(value);
  }
  template <typename AfterContactWorkConfigsT = Aws::Vector<AfterContactWorkConfigPerChannel>>
  UpdateUserConfigRequest& WithAfterContactWorkConfigs(AfterContactWorkConfigsT&& value) {
    SetAfterContactWorkConfigs(std::forward<AfterContactWorkConfigsT>(value));
    return *this;
  }
  template <typename AfterContactWorkConfigsT = AfterContactWorkConfigPerChannel>
  UpdateUserConfigRequest& AddAfterContactWorkConfigs(AfterContactWorkConfigsT&& value) {
    m_afterContactWorkConfigsHasBeenSet = true;
    m_afterContactWorkConfigs.emplace_back(std::forward<AfterContactWorkConfigsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of phone number configuration settings for each channel.</p>
   */
  inline const Aws::Vector<PhoneNumberConfig>& GetPhoneNumberConfigs() const { return m_phoneNumberConfigs; }
  inline bool PhoneNumberConfigsHasBeenSet() const { return m_phoneNumberConfigsHasBeenSet; }
  template <typename PhoneNumberConfigsT = Aws::Vector<PhoneNumberConfig>>
  void SetPhoneNumberConfigs(PhoneNumberConfigsT&& value) {
    m_phoneNumberConfigsHasBeenSet = true;
    m_phoneNumberConfigs = std::forward<PhoneNumberConfigsT>(value);
  }
  template <typename PhoneNumberConfigsT = Aws::Vector<PhoneNumberConfig>>
  UpdateUserConfigRequest& WithPhoneNumberConfigs(PhoneNumberConfigsT&& value) {
    SetPhoneNumberConfigs(std::forward<PhoneNumberConfigsT>(value));
    return *this;
  }
  template <typename PhoneNumberConfigsT = PhoneNumberConfig>
  UpdateUserConfigRequest& AddPhoneNumberConfigs(PhoneNumberConfigsT&& value) {
    m_phoneNumberConfigsHasBeenSet = true;
    m_phoneNumberConfigs.emplace_back(std::forward<PhoneNumberConfigsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of persistent connection configuration settings for each
   * channel.</p>
   */
  inline const Aws::Vector<PersistentConnectionConfig>& GetPersistentConnectionConfigs() const { return m_persistentConnectionConfigs; }
  inline bool PersistentConnectionConfigsHasBeenSet() const { return m_persistentConnectionConfigsHasBeenSet; }
  template <typename PersistentConnectionConfigsT = Aws::Vector<PersistentConnectionConfig>>
  void SetPersistentConnectionConfigs(PersistentConnectionConfigsT&& value) {
    m_persistentConnectionConfigsHasBeenSet = true;
    m_persistentConnectionConfigs = std::forward<PersistentConnectionConfigsT>(value);
  }
  template <typename PersistentConnectionConfigsT = Aws::Vector<PersistentConnectionConfig>>
  UpdateUserConfigRequest& WithPersistentConnectionConfigs(PersistentConnectionConfigsT&& value) {
    SetPersistentConnectionConfigs(std::forward<PersistentConnectionConfigsT>(value));
    return *this;
  }
  template <typename PersistentConnectionConfigsT = PersistentConnectionConfig>
  UpdateUserConfigRequest& AddPersistentConnectionConfigs(PersistentConnectionConfigsT&& value) {
    m_persistentConnectionConfigsHasBeenSet = true;
    m_persistentConnectionConfigs.emplace_back(std::forward<PersistentConnectionConfigsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of voice enhancement configuration settings for each channel.</p>
   */
  inline const Aws::Vector<VoiceEnhancementConfig>& GetVoiceEnhancementConfigs() const { return m_voiceEnhancementConfigs; }
  inline bool VoiceEnhancementConfigsHasBeenSet() const { return m_voiceEnhancementConfigsHasBeenSet; }
  template <typename VoiceEnhancementConfigsT = Aws::Vector<VoiceEnhancementConfig>>
  void SetVoiceEnhancementConfigs(VoiceEnhancementConfigsT&& value) {
    m_voiceEnhancementConfigsHasBeenSet = true;
    m_voiceEnhancementConfigs = std::forward<VoiceEnhancementConfigsT>(value);
  }
  template <typename VoiceEnhancementConfigsT = Aws::Vector<VoiceEnhancementConfig>>
  UpdateUserConfigRequest& WithVoiceEnhancementConfigs(VoiceEnhancementConfigsT&& value) {
    SetVoiceEnhancementConfigs(std::forward<VoiceEnhancementConfigsT>(value));
    return *this;
  }
  template <typename VoiceEnhancementConfigsT = VoiceEnhancementConfig>
  UpdateUserConfigRequest& AddVoiceEnhancementConfigs(VoiceEnhancementConfigsT&& value) {
    m_voiceEnhancementConfigsHasBeenSet = true;
    m_voiceEnhancementConfigs.emplace_back(std::forward<VoiceEnhancementConfigsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user account.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  UpdateUserConfigRequest& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the Amazon Connect instance. You can <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
   * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  UpdateUserConfigRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AutoAcceptConfig> m_autoAcceptConfigs;

  Aws::Vector<AfterContactWorkConfigPerChannel> m_afterContactWorkConfigs;

  Aws::Vector<PhoneNumberConfig> m_phoneNumberConfigs;

  Aws::Vector<PersistentConnectionConfig> m_persistentConnectionConfigs;

  Aws::Vector<VoiceEnhancementConfig> m_voiceEnhancementConfigs;

  Aws::String m_userId;

  Aws::String m_instanceId;
  bool m_autoAcceptConfigsHasBeenSet = false;
  bool m_afterContactWorkConfigsHasBeenSet = false;
  bool m_phoneNumberConfigsHasBeenSet = false;
  bool m_persistentConnectionConfigsHasBeenSet = false;
  bool m_voiceEnhancementConfigsHasBeenSet = false;
  bool m_userIdHasBeenSet = false;
  bool m_instanceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
