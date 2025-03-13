/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FSx
{
namespace Model
{

  /**
   * <p>Specifies changes you are making to the self-managed Microsoft Active
   * Directory configuration to which an FSx for Windows File Server file system or
   * an FSx for ONTAP SVM is joined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SelfManagedActiveDirectoryConfigurationUpdates">AWS
   * API Reference</a></p>
   */
  class SelfManagedActiveDirectoryConfigurationUpdates
  {
  public:
    AWS_FSX_API SelfManagedActiveDirectoryConfigurationUpdates() = default;
    AWS_FSX_API SelfManagedActiveDirectoryConfigurationUpdates(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API SelfManagedActiveDirectoryConfigurationUpdates& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the updated user name for the service account on your self-managed
     * Active Directory domain. Amazon FSx uses this account to join to your
     * self-managed Active Directory domain.</p> <p>This account must have the
     * permissions required to join computers to the domain in the organizational unit
     * provided in <code>OrganizationalUnitDistinguishedName</code>.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    SelfManagedActiveDirectoryConfigurationUpdates& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the updated password for the service account on your self-managed
     * Active Directory domain. Amazon FSx uses this account to join to your
     * self-managed Active Directory domain.</p>
     */
    inline const Aws::String& GetPassword() const { return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    template<typename PasswordT = Aws::String>
    void SetPassword(PasswordT&& value) { m_passwordHasBeenSet = true; m_password = std::forward<PasswordT>(value); }
    template<typename PasswordT = Aws::String>
    SelfManagedActiveDirectoryConfigurationUpdates& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to three DNS server or domain controller IP addresses in your
     * self-managed Active Directory domain.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIps() const { return m_dnsIps; }
    inline bool DnsIpsHasBeenSet() const { return m_dnsIpsHasBeenSet; }
    template<typename DnsIpsT = Aws::Vector<Aws::String>>
    void SetDnsIps(DnsIpsT&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps = std::forward<DnsIpsT>(value); }
    template<typename DnsIpsT = Aws::Vector<Aws::String>>
    SelfManagedActiveDirectoryConfigurationUpdates& WithDnsIps(DnsIpsT&& value) { SetDnsIps(std::forward<DnsIpsT>(value)); return *this;}
    template<typename DnsIpsT = Aws::String>
    SelfManagedActiveDirectoryConfigurationUpdates& AddDnsIps(DnsIpsT&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps.emplace_back(std::forward<DnsIpsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies an updated fully qualified domain name of your self-managed Active
     * Directory configuration.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    SelfManagedActiveDirectoryConfigurationUpdates& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an updated fully qualified distinguished name of the organization
     * unit within your self-managed Active Directory.</p>
     */
    inline const Aws::String& GetOrganizationalUnitDistinguishedName() const { return m_organizationalUnitDistinguishedName; }
    inline bool OrganizationalUnitDistinguishedNameHasBeenSet() const { return m_organizationalUnitDistinguishedNameHasBeenSet; }
    template<typename OrganizationalUnitDistinguishedNameT = Aws::String>
    void SetOrganizationalUnitDistinguishedName(OrganizationalUnitDistinguishedNameT&& value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName = std::forward<OrganizationalUnitDistinguishedNameT>(value); }
    template<typename OrganizationalUnitDistinguishedNameT = Aws::String>
    SelfManagedActiveDirectoryConfigurationUpdates& WithOrganizationalUnitDistinguishedName(OrganizationalUnitDistinguishedNameT&& value) { SetOrganizationalUnitDistinguishedName(std::forward<OrganizationalUnitDistinguishedNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For FSx for ONTAP file systems only - Specifies the updated name of the
     * self-managed Active Directory domain group whose members are granted
     * administrative privileges for the Amazon FSx resource.</p>
     */
    inline const Aws::String& GetFileSystemAdministratorsGroup() const { return m_fileSystemAdministratorsGroup; }
    inline bool FileSystemAdministratorsGroupHasBeenSet() const { return m_fileSystemAdministratorsGroupHasBeenSet; }
    template<typename FileSystemAdministratorsGroupT = Aws::String>
    void SetFileSystemAdministratorsGroup(FileSystemAdministratorsGroupT&& value) { m_fileSystemAdministratorsGroupHasBeenSet = true; m_fileSystemAdministratorsGroup = std::forward<FileSystemAdministratorsGroupT>(value); }
    template<typename FileSystemAdministratorsGroupT = Aws::String>
    SelfManagedActiveDirectoryConfigurationUpdates& WithFileSystemAdministratorsGroup(FileSystemAdministratorsGroupT&& value) { SetFileSystemAdministratorsGroup(std::forward<FileSystemAdministratorsGroupT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsIps;
    bool m_dnsIpsHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_organizationalUnitDistinguishedName;
    bool m_organizationalUnitDistinguishedNameHasBeenSet = false;

    Aws::String m_fileSystemAdministratorsGroup;
    bool m_fileSystemAdministratorsGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
