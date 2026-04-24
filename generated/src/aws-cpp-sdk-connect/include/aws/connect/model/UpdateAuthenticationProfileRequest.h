/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class UpdateAuthenticationProfileRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API UpdateAuthenticationProfileRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAuthenticationProfile"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique identifier for the authentication profile. </p>
   */
  inline const Aws::String& GetAuthenticationProfileId() const { return m_authenticationProfileId; }
  inline bool AuthenticationProfileIdHasBeenSet() const { return m_authenticationProfileIdHasBeenSet; }
  template <typename AuthenticationProfileIdT = Aws::String>
  void SetAuthenticationProfileId(AuthenticationProfileIdT&& value) {
    m_authenticationProfileIdHasBeenSet = true;
    m_authenticationProfileId = std::forward<AuthenticationProfileIdT>(value);
  }
  template <typename AuthenticationProfileIdT = Aws::String>
  UpdateAuthenticationProfileRequest& WithAuthenticationProfileId(AuthenticationProfileIdT&& value) {
    SetAuthenticationProfileId(std::forward<AuthenticationProfileIdT>(value));
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
  UpdateAuthenticationProfileRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name for the authentication profile.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateAuthenticationProfileRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description for the authentication profile.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateAuthenticationProfileRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of IP address range strings that are allowed to access the instance.
   * For more information on how to configure IP addresses, see<a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/authentication-profiles.html#configure-session-timeouts">Configure
   * session timeouts</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedIps() const { return m_allowedIps; }
  inline bool AllowedIpsHasBeenSet() const { return m_allowedIpsHasBeenSet; }
  template <typename AllowedIpsT = Aws::Vector<Aws::String>>
  void SetAllowedIps(AllowedIpsT&& value) {
    m_allowedIpsHasBeenSet = true;
    m_allowedIps = std::forward<AllowedIpsT>(value);
  }
  template <typename AllowedIpsT = Aws::Vector<Aws::String>>
  UpdateAuthenticationProfileRequest& WithAllowedIps(AllowedIpsT&& value) {
    SetAllowedIps(std::forward<AllowedIpsT>(value));
    return *this;
  }
  template <typename AllowedIpsT = Aws::String>
  UpdateAuthenticationProfileRequest& AddAllowedIps(AllowedIpsT&& value) {
    m_allowedIpsHasBeenSet = true;
    m_allowedIps.emplace_back(std::forward<AllowedIpsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of IP address range strings that are blocked from accessing the
   * instance. For more information on how to configure IP addresses, For more
   * information on how to configure IP addresses, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/authentication-profiles.html#configure-ip-based-ac">Configure
   * IP-based access control</a> in the <i>Amazon Connect Administrator Guide</i>.
   * </p>
   */
  inline const Aws::Vector<Aws::String>& GetBlockedIps() const { return m_blockedIps; }
  inline bool BlockedIpsHasBeenSet() const { return m_blockedIpsHasBeenSet; }
  template <typename BlockedIpsT = Aws::Vector<Aws::String>>
  void SetBlockedIps(BlockedIpsT&& value) {
    m_blockedIpsHasBeenSet = true;
    m_blockedIps = std::forward<BlockedIpsT>(value);
  }
  template <typename BlockedIpsT = Aws::Vector<Aws::String>>
  UpdateAuthenticationProfileRequest& WithBlockedIps(BlockedIpsT&& value) {
    SetBlockedIps(std::forward<BlockedIpsT>(value));
    return *this;
  }
  template <typename BlockedIpsT = Aws::String>
  UpdateAuthenticationProfileRequest& AddBlockedIps(BlockedIpsT&& value) {
    m_blockedIpsHasBeenSet = true;
    m_blockedIps.emplace_back(std::forward<BlockedIpsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The period, in minutes, before an agent is automatically signed out of the
   * contact center when they go inactive.</p>
   */
  inline int GetSessionInactivityDuration() const { return m_sessionInactivityDuration; }
  inline bool SessionInactivityDurationHasBeenSet() const { return m_sessionInactivityDurationHasBeenSet; }
  inline void SetSessionInactivityDuration(int value) {
    m_sessionInactivityDurationHasBeenSet = true;
    m_sessionInactivityDuration = value;
  }
  inline UpdateAuthenticationProfileRequest& WithSessionInactivityDuration(int value) {
    SetSessionInactivityDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Determines if automatic logout on user inactivity is enabled.</p>
   */
  inline bool GetSessionInactivityHandlingEnabled() const { return m_sessionInactivityHandlingEnabled; }
  inline bool SessionInactivityHandlingEnabledHasBeenSet() const { return m_sessionInactivityHandlingEnabledHasBeenSet; }
  inline void SetSessionInactivityHandlingEnabled(bool value) {
    m_sessionInactivityHandlingEnabledHasBeenSet = true;
    m_sessionInactivityHandlingEnabled = value;
  }
  inline UpdateAuthenticationProfileRequest& WithSessionInactivityHandlingEnabled(bool value) {
    SetSessionInactivityHandlingEnabled(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_authenticationProfileId;

  Aws::String m_instanceId;

  Aws::String m_name;

  Aws::String m_description;

  Aws::Vector<Aws::String> m_allowedIps;

  Aws::Vector<Aws::String> m_blockedIps;

  int m_sessionInactivityDuration{0};

  bool m_sessionInactivityHandlingEnabled{false};
  bool m_authenticationProfileIdHasBeenSet = false;
  bool m_instanceIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_allowedIpsHasBeenSet = false;
  bool m_blockedIpsHasBeenSet = false;
  bool m_sessionInactivityDurationHasBeenSet = false;
  bool m_sessionInactivityHandlingEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
