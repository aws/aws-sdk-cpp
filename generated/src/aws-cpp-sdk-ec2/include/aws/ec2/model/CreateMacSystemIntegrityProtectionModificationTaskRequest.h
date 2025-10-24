﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/MacSystemIntegrityProtectionConfigurationRequest.h>
#include <aws/ec2/model/MacSystemIntegrityProtectionSettingStatus.h>
#include <aws/ec2/model/TagSpecification.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class CreateMacSystemIntegrityProtectionModificationTaskRequest : public EC2Request {
 public:
  AWS_EC2_API CreateMacSystemIntegrityProtectionModificationTaskRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateMacSystemIntegrityProtectionModificationTask"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
   * of the request. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
   * Idempotency</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateMacSystemIntegrityProtectionModificationTaskRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks whether you have the required permissions for the action, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline CreateMacSystemIntegrityProtectionModificationTaskRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon EC2 Mac instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  CreateMacSystemIntegrityProtectionModificationTaskRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> <b>[Apple silicon Mac instances only]</b> Specifies the following
   * credentials:</p> <ul> <li> <p> <b>Internal disk administrative user</b> </p>
   * <ul> <li> <p> <b>Username</b> - Only the default administrative user
   * (<code>aws-managed-user</code>) is supported and it is used by default. You
   * can't specify a different administrative user.</p> </li> <li> <p>
   * <b>Password</b> - If you did not change the default password for
   * <code>aws-managed-user</code>, specify the default password, which is
   * <i>blank</i>. Otherwise, specify your password.</p> </li> </ul> </li> <li> <p>
   * <b>Amazon EBS root volume administrative user</b> </p> <ul> <li> <p>
   * <b>Username</b> - If you did not change the default administrative user, specify
   * <code>ec2-user</code>. Otherwise, specify the username for your administrative
   * user.</p> </li> <li> <p> <b>Password</b> - Specify the password for the
   * administrative user.</p> </li> </ul> </li> </ul> <p>The credentials must be
   * specified in the following JSON format:</p> <p> <code>{
   * "internalDiskPassword":"<i>internal-disk-admin_password</i>",
   * "rootVolumeUsername":"<i>root-volume-admin_username</i>",
   * "rootVolumepassword":"<i>root-volume-admin_password</i>" }</code> </p>
   */
  inline const Aws::String& GetMacCredentials() const { return m_macCredentials; }
  inline bool MacCredentialsHasBeenSet() const { return m_macCredentialsHasBeenSet; }
  template <typename MacCredentialsT = Aws::String>
  void SetMacCredentials(MacCredentialsT&& value) {
    m_macCredentialsHasBeenSet = true;
    m_macCredentials = std::forward<MacCredentialsT>(value);
  }
  template <typename MacCredentialsT = Aws::String>
  CreateMacSystemIntegrityProtectionModificationTaskRequest& WithMacCredentials(MacCredentialsT&& value) {
    SetMacCredentials(std::forward<MacCredentialsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the overrides to selectively enable or disable individual SIP
   * settings. The individual settings you specify here override the overall SIP
   * status you specify for <b>MacSystemIntegrityProtectionStatus</b>.</p>
   */
  inline const MacSystemIntegrityProtectionConfigurationRequest& GetMacSystemIntegrityProtectionConfiguration() const {
    return m_macSystemIntegrityProtectionConfiguration;
  }
  inline bool MacSystemIntegrityProtectionConfigurationHasBeenSet() const { return m_macSystemIntegrityProtectionConfigurationHasBeenSet; }
  template <typename MacSystemIntegrityProtectionConfigurationT = MacSystemIntegrityProtectionConfigurationRequest>
  void SetMacSystemIntegrityProtectionConfiguration(MacSystemIntegrityProtectionConfigurationT&& value) {
    m_macSystemIntegrityProtectionConfigurationHasBeenSet = true;
    m_macSystemIntegrityProtectionConfiguration = std::forward<MacSystemIntegrityProtectionConfigurationT>(value);
  }
  template <typename MacSystemIntegrityProtectionConfigurationT = MacSystemIntegrityProtectionConfigurationRequest>
  CreateMacSystemIntegrityProtectionModificationTaskRequest& WithMacSystemIntegrityProtectionConfiguration(
      MacSystemIntegrityProtectionConfigurationT&& value) {
    SetMacSystemIntegrityProtectionConfiguration(std::forward<MacSystemIntegrityProtectionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the overall SIP status for the instance. To enable all SIP
   * settings, specify <code>enabled</code>. To disable all SIP settings, specify
   * <code>disabled</code>.</p>
   */
  inline MacSystemIntegrityProtectionSettingStatus GetMacSystemIntegrityProtectionStatus() const {
    return m_macSystemIntegrityProtectionStatus;
  }
  inline bool MacSystemIntegrityProtectionStatusHasBeenSet() const { return m_macSystemIntegrityProtectionStatusHasBeenSet; }
  inline void SetMacSystemIntegrityProtectionStatus(MacSystemIntegrityProtectionSettingStatus value) {
    m_macSystemIntegrityProtectionStatusHasBeenSet = true;
    m_macSystemIntegrityProtectionStatus = value;
  }
  inline CreateMacSystemIntegrityProtectionModificationTaskRequest& WithMacSystemIntegrityProtectionStatus(
      MacSystemIntegrityProtectionSettingStatus value) {
    SetMacSystemIntegrityProtectionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies tags to apply to the SIP modification task.</p>
   */
  inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
  inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  void SetTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications = std::forward<TagSpecificationsT>(value);
  }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  CreateMacSystemIntegrityProtectionModificationTaskRequest& WithTagSpecifications(TagSpecificationsT&& value) {
    SetTagSpecifications(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  template <typename TagSpecificationsT = TagSpecification>
  CreateMacSystemIntegrityProtectionModificationTaskRequest& AddTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;

  bool m_dryRun{false};
  bool m_dryRunHasBeenSet = false;

  Aws::String m_instanceId;
  bool m_instanceIdHasBeenSet = false;

  Aws::String m_macCredentials;
  bool m_macCredentialsHasBeenSet = false;

  MacSystemIntegrityProtectionConfigurationRequest m_macSystemIntegrityProtectionConfiguration;
  bool m_macSystemIntegrityProtectionConfigurationHasBeenSet = false;

  MacSystemIntegrityProtectionSettingStatus m_macSystemIntegrityProtectionStatus{MacSystemIntegrityProtectionSettingStatus::NOT_SET};
  bool m_macSystemIntegrityProtectionStatusHasBeenSet = false;

  Aws::Vector<TagSpecification> m_tagSpecifications;
  bool m_tagSpecificationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
