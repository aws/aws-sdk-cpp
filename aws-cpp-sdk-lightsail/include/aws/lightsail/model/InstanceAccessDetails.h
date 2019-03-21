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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/PasswordData.h>
#include <aws/lightsail/model/InstanceAccessProtocol.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_LIGHTSAIL_API InstanceAccessDetails
  {
  public:
    InstanceAccessDetails();
    InstanceAccessDetails(Aws::Utils::Json::JsonView jsonValue);
    InstanceAccessDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>For SSH access, the public key to use when accessing your instance For
     * OpenSSH clients (e.g., command line SSH), you should save this value to
     * <code>tempkey-cert.pub</code>.</p>
     */
    inline const Aws::String& GetCertKey() const{ return m_certKey; }

    /**
     * <p>For SSH access, the public key to use when accessing your instance For
     * OpenSSH clients (e.g., command line SSH), you should save this value to
     * <code>tempkey-cert.pub</code>.</p>
     */
    inline bool CertKeyHasBeenSet() const { return m_certKeyHasBeenSet; }

    /**
     * <p>For SSH access, the public key to use when accessing your instance For
     * OpenSSH clients (e.g., command line SSH), you should save this value to
     * <code>tempkey-cert.pub</code>.</p>
     */
    inline void SetCertKey(const Aws::String& value) { m_certKeyHasBeenSet = true; m_certKey = value; }

    /**
     * <p>For SSH access, the public key to use when accessing your instance For
     * OpenSSH clients (e.g., command line SSH), you should save this value to
     * <code>tempkey-cert.pub</code>.</p>
     */
    inline void SetCertKey(Aws::String&& value) { m_certKeyHasBeenSet = true; m_certKey = std::move(value); }

    /**
     * <p>For SSH access, the public key to use when accessing your instance For
     * OpenSSH clients (e.g., command line SSH), you should save this value to
     * <code>tempkey-cert.pub</code>.</p>
     */
    inline void SetCertKey(const char* value) { m_certKeyHasBeenSet = true; m_certKey.assign(value); }

    /**
     * <p>For SSH access, the public key to use when accessing your instance For
     * OpenSSH clients (e.g., command line SSH), you should save this value to
     * <code>tempkey-cert.pub</code>.</p>
     */
    inline InstanceAccessDetails& WithCertKey(const Aws::String& value) { SetCertKey(value); return *this;}

    /**
     * <p>For SSH access, the public key to use when accessing your instance For
     * OpenSSH clients (e.g., command line SSH), you should save this value to
     * <code>tempkey-cert.pub</code>.</p>
     */
    inline InstanceAccessDetails& WithCertKey(Aws::String&& value) { SetCertKey(std::move(value)); return *this;}

    /**
     * <p>For SSH access, the public key to use when accessing your instance For
     * OpenSSH clients (e.g., command line SSH), you should save this value to
     * <code>tempkey-cert.pub</code>.</p>
     */
    inline InstanceAccessDetails& WithCertKey(const char* value) { SetCertKey(value); return *this;}


    /**
     * <p>For SSH access, the date on which the temporary keys expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const{ return m_expiresAt; }

    /**
     * <p>For SSH access, the date on which the temporary keys expire.</p>
     */
    inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }

    /**
     * <p>For SSH access, the date on which the temporary keys expire.</p>
     */
    inline void SetExpiresAt(const Aws::Utils::DateTime& value) { m_expiresAtHasBeenSet = true; m_expiresAt = value; }

    /**
     * <p>For SSH access, the date on which the temporary keys expire.</p>
     */
    inline void SetExpiresAt(Aws::Utils::DateTime&& value) { m_expiresAtHasBeenSet = true; m_expiresAt = std::move(value); }

    /**
     * <p>For SSH access, the date on which the temporary keys expire.</p>
     */
    inline InstanceAccessDetails& WithExpiresAt(const Aws::Utils::DateTime& value) { SetExpiresAt(value); return *this;}

    /**
     * <p>For SSH access, the date on which the temporary keys expire.</p>
     */
    inline InstanceAccessDetails& WithExpiresAt(Aws::Utils::DateTime&& value) { SetExpiresAt(std::move(value)); return *this;}


    /**
     * <p>The public IP address of the Amazon Lightsail instance.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The public IP address of the Amazon Lightsail instance.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>The public IP address of the Amazon Lightsail instance.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The public IP address of the Amazon Lightsail instance.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>The public IP address of the Amazon Lightsail instance.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>The public IP address of the Amazon Lightsail instance.</p>
     */
    inline InstanceAccessDetails& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>The public IP address of the Amazon Lightsail instance.</p>
     */
    inline InstanceAccessDetails& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>The public IP address of the Amazon Lightsail instance.</p>
     */
    inline InstanceAccessDetails& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p>For RDP access, the password for your Amazon Lightsail instance. Password
     * will be an empty string if the password for your new instance is not ready yet.
     * When you create an instance, it can take up to 15 minutes for the instance to be
     * ready.</p> <note> <p>If you create an instance using any key pair other than the
     * default (<code>LightsailDefaultKeyPair</code>), <code>password</code> will
     * always be an empty string.</p> <p>If you change the Administrator password on
     * the instance, Lightsail will continue to return the original password value.
     * When accessing the instance using RDP, you need to manually enter the
     * Administrator password after changing it from the default.</p> </note>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>For RDP access, the password for your Amazon Lightsail instance. Password
     * will be an empty string if the password for your new instance is not ready yet.
     * When you create an instance, it can take up to 15 minutes for the instance to be
     * ready.</p> <note> <p>If you create an instance using any key pair other than the
     * default (<code>LightsailDefaultKeyPair</code>), <code>password</code> will
     * always be an empty string.</p> <p>If you change the Administrator password on
     * the instance, Lightsail will continue to return the original password value.
     * When accessing the instance using RDP, you need to manually enter the
     * Administrator password after changing it from the default.</p> </note>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>For RDP access, the password for your Amazon Lightsail instance. Password
     * will be an empty string if the password for your new instance is not ready yet.
     * When you create an instance, it can take up to 15 minutes for the instance to be
     * ready.</p> <note> <p>If you create an instance using any key pair other than the
     * default (<code>LightsailDefaultKeyPair</code>), <code>password</code> will
     * always be an empty string.</p> <p>If you change the Administrator password on
     * the instance, Lightsail will continue to return the original password value.
     * When accessing the instance using RDP, you need to manually enter the
     * Administrator password after changing it from the default.</p> </note>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>For RDP access, the password for your Amazon Lightsail instance. Password
     * will be an empty string if the password for your new instance is not ready yet.
     * When you create an instance, it can take up to 15 minutes for the instance to be
     * ready.</p> <note> <p>If you create an instance using any key pair other than the
     * default (<code>LightsailDefaultKeyPair</code>), <code>password</code> will
     * always be an empty string.</p> <p>If you change the Administrator password on
     * the instance, Lightsail will continue to return the original password value.
     * When accessing the instance using RDP, you need to manually enter the
     * Administrator password after changing it from the default.</p> </note>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>For RDP access, the password for your Amazon Lightsail instance. Password
     * will be an empty string if the password for your new instance is not ready yet.
     * When you create an instance, it can take up to 15 minutes for the instance to be
     * ready.</p> <note> <p>If you create an instance using any key pair other than the
     * default (<code>LightsailDefaultKeyPair</code>), <code>password</code> will
     * always be an empty string.</p> <p>If you change the Administrator password on
     * the instance, Lightsail will continue to return the original password value.
     * When accessing the instance using RDP, you need to manually enter the
     * Administrator password after changing it from the default.</p> </note>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>For RDP access, the password for your Amazon Lightsail instance. Password
     * will be an empty string if the password for your new instance is not ready yet.
     * When you create an instance, it can take up to 15 minutes for the instance to be
     * ready.</p> <note> <p>If you create an instance using any key pair other than the
     * default (<code>LightsailDefaultKeyPair</code>), <code>password</code> will
     * always be an empty string.</p> <p>If you change the Administrator password on
     * the instance, Lightsail will continue to return the original password value.
     * When accessing the instance using RDP, you need to manually enter the
     * Administrator password after changing it from the default.</p> </note>
     */
    inline InstanceAccessDetails& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>For RDP access, the password for your Amazon Lightsail instance. Password
     * will be an empty string if the password for your new instance is not ready yet.
     * When you create an instance, it can take up to 15 minutes for the instance to be
     * ready.</p> <note> <p>If you create an instance using any key pair other than the
     * default (<code>LightsailDefaultKeyPair</code>), <code>password</code> will
     * always be an empty string.</p> <p>If you change the Administrator password on
     * the instance, Lightsail will continue to return the original password value.
     * When accessing the instance using RDP, you need to manually enter the
     * Administrator password after changing it from the default.</p> </note>
     */
    inline InstanceAccessDetails& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>For RDP access, the password for your Amazon Lightsail instance. Password
     * will be an empty string if the password for your new instance is not ready yet.
     * When you create an instance, it can take up to 15 minutes for the instance to be
     * ready.</p> <note> <p>If you create an instance using any key pair other than the
     * default (<code>LightsailDefaultKeyPair</code>), <code>password</code> will
     * always be an empty string.</p> <p>If you change the Administrator password on
     * the instance, Lightsail will continue to return the original password value.
     * When accessing the instance using RDP, you need to manually enter the
     * Administrator password after changing it from the default.</p> </note>
     */
    inline InstanceAccessDetails& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>For a Windows Server-based instance, an object with the data you can use to
     * retrieve your password. This is only needed if <code>password</code> is empty
     * and the instance is not new (and therefore the password is not ready yet). When
     * you create an instance, it can take up to 15 minutes for the instance to be
     * ready.</p>
     */
    inline const PasswordData& GetPasswordData() const{ return m_passwordData; }

    /**
     * <p>For a Windows Server-based instance, an object with the data you can use to
     * retrieve your password. This is only needed if <code>password</code> is empty
     * and the instance is not new (and therefore the password is not ready yet). When
     * you create an instance, it can take up to 15 minutes for the instance to be
     * ready.</p>
     */
    inline bool PasswordDataHasBeenSet() const { return m_passwordDataHasBeenSet; }

    /**
     * <p>For a Windows Server-based instance, an object with the data you can use to
     * retrieve your password. This is only needed if <code>password</code> is empty
     * and the instance is not new (and therefore the password is not ready yet). When
     * you create an instance, it can take up to 15 minutes for the instance to be
     * ready.</p>
     */
    inline void SetPasswordData(const PasswordData& value) { m_passwordDataHasBeenSet = true; m_passwordData = value; }

    /**
     * <p>For a Windows Server-based instance, an object with the data you can use to
     * retrieve your password. This is only needed if <code>password</code> is empty
     * and the instance is not new (and therefore the password is not ready yet). When
     * you create an instance, it can take up to 15 minutes for the instance to be
     * ready.</p>
     */
    inline void SetPasswordData(PasswordData&& value) { m_passwordDataHasBeenSet = true; m_passwordData = std::move(value); }

    /**
     * <p>For a Windows Server-based instance, an object with the data you can use to
     * retrieve your password. This is only needed if <code>password</code> is empty
     * and the instance is not new (and therefore the password is not ready yet). When
     * you create an instance, it can take up to 15 minutes for the instance to be
     * ready.</p>
     */
    inline InstanceAccessDetails& WithPasswordData(const PasswordData& value) { SetPasswordData(value); return *this;}

    /**
     * <p>For a Windows Server-based instance, an object with the data you can use to
     * retrieve your password. This is only needed if <code>password</code> is empty
     * and the instance is not new (and therefore the password is not ready yet). When
     * you create an instance, it can take up to 15 minutes for the instance to be
     * ready.</p>
     */
    inline InstanceAccessDetails& WithPasswordData(PasswordData&& value) { SetPasswordData(std::move(value)); return *this;}


    /**
     * <p>For SSH access, the temporary private key. For OpenSSH clients (e.g., command
     * line SSH), you should save this value to <code>tempkey</code>).</p>
     */
    inline const Aws::String& GetPrivateKey() const{ return m_privateKey; }

    /**
     * <p>For SSH access, the temporary private key. For OpenSSH clients (e.g., command
     * line SSH), you should save this value to <code>tempkey</code>).</p>
     */
    inline bool PrivateKeyHasBeenSet() const { return m_privateKeyHasBeenSet; }

    /**
     * <p>For SSH access, the temporary private key. For OpenSSH clients (e.g., command
     * line SSH), you should save this value to <code>tempkey</code>).</p>
     */
    inline void SetPrivateKey(const Aws::String& value) { m_privateKeyHasBeenSet = true; m_privateKey = value; }

    /**
     * <p>For SSH access, the temporary private key. For OpenSSH clients (e.g., command
     * line SSH), you should save this value to <code>tempkey</code>).</p>
     */
    inline void SetPrivateKey(Aws::String&& value) { m_privateKeyHasBeenSet = true; m_privateKey = std::move(value); }

    /**
     * <p>For SSH access, the temporary private key. For OpenSSH clients (e.g., command
     * line SSH), you should save this value to <code>tempkey</code>).</p>
     */
    inline void SetPrivateKey(const char* value) { m_privateKeyHasBeenSet = true; m_privateKey.assign(value); }

    /**
     * <p>For SSH access, the temporary private key. For OpenSSH clients (e.g., command
     * line SSH), you should save this value to <code>tempkey</code>).</p>
     */
    inline InstanceAccessDetails& WithPrivateKey(const Aws::String& value) { SetPrivateKey(value); return *this;}

    /**
     * <p>For SSH access, the temporary private key. For OpenSSH clients (e.g., command
     * line SSH), you should save this value to <code>tempkey</code>).</p>
     */
    inline InstanceAccessDetails& WithPrivateKey(Aws::String&& value) { SetPrivateKey(std::move(value)); return *this;}

    /**
     * <p>For SSH access, the temporary private key. For OpenSSH clients (e.g., command
     * line SSH), you should save this value to <code>tempkey</code>).</p>
     */
    inline InstanceAccessDetails& WithPrivateKey(const char* value) { SetPrivateKey(value); return *this;}


    /**
     * <p>The protocol for these Amazon Lightsail instance access details.</p>
     */
    inline const InstanceAccessProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol for these Amazon Lightsail instance access details.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol for these Amazon Lightsail instance access details.</p>
     */
    inline void SetProtocol(const InstanceAccessProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol for these Amazon Lightsail instance access details.</p>
     */
    inline void SetProtocol(InstanceAccessProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol for these Amazon Lightsail instance access details.</p>
     */
    inline InstanceAccessDetails& WithProtocol(const InstanceAccessProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol for these Amazon Lightsail instance access details.</p>
     */
    inline InstanceAccessDetails& WithProtocol(InstanceAccessProtocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The name of this Amazon Lightsail instance.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }

    /**
     * <p>The name of this Amazon Lightsail instance.</p>
     */
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }

    /**
     * <p>The name of this Amazon Lightsail instance.</p>
     */
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /**
     * <p>The name of this Amazon Lightsail instance.</p>
     */
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }

    /**
     * <p>The name of this Amazon Lightsail instance.</p>
     */
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }

    /**
     * <p>The name of this Amazon Lightsail instance.</p>
     */
    inline InstanceAccessDetails& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}

    /**
     * <p>The name of this Amazon Lightsail instance.</p>
     */
    inline InstanceAccessDetails& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of this Amazon Lightsail instance.</p>
     */
    inline InstanceAccessDetails& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}


    /**
     * <p>The user name to use when logging in to the Amazon Lightsail instance.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name to use when logging in to the Amazon Lightsail instance.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The user name to use when logging in to the Amazon Lightsail instance.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name to use when logging in to the Amazon Lightsail instance.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The user name to use when logging in to the Amazon Lightsail instance.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The user name to use when logging in to the Amazon Lightsail instance.</p>
     */
    inline InstanceAccessDetails& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name to use when logging in to the Amazon Lightsail instance.</p>
     */
    inline InstanceAccessDetails& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user name to use when logging in to the Amazon Lightsail instance.</p>
     */
    inline InstanceAccessDetails& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>Describes the public SSH host keys or the RDP certificate.</p>
     */
    inline const Aws::Vector<HostKeyAttributes>& GetHostKeys() const{ return m_hostKeys; }

    /**
     * <p>Describes the public SSH host keys or the RDP certificate.</p>
     */
    inline bool HostKeysHasBeenSet() const { return m_hostKeysHasBeenSet; }

    /**
     * <p>Describes the public SSH host keys or the RDP certificate.</p>
     */
    inline void SetHostKeys(const Aws::Vector<HostKeyAttributes>& value) { m_hostKeysHasBeenSet = true; m_hostKeys = value; }

    /**
     * <p>Describes the public SSH host keys or the RDP certificate.</p>
     */
    inline void SetHostKeys(Aws::Vector<HostKeyAttributes>&& value) { m_hostKeysHasBeenSet = true; m_hostKeys = std::move(value); }

    /**
     * <p>Describes the public SSH host keys or the RDP certificate.</p>
     */
    inline InstanceAccessDetails& WithHostKeys(const Aws::Vector<HostKeyAttributes>& value) { SetHostKeys(value); return *this;}

    /**
     * <p>Describes the public SSH host keys or the RDP certificate.</p>
     */
    inline InstanceAccessDetails& WithHostKeys(Aws::Vector<HostKeyAttributes>&& value) { SetHostKeys(std::move(value)); return *this;}

    /**
     * <p>Describes the public SSH host keys or the RDP certificate.</p>
     */
    inline InstanceAccessDetails& AddHostKeys(const HostKeyAttributes& value) { m_hostKeysHasBeenSet = true; m_hostKeys.push_back(value); return *this; }

    /**
     * <p>Describes the public SSH host keys or the RDP certificate.</p>
     */
    inline InstanceAccessDetails& AddHostKeys(HostKeyAttributes&& value) { m_hostKeysHasBeenSet = true; m_hostKeys.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_certKey;
    bool m_certKeyHasBeenSet;

    Aws::Utils::DateTime m_expiresAt;
    bool m_expiresAtHasBeenSet;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet;

    Aws::String m_password;
    bool m_passwordHasBeenSet;

    PasswordData m_passwordData;
    bool m_passwordDataHasBeenSet;

    Aws::String m_privateKey;
    bool m_privateKeyHasBeenSet;

    InstanceAccessProtocol m_protocol;
    bool m_protocolHasBeenSet;

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;

    Aws::Vector<HostKeyAttributes> m_hostKeys;
    bool m_hostKeysHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
