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
   * file system or an FSx for ONTAP storage virtual machine (SVM) to a self-managed
   * (including on-premises) Microsoft Active Directory (AD) directory. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/self-managed-AD.html">
   * Using Amazon FSx for Windows with your self-managed Microsoft Active
   * Directory</a> or <a
   * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/managing-svms.html">Managing
   * FSx for ONTAP SVMs</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SelfManagedActiveDirectoryConfiguration">AWS
   * API Reference</a></p>
   */
  class SelfManagedActiveDirectoryConfiguration
  {
  public:
    AWS_FSX_API SelfManagedActiveDirectoryConfiguration() = default;
    AWS_FSX_API SelfManagedActiveDirectoryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API SelfManagedActiveDirectoryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fully qualified domain name of the self-managed AD directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    SelfManagedActiveDirectoryConfiguration& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetOrganizationalUnitDistinguishedName() const { return m_organizationalUnitDistinguishedName; }
    inline bool OrganizationalUnitDistinguishedNameHasBeenSet() const { return m_organizationalUnitDistinguishedNameHasBeenSet; }
    template<typename OrganizationalUnitDistinguishedNameT = Aws::String>
    void SetOrganizationalUnitDistinguishedName(OrganizationalUnitDistinguishedNameT&& value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName = std::forward<OrganizationalUnitDistinguishedNameT>(value); }
    template<typename OrganizationalUnitDistinguishedNameT = Aws::String>
    SelfManagedActiveDirectoryConfiguration& WithOrganizationalUnitDistinguishedName(OrganizationalUnitDistinguishedNameT&& value) { SetOrganizationalUnitDistinguishedName(std::forward<OrganizationalUnitDistinguishedNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The name of the domain group whose members are granted
     * administrative privileges for the file system. Administrative privileges include
     * taking ownership of files and folders, setting audit controls (audit ACLs) on
     * files and folders, and administering the file system remotely by using the FSx
     * Remote PowerShell. The group that you specify must already exist in your domain.
     * If you don't provide one, your AD domain's Domain Admins group is used.</p>
     */
    inline const Aws::String& GetFileSystemAdministratorsGroup() const { return m_fileSystemAdministratorsGroup; }
    inline bool FileSystemAdministratorsGroupHasBeenSet() const { return m_fileSystemAdministratorsGroupHasBeenSet; }
    template<typename FileSystemAdministratorsGroupT = Aws::String>
    void SetFileSystemAdministratorsGroup(FileSystemAdministratorsGroupT&& value) { m_fileSystemAdministratorsGroupHasBeenSet = true; m_fileSystemAdministratorsGroup = std::forward<FileSystemAdministratorsGroupT>(value); }
    template<typename FileSystemAdministratorsGroupT = Aws::String>
    SelfManagedActiveDirectoryConfiguration& WithFileSystemAdministratorsGroup(FileSystemAdministratorsGroupT&& value) { SetFileSystemAdministratorsGroup(std::forward<FileSystemAdministratorsGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain. This account must have the
     * permission to join computers to the domain in the organizational unit provided
     * in <code>OrganizationalUnitDistinguishedName</code>, or in the default location
     * of your AD domain.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    SelfManagedActiveDirectoryConfiguration& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain.</p>
     */
    inline const Aws::String& GetPassword() const { return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    template<typename PasswordT = Aws::String>
    void SetPassword(PasswordT&& value) { m_passwordHasBeenSet = true; m_password = std::forward<PasswordT>(value); }
    template<typename PasswordT = Aws::String>
    SelfManagedActiveDirectoryConfiguration& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to three IP addresses of DNS servers or domain controllers in
     * the self-managed AD directory. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIps() const { return m_dnsIps; }
    inline bool DnsIpsHasBeenSet() const { return m_dnsIpsHasBeenSet; }
    template<typename DnsIpsT = Aws::Vector<Aws::String>>
    void SetDnsIps(DnsIpsT&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps = std::forward<DnsIpsT>(value); }
    template<typename DnsIpsT = Aws::Vector<Aws::String>>
    SelfManagedActiveDirectoryConfiguration& WithDnsIps(DnsIpsT&& value) { SetDnsIps(std::forward<DnsIpsT>(value)); return *this;}
    template<typename DnsIpsT = Aws::String>
    SelfManagedActiveDirectoryConfiguration& AddDnsIps(DnsIpsT&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps.emplace_back(std::forward<DnsIpsT>(value)); return *this; }
    ///@}
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
