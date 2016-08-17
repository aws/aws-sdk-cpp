/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/InstanceIdentity.h>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API RegisterInstanceRequest : public OpsWorksRequest
  {
  public:
    RegisterInstanceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ID of the stack that the instance is to be registered with.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The ID of the stack that the instance is to be registered with.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The ID of the stack that the instance is to be registered with.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The ID of the stack that the instance is to be registered with.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The ID of the stack that the instance is to be registered with.</p>
     */
    inline RegisterInstanceRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The ID of the stack that the instance is to be registered with.</p>
     */
    inline RegisterInstanceRequest& WithStackId(Aws::String&& value) { SetStackId(value); return *this;}

    /**
     * <p>The ID of the stack that the instance is to be registered with.</p>
     */
    inline RegisterInstanceRequest& WithStackId(const char* value) { SetStackId(value); return *this;}

    /**
     * <p>The instance's hostname.</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }

    /**
     * <p>The instance's hostname.</p>
     */
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }

    /**
     * <p>The instance's hostname.</p>
     */
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = value; }

    /**
     * <p>The instance's hostname.</p>
     */
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }

    /**
     * <p>The instance's hostname.</p>
     */
    inline RegisterInstanceRequest& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}

    /**
     * <p>The instance's hostname.</p>
     */
    inline RegisterInstanceRequest& WithHostname(Aws::String&& value) { SetHostname(value); return *this;}

    /**
     * <p>The instance's hostname.</p>
     */
    inline RegisterInstanceRequest& WithHostname(const char* value) { SetHostname(value); return *this;}

    /**
     * <p>The instance's public IP address.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }

    /**
     * <p>The instance's public IP address.</p>
     */
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }

    /**
     * <p>The instance's public IP address.</p>
     */
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }

    /**
     * <p>The instance's public IP address.</p>
     */
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }

    /**
     * <p>The instance's public IP address.</p>
     */
    inline RegisterInstanceRequest& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}

    /**
     * <p>The instance's public IP address.</p>
     */
    inline RegisterInstanceRequest& WithPublicIp(Aws::String&& value) { SetPublicIp(value); return *this;}

    /**
     * <p>The instance's public IP address.</p>
     */
    inline RegisterInstanceRequest& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}

    /**
     * <p>The instance's private IP address.</p>
     */
    inline const Aws::String& GetPrivateIp() const{ return m_privateIp; }

    /**
     * <p>The instance's private IP address.</p>
     */
    inline void SetPrivateIp(const Aws::String& value) { m_privateIpHasBeenSet = true; m_privateIp = value; }

    /**
     * <p>The instance's private IP address.</p>
     */
    inline void SetPrivateIp(Aws::String&& value) { m_privateIpHasBeenSet = true; m_privateIp = value; }

    /**
     * <p>The instance's private IP address.</p>
     */
    inline void SetPrivateIp(const char* value) { m_privateIpHasBeenSet = true; m_privateIp.assign(value); }

    /**
     * <p>The instance's private IP address.</p>
     */
    inline RegisterInstanceRequest& WithPrivateIp(const Aws::String& value) { SetPrivateIp(value); return *this;}

    /**
     * <p>The instance's private IP address.</p>
     */
    inline RegisterInstanceRequest& WithPrivateIp(Aws::String&& value) { SetPrivateIp(value); return *this;}

    /**
     * <p>The instance's private IP address.</p>
     */
    inline RegisterInstanceRequest& WithPrivateIp(const char* value) { SetPrivateIp(value); return *this;}

    /**
     * <p>The instances public RSA key. This key is used to encrypt communication
     * between the instance and the service.</p>
     */
    inline const Aws::String& GetRsaPublicKey() const{ return m_rsaPublicKey; }

    /**
     * <p>The instances public RSA key. This key is used to encrypt communication
     * between the instance and the service.</p>
     */
    inline void SetRsaPublicKey(const Aws::String& value) { m_rsaPublicKeyHasBeenSet = true; m_rsaPublicKey = value; }

    /**
     * <p>The instances public RSA key. This key is used to encrypt communication
     * between the instance and the service.</p>
     */
    inline void SetRsaPublicKey(Aws::String&& value) { m_rsaPublicKeyHasBeenSet = true; m_rsaPublicKey = value; }

    /**
     * <p>The instances public RSA key. This key is used to encrypt communication
     * between the instance and the service.</p>
     */
    inline void SetRsaPublicKey(const char* value) { m_rsaPublicKeyHasBeenSet = true; m_rsaPublicKey.assign(value); }

    /**
     * <p>The instances public RSA key. This key is used to encrypt communication
     * between the instance and the service.</p>
     */
    inline RegisterInstanceRequest& WithRsaPublicKey(const Aws::String& value) { SetRsaPublicKey(value); return *this;}

    /**
     * <p>The instances public RSA key. This key is used to encrypt communication
     * between the instance and the service.</p>
     */
    inline RegisterInstanceRequest& WithRsaPublicKey(Aws::String&& value) { SetRsaPublicKey(value); return *this;}

    /**
     * <p>The instances public RSA key. This key is used to encrypt communication
     * between the instance and the service.</p>
     */
    inline RegisterInstanceRequest& WithRsaPublicKey(const char* value) { SetRsaPublicKey(value); return *this;}

    /**
     * <p>The instances public RSA key fingerprint.</p>
     */
    inline const Aws::String& GetRsaPublicKeyFingerprint() const{ return m_rsaPublicKeyFingerprint; }

    /**
     * <p>The instances public RSA key fingerprint.</p>
     */
    inline void SetRsaPublicKeyFingerprint(const Aws::String& value) { m_rsaPublicKeyFingerprintHasBeenSet = true; m_rsaPublicKeyFingerprint = value; }

    /**
     * <p>The instances public RSA key fingerprint.</p>
     */
    inline void SetRsaPublicKeyFingerprint(Aws::String&& value) { m_rsaPublicKeyFingerprintHasBeenSet = true; m_rsaPublicKeyFingerprint = value; }

    /**
     * <p>The instances public RSA key fingerprint.</p>
     */
    inline void SetRsaPublicKeyFingerprint(const char* value) { m_rsaPublicKeyFingerprintHasBeenSet = true; m_rsaPublicKeyFingerprint.assign(value); }

    /**
     * <p>The instances public RSA key fingerprint.</p>
     */
    inline RegisterInstanceRequest& WithRsaPublicKeyFingerprint(const Aws::String& value) { SetRsaPublicKeyFingerprint(value); return *this;}

    /**
     * <p>The instances public RSA key fingerprint.</p>
     */
    inline RegisterInstanceRequest& WithRsaPublicKeyFingerprint(Aws::String&& value) { SetRsaPublicKeyFingerprint(value); return *this;}

    /**
     * <p>The instances public RSA key fingerprint.</p>
     */
    inline RegisterInstanceRequest& WithRsaPublicKeyFingerprint(const char* value) { SetRsaPublicKeyFingerprint(value); return *this;}

    /**
     * <p>An InstanceIdentity object that contains the instance's identity.</p>
     */
    inline const InstanceIdentity& GetInstanceIdentity() const{ return m_instanceIdentity; }

    /**
     * <p>An InstanceIdentity object that contains the instance's identity.</p>
     */
    inline void SetInstanceIdentity(const InstanceIdentity& value) { m_instanceIdentityHasBeenSet = true; m_instanceIdentity = value; }

    /**
     * <p>An InstanceIdentity object that contains the instance's identity.</p>
     */
    inline void SetInstanceIdentity(InstanceIdentity&& value) { m_instanceIdentityHasBeenSet = true; m_instanceIdentity = value; }

    /**
     * <p>An InstanceIdentity object that contains the instance's identity.</p>
     */
    inline RegisterInstanceRequest& WithInstanceIdentity(const InstanceIdentity& value) { SetInstanceIdentity(value); return *this;}

    /**
     * <p>An InstanceIdentity object that contains the instance's identity.</p>
     */
    inline RegisterInstanceRequest& WithInstanceIdentity(InstanceIdentity&& value) { SetInstanceIdentity(value); return *this;}

  private:
    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;
    Aws::String m_hostname;
    bool m_hostnameHasBeenSet;
    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet;
    Aws::String m_privateIp;
    bool m_privateIpHasBeenSet;
    Aws::String m_rsaPublicKey;
    bool m_rsaPublicKeyHasBeenSet;
    Aws::String m_rsaPublicKeyFingerprint;
    bool m_rsaPublicKeyFingerprintHasBeenSet;
    InstanceIdentity m_instanceIdentity;
    bool m_instanceIdentityHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
