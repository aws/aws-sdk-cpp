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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateVpcPeeringConnection.</p>
   */
  class AWS_EC2_API CreateVpcPeeringConnectionRequest : public EC2Request
  {
  public:
    CreateVpcPeeringConnectionRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The ID of the requester VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the requester VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the requester VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the requester VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the requester VPC.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the requester VPC.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the requester VPC.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC with which you are creating the VPC peering connection.</p>
     */
    inline const Aws::String& GetPeerVpcId() const{ return m_peerVpcId; }

    /**
     * <p>The ID of the VPC with which you are creating the VPC peering connection.</p>
     */
    inline void SetPeerVpcId(const Aws::String& value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId = value; }

    /**
     * <p>The ID of the VPC with which you are creating the VPC peering connection.</p>
     */
    inline void SetPeerVpcId(Aws::String&& value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId = value; }

    /**
     * <p>The ID of the VPC with which you are creating the VPC peering connection.</p>
     */
    inline void SetPeerVpcId(const char* value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId.assign(value); }

    /**
     * <p>The ID of the VPC with which you are creating the VPC peering connection.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerVpcId(const Aws::String& value) { SetPeerVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC with which you are creating the VPC peering connection.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerVpcId(Aws::String&& value) { SetPeerVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC with which you are creating the VPC peering connection.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerVpcId(const char* value) { SetPeerVpcId(value); return *this;}

    /**
     * <p>The AWS account ID of the owner of the peer VPC.</p> <p>Default: Your AWS
     * account ID</p>
     */
    inline const Aws::String& GetPeerOwnerId() const{ return m_peerOwnerId; }

    /**
     * <p>The AWS account ID of the owner of the peer VPC.</p> <p>Default: Your AWS
     * account ID</p>
     */
    inline void SetPeerOwnerId(const Aws::String& value) { m_peerOwnerIdHasBeenSet = true; m_peerOwnerId = value; }

    /**
     * <p>The AWS account ID of the owner of the peer VPC.</p> <p>Default: Your AWS
     * account ID</p>
     */
    inline void SetPeerOwnerId(Aws::String&& value) { m_peerOwnerIdHasBeenSet = true; m_peerOwnerId = value; }

    /**
     * <p>The AWS account ID of the owner of the peer VPC.</p> <p>Default: Your AWS
     * account ID</p>
     */
    inline void SetPeerOwnerId(const char* value) { m_peerOwnerIdHasBeenSet = true; m_peerOwnerId.assign(value); }

    /**
     * <p>The AWS account ID of the owner of the peer VPC.</p> <p>Default: Your AWS
     * account ID</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerOwnerId(const Aws::String& value) { SetPeerOwnerId(value); return *this;}

    /**
     * <p>The AWS account ID of the owner of the peer VPC.</p> <p>Default: Your AWS
     * account ID</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerOwnerId(Aws::String&& value) { SetPeerOwnerId(value); return *this;}

    /**
     * <p>The AWS account ID of the owner of the peer VPC.</p> <p>Default: Your AWS
     * account ID</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerOwnerId(const char* value) { SetPeerOwnerId(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
    Aws::String m_peerVpcId;
    bool m_peerVpcIdHasBeenSet;
    Aws::String m_peerOwnerId;
    bool m_peerOwnerIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
