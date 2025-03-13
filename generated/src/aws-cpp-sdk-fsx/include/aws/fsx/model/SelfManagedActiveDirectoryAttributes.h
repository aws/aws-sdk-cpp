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
   * <p>The configuration of the self-managed Microsoft Active Directory (AD)
   * directory to which the Windows File Server or ONTAP storage virtual machine
   * (SVM) instance is joined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SelfManagedActiveDirectoryAttributes">AWS
   * API Reference</a></p>
   */
  class SelfManagedActiveDirectoryAttributes
  {
  public:
    AWS_FSX_API SelfManagedActiveDirectoryAttributes() = default;
    AWS_FSX_API SelfManagedActiveDirectoryAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API SelfManagedActiveDirectoryAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fully qualified domain name of the self-managed AD directory.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    SelfManagedActiveDirectoryAttributes& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified distinguished name of the organizational unit within the
     * self-managed AD directory to which the Windows File Server or ONTAP storage
     * virtual machine (SVM) instance is joined.</p>
     */
    inline const Aws::String& GetOrganizationalUnitDistinguishedName() const { return m_organizationalUnitDistinguishedName; }
    inline bool OrganizationalUnitDistinguishedNameHasBeenSet() const { return m_organizationalUnitDistinguishedNameHasBeenSet; }
    template<typename OrganizationalUnitDistinguishedNameT = Aws::String>
    void SetOrganizationalUnitDistinguishedName(OrganizationalUnitDistinguishedNameT&& value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName = std::forward<OrganizationalUnitDistinguishedNameT>(value); }
    template<typename OrganizationalUnitDistinguishedNameT = Aws::String>
    SelfManagedActiveDirectoryAttributes& WithOrganizationalUnitDistinguishedName(OrganizationalUnitDistinguishedNameT&& value) { SetOrganizationalUnitDistinguishedName(std::forward<OrganizationalUnitDistinguishedNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain group whose members have administrative privileges for
     * the FSx file system.</p>
     */
    inline const Aws::String& GetFileSystemAdministratorsGroup() const { return m_fileSystemAdministratorsGroup; }
    inline bool FileSystemAdministratorsGroupHasBeenSet() const { return m_fileSystemAdministratorsGroupHasBeenSet; }
    template<typename FileSystemAdministratorsGroupT = Aws::String>
    void SetFileSystemAdministratorsGroup(FileSystemAdministratorsGroupT&& value) { m_fileSystemAdministratorsGroupHasBeenSet = true; m_fileSystemAdministratorsGroup = std::forward<FileSystemAdministratorsGroupT>(value); }
    template<typename FileSystemAdministratorsGroupT = Aws::String>
    SelfManagedActiveDirectoryAttributes& WithFileSystemAdministratorsGroup(FileSystemAdministratorsGroupT&& value) { SetFileSystemAdministratorsGroup(std::forward<FileSystemAdministratorsGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name for the service account on your self-managed AD domain that FSx
     * uses to join to your AD domain.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    SelfManagedActiveDirectoryAttributes& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to three IP addresses of DNS servers or domain controllers in
     * the self-managed AD directory.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIps() const { return m_dnsIps; }
    inline bool DnsIpsHasBeenSet() const { return m_dnsIpsHasBeenSet; }
    template<typename DnsIpsT = Aws::Vector<Aws::String>>
    void SetDnsIps(DnsIpsT&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps = std::forward<DnsIpsT>(value); }
    template<typename DnsIpsT = Aws::Vector<Aws::String>>
    SelfManagedActiveDirectoryAttributes& WithDnsIps(DnsIpsT&& value) { SetDnsIps(std::forward<DnsIpsT>(value)); return *this;}
    template<typename DnsIpsT = Aws::String>
    SelfManagedActiveDirectoryAttributes& AddDnsIps(DnsIpsT&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps.emplace_back(std::forward<DnsIpsT>(value)); return *this; }
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

    Aws::Vector<Aws::String> m_dnsIps;
    bool m_dnsIpsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
