/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TransitGatewayConnectRequestBgpOptions.h>
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
  class CreateTransitGatewayConnectPeerRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateTransitGatewayConnectPeerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTransitGatewayConnectPeer"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Connect attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const { return m_transitGatewayAttachmentId; }
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }
    template<typename TransitGatewayAttachmentIdT = Aws::String>
    void SetTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::forward<TransitGatewayAttachmentIdT>(value); }
    template<typename TransitGatewayAttachmentIdT = Aws::String>
    CreateTransitGatewayConnectPeerRequest& WithTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) { SetTransitGatewayAttachmentId(std::forward<TransitGatewayAttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The peer IP address (GRE outer IP address) on the transit gateway side of the
     * Connect peer, which must be specified from a transit gateway CIDR block. If not
     * specified, Amazon automatically assigns the first available IP address from the
     * transit gateway CIDR block.</p>
     */
    inline const Aws::String& GetTransitGatewayAddress() const { return m_transitGatewayAddress; }
    inline bool TransitGatewayAddressHasBeenSet() const { return m_transitGatewayAddressHasBeenSet; }
    template<typename TransitGatewayAddressT = Aws::String>
    void SetTransitGatewayAddress(TransitGatewayAddressT&& value) { m_transitGatewayAddressHasBeenSet = true; m_transitGatewayAddress = std::forward<TransitGatewayAddressT>(value); }
    template<typename TransitGatewayAddressT = Aws::String>
    CreateTransitGatewayConnectPeerRequest& WithTransitGatewayAddress(TransitGatewayAddressT&& value) { SetTransitGatewayAddress(std::forward<TransitGatewayAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The peer IP address (GRE outer IP address) on the appliance side of the
     * Connect peer.</p>
     */
    inline const Aws::String& GetPeerAddress() const { return m_peerAddress; }
    inline bool PeerAddressHasBeenSet() const { return m_peerAddressHasBeenSet; }
    template<typename PeerAddressT = Aws::String>
    void SetPeerAddress(PeerAddressT&& value) { m_peerAddressHasBeenSet = true; m_peerAddress = std::forward<PeerAddressT>(value); }
    template<typename PeerAddressT = Aws::String>
    CreateTransitGatewayConnectPeerRequest& WithPeerAddress(PeerAddressT&& value) { SetPeerAddress(std::forward<PeerAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The BGP options for the Connect peer.</p>
     */
    inline const TransitGatewayConnectRequestBgpOptions& GetBgpOptions() const { return m_bgpOptions; }
    inline bool BgpOptionsHasBeenSet() const { return m_bgpOptionsHasBeenSet; }
    template<typename BgpOptionsT = TransitGatewayConnectRequestBgpOptions>
    void SetBgpOptions(BgpOptionsT&& value) { m_bgpOptionsHasBeenSet = true; m_bgpOptions = std::forward<BgpOptionsT>(value); }
    template<typename BgpOptionsT = TransitGatewayConnectRequestBgpOptions>
    CreateTransitGatewayConnectPeerRequest& WithBgpOptions(BgpOptionsT&& value) { SetBgpOptions(std::forward<BgpOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of inside IP addresses that are used for BGP peering. You must
     * specify a size /29 IPv4 CIDR block from the <code>169.254.0.0/16</code> range.
     * The first address from the range must be configured on the appliance as the BGP
     * IP address. You can also optionally specify a size /125 IPv6 CIDR block from the
     * <code>fd00::/8</code> range.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInsideCidrBlocks() const { return m_insideCidrBlocks; }
    inline bool InsideCidrBlocksHasBeenSet() const { return m_insideCidrBlocksHasBeenSet; }
    template<typename InsideCidrBlocksT = Aws::Vector<Aws::String>>
    void SetInsideCidrBlocks(InsideCidrBlocksT&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks = std::forward<InsideCidrBlocksT>(value); }
    template<typename InsideCidrBlocksT = Aws::Vector<Aws::String>>
    CreateTransitGatewayConnectPeerRequest& WithInsideCidrBlocks(InsideCidrBlocksT&& value) { SetInsideCidrBlocks(std::forward<InsideCidrBlocksT>(value)); return *this;}
    template<typename InsideCidrBlocksT = Aws::String>
    CreateTransitGatewayConnectPeerRequest& AddInsideCidrBlocks(InsideCidrBlocksT&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.emplace_back(std::forward<InsideCidrBlocksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the Connect peer.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateTransitGatewayConnectPeerRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateTransitGatewayConnectPeerRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
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
    inline CreateTransitGatewayConnectPeerRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet = false;

    Aws::String m_transitGatewayAddress;
    bool m_transitGatewayAddressHasBeenSet = false;

    Aws::String m_peerAddress;
    bool m_peerAddressHasBeenSet = false;

    TransitGatewayConnectRequestBgpOptions m_bgpOptions;
    bool m_bgpOptionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_insideCidrBlocks;
    bool m_insideCidrBlocksHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
