/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/CmkSecretConfig.h>
#include <aws/datasync/model/CustomSecretConfig.h>
#include <aws/datasync/model/TagListEntry.h>

#include <utility>

namespace Aws {
namespace DataSync {
namespace Model {

/**
 */
class CreateLocationFsxWindowsRequest : public DataSyncRequest {
 public:
  AWS_DATASYNC_API CreateLocationFsxWindowsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateLocationFsxWindows"; }

  AWS_DATASYNC_API Aws::String SerializePayload() const override;

  AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies a mount path for your file system using forward slashes. This is
   * where DataSync reads or writes data (depending on if this is a source or
   * destination location).</p>
   */
  inline const Aws::String& GetSubdirectory() const { return m_subdirectory; }
  inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
  template <typename SubdirectoryT = Aws::String>
  void SetSubdirectory(SubdirectoryT&& value) {
    m_subdirectoryHasBeenSet = true;
    m_subdirectory = std::forward<SubdirectoryT>(value);
  }
  template <typename SubdirectoryT = Aws::String>
  CreateLocationFsxWindowsRequest& WithSubdirectory(SubdirectoryT&& value) {
    SetSubdirectory(std::forward<SubdirectoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the Amazon Resource Name (ARN) for the FSx for Windows File Server
   * file system.</p>
   */
  inline const Aws::String& GetFsxFilesystemArn() const { return m_fsxFilesystemArn; }
  inline bool FsxFilesystemArnHasBeenSet() const { return m_fsxFilesystemArnHasBeenSet; }
  template <typename FsxFilesystemArnT = Aws::String>
  void SetFsxFilesystemArn(FsxFilesystemArnT&& value) {
    m_fsxFilesystemArnHasBeenSet = true;
    m_fsxFilesystemArn = std::forward<FsxFilesystemArnT>(value);
  }
  template <typename FsxFilesystemArnT = Aws::String>
  CreateLocationFsxWindowsRequest& WithFsxFilesystemArn(FsxFilesystemArnT&& value) {
    SetFsxFilesystemArn(std::forward<FsxFilesystemArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the ARNs of the Amazon EC2 security groups that provide access to
   * your file system's preferred subnet.</p> <p>The security groups that you specify
   * must be able to communicate with your file system's security groups. For
   * information about configuring security groups for file system access, see the <a
   * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/limit-access-security-groups.html">
   * <i>Amazon FSx for Windows File Server User Guide</i> </a>.</p>  <p>If you
   * choose a security group that doesn't allow connections from within itself, do
   * one of the following:</p> <ul> <li> <p>Configure the security group to allow it
   * to communicate within itself.</p> </li> <li> <p>Choose a different security
   * group that can communicate with the mount target's security group.</p> </li>
   * </ul>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const { return m_securityGroupArns; }
  inline bool SecurityGroupArnsHasBeenSet() const { return m_securityGroupArnsHasBeenSet; }
  template <typename SecurityGroupArnsT = Aws::Vector<Aws::String>>
  void SetSecurityGroupArns(SecurityGroupArnsT&& value) {
    m_securityGroupArnsHasBeenSet = true;
    m_securityGroupArns = std::forward<SecurityGroupArnsT>(value);
  }
  template <typename SecurityGroupArnsT = Aws::Vector<Aws::String>>
  CreateLocationFsxWindowsRequest& WithSecurityGroupArns(SecurityGroupArnsT&& value) {
    SetSecurityGroupArns(std::forward<SecurityGroupArnsT>(value));
    return *this;
  }
  template <typename SecurityGroupArnsT = Aws::String>
  CreateLocationFsxWindowsRequest& AddSecurityGroupArns(SecurityGroupArnsT&& value) {
    m_securityGroupArnsHasBeenSet = true;
    m_securityGroupArns.emplace_back(std::forward<SecurityGroupArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies labels that help you categorize, filter, and search for your Amazon
   * Web Services resources. We recommend creating at least a name tag for your
   * location.</p>
   */
  inline const Aws::Vector<TagListEntry>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<TagListEntry>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<TagListEntry>>
  CreateLocationFsxWindowsRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = TagListEntry>
  CreateLocationFsxWindowsRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the user with the permissions to mount and access the files,
   * folders, and file metadata in your FSx for Windows File Server file system.</p>
   * <p>For information about choosing a user with the right level of access for your
   * transfer, see <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-fsx-location.html#create-fsx-windows-location-permissions">required
   * permissions</a> for FSx for Windows File Server locations.</p>
   */
  inline const Aws::String& GetUser() const { return m_user; }
  inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
  template <typename UserT = Aws::String>
  void SetUser(UserT&& value) {
    m_userHasBeenSet = true;
    m_user = std::forward<UserT>(value);
  }
  template <typename UserT = Aws::String>
  CreateLocationFsxWindowsRequest& WithUser(UserT&& value) {
    SetUser(std::forward<UserT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the name of the Windows domain that the FSx for Windows File Server
   * file system belongs to.</p> <p>If you have multiple Active Directory domains in
   * your environment, configuring this parameter makes sure that DataSync connects
   * to the right file system.</p>
   */
  inline const Aws::String& GetDomain() const { return m_domain; }
  inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
  template <typename DomainT = Aws::String>
  void SetDomain(DomainT&& value) {
    m_domainHasBeenSet = true;
    m_domain = std::forward<DomainT>(value);
  }
  template <typename DomainT = Aws::String>
  CreateLocationFsxWindowsRequest& WithDomain(DomainT&& value) {
    SetDomain(std::forward<DomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the password of the user with the permissions to mount and access
   * the files, folders, and file metadata in your FSx for Windows File Server file
   * system.</p>
   */
  inline const Aws::String& GetPassword() const { return m_password; }
  inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
  template <typename PasswordT = Aws::String>
  void SetPassword(PasswordT&& value) {
    m_passwordHasBeenSet = true;
    m_password = std::forward<PasswordT>(value);
  }
  template <typename PasswordT = Aws::String>
  CreateLocationFsxWindowsRequest& WithPassword(PasswordT&& value) {
    SetPassword(std::forward<PasswordT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies configuration information for a DataSync-managed secret, which
   * includes the password that DataSync uses to access a specific FSx Windows
   * storage location, with a customer-managed KMS key.</p> <p>When you include this
   * parameter as part of a <code>CreateLocationFsxWindows</code> request, you
   * provide only the KMS key ARN. DataSync uses this KMS key together with the
   * <code>Password</code> you specify for to create a DataSync-managed secret to
   * store the location access credentials.</p> <p>Make sure that DataSync has
   * permission to access the KMS key that you specify. For more information, see <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/location-credentials.html#service-secret-custom-key">
   * Using a service-managed secret encrypted with a custom KMS key</a>.</p>
   * <p>You can use either <code>CmkSecretConfig</code> (with <code>Password</code>)
   * or <code>CustomSecretConfig</code> (without <code>Password</code>) to provide
   * credentials for a <code>CreateLocationFsxWindows</code> request. Do not provide
   * both parameters for the same request.</p>
   */
  inline const CmkSecretConfig& GetCmkSecretConfig() const { return m_cmkSecretConfig; }
  inline bool CmkSecretConfigHasBeenSet() const { return m_cmkSecretConfigHasBeenSet; }
  template <typename CmkSecretConfigT = CmkSecretConfig>
  void SetCmkSecretConfig(CmkSecretConfigT&& value) {
    m_cmkSecretConfigHasBeenSet = true;
    m_cmkSecretConfig = std::forward<CmkSecretConfigT>(value);
  }
  template <typename CmkSecretConfigT = CmkSecretConfig>
  CreateLocationFsxWindowsRequest& WithCmkSecretConfig(CmkSecretConfigT&& value) {
    SetCmkSecretConfig(std::forward<CmkSecretConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies configuration information for a customer-managed Secrets Manager
   * secret where the password for an FSx for Windows File Server storage location is
   * stored in plain text, in Secrets Manager. This configuration includes the secret
   * ARN, and the ARN for an IAM role that provides access to the secret. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/location-credentials.html#custom-secret-custom-key">
   * Using a secret that you manage</a>.</p>  <p>You can use either
   * <code>CmkSecretConfig</code> (with <code>Password</code>) or
   * <code>CustomSecretConfig</code> (without <code>Password</code>) to provide
   * credentials for a <code>CreateLocationFsxWindows</code> request. Do not provide
   * both parameters for the same request.</p>
   */
  inline const CustomSecretConfig& GetCustomSecretConfig() const { return m_customSecretConfig; }
  inline bool CustomSecretConfigHasBeenSet() const { return m_customSecretConfigHasBeenSet; }
  template <typename CustomSecretConfigT = CustomSecretConfig>
  void SetCustomSecretConfig(CustomSecretConfigT&& value) {
    m_customSecretConfigHasBeenSet = true;
    m_customSecretConfig = std::forward<CustomSecretConfigT>(value);
  }
  template <typename CustomSecretConfigT = CustomSecretConfig>
  CreateLocationFsxWindowsRequest& WithCustomSecretConfig(CustomSecretConfigT&& value) {
    SetCustomSecretConfig(std::forward<CustomSecretConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_subdirectory;

  Aws::String m_fsxFilesystemArn;

  Aws::Vector<Aws::String> m_securityGroupArns;

  Aws::Vector<TagListEntry> m_tags;

  Aws::String m_user;

  Aws::String m_domain;

  Aws::String m_password;

  CmkSecretConfig m_cmkSecretConfig;

  CustomSecretConfig m_customSecretConfig;
  bool m_subdirectoryHasBeenSet = false;
  bool m_fsxFilesystemArnHasBeenSet = false;
  bool m_securityGroupArnsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_userHasBeenSet = false;
  bool m_domainHasBeenSet = false;
  bool m_passwordHasBeenSet = false;
  bool m_cmkSecretConfigHasBeenSet = false;
  bool m_customSecretConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
