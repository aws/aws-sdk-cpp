/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/CmkSecretConfig.h>
#include <aws/datasync/model/CustomSecretConfig.h>
#include <aws/datasync/model/SmbMountOptions.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataSync {
namespace Model {

/**
 * <p>Specifies the Server Message Block (SMB) protocol configuration that DataSync
 * uses to access your Amazon FSx for NetApp ONTAP file system's storage virtual
 * machine (SVM). For more information, see <a
 * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-ontap-location.html#create-ontap-location-access">Providing
 * DataSync access to FSx for ONTAP file systems</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/FsxUpdateProtocolSmb">AWS
 * API Reference</a></p>
 */
class FsxUpdateProtocolSmb {
 public:
  AWS_DATASYNC_API FsxUpdateProtocolSmb() = default;
  AWS_DATASYNC_API FsxUpdateProtocolSmb(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATASYNC_API FsxUpdateProtocolSmb& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the name of the Windows domain that your storage virtual machine
   * (SVM) belongs to.</p> <p>If you have multiple Active Directory domains in your
   * environment, configuring this parameter makes sure that DataSync connects to the
   * right SVM.</p>
   */
  inline const Aws::String& GetDomain() const { return m_domain; }
  inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
  template <typename DomainT = Aws::String>
  void SetDomain(DomainT&& value) {
    m_domainHasBeenSet = true;
    m_domain = std::forward<DomainT>(value);
  }
  template <typename DomainT = Aws::String>
  FsxUpdateProtocolSmb& WithDomain(DomainT&& value) {
    SetDomain(std::forward<DomainT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const SmbMountOptions& GetMountOptions() const { return m_mountOptions; }
  inline bool MountOptionsHasBeenSet() const { return m_mountOptionsHasBeenSet; }
  template <typename MountOptionsT = SmbMountOptions>
  void SetMountOptions(MountOptionsT&& value) {
    m_mountOptionsHasBeenSet = true;
    m_mountOptions = std::forward<MountOptionsT>(value);
  }
  template <typename MountOptionsT = SmbMountOptions>
  FsxUpdateProtocolSmb& WithMountOptions(MountOptionsT&& value) {
    SetMountOptions(std::forward<MountOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the password of a user who has permission to access your SVM.</p>
   */
  inline const Aws::String& GetPassword() const { return m_password; }
  inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
  template <typename PasswordT = Aws::String>
  void SetPassword(PasswordT&& value) {
    m_passwordHasBeenSet = true;
    m_password = std::forward<PasswordT>(value);
  }
  template <typename PasswordT = Aws::String>
  FsxUpdateProtocolSmb& WithPassword(PasswordT&& value) {
    SetPassword(std::forward<PasswordT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies a user that can mount and access the files, folders, and metadata
   * in your SVM.</p> <p>For information about choosing a user with the right level
   * of access for your transfer, see <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-ontap-location.html#create-ontap-location-smb">Using
   * the SMB protocol</a>.</p>
   */
  inline const Aws::String& GetUser() const { return m_user; }
  inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
  template <typename UserT = Aws::String>
  void SetUser(UserT&& value) {
    m_userHasBeenSet = true;
    m_user = std::forward<UserT>(value);
  }
  template <typename UserT = Aws::String>
  FsxUpdateProtocolSmb& WithUser(UserT&& value) {
    SetUser(std::forward<UserT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies configuration information for a DataSync-managed secret, such as a
   * <code>Password</code> or set of credentials that DataSync uses to access a
   * specific transfer location, and a customer-managed KMS key.</p>
   */
  inline const CmkSecretConfig& GetCmkSecretConfig() const { return m_cmkSecretConfig; }
  inline bool CmkSecretConfigHasBeenSet() const { return m_cmkSecretConfigHasBeenSet; }
  template <typename CmkSecretConfigT = CmkSecretConfig>
  void SetCmkSecretConfig(CmkSecretConfigT&& value) {
    m_cmkSecretConfigHasBeenSet = true;
    m_cmkSecretConfig = std::forward<CmkSecretConfigT>(value);
  }
  template <typename CmkSecretConfigT = CmkSecretConfig>
  FsxUpdateProtocolSmb& WithCmkSecretConfig(CmkSecretConfigT&& value) {
    SetCmkSecretConfig(std::forward<CmkSecretConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies configuration information for a customer-managed secret, such as a
   * <code>Password</code> or set of credentials that DataSync uses to access a
   * specific transfer location. This configuration includes the secret ARN, and the
   * ARN for an IAM role that provides access to the secret.</p>
   */
  inline const CustomSecretConfig& GetCustomSecretConfig() const { return m_customSecretConfig; }
  inline bool CustomSecretConfigHasBeenSet() const { return m_customSecretConfigHasBeenSet; }
  template <typename CustomSecretConfigT = CustomSecretConfig>
  void SetCustomSecretConfig(CustomSecretConfigT&& value) {
    m_customSecretConfigHasBeenSet = true;
    m_customSecretConfig = std::forward<CustomSecretConfigT>(value);
  }
  template <typename CustomSecretConfigT = CustomSecretConfig>
  FsxUpdateProtocolSmb& WithCustomSecretConfig(CustomSecretConfigT&& value) {
    SetCustomSecretConfig(std::forward<CustomSecretConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domain;

  SmbMountOptions m_mountOptions;

  Aws::String m_password;

  Aws::String m_user;

  CmkSecretConfig m_cmkSecretConfig;

  CustomSecretConfig m_customSecretConfig;
  bool m_domainHasBeenSet = false;
  bool m_mountOptionsHasBeenSet = false;
  bool m_passwordHasBeenSet = false;
  bool m_userHasBeenSet = false;
  bool m_cmkSecretConfigHasBeenSet = false;
  bool m_customSecretConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
