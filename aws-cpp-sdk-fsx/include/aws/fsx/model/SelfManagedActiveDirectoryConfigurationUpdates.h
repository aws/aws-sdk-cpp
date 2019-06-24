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
   * <p>The configuration that Amazon FSx uses to join the Windows File Server
   * instance to the self-managed Microsoft Active Directory (AD)
   * directory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SelfManagedActiveDirectoryConfigurationUpdates">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API SelfManagedActiveDirectoryConfigurationUpdates
  {
  public:
    SelfManagedActiveDirectoryConfigurationUpdates();
    SelfManagedActiveDirectoryConfigurationUpdates(Aws::Utils::Json::JsonView jsonValue);
    SelfManagedActiveDirectoryConfigurationUpdates& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user name for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain. This account must have the
     * permission to join computers to the domain in the organizational unit provided
     * in <code>OrganizationalUnitDistinguishedName</code>.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The user name for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain. This account must have the
     * permission to join computers to the domain in the organizational unit provided
     * in <code>OrganizationalUnitDistinguishedName</code>.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The user name for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain. This account must have the
     * permission to join computers to the domain in the organizational unit provided
     * in <code>OrganizationalUnitDistinguishedName</code>.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The user name for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain. This account must have the
     * permission to join computers to the domain in the organizational unit provided
     * in <code>OrganizationalUnitDistinguishedName</code>.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The user name for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain. This account must have the
     * permission to join computers to the domain in the organizational unit provided
     * in <code>OrganizationalUnitDistinguishedName</code>.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The user name for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain. This account must have the
     * permission to join computers to the domain in the organizational unit provided
     * in <code>OrganizationalUnitDistinguishedName</code>.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The user name for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain. This account must have the
     * permission to join computers to the domain in the organizational unit provided
     * in <code>OrganizationalUnitDistinguishedName</code>.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The user name for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain. This account must have the
     * permission to join computers to the domain in the organizational unit provided
     * in <code>OrganizationalUnitDistinguishedName</code>.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithUserName(const char* value) { SetUserName(value); return *this;}


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
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the service account on your self-managed AD domain that
     * Amazon FSx will use to join to your AD domain.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithPassword(const char* value) { SetPassword(value); return *this;}


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
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithDnsIps(const Aws::Vector<Aws::String>& value) { SetDnsIps(value); return *this;}

    /**
     * <p>A list of up to two IP addresses of DNS servers or domain controllers in the
     * self-managed AD directory.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& WithDnsIps(Aws::Vector<Aws::String>&& value) { SetDnsIps(std::move(value)); return *this;}

    /**
     * <p>A list of up to two IP addresses of DNS servers or domain controllers in the
     * self-managed AD directory.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& AddDnsIps(const Aws::String& value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(value); return *this; }

    /**
     * <p>A list of up to two IP addresses of DNS servers or domain controllers in the
     * self-managed AD directory.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& AddDnsIps(Aws::String&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of up to two IP addresses of DNS servers or domain controllers in the
     * self-managed AD directory.</p>
     */
    inline SelfManagedActiveDirectoryConfigurationUpdates& AddDnsIps(const char* value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(value); return *this; }

  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    Aws::String m_password;
    bool m_passwordHasBeenSet;

    Aws::Vector<Aws::String> m_dnsIps;
    bool m_dnsIpsHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
