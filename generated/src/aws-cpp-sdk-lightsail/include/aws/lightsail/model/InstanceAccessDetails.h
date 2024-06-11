/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/PasswordData.h>
#include <aws/lightsail/model/InstanceAccessProtocol.h>
#include <aws/lightsail/model/HostKeyAttributes.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>The parameters for gaining temporary access to one of your Amazon Lightsail
   * instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/InstanceAccessDetails">AWS
   * API Reference</a></p>
   */
  class InstanceAccessDetails
  {
  public:
    AWS_LIGHTSAIL_API InstanceAccessDetails();
    AWS_LIGHTSAIL_API InstanceAccessDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API InstanceAccessDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For SSH access, the public key to use when accessing your instance For
     * OpenSSH clients (command line SSH), you should save this value to
     * <code>tempkey-cert.pub</code>.</p>
     */
    inline const Aws::String& GetCertKey() const{ return m_certKey; }
    inline bool CertKeyHasBeenSet() const { return m_certKeyHasBeenSet; }
    inline void SetCertKey(const Aws::String& value) { m_certKeyHasBeenSet = true; m_certKey = value; }
    inline void SetCertKey(Aws::String&& value) { m_certKeyHasBeenSet = true; m_certKey = std::move(value); }
    inline void SetCertKey(const char* value) { m_certKeyHasBeenSet = true; m_certKey.assign(value); }
    inline InstanceAccessDetails& WithCertKey(const Aws::String& value) { SetCertKey(value); return *this;}
    inline InstanceAccessDetails& WithCertKey(Aws::String&& value) { SetCertKey(std::move(value)); return *this;}
    inline InstanceAccessDetails& WithCertKey(const char* value) { SetCertKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For SSH access, the date on which the temporary keys expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const{ return m_expiresAt; }
    inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
    inline void SetExpiresAt(const Aws::Utils::DateTime& value) { m_expiresAtHasBeenSet = true; m_expiresAt = value; }
    inline void SetExpiresAt(Aws::Utils::DateTime&& value) { m_expiresAtHasBeenSet = true; m_expiresAt = std::move(value); }
    inline InstanceAccessDetails& WithExpiresAt(const Aws::Utils::DateTime& value) { SetExpiresAt(value); return *this;}
    inline InstanceAccessDetails& WithExpiresAt(Aws::Utils::DateTime&& value) { SetExpiresAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public IP address of the Amazon Lightsail instance.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline InstanceAccessDetails& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline InstanceAccessDetails& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline InstanceAccessDetails& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 address of the Amazon Lightsail instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpv6Addresses() const{ return m_ipv6Addresses; }
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }
    inline void SetIpv6Addresses(const Aws::Vector<Aws::String>& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = value; }
    inline void SetIpv6Addresses(Aws::Vector<Aws::String>&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::move(value); }
    inline InstanceAccessDetails& WithIpv6Addresses(const Aws::Vector<Aws::String>& value) { SetIpv6Addresses(value); return *this;}
    inline InstanceAccessDetails& WithIpv6Addresses(Aws::Vector<Aws::String>&& value) { SetIpv6Addresses(std::move(value)); return *this;}
    inline InstanceAccessDetails& AddIpv6Addresses(const Aws::String& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }
    inline InstanceAccessDetails& AddIpv6Addresses(Aws::String&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(std::move(value)); return *this; }
    inline InstanceAccessDetails& AddIpv6Addresses(const char* value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>For RDP access, the password for your Amazon Lightsail instance. Password
     * will be an empty string if the password for your new instance is not ready yet.
     * When you create an instance, it can take up to 15 minutes for the instance to be
     * ready.</p>  <p>If you create an instance using any key pair other than the
     * default (<code>LightsailDefaultKeyPair</code>), <code>password</code> will
     * always be an empty string.</p> <p>If you change the Administrator password on
     * the instance, Lightsail will continue to return the original password value.
     * When accessing the instance using RDP, you need to manually enter the
     * Administrator password after changing it from the default.</p> 
     */
    inline const Aws::String& GetPassword() const{ return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }
    inline InstanceAccessDetails& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}
    inline InstanceAccessDetails& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}
    inline InstanceAccessDetails& WithPassword(const char* value) { SetPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a Windows Server-based instance, an object with the data you can use to
     * retrieve your password. This is only needed if <code>password</code> is empty
     * and the instance is not new (and therefore the password is not ready yet). When
     * you create an instance, it can take up to 15 minutes for the instance to be
     * ready.</p>
     */
    inline const PasswordData& GetPasswordData() const{ return m_passwordData; }
    inline bool PasswordDataHasBeenSet() const { return m_passwordDataHasBeenSet; }
    inline void SetPasswordData(const PasswordData& value) { m_passwordDataHasBeenSet = true; m_passwordData = value; }
    inline void SetPasswordData(PasswordData&& value) { m_passwordDataHasBeenSet = true; m_passwordData = std::move(value); }
    inline InstanceAccessDetails& WithPasswordData(const PasswordData& value) { SetPasswordData(value); return *this;}
    inline InstanceAccessDetails& WithPasswordData(PasswordData&& value) { SetPasswordData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For SSH access, the temporary private key. For OpenSSH clients (command line
     * SSH), you should save this value to <code>tempkey</code>).</p>
     */
    inline const Aws::String& GetPrivateKey() const{ return m_privateKey; }
    inline bool PrivateKeyHasBeenSet() const { return m_privateKeyHasBeenSet; }
    inline void SetPrivateKey(const Aws::String& value) { m_privateKeyHasBeenSet = true; m_privateKey = value; }
    inline void SetPrivateKey(Aws::String&& value) { m_privateKeyHasBeenSet = true; m_privateKey = std::move(value); }
    inline void SetPrivateKey(const char* value) { m_privateKeyHasBeenSet = true; m_privateKey.assign(value); }
    inline InstanceAccessDetails& WithPrivateKey(const Aws::String& value) { SetPrivateKey(value); return *this;}
    inline InstanceAccessDetails& WithPrivateKey(Aws::String&& value) { SetPrivateKey(std::move(value)); return *this;}
    inline InstanceAccessDetails& WithPrivateKey(const char* value) { SetPrivateKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol for these Amazon Lightsail instance access details.</p>
     */
    inline const InstanceAccessProtocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const InstanceAccessProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(InstanceAccessProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline InstanceAccessDetails& WithProtocol(const InstanceAccessProtocol& value) { SetProtocol(value); return *this;}
    inline InstanceAccessDetails& WithProtocol(InstanceAccessProtocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this Amazon Lightsail instance.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }
    inline InstanceAccessDetails& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}
    inline InstanceAccessDetails& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}
    inline InstanceAccessDetails& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name to use when logging in to the Amazon Lightsail instance.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline InstanceAccessDetails& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline InstanceAccessDetails& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline InstanceAccessDetails& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the public SSH host keys or the RDP certificate.</p>
     */
    inline const Aws::Vector<HostKeyAttributes>& GetHostKeys() const{ return m_hostKeys; }
    inline bool HostKeysHasBeenSet() const { return m_hostKeysHasBeenSet; }
    inline void SetHostKeys(const Aws::Vector<HostKeyAttributes>& value) { m_hostKeysHasBeenSet = true; m_hostKeys = value; }
    inline void SetHostKeys(Aws::Vector<HostKeyAttributes>&& value) { m_hostKeysHasBeenSet = true; m_hostKeys = std::move(value); }
    inline InstanceAccessDetails& WithHostKeys(const Aws::Vector<HostKeyAttributes>& value) { SetHostKeys(value); return *this;}
    inline InstanceAccessDetails& WithHostKeys(Aws::Vector<HostKeyAttributes>&& value) { SetHostKeys(std::move(value)); return *this;}
    inline InstanceAccessDetails& AddHostKeys(const HostKeyAttributes& value) { m_hostKeysHasBeenSet = true; m_hostKeys.push_back(value); return *this; }
    inline InstanceAccessDetails& AddHostKeys(HostKeyAttributes&& value) { m_hostKeysHasBeenSet = true; m_hostKeys.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_certKey;
    bool m_certKeyHasBeenSet = false;

    Aws::Utils::DateTime m_expiresAt;
    bool m_expiresAtHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    PasswordData m_passwordData;
    bool m_passwordDataHasBeenSet = false;

    Aws::String m_privateKey;
    bool m_privateKeyHasBeenSet = false;

    InstanceAccessProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::Vector<HostKeyAttributes> m_hostKeys;
    bool m_hostKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
