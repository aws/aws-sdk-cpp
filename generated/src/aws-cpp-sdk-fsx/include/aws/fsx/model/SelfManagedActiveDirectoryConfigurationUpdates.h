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
    AWS_FSX_API SelfManagedActiveDirectoryConfigurationUpdates();
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
    inline const Aws::String& GetUserName() const{ return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithUserName(const char* value) { SetUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the updated password for the service account on your self-managed
     * Active Directory domain. Amazon FSx uses this account to join to your
     * self-managed Active Directory domain.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithPassword(const char* value) { SetPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to three DNS server or domain controller IP addresses in your
     * self-managed Active Directory domain.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIps() const{ return m_dnsIps; }
    inline bool DnsIpsHasBeenSet() const { return m_dnsIpsHasBeenSet; }
    inline void SetDnsIps(const Aws::Vector<Aws::String>& value) { m_dnsIpsHasBeenSet = true; m_dnsIps = value; }
    inline void SetDnsIps(Aws::Vector<Aws::String>&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps = std::move(value); }
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithDnsIps(const Aws::Vector<Aws::String>& value) { SetDnsIps(value); return *this;}
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithDnsIps(Aws::Vector<Aws::String>&& value) { SetDnsIps(std::move(value)); return *this;}
    inline SelfManagedActiveDirectoryConfigurationUpdates& AddDnsIps(const Aws::String& value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(value); return *this; }
    inline SelfManagedActiveDirectoryConfigurationUpdates& AddDnsIps(Aws::String&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(std::move(value)); return *this; }
    inline SelfManagedActiveDirectoryConfigurationUpdates& AddDnsIps(const char* value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies an updated fully qualified domain name of your self-managed Active
     * Directory configuration.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an updated fully qualified distinguished name of the organization
     * unit within your self-managed Active Directory.</p>
     */
    inline const Aws::String& GetOrganizationalUnitDistinguishedName() const{ return m_organizationalUnitDistinguishedName; }
    inline bool OrganizationalUnitDistinguishedNameHasBeenSet() const { return m_organizationalUnitDistinguishedNameHasBeenSet; }
    inline void SetOrganizationalUnitDistinguishedName(const Aws::String& value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName = value; }
    inline void SetOrganizationalUnitDistinguishedName(Aws::String&& value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName = std::move(value); }
    inline void SetOrganizationalUnitDistinguishedName(const char* value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName.assign(value); }
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithOrganizationalUnitDistinguishedName(const Aws::String& value) { SetOrganizationalUnitDistinguishedName(value); return *this;}
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithOrganizationalUnitDistinguishedName(Aws::String&& value) { SetOrganizationalUnitDistinguishedName(std::move(value)); return *this;}
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithOrganizationalUnitDistinguishedName(const char* value) { SetOrganizationalUnitDistinguishedName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For FSx for ONTAP file systems only - Specifies the updated name of the
     * self-managed Active Directory domain group whose members are granted
     * administrative privileges for the Amazon FSx resource.</p>
     */
    inline const Aws::String& GetFileSystemAdministratorsGroup() const{ return m_fileSystemAdministratorsGroup; }
    inline bool FileSystemAdministratorsGroupHasBeenSet() const { return m_fileSystemAdministratorsGroupHasBeenSet; }
    inline void SetFileSystemAdministratorsGroup(const Aws::String& value) { m_fileSystemAdministratorsGroupHasBeenSet = true; m_fileSystemAdministratorsGroup = value; }
    inline void SetFileSystemAdministratorsGroup(Aws::String&& value) { m_fileSystemAdministratorsGroupHasBeenSet = true; m_fileSystemAdministratorsGroup = std::move(value); }
    inline void SetFileSystemAdministratorsGroup(const char* value) { m_fileSystemAdministratorsGroupHasBeenSet = true; m_fileSystemAdministratorsGroup.assign(value); }
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithFileSystemAdministratorsGroup(const Aws::String& value) { SetFileSystemAdministratorsGroup(value); return *this;}
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithFileSystemAdministratorsGroup(Aws::String&& value) { SetFileSystemAdministratorsGroup(std::move(value)); return *this;}
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithFileSystemAdministratorsGroup(const char* value) { SetFileSystemAdministratorsGroup(value); return *this;}
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
