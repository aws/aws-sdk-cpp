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
   * Directory (AD) configuration to which an FSx for Windows File Server file system
   * or an FSx for ONTAP SVM is joined.</p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>Specifies the updated user name for the service account on your self-managed
     * AD domain. Amazon FSx uses this account to join to your self-managed AD
     * domain.</p> <p>This account must have the permissions required to join computers
     * to the domain in the organizational unit provided in
     * <code>OrganizationalUnitDistinguishedName</code>.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>Specifies the updated user name for the service account on your self-managed
     * AD domain. Amazon FSx uses this account to join to your self-managed AD
     * domain.</p> <p>This account must have the permissions required to join computers
     * to the domain in the organizational unit provided in
     * <code>OrganizationalUnitDistinguishedName</code>.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>Specifies the updated user name for the service account on your self-managed
     * AD domain. Amazon FSx uses this account to join to your self-managed AD
     * domain.</p> <p>This account must have the permissions required to join computers
     * to the domain in the organizational unit provided in
     * <code>OrganizationalUnitDistinguishedName</code>.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>Specifies the updated user name for the service account on your self-managed
     * AD domain. Amazon FSx uses this account to join to your self-managed AD
     * domain.</p> <p>This account must have the permissions required to join computers
     * to the domain in the organizational unit provided in
     * <code>OrganizationalUnitDistinguishedName</code>.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>Specifies the updated user name for the service account on your self-managed
     * AD domain. Amazon FSx uses this account to join to your self-managed AD
     * domain.</p> <p>This account must have the permissions required to join computers
     * to the domain in the organizational unit provided in
     * <code>OrganizationalUnitDistinguishedName</code>.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>Specifies the updated user name for the service account on your self-managed
     * AD domain. Amazon FSx uses this account to join to your self-managed AD
     * domain.</p> <p>This account must have the permissions required to join computers
     * to the domain in the organizational unit provided in
     * <code>OrganizationalUnitDistinguishedName</code>.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>Specifies the updated user name for the service account on your self-managed
     * AD domain. Amazon FSx uses this account to join to your self-managed AD
     * domain.</p> <p>This account must have the permissions required to join computers
     * to the domain in the organizational unit provided in
     * <code>OrganizationalUnitDistinguishedName</code>.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>Specifies the updated user name for the service account on your self-managed
     * AD domain. Amazon FSx uses this account to join to your self-managed AD
     * domain.</p> <p>This account must have the permissions required to join computers
     * to the domain in the organizational unit provided in
     * <code>OrganizationalUnitDistinguishedName</code>.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>Specifies the updated password for the service account on your self-managed
     * AD domain. Amazon FSx uses this account to join to your self-managed AD
     * domain.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>Specifies the updated password for the service account on your self-managed
     * AD domain. Amazon FSx uses this account to join to your self-managed AD
     * domain.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>Specifies the updated password for the service account on your self-managed
     * AD domain. Amazon FSx uses this account to join to your self-managed AD
     * domain.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>Specifies the updated password for the service account on your self-managed
     * AD domain. Amazon FSx uses this account to join to your self-managed AD
     * domain.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>Specifies the updated password for the service account on your self-managed
     * AD domain. Amazon FSx uses this account to join to your self-managed AD
     * domain.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>Specifies the updated password for the service account on your self-managed
     * AD domain. Amazon FSx uses this account to join to your self-managed AD
     * domain.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>Specifies the updated password for the service account on your self-managed
     * AD domain. Amazon FSx uses this account to join to your self-managed AD
     * domain.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>Specifies the updated password for the service account on your self-managed
     * AD domain. Amazon FSx uses this account to join to your self-managed AD
     * domain.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>A list of up to three DNS server or domain controller IP addresses in your
     * self-managed AD domain.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIps() const{ return m_dnsIps; }

    /**
     * <p>A list of up to three DNS server or domain controller IP addresses in your
     * self-managed AD domain.</p>
     */
    inline bool DnsIpsHasBeenSet() const { return m_dnsIpsHasBeenSet; }

    /**
     * <p>A list of up to three DNS server or domain controller IP addresses in your
     * self-managed AD domain.</p>
     */
    inline void SetDnsIps(const Aws::Vector<Aws::String>& value) { m_dnsIpsHasBeenSet = true; m_dnsIps = value; }

    /**
     * <p>A list of up to three DNS server or domain controller IP addresses in your
     * self-managed AD domain.</p>
     */
    inline void SetDnsIps(Aws::Vector<Aws::String>&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps = std::move(value); }

    /**
     * <p>A list of up to three DNS server or domain controller IP addresses in your
     * self-managed AD domain.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithDnsIps(const Aws::Vector<Aws::String>& value) { SetDnsIps(value); return *this;}

    /**
     * <p>A list of up to three DNS server or domain controller IP addresses in your
     * self-managed AD domain.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithDnsIps(Aws::Vector<Aws::String>&& value) { SetDnsIps(std::move(value)); return *this;}

    /**
     * <p>A list of up to three DNS server or domain controller IP addresses in your
     * self-managed AD domain.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& AddDnsIps(const Aws::String& value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(value); return *this; }

    /**
     * <p>A list of up to three DNS server or domain controller IP addresses in your
     * self-managed AD domain.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& AddDnsIps(Aws::String&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of up to three DNS server or domain controller IP addresses in your
     * self-managed AD domain.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& AddDnsIps(const char* value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(value); return *this; }


    /**
     * <p>Specifies an updated fully qualified domain name of your self-managed AD
     * configuration.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>Specifies an updated fully qualified domain name of your self-managed AD
     * configuration.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>Specifies an updated fully qualified domain name of your self-managed AD
     * configuration.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>Specifies an updated fully qualified domain name of your self-managed AD
     * configuration.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>Specifies an updated fully qualified domain name of your self-managed AD
     * configuration.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>Specifies an updated fully qualified domain name of your self-managed AD
     * configuration.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>Specifies an updated fully qualified domain name of your self-managed AD
     * configuration.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>Specifies an updated fully qualified domain name of your self-managed AD
     * configuration.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Specifies an updated fully qualified distinguished name of the organization
     * unit within your self-managed AD.</p>
     */
    inline const Aws::String& GetOrganizationalUnitDistinguishedName() const{ return m_organizationalUnitDistinguishedName; }

    /**
     * <p>Specifies an updated fully qualified distinguished name of the organization
     * unit within your self-managed AD.</p>
     */
    inline bool OrganizationalUnitDistinguishedNameHasBeenSet() const { return m_organizationalUnitDistinguishedNameHasBeenSet; }

    /**
     * <p>Specifies an updated fully qualified distinguished name of the organization
     * unit within your self-managed AD.</p>
     */
    inline void SetOrganizationalUnitDistinguishedName(const Aws::String& value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName = value; }

    /**
     * <p>Specifies an updated fully qualified distinguished name of the organization
     * unit within your self-managed AD.</p>
     */
    inline void SetOrganizationalUnitDistinguishedName(Aws::String&& value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName = std::move(value); }

    /**
     * <p>Specifies an updated fully qualified distinguished name of the organization
     * unit within your self-managed AD.</p>
     */
    inline void SetOrganizationalUnitDistinguishedName(const char* value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName.assign(value); }

    /**
     * <p>Specifies an updated fully qualified distinguished name of the organization
     * unit within your self-managed AD.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithOrganizationalUnitDistinguishedName(const Aws::String& value) { SetOrganizationalUnitDistinguishedName(value); return *this;}

    /**
     * <p>Specifies an updated fully qualified distinguished name of the organization
     * unit within your self-managed AD.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithOrganizationalUnitDistinguishedName(Aws::String&& value) { SetOrganizationalUnitDistinguishedName(std::move(value)); return *this;}

    /**
     * <p>Specifies an updated fully qualified distinguished name of the organization
     * unit within your self-managed AD.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithOrganizationalUnitDistinguishedName(const char* value) { SetOrganizationalUnitDistinguishedName(value); return *this;}


    /**
     * <p>Specifies the updated name of the self-managed AD domain group whose members
     * are granted administrative privileges for the Amazon FSx resource.</p>
     */
    inline const Aws::String& GetFileSystemAdministratorsGroup() const{ return m_fileSystemAdministratorsGroup; }

    /**
     * <p>Specifies the updated name of the self-managed AD domain group whose members
     * are granted administrative privileges for the Amazon FSx resource.</p>
     */
    inline bool FileSystemAdministratorsGroupHasBeenSet() const { return m_fileSystemAdministratorsGroupHasBeenSet; }

    /**
     * <p>Specifies the updated name of the self-managed AD domain group whose members
     * are granted administrative privileges for the Amazon FSx resource.</p>
     */
    inline void SetFileSystemAdministratorsGroup(const Aws::String& value) { m_fileSystemAdministratorsGroupHasBeenSet = true; m_fileSystemAdministratorsGroup = value; }

    /**
     * <p>Specifies the updated name of the self-managed AD domain group whose members
     * are granted administrative privileges for the Amazon FSx resource.</p>
     */
    inline void SetFileSystemAdministratorsGroup(Aws::String&& value) { m_fileSystemAdministratorsGroupHasBeenSet = true; m_fileSystemAdministratorsGroup = std::move(value); }

    /**
     * <p>Specifies the updated name of the self-managed AD domain group whose members
     * are granted administrative privileges for the Amazon FSx resource.</p>
     */
    inline void SetFileSystemAdministratorsGroup(const char* value) { m_fileSystemAdministratorsGroupHasBeenSet = true; m_fileSystemAdministratorsGroup.assign(value); }

    /**
     * <p>Specifies the updated name of the self-managed AD domain group whose members
     * are granted administrative privileges for the Amazon FSx resource.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithFileSystemAdministratorsGroup(const Aws::String& value) { SetFileSystemAdministratorsGroup(value); return *this;}

    /**
     * <p>Specifies the updated name of the self-managed AD domain group whose members
     * are granted administrative privileges for the Amazon FSx resource.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithFileSystemAdministratorsGroup(Aws::String&& value) { SetFileSystemAdministratorsGroup(std::move(value)); return *this;}

    /**
     * <p>Specifies the updated name of the self-managed AD domain group whose members
     * are granted administrative privileges for the Amazon FSx resource.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithFileSystemAdministratorsGroup(const char* value) { SetFileSystemAdministratorsGroup(value); return *this;}

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
