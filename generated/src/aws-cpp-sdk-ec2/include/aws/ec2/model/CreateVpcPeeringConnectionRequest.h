/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateVpcPeeringConnectionRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateVpcPeeringConnectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpcPeeringConnection"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Region code for the accepter VPC, if the accepter VPC is located in a
     * Region other than the Region in which you make the request.</p> <p>Default: The
     * Region in which you make the request.</p>
     */
    inline const Aws::String& GetPeerRegion() const { return m_peerRegion; }
    inline bool PeerRegionHasBeenSet() const { return m_peerRegionHasBeenSet; }
    template<typename PeerRegionT = Aws::String>
    void SetPeerRegion(PeerRegionT&& value) { m_peerRegionHasBeenSet = true; m_peerRegion = std::forward<PeerRegionT>(value); }
    template<typename PeerRegionT = Aws::String>
    CreateVpcPeeringConnectionRequest& WithPeerRegion(PeerRegionT&& value) { SetPeerRegion(std::forward<PeerRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the peering connection.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateVpcPeeringConnectionRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateVpcPeeringConnectionRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateVpcPeeringConnectionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the requester VPC. You must specify this parameter in the
     * request.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    CreateVpcPeeringConnectionRequest& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC with which you are creating the VPC peering connection. You
     * must specify this parameter in the request.</p>
     */
    inline const Aws::String& GetPeerVpcId() const { return m_peerVpcId; }
    inline bool PeerVpcIdHasBeenSet() const { return m_peerVpcIdHasBeenSet; }
    template<typename PeerVpcIdT = Aws::String>
    void SetPeerVpcId(PeerVpcIdT&& value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId = std::forward<PeerVpcIdT>(value); }
    template<typename PeerVpcIdT = Aws::String>
    CreateVpcPeeringConnectionRequest& WithPeerVpcId(PeerVpcIdT&& value) { SetPeerVpcId(std::forward<PeerVpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the owner of the accepter VPC.</p>
     * <p>Default: Your Amazon Web Services account ID</p>
     */
    inline const Aws::String& GetPeerOwnerId() const { return m_peerOwnerId; }
    inline bool PeerOwnerIdHasBeenSet() const { return m_peerOwnerIdHasBeenSet; }
    template<typename PeerOwnerIdT = Aws::String>
    void SetPeerOwnerId(PeerOwnerIdT&& value) { m_peerOwnerIdHasBeenSet = true; m_peerOwnerId = std::forward<PeerOwnerIdT>(value); }
    template<typename PeerOwnerIdT = Aws::String>
    CreateVpcPeeringConnectionRequest& WithPeerOwnerId(PeerOwnerIdT&& value) { SetPeerOwnerId(std::forward<PeerOwnerIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_peerRegion;
    bool m_peerRegionHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_peerVpcId;
    bool m_peerVpcIdHasBeenSet = false;

    Aws::String m_peerOwnerId;
    bool m_peerOwnerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
