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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API CreateVpcPeeringConnectionRequest : public EC2Request
  {
  public:
    CreateVpcPeeringConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpcPeeringConnection"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

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
     * <p>The AWS account ID of the owner of the accepter VPC.</p> <p>Default: Your AWS
     * account ID</p>
     */
    inline const Aws::String& GetPeerOwnerId() const{ return m_peerOwnerId; }

    /**
     * <p>The AWS account ID of the owner of the accepter VPC.</p> <p>Default: Your AWS
     * account ID</p>
     */
    inline bool PeerOwnerIdHasBeenSet() const { return m_peerOwnerIdHasBeenSet; }

    /**
     * <p>The AWS account ID of the owner of the accepter VPC.</p> <p>Default: Your AWS
     * account ID</p>
     */
    inline void SetPeerOwnerId(const Aws::String& value) { m_peerOwnerIdHasBeenSet = true; m_peerOwnerId = value; }

    /**
     * <p>The AWS account ID of the owner of the accepter VPC.</p> <p>Default: Your AWS
     * account ID</p>
     */
    inline void SetPeerOwnerId(Aws::String&& value) { m_peerOwnerIdHasBeenSet = true; m_peerOwnerId = std::move(value); }

    /**
     * <p>The AWS account ID of the owner of the accepter VPC.</p> <p>Default: Your AWS
     * account ID</p>
     */
    inline void SetPeerOwnerId(const char* value) { m_peerOwnerIdHasBeenSet = true; m_peerOwnerId.assign(value); }

    /**
     * <p>The AWS account ID of the owner of the accepter VPC.</p> <p>Default: Your AWS
     * account ID</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerOwnerId(const Aws::String& value) { SetPeerOwnerId(value); return *this;}

    /**
     * <p>The AWS account ID of the owner of the accepter VPC.</p> <p>Default: Your AWS
     * account ID</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerOwnerId(Aws::String&& value) { SetPeerOwnerId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the owner of the accepter VPC.</p> <p>Default: Your AWS
     * account ID</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerOwnerId(const char* value) { SetPeerOwnerId(value); return *this;}


    /**
     * <p>The ID of the VPC with which you are creating the VPC peering connection. You
     * must specify this parameter in the request.</p>
     */
    inline const Aws::String& GetPeerVpcId() const{ return m_peerVpcId; }

    /**
     * <p>The ID of the VPC with which you are creating the VPC peering connection. You
     * must specify this parameter in the request.</p>
     */
    inline bool PeerVpcIdHasBeenSet() const { return m_peerVpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC with which you are creating the VPC peering connection. You
     * must specify this parameter in the request.</p>
     */
    inline void SetPeerVpcId(const Aws::String& value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId = value; }

    /**
     * <p>The ID of the VPC with which you are creating the VPC peering connection. You
     * must specify this parameter in the request.</p>
     */
    inline void SetPeerVpcId(Aws::String&& value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId = std::move(value); }

    /**
     * <p>The ID of the VPC with which you are creating the VPC peering connection. You
     * must specify this parameter in the request.</p>
     */
    inline void SetPeerVpcId(const char* value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId.assign(value); }

    /**
     * <p>The ID of the VPC with which you are creating the VPC peering connection. You
     * must specify this parameter in the request.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerVpcId(const Aws::String& value) { SetPeerVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC with which you are creating the VPC peering connection. You
     * must specify this parameter in the request.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerVpcId(Aws::String&& value) { SetPeerVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC with which you are creating the VPC peering connection. You
     * must specify this parameter in the request.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerVpcId(const char* value) { SetPeerVpcId(value); return *this;}


    /**
     * <p>The ID of the requester VPC. You must specify this parameter in the
     * request.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the requester VPC. You must specify this parameter in the
     * request.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the requester VPC. You must specify this parameter in the
     * request.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the requester VPC. You must specify this parameter in the
     * request.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the requester VPC. You must specify this parameter in the
     * request.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the requester VPC. You must specify this parameter in the
     * request.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the requester VPC. You must specify this parameter in the
     * request.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the requester VPC. You must specify this parameter in the
     * request.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The Region code for the accepter VPC, if the accepter VPC is located in a
     * Region other than the Region in which you make the request.</p> <p>Default: The
     * Region in which you make the request.</p>
     */
    inline const Aws::String& GetPeerRegion() const{ return m_peerRegion; }

    /**
     * <p>The Region code for the accepter VPC, if the accepter VPC is located in a
     * Region other than the Region in which you make the request.</p> <p>Default: The
     * Region in which you make the request.</p>
     */
    inline bool PeerRegionHasBeenSet() const { return m_peerRegionHasBeenSet; }

    /**
     * <p>The Region code for the accepter VPC, if the accepter VPC is located in a
     * Region other than the Region in which you make the request.</p> <p>Default: The
     * Region in which you make the request.</p>
     */
    inline void SetPeerRegion(const Aws::String& value) { m_peerRegionHasBeenSet = true; m_peerRegion = value; }

    /**
     * <p>The Region code for the accepter VPC, if the accepter VPC is located in a
     * Region other than the Region in which you make the request.</p> <p>Default: The
     * Region in which you make the request.</p>
     */
    inline void SetPeerRegion(Aws::String&& value) { m_peerRegionHasBeenSet = true; m_peerRegion = std::move(value); }

    /**
     * <p>The Region code for the accepter VPC, if the accepter VPC is located in a
     * Region other than the Region in which you make the request.</p> <p>Default: The
     * Region in which you make the request.</p>
     */
    inline void SetPeerRegion(const char* value) { m_peerRegionHasBeenSet = true; m_peerRegion.assign(value); }

    /**
     * <p>The Region code for the accepter VPC, if the accepter VPC is located in a
     * Region other than the Region in which you make the request.</p> <p>Default: The
     * Region in which you make the request.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerRegion(const Aws::String& value) { SetPeerRegion(value); return *this;}

    /**
     * <p>The Region code for the accepter VPC, if the accepter VPC is located in a
     * Region other than the Region in which you make the request.</p> <p>Default: The
     * Region in which you make the request.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerRegion(Aws::String&& value) { SetPeerRegion(std::move(value)); return *this;}

    /**
     * <p>The Region code for the accepter VPC, if the accepter VPC is located in a
     * Region other than the Region in which you make the request.</p> <p>Default: The
     * Region in which you make the request.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerRegion(const char* value) { SetPeerRegion(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_peerOwnerId;
    bool m_peerOwnerIdHasBeenSet;

    Aws::String m_peerVpcId;
    bool m_peerVpcIdHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::String m_peerRegion;
    bool m_peerRegionHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
