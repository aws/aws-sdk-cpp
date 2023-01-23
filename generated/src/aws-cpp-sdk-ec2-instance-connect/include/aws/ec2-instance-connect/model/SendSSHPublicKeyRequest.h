/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2-instance-connect/EC2InstanceConnect_EXPORTS.h>
#include <aws/ec2-instance-connect/EC2InstanceConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2InstanceConnect
{
namespace Model
{

  /**
   */
  class SendSSHPublicKeyRequest : public EC2InstanceConnectRequest
  {
  public:
    AWS_EC2INSTANCECONNECT_API SendSSHPublicKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendSSHPublicKey"; }

    AWS_EC2INSTANCECONNECT_API Aws::String SerializePayload() const override;

    AWS_EC2INSTANCECONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline SendSSHPublicKeyRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline SendSSHPublicKeyRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline SendSSHPublicKeyRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The OS user on the EC2 instance for whom the key can be used to
     * authenticate.</p>
     */
    inline const Aws::String& GetInstanceOSUser() const{ return m_instanceOSUser; }

    /**
     * <p>The OS user on the EC2 instance for whom the key can be used to
     * authenticate.</p>
     */
    inline bool InstanceOSUserHasBeenSet() const { return m_instanceOSUserHasBeenSet; }

    /**
     * <p>The OS user on the EC2 instance for whom the key can be used to
     * authenticate.</p>
     */
    inline void SetInstanceOSUser(const Aws::String& value) { m_instanceOSUserHasBeenSet = true; m_instanceOSUser = value; }

    /**
     * <p>The OS user on the EC2 instance for whom the key can be used to
     * authenticate.</p>
     */
    inline void SetInstanceOSUser(Aws::String&& value) { m_instanceOSUserHasBeenSet = true; m_instanceOSUser = std::move(value); }

    /**
     * <p>The OS user on the EC2 instance for whom the key can be used to
     * authenticate.</p>
     */
    inline void SetInstanceOSUser(const char* value) { m_instanceOSUserHasBeenSet = true; m_instanceOSUser.assign(value); }

    /**
     * <p>The OS user on the EC2 instance for whom the key can be used to
     * authenticate.</p>
     */
    inline SendSSHPublicKeyRequest& WithInstanceOSUser(const Aws::String& value) { SetInstanceOSUser(value); return *this;}

    /**
     * <p>The OS user on the EC2 instance for whom the key can be used to
     * authenticate.</p>
     */
    inline SendSSHPublicKeyRequest& WithInstanceOSUser(Aws::String&& value) { SetInstanceOSUser(std::move(value)); return *this;}

    /**
     * <p>The OS user on the EC2 instance for whom the key can be used to
     * authenticate.</p>
     */
    inline SendSSHPublicKeyRequest& WithInstanceOSUser(const char* value) { SetInstanceOSUser(value); return *this;}


    /**
     * <p>The public key material. To use the public key, you must have the matching
     * private key.</p>
     */
    inline const Aws::String& GetSSHPublicKey() const{ return m_sSHPublicKey; }

    /**
     * <p>The public key material. To use the public key, you must have the matching
     * private key.</p>
     */
    inline bool SSHPublicKeyHasBeenSet() const { return m_sSHPublicKeyHasBeenSet; }

    /**
     * <p>The public key material. To use the public key, you must have the matching
     * private key.</p>
     */
    inline void SetSSHPublicKey(const Aws::String& value) { m_sSHPublicKeyHasBeenSet = true; m_sSHPublicKey = value; }

    /**
     * <p>The public key material. To use the public key, you must have the matching
     * private key.</p>
     */
    inline void SetSSHPublicKey(Aws::String&& value) { m_sSHPublicKeyHasBeenSet = true; m_sSHPublicKey = std::move(value); }

    /**
     * <p>The public key material. To use the public key, you must have the matching
     * private key.</p>
     */
    inline void SetSSHPublicKey(const char* value) { m_sSHPublicKeyHasBeenSet = true; m_sSHPublicKey.assign(value); }

    /**
     * <p>The public key material. To use the public key, you must have the matching
     * private key.</p>
     */
    inline SendSSHPublicKeyRequest& WithSSHPublicKey(const Aws::String& value) { SetSSHPublicKey(value); return *this;}

    /**
     * <p>The public key material. To use the public key, you must have the matching
     * private key.</p>
     */
    inline SendSSHPublicKeyRequest& WithSSHPublicKey(Aws::String&& value) { SetSSHPublicKey(std::move(value)); return *this;}

    /**
     * <p>The public key material. To use the public key, you must have the matching
     * private key.</p>
     */
    inline SendSSHPublicKeyRequest& WithSSHPublicKey(const char* value) { SetSSHPublicKey(value); return *this;}


    /**
     * <p>The Availability Zone in which the EC2 instance was launched.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone in which the EC2 instance was launched.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone in which the EC2 instance was launched.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in which the EC2 instance was launched.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone in which the EC2 instance was launched.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which the EC2 instance was launched.</p>
     */
    inline SendSSHPublicKeyRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which the EC2 instance was launched.</p>
     */
    inline SendSSHPublicKeyRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone in which the EC2 instance was launched.</p>
     */
    inline SendSSHPublicKeyRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceOSUser;
    bool m_instanceOSUserHasBeenSet = false;

    Aws::String m_sSHPublicKey;
    bool m_sSHPublicKeyHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2InstanceConnect
} // namespace Aws
