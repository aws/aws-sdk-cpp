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
    AWS_LIGHTSAIL_API InstanceAccessDetails() = default;
    AWS_LIGHTSAIL_API InstanceAccessDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API InstanceAccessDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For SSH access, the public key to use when accessing your instance For
     * OpenSSH clients (command line SSH), you should save this value to
     * <code>tempkey-cert.pub</code>.</p>
     */
    inline const Aws::String& GetCertKey() const { return m_certKey; }
    inline bool CertKeyHasBeenSet() const { return m_certKeyHasBeenSet; }
    template<typename CertKeyT = Aws::String>
    void SetCertKey(CertKeyT&& value) { m_certKeyHasBeenSet = true; m_certKey = std::forward<CertKeyT>(value); }
    template<typename CertKeyT = Aws::String>
    InstanceAccessDetails& WithCertKey(CertKeyT&& value) { SetCertKey(std::forward<CertKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For SSH access, the date on which the temporary keys expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
    inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
    template<typename ExpiresAtT = Aws::Utils::DateTime>
    void SetExpiresAt(ExpiresAtT&& value) { m_expiresAtHasBeenSet = true; m_expiresAt = std::forward<ExpiresAtT>(value); }
    template<typename ExpiresAtT = Aws::Utils::DateTime>
    InstanceAccessDetails& WithExpiresAt(ExpiresAtT&& value) { SetExpiresAt(std::forward<ExpiresAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public IP address of the Amazon Lightsail instance.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    InstanceAccessDetails& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 address of the Amazon Lightsail instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpv6Addresses() const { return m_ipv6Addresses; }
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }
    template<typename Ipv6AddressesT = Aws::Vector<Aws::String>>
    void SetIpv6Addresses(Ipv6AddressesT&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::forward<Ipv6AddressesT>(value); }
    template<typename Ipv6AddressesT = Aws::Vector<Aws::String>>
    InstanceAccessDetails& WithIpv6Addresses(Ipv6AddressesT&& value) { SetIpv6Addresses(std::forward<Ipv6AddressesT>(value)); return *this;}
    template<typename Ipv6AddressesT = Aws::String>
    InstanceAccessDetails& AddIpv6Addresses(Ipv6AddressesT&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.emplace_back(std::forward<Ipv6AddressesT>(value)); return *this; }
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
    inline const Aws::String& GetPassword() const { return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    template<typename PasswordT = Aws::String>
    void SetPassword(PasswordT&& value) { m_passwordHasBeenSet = true; m_password = std::forward<PasswordT>(value); }
    template<typename PasswordT = Aws::String>
    InstanceAccessDetails& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a Windows Server-based instance, an object with the data you can use to
     * retrieve your password. This is only needed if <code>password</code> is empty
     * and the instance is not new (and therefore the password is not ready yet). When
     * you create an instance, it can take up to 15 minutes for the instance to be
     * ready.</p>
     */
    inline const PasswordData& GetPasswordData() const { return m_passwordData; }
    inline bool PasswordDataHasBeenSet() const { return m_passwordDataHasBeenSet; }
    template<typename PasswordDataT = PasswordData>
    void SetPasswordData(PasswordDataT&& value) { m_passwordDataHasBeenSet = true; m_passwordData = std::forward<PasswordDataT>(value); }
    template<typename PasswordDataT = PasswordData>
    InstanceAccessDetails& WithPasswordData(PasswordDataT&& value) { SetPasswordData(std::forward<PasswordDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For SSH access, the temporary private key. For OpenSSH clients (command line
     * SSH), you should save this value to <code>tempkey</code>).</p>
     */
    inline const Aws::String& GetPrivateKey() const { return m_privateKey; }
    inline bool PrivateKeyHasBeenSet() const { return m_privateKeyHasBeenSet; }
    template<typename PrivateKeyT = Aws::String>
    void SetPrivateKey(PrivateKeyT&& value) { m_privateKeyHasBeenSet = true; m_privateKey = std::forward<PrivateKeyT>(value); }
    template<typename PrivateKeyT = Aws::String>
    InstanceAccessDetails& WithPrivateKey(PrivateKeyT&& value) { SetPrivateKey(std::forward<PrivateKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol for these Amazon Lightsail instance access details.</p>
     */
    inline InstanceAccessProtocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(InstanceAccessProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline InstanceAccessDetails& WithProtocol(InstanceAccessProtocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this Amazon Lightsail instance.</p>
     */
    inline const Aws::String& GetInstanceName() const { return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    template<typename InstanceNameT = Aws::String>
    void SetInstanceName(InstanceNameT&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::forward<InstanceNameT>(value); }
    template<typename InstanceNameT = Aws::String>
    InstanceAccessDetails& WithInstanceName(InstanceNameT&& value) { SetInstanceName(std::forward<InstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name to use when logging in to the Amazon Lightsail instance.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    InstanceAccessDetails& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the public SSH host keys or the RDP certificate.</p>
     */
    inline const Aws::Vector<HostKeyAttributes>& GetHostKeys() const { return m_hostKeys; }
    inline bool HostKeysHasBeenSet() const { return m_hostKeysHasBeenSet; }
    template<typename HostKeysT = Aws::Vector<HostKeyAttributes>>
    void SetHostKeys(HostKeysT&& value) { m_hostKeysHasBeenSet = true; m_hostKeys = std::forward<HostKeysT>(value); }
    template<typename HostKeysT = Aws::Vector<HostKeyAttributes>>
    InstanceAccessDetails& WithHostKeys(HostKeysT&& value) { SetHostKeys(std::forward<HostKeysT>(value)); return *this;}
    template<typename HostKeysT = HostKeyAttributes>
    InstanceAccessDetails& AddHostKeys(HostKeysT&& value) { m_hostKeysHasBeenSet = true; m_hostKeys.emplace_back(std::forward<HostKeysT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_certKey;
    bool m_certKeyHasBeenSet = false;

    Aws::Utils::DateTime m_expiresAt{};
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

    InstanceAccessProtocol m_protocol{InstanceAccessProtocol::NOT_SET};
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
