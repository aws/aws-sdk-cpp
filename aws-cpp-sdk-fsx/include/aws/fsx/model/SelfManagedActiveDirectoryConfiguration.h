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
   * <p>The configuration that Amazon FSx uses to join a FSx for Windows File Server
   * file system or an ONTAP storage virtual machine (SVM) to a self-managed
   * (including on-premises) Microsoft Active Directory (AD) directory. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/self-managed-AD.html">
   * Using Amazon FSx with your self-managed Microsoft Active Directory</a> or <a
   * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/managing-svms.html">Managing
   * SVMs</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SelfManagedActiveDirectoryConfiguration">AWS
   * API Reference</a></p>
   */
  class SelfManagedActiveDirectoryConfiguration
  {
  public:
    AWS_FSX_API SelfManagedActiveDirectoryConfiguration();
    AWS_FSX_API SelfManagedActiveDirectoryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API SelfManagedActiveDirectoryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fully qualified domain name of the self-managed AD directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The fully qualified domain name of the self-managed AD directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The fully qualified domain name of the self-managed AD directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The fully qualified domain name of the self-managed AD directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The fully qualified domain name of the self-managed AD directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The fully qualified domain name of the self-managed AD directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline SelfManagedActiveDirectoryConfiguration& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The fully qualified domain name of the self-managed AD directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline SelfManagedActiveDirectoryConfiguration& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified domain name of the self-managed AD directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline SelfManagedActiveDirectoryConfiguration& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>(Optional) The fully qualified distinguished name of the organizational unit
     * within your self-managed AD directory. Amazon FSx only accepts OU as the direct
     * parent of the file system. An example is
     * <code>OU=FSx,DC=yourdomain,DC=corp,DC=com</code>. To learn more, see <a
     * href="https://tools.ietf.org/html/rfc2253">RFC 2253</a>. If none is provided,
     * the FSx file system is created in the default location of your self-managed AD
     * directory. </p>  <p>Only Organizational Unit (OU) objects can be the
     * direct parent of the file system that you're creating.</p> 
     */
    inline const Aws::String& GetOrganizationalUnitDistinguishedName() const{ return m_organizationalUnitDistinguishedName; }

    /**
     * <p>(Optional) The fully qualified distinguished name of the organizational unit
     * within your self-managed AD directory. Amazon FSx only accepts OU as the direct
     * parent of the file system. An example is
     * <code>OU=FSx,DC=yourdomain,DC=corp,DC=com</code>. To learn more, see <a
     * href="https://tools.ietf.org/html/rfc2253">RFC 2253</a>. If none is provided,
     * the FSx file system is created in the default location of your self-managed AD
     * directory. </p>  <p>Only Organizational Unit (OU) objects can be the
     * direct parent of the file system that you're creating.</p> 
     */
    inline bool OrganizationalUnitDistinguishedNameHasBeenSet() const { return m_organizationalUnitDistinguishedNameHasBeenSet; }

    /**
     * <p>(Optional) The fully qualified distinguished name of the organizational unit
     * within your self-managed AD directory. Amazon FSx only accepts OU as the direct
     * parent of the file system. An example is
     * <code>OU=FSx,DC=yourdomain,DC=corp,DC=com</code>. To learn more, see <a
     * href="https://tools.ietf.org/html/rfc2253">RFC 2253</a>. If none is provided,
     * the FSx file system is created in the default location of your self-managed AD
     * directory. </p>  <p>Only Organizational Unit (OU) objects can be the
     * direct parent of the file system that you're creating.</p> 
     */
    inline void SetOrganizationalUnitDistinguishedName(const Aws::String& value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName = value; }

    /**
     * <p>(Optional) The fully qualified distinguished name of the organizational unit
     * within your self-managed AD directory. Amazon FSx only accepts OU as the direct
     * parent of the file system. An example is
     * <code>OU=FSx,DC=yourdomain,DC=corp,DC=com</code>. To learn more, see <a
     * href="https://tools.ietf.org/html/rfc2253">RFC 2253</a>. If none is provided,
     * the FSx file system is created in the default location of your self-managed AD
     * directory. </p>  <p>Only Organizational Unit (OU) objects can be the
     * direct parent of the file system that you're creating.</p> 
     */
    inline void SetOrganizationalUnitDistinguishedName(Aws::String&& value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName = std::move(value); }

    /**
     * <p>(Optional) The fully qualified distinguished name of the organizational unit
     * within your self-managed AD directory. Amazon FSx only accepts OU as the direct
     * parent of the file system. An example is
     * <code>OU=FSx,DC=yourdomain,DC=corp,DC=com</code>. To learn more, see <a
     * href="https://tools.ietf.org/html/rfc2253">RFC 2253</a>. If none is provided,
     * the FSx file system is created in the default location of your self-managed AD
     * directory. </p>  <p>Only Organizational Unit (OU) objects can be the
     * direct parent of the file system that you're creating.</p> 
     */
    inline void SetOrganizationalUnitDistinguishedName(const char* value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName.assign(value); }

    /**
     * <p>(Optional) The fully qualified distinguished name of the organizational unit
     * within your self-managed AD directory. Amazon FSx only accepts OU as the direct
     * parent of the file system. An example is
     * <code>OU=FSx,DC=yourdomain,DC=corp,DC=com</code>. To learn more, see <a
     * href="https://tools.ietf.org/html/rfc2253">RFC 2253</a>. If none is provided,
     * the FSx file system is created in the default location of your self-managed AD
     * directory. </p>  <p>Only Organizational Unit (OU) objects can be the
     * direct parent of the file system that you're creating.</p> 
     */
    inline SelfManagedActiveDirectoryConfiguration& WithOrganizationalUnitDistinguishedName(const Aws::String& value) { SetOrganizationalUnitDistinguishedName(value); return *this;}

    /**
     * <p>(Optional) The fully qualified distinguished name of the organizational unit
     * within your self-managed AD directory. Amazon FSx only accepts OU as the direct
     * parent of the file system. An example is
     * <code>OU=FSx,DC=yourdomain,DC=corp,DC=com</code>. To learn more, see <a
     * href="https://tools.ietf.org/html/rfc2253">RFC 2253</a>. If none is provided,
     * the FSx file system is created in the default location of your self-managed AD
     * directory. </p>  <p>Only Organizational Unit (OU) objects can be the
     * direct parent of the file system that you're creating.</p> 
     */
    inline SelfManagedActiveDirectoryConfiguration& WithOrganizationalUnitDistinguishedName(Aws::String&& value) { SetOrganizationalUnitDistinguishedName(std::move(value)); return *this;}

    /**
     * <p>(Optional) The fully qualified distinguished name of the organizational unit
     * within your self-managed AD directory. Amazon FSx only accepts OU as the direct
     * parent of the file system. An example is
     * <code>OU=FSx,DC=yourdomain,DC=corp,DC=com</code>. To learn more, see <a
     * href="https://tools.ietf.org/html/rfc2253">RFC 2253</a>. If none is provided,
     * the FSx file system is created in the default location of your self-managed AD
     * directory. </p>  <p>Only Organizational Unit (OU) objects can be the
     * direct parent of the file system that you're creating.</p> 
     */
    inline SelfManagedActiveDirectoryConfiguration& WithOrganizationalUnitDistinguishedName(const char* value) { SetOrganizationalUnitDistinguishedName(value); return *this;}


    /**
     * <p>(Optional) The name of the domain group whose members are granted
     * administrative privileges for the file system. Administrative privileges include
     * taking ownership of files and folders, setting audit controls (audit ACLs) on
     * files and folders, and administering the file system remotely by using the FSx
     * Remote PowerShell. The group that you specify must already exist in your domain.
     * If you don't provide one, your AD domain's Domain Admins group is used.</p>
     */
    inline const Aws::String& GetFileSystemAdministratorsGroup() const{ return m_fileSystemAdministratorsGroup; }

    /**
     * <p>(Optional) The name of the domain group whose members are granted
     * administrative privileges for the file system. Administrative privileges include
     * taking ownership of files and folders, setting audit controls (audit ACLs) on
     * files and folders, and administering the file system remotely by using the FSx
     * Remote PowerShell. The group that you specify must already exist in your domain.
     * If you don't provide one, your AD domain's Domain Admins group is used.</p>
     */
    inline bool FileSystemAdministratorsGroupHasBeenSet() const { return m_fileSystemAdministratorsGroupHasBeenSet; }

    /**
     * <p>(Optional) The name of the domain group whose members are granted
     * administrative privileges for the file system. Administrative privileges include
     * taking ownership of files and folders, setting audit controls (audit ACLs) on
     * files and folders, and administering the file system remotely by using the FSx
     * Remote PowerShell. The group that you specify must already exist in your domain.
     * If you don't provide one, your AD domain's Domain Admins group is used.</p>
     */
    inline void SetFileSystemAdministratorsGroup(const Aws::String& value) { m_fileSystemAdministratorsGroupHasBeenSet = true; m_fileSystemAdministratorsGroup = value; }

    /**
     * <p>(Optional) The name of the domain group whose members are granted
     * administrative privileges for the file system. Administrative privileges include
     * taking ownership of files and folders, setting audit controls (audit ACLs) on
     * files and folders, and administering the file system remotely by using the FSx
     * Remote PowerShell. The group that you specify must already exist in your domain.
     * If you don't provide one, your AD domain's Domain Admins group is used.</p>
     */
    inline void SetFileSystemAdministratorsGroup(Aws::String&& value) { m_fileSystemAdministratorsGroupHasBeenSet = true; m_fileSystemAdministratorsGroup = std::move(value); }

    /**
     * <p>(Optional) The name of the domain group whose members are granted
     * administrative privileges for the file system. Administrative privileges include
     * taking ownership of files and folders, setting audit controls (audit ACLs) on
     * files and folders, and administering the file system remotely by using the FSx
     * Remote PowerShell. The group that you specify must already exist in your domain.
     * If you don't provide one, your AD domain's Domain Admins group is used.</p>
     */
    inline void SetFileSystemAdministratorsGroup(const char* value) { m_fileSystemAdministratorsGroupHasBeenSet = true; m_fileSystemAdministratorsGroup.assign(value); }

    /**
     * <p>(Optional) The name of the domain group whose members are granted
     * administrative privileges for the file system. Administrative privileges include
     * taking ownership of files and folders, setting audit controls (audit ACLs) on
     * files and folders, and administering the file system remotely by using the FSx
     * Remote PowerShell. The group that you specify must already exist in your domain.
     * If you don't provide one, your AD domain's Domain Admins group is used.</p>
     */
    inline SelfManagedActiveDirectoryConfiguration& WithFileSystemAdministratorsGroup(const Aws::String& value) { SetFileSystemAdministratorsGroup(value); return *this;}

    /**
     * <p>(Optional) The name of the domain group whose members are granted
     * administrative privileges for the file system. Administrative privileges include
     * taking ownership of files and folders, setting audit controls (audit ACLs) on
     * files and folders, and administering the file system remotely by using the FSx
     * Remote PowerShell. The group that you specify must already exist in your domain.
     * If you don't provide one, your AD domain's Domain Admins group is used.</p>
     */
    inline SelfManagedActiveDirectoryConfiguration& WithFileSystemAdministratorsGroup(Aws::String&& value) { SetFileSystemAdministratorsGroup(std::move(value)); return *this;}

    /**
     * <p>(Optional) The name of the domain group whose members are granted
     * administrative privileges for the file system. Administrative privileges include
     * taking ownership of files and folders, setting audit controls (audit ACLs) on
     * files and folders, and administering the file system remotely by using the FSx
     * Remote PowerShell. The group that you specify must already exist in your domain.
     * If you don't provide one, your AD domain's Domain Admins group is used.</p>
     */
    inline SelfManagedActiveDirectoryConfiguration& WithFileSystemAdministratorsGroup(const char* value) { SetFileSystemAdministratorsGroup(value); return *this;}


    /**
     * <p>The user name for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain. This account must have the
     * permission to join computers to the domain in the organizational unit provided
     * in <code>OrganizationalUnitDistinguishedName</code>, or in the default location
     * of your AD domain.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The user name for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain. This account must have the
     * permission to join computers to the domain in the organizational unit provided
     * in <code>OrganizationalUnitDistinguishedName</code>, or in the default location
     * of your AD domain.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The user name for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain. This account must have the
     * permission to join computers to the domain in the organizational unit provided
     * in <code>OrganizationalUnitDistinguishedName</code>, or in the default location
     * of your AD domain.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The user name for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain. This account must have the
     * permission to join computers to the domain in the organizational unit provided
     * in <code>OrganizationalUnitDistinguishedName</code>, or in the default location
     * of your AD domain.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The user name for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain. This account must have the
     * permission to join computers to the domain in the organizational unit provided
     * in <code>OrganizationalUnitDistinguishedName</code>, or in the default location
     * of your AD domain.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The user name for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain. This account must have the
     * permission to join computers to the domain in the organizational unit provided
     * in <code>OrganizationalUnitDistinguishedName</code>, or in the default location
     * of your AD domain.</p>
     */
    inline SelfManagedActiveDirectoryConfiguration& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The user name for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain. This account must have the
     * permission to join computers to the domain in the organizational unit provided
     * in <code>OrganizationalUnitDistinguishedName</code>, or in the default location
     * of your AD domain.</p>
     */
    inline SelfManagedActiveDirectoryConfiguration& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The user name for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain. This account must have the
     * permission to join computers to the domain in the organizational unit provided
     * in <code>OrganizationalUnitDistinguishedName</code>, or in the default location
     * of your AD domain.</p>
     */
    inline SelfManagedActiveDirectoryConfiguration& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The password for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The password for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The password for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain.</p>
     */
    inline SelfManagedActiveDirectoryConfiguration& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain.</p>
     */
    inline SelfManagedActiveDirectoryConfiguration& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain.</p>
     */
    inline SelfManagedActiveDirectoryConfiguration& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>A list of up to three IP addresses of DNS servers or domain controllers in
     * the self-managed AD directory. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIps() const{ return m_dnsIps; }

    /**
     * <p>A list of up to three IP addresses of DNS servers or domain controllers in
     * the self-managed AD directory. </p>
     */
    inline bool DnsIpsHasBeenSet() const { return m_dnsIpsHasBeenSet; }

    /**
     * <p>A list of up to three IP addresses of DNS servers or domain controllers in
     * the self-managed AD directory. </p>
     */
    inline void SetDnsIps(const Aws::Vector<Aws::String>& value) { m_dnsIpsHasBeenSet = true; m_dnsIps = value; }

    /**
     * <p>A list of up to three IP addresses of DNS servers or domain controllers in
     * the self-managed AD directory. </p>
     */
    inline void SetDnsIps(Aws::Vector<Aws::String>&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps = std::move(value); }

    /**
     * <p>A list of up to three IP addresses of DNS servers or domain controllers in
     * the self-managed AD directory. </p>
     */
    inline SelfManagedActiveDirectoryConfiguration& WithDnsIps(const Aws::Vector<Aws::String>& value) { SetDnsIps(value); return *this;}

    /**
     * <p>A list of up to three IP addresses of DNS servers or domain controllers in
     * the self-managed AD directory. </p>
     */
    inline SelfManagedActiveDirectoryConfiguration& WithDnsIps(Aws::Vector<Aws::String>&& value) { SetDnsIps(std::move(value)); return *this;}

    /**
     * <p>A list of up to three IP addresses of DNS servers or domain controllers in
     * the self-managed AD directory. </p>
     */
    inline SelfManagedActiveDirectoryConfiguration& AddDnsIps(const Aws::String& value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(value); return *this; }

    /**
     * <p>A list of up to three IP addresses of DNS servers or domain controllers in
     * the self-managed AD directory. </p>
     */
    inline SelfManagedActiveDirectoryConfiguration& AddDnsIps(Aws::String&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of up to three IP addresses of DNS servers or domain controllers in
     * the self-managed AD directory. </p>
     */
    inline SelfManagedActiveDirectoryConfiguration& AddDnsIps(const char* value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(value); return *this; }

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_organizationalUnitDistinguishedName;
    bool m_organizationalUnitDistinguishedNameHasBeenSet = false;

    Aws::String m_fileSystemAdministratorsGroup;
    bool m_fileSystemAdministratorsGroupHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsIps;
    bool m_dnsIpsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
