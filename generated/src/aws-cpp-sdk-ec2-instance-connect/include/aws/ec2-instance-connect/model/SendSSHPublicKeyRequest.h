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
    AWS_EC2INSTANCECONNECT_API SendSSHPublicKeyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendSSHPublicKey"; }

    AWS_EC2INSTANCECONNECT_API Aws::String SerializePayload() const override;

    AWS_EC2INSTANCECONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    SendSSHPublicKeyRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OS user on the EC2 instance for whom the key can be used to
     * authenticate.</p>
     */
    inline const Aws::String& GetInstanceOSUser() const { return m_instanceOSUser; }
    inline bool InstanceOSUserHasBeenSet() const { return m_instanceOSUserHasBeenSet; }
    template<typename InstanceOSUserT = Aws::String>
    void SetInstanceOSUser(InstanceOSUserT&& value) { m_instanceOSUserHasBeenSet = true; m_instanceOSUser = std::forward<InstanceOSUserT>(value); }
    template<typename InstanceOSUserT = Aws::String>
    SendSSHPublicKeyRequest& WithInstanceOSUser(InstanceOSUserT&& value) { SetInstanceOSUser(std::forward<InstanceOSUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public key material. To use the public key, you must have the matching
     * private key.</p>
     */
    inline const Aws::String& GetSSHPublicKey() const { return m_sSHPublicKey; }
    inline bool SSHPublicKeyHasBeenSet() const { return m_sSHPublicKeyHasBeenSet; }
    template<typename SSHPublicKeyT = Aws::String>
    void SetSSHPublicKey(SSHPublicKeyT&& value) { m_sSHPublicKeyHasBeenSet = true; m_sSHPublicKey = std::forward<SSHPublicKeyT>(value); }
    template<typename SSHPublicKeyT = Aws::String>
    SendSSHPublicKeyRequest& WithSSHPublicKey(SSHPublicKeyT&& value) { SetSSHPublicKey(std::forward<SSHPublicKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which the EC2 instance was launched.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    SendSSHPublicKeyRequest& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}
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
