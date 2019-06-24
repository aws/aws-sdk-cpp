/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * directory to which the Windows File Server instance is joined.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SelfManagedActiveDirectoryAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API SelfManagedActiveDirectoryAttributes
  {
  public:
    SelfManagedActiveDirectoryAttributes();
    SelfManagedActiveDirectoryAttributes(Aws::Utils::Json::JsonView jsonValue);
    SelfManagedActiveDirectoryAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fully qualified domain name of the self-managed AD directory.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The fully qualified domain name of the self-managed AD directory.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The fully qualified domain name of the self-managed AD directory.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The fully qualified domain name of the self-managed AD directory.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The fully qualified domain name of the self-managed AD directory.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The fully qualified domain name of the self-managed AD directory.</p>
     */
    inline SelfManagedActiveDirectoryAttributes& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The fully qualified domain name of the self-managed AD directory.</p>
     */
    inline SelfManagedActiveDirectoryAttributes& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified domain name of the self-managed AD directory.</p>
     */
    inline SelfManagedActiveDirectoryAttributes& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The fully qualified distinguished name of the organizational unit within the
     * self-managed AD directory to which the Windows File Server instance is
     * joined.</p>
     */
    inline const Aws::String& GetOrganizationalUnitDistinguishedName() const{ return m_organizationalUnitDistinguishedName; }

    /**
     * <p>The fully qualified distinguished name of the organizational unit within the
     * self-managed AD directory to which the Windows File Server instance is
     * joined.</p>
     */
    inline bool OrganizationalUnitDistinguishedNameHasBeenSet() const { return m_organizationalUnitDistinguishedNameHasBeenSet; }

    /**
     * <p>The fully qualified distinguished name of the organizational unit within the
     * self-managed AD directory to which the Windows File Server instance is
     * joined.</p>
     */
    inline void SetOrganizationalUnitDistinguishedName(const Aws::String& value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName = value; }

    /**
     * <p>The fully qualified distinguished name of the organizational unit within the
     * self-managed AD directory to which the Windows File Server instance is
     * joined.</p>
     */
    inline void SetOrganizationalUnitDistinguishedName(Aws::String&& value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName = std::move(value); }

    /**
     * <p>The fully qualified distinguished name of the organizational unit within the
     * self-managed AD directory to which the Windows File Server instance is
     * joined.</p>
     */
    inline void SetOrganizationalUnitDistinguishedName(const char* value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName.assign(value); }

    /**
     * <p>The fully qualified distinguished name of the organizational unit within the
     * self-managed AD directory to which the Windows File Server instance is
     * joined.</p>
     */
    inline SelfManagedActiveDirectoryAttributes& WithOrganizationalUnitDistinguishedName(const Aws::String& value) { SetOrganizationalUnitDistinguishedName(value); return *this;}

    /**
     * <p>The fully qualified distinguished name of the organizational unit within the
     * self-managed AD directory to which the Windows File Server instance is
     * joined.</p>
     */
    inline SelfManagedActiveDirectoryAttributes& WithOrganizationalUnitDistinguishedName(Aws::String&& value) { SetOrganizationalUnitDistinguishedName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified distinguished name of the organizational unit within the
     * self-managed AD directory to which the Windows File Server instance is
     * joined.</p>
     */
    inline SelfManagedActiveDirectoryAttributes& WithOrganizationalUnitDistinguishedName(const char* value) { SetOrganizationalUnitDistinguishedName(value); return *this;}


    /**
     * <p>The name of the domain group whose members have administrative privileges for
     * the FSx file system.</p>
     */
    inline const Aws::String& GetFileSystemAdministratorsGroup() const{ return m_fileSystemAdministratorsGroup; }

    /**
     * <p>The name of the domain group whose members have administrative privileges for
     * the FSx file system.</p>
     */
    inline bool FileSystemAdministratorsGroupHasBeenSet() const { return m_fileSystemAdministratorsGroupHasBeenSet; }

    /**
     * <p>The name of the domain group whose members have administrative privileges for
     * the FSx file system.</p>
     */
    inline void SetFileSystemAdministratorsGroup(const Aws::String& value) { m_fileSystemAdministratorsGroupHasBeenSet = true; m_fileSystemAdministratorsGroup = value; }

    /**
     * <p>The name of the domain group whose members have administrative privileges for
     * the FSx file system.</p>
     */
    inline void SetFileSystemAdministratorsGroup(Aws::String&& value) { m_fileSystemAdministratorsGroupHasBeenSet = true; m_fileSystemAdministratorsGroup = std::move(value); }

    /**
     * <p>The name of the domain group whose members have administrative privileges for
     * the FSx file system.</p>
     */
    inline void SetFileSystemAdministratorsGroup(const char* value) { m_fileSystemAdministratorsGroupHasBeenSet = true; m_fileSystemAdministratorsGroup.assign(value); }

    /**
     * <p>The name of the domain group whose members have administrative privileges for
     * the FSx file system.</p>
     */
    inline SelfManagedActiveDirectoryAttributes& WithFileSystemAdministratorsGroup(const Aws::String& value) { SetFileSystemAdministratorsGroup(value); return *this;}

    /**
     * <p>The name of the domain group whose members have administrative privileges for
     * the FSx file system.</p>
     */
    inline SelfManagedActiveDirectoryAttributes& WithFileSystemAdministratorsGroup(Aws::String&& value) { SetFileSystemAdministratorsGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the domain group whose members have administrative privileges for
     * the FSx file system.</p>
     */
    inline SelfManagedActiveDirectoryAttributes& WithFileSystemAdministratorsGroup(const char* value) { SetFileSystemAdministratorsGroup(value); return *this;}


    /**
     * <p>The user name for the service account on your self-managed AD domain that FSx
     * uses to join to your AD domain.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The user name for the service account on your self-managed AD domain that FSx
     * uses to join to your AD domain.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The user name for the service account on your self-managed AD domain that FSx
     * uses to join to your AD domain.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The user name for the service account on your self-managed AD domain that FSx
     * uses to join to your AD domain.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The user name for the service account on your self-managed AD domain that FSx
     * uses to join to your AD domain.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The user name for the service account on your self-managed AD domain that FSx
     * uses to join to your AD domain.</p>
     */
    inline SelfManagedActiveDirectoryAttributes& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The user name for the service account on your self-managed AD domain that FSx
     * uses to join to your AD domain.</p>
     */
    inline SelfManagedActiveDirectoryAttributes& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The user name for the service account on your self-managed AD domain that FSx
     * uses to join to your AD domain.</p>
     */
    inline SelfManagedActiveDirectoryAttributes& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>A list of up to two IP addresses of DNS servers or domain controllers in the
     * self-managed AD directory.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIps() const{ return m_dnsIps; }

    /**
     * <p>A list of up to two IP addresses of DNS servers or domain controllers in the
     * self-managed AD directory.</p>
     */
    inline bool DnsIpsHasBeenSet() const { return m_dnsIpsHasBeenSet; }

    /**
     * <p>A list of up to two IP addresses of DNS servers or domain controllers in the
     * self-managed AD directory.</p>
     */
    inline void SetDnsIps(const Aws::Vector<Aws::String>& value) { m_dnsIpsHasBeenSet = true; m_dnsIps = value; }

    /**
     * <p>A list of up to two IP addresses of DNS servers or domain controllers in the
     * self-managed AD directory.</p>
     */
    inline void SetDnsIps(Aws::Vector<Aws::String>&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps = std::move(value); }

    /**
     * <p>A list of up to two IP addresses of DNS servers or domain controllers in the
     * self-managed AD directory.</p>
     */
    inline SelfManagedActiveDirectoryAttributes& WithDnsIps(const Aws::Vector<Aws::String>& value) { SetDnsIps(value); return *this;}

    /**
     * <p>A list of up to two IP addresses of DNS servers or domain controllers in the
     * self-managed AD directory.</p>
     */
    inline SelfManagedActiveDirectoryAttributes& WithDnsIps(Aws::Vector<Aws::String>&& value) { SetDnsIps(std::move(value)); return *this;}

    /**
     * <p>A list of up to two IP addresses of DNS servers or domain controllers in the
     * self-managed AD directory.</p>
     */
    inline SelfManagedActiveDirectoryAttributes& AddDnsIps(const Aws::String& value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(value); return *this; }

    /**
     * <p>A list of up to two IP addresses of DNS servers or domain controllers in the
     * self-managed AD directory.</p>
     */
    inline SelfManagedActiveDirectoryAttributes& AddDnsIps(Aws::String&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of up to two IP addresses of DNS servers or domain controllers in the
     * self-managed AD directory.</p>
     */
    inline SelfManagedActiveDirectoryAttributes& AddDnsIps(const char* value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(value); return *this; }

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::String m_organizationalUnitDistinguishedName;
    bool m_organizationalUnitDistinguishedNameHasBeenSet;

    Aws::String m_fileSystemAdministratorsGroup;
    bool m_fileSystemAdministratorsGroupHasBeenSet;

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    Aws::Vector<Aws::String> m_dnsIps;
    bool m_dnsIpsHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
