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
    AWS_EC2_API CreateTransitGatewayConnectPeerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTransitGatewayConnectPeer"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Connect attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const{ return m_transitGatewayAttachmentId; }

    /**
     * <p>The ID of the Connect attachment.</p>
     */
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }

    /**
     * <p>The ID of the Connect attachment.</p>
     */
    inline void SetTransitGatewayAttachmentId(const Aws::String& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = value; }

    /**
     * <p>The ID of the Connect attachment.</p>
     */
    inline void SetTransitGatewayAttachmentId(Aws::String&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::move(value); }

    /**
     * <p>The ID of the Connect attachment.</p>
     */
    inline void SetTransitGatewayAttachmentId(const char* value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId.assign(value); }

    /**
     * <p>The ID of the Connect attachment.</p>
     */
    inline CreateTransitGatewayConnectPeerRequest& WithTransitGatewayAttachmentId(const Aws::String& value) { SetTransitGatewayAttachmentId(value); return *this;}

    /**
     * <p>The ID of the Connect attachment.</p>
     */
    inline CreateTransitGatewayConnectPeerRequest& WithTransitGatewayAttachmentId(Aws::String&& value) { SetTransitGatewayAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Connect attachment.</p>
     */
    inline CreateTransitGatewayConnectPeerRequest& WithTransitGatewayAttachmentId(const char* value) { SetTransitGatewayAttachmentId(value); return *this;}


    /**
     * <p>The peer IP address (GRE outer IP address) on the transit gateway side of the
     * Connect peer, which must be specified from a transit gateway CIDR block. If not
     * specified, Amazon automatically assigns the first available IP address from the
     * transit gateway CIDR block.</p>
     */
    inline const Aws::String& GetTransitGatewayAddress() const{ return m_transitGatewayAddress; }

    /**
     * <p>The peer IP address (GRE outer IP address) on the transit gateway side of the
     * Connect peer, which must be specified from a transit gateway CIDR block. If not
     * specified, Amazon automatically assigns the first available IP address from the
     * transit gateway CIDR block.</p>
     */
    inline bool TransitGatewayAddressHasBeenSet() const { return m_transitGatewayAddressHasBeenSet; }

    /**
     * <p>The peer IP address (GRE outer IP address) on the transit gateway side of the
     * Connect peer, which must be specified from a transit gateway CIDR block. If not
     * specified, Amazon automatically assigns the first available IP address from the
     * transit gateway CIDR block.</p>
     */
    inline void SetTransitGatewayAddress(const Aws::String& value) { m_transitGatewayAddressHasBeenSet = true; m_transitGatewayAddress = value; }

    /**
     * <p>The peer IP address (GRE outer IP address) on the transit gateway side of the
     * Connect peer, which must be specified from a transit gateway CIDR block. If not
     * specified, Amazon automatically assigns the first available IP address from the
     * transit gateway CIDR block.</p>
     */
    inline void SetTransitGatewayAddress(Aws::String&& value) { m_transitGatewayAddressHasBeenSet = true; m_transitGatewayAddress = std::move(value); }

    /**
     * <p>The peer IP address (GRE outer IP address) on the transit gateway side of the
     * Connect peer, which must be specified from a transit gateway CIDR block. If not
     * specified, Amazon automatically assigns the first available IP address from the
     * transit gateway CIDR block.</p>
     */
    inline void SetTransitGatewayAddress(const char* value) { m_transitGatewayAddressHasBeenSet = true; m_transitGatewayAddress.assign(value); }

    /**
     * <p>The peer IP address (GRE outer IP address) on the transit gateway side of the
     * Connect peer, which must be specified from a transit gateway CIDR block. If not
     * specified, Amazon automatically assigns the first available IP address from the
     * transit gateway CIDR block.</p>
     */
    inline CreateTransitGatewayConnectPeerRequest& WithTransitGatewayAddress(const Aws::String& value) { SetTransitGatewayAddress(value); return *this;}

    /**
     * <p>The peer IP address (GRE outer IP address) on the transit gateway side of the
     * Connect peer, which must be specified from a transit gateway CIDR block. If not
     * specified, Amazon automatically assigns the first available IP address from the
     * transit gateway CIDR block.</p>
     */
    inline CreateTransitGatewayConnectPeerRequest& WithTransitGatewayAddress(Aws::String&& value) { SetTransitGatewayAddress(std::move(value)); return *this;}

    /**
     * <p>The peer IP address (GRE outer IP address) on the transit gateway side of the
     * Connect peer, which must be specified from a transit gateway CIDR block. If not
     * specified, Amazon automatically assigns the first available IP address from the
     * transit gateway CIDR block.</p>
     */
    inline CreateTransitGatewayConnectPeerRequest& WithTransitGatewayAddress(const char* value) { SetTransitGatewayAddress(value); return *this;}


    /**
     * <p>The peer IP address (GRE outer IP address) on the appliance side of the
     * Connect peer.</p>
     */
    inline const Aws::String& GetPeerAddress() const{ return m_peerAddress; }

    /**
     * <p>The peer IP address (GRE outer IP address) on the appliance side of the
     * Connect peer.</p>
     */
    inline bool PeerAddressHasBeenSet() const { return m_peerAddressHasBeenSet; }

    /**
     * <p>The peer IP address (GRE outer IP address) on the appliance side of the
     * Connect peer.</p>
     */
    inline void SetPeerAddress(const Aws::String& value) { m_peerAddressHasBeenSet = true; m_peerAddress = value; }

    /**
     * <p>The peer IP address (GRE outer IP address) on the appliance side of the
     * Connect peer.</p>
     */
    inline void SetPeerAddress(Aws::String&& value) { m_peerAddressHasBeenSet = true; m_peerAddress = std::move(value); }

    /**
     * <p>The peer IP address (GRE outer IP address) on the appliance side of the
     * Connect peer.</p>
     */
    inline void SetPeerAddress(const char* value) { m_peerAddressHasBeenSet = true; m_peerAddress.assign(value); }

    /**
     * <p>The peer IP address (GRE outer IP address) on the appliance side of the
     * Connect peer.</p>
     */
    inline CreateTransitGatewayConnectPeerRequest& WithPeerAddress(const Aws::String& value) { SetPeerAddress(value); return *this;}

    /**
     * <p>The peer IP address (GRE outer IP address) on the appliance side of the
     * Connect peer.</p>
     */
    inline CreateTransitGatewayConnectPeerRequest& WithPeerAddress(Aws::String&& value) { SetPeerAddress(std::move(value)); return *this;}

    /**
     * <p>The peer IP address (GRE outer IP address) on the appliance side of the
     * Connect peer.</p>
     */
    inline CreateTransitGatewayConnectPeerRequest& WithPeerAddress(const char* value) { SetPeerAddress(value); return *this;}


    /**
     * <p>The BGP options for the Connect peer.</p>
     */
    inline const TransitGatewayConnectRequestBgpOptions& GetBgpOptions() const{ return m_bgpOptions; }

    /**
     * <p>The BGP options for the Connect peer.</p>
     */
    inline bool BgpOptionsHasBeenSet() const { return m_bgpOptionsHasBeenSet; }

    /**
     * <p>The BGP options for the Connect peer.</p>
     */
    inline void SetBgpOptions(const TransitGatewayConnectRequestBgpOptions& value) { m_bgpOptionsHasBeenSet = true; m_bgpOptions = value; }

    /**
     * <p>The BGP options for the Connect peer.</p>
     */
    inline void SetBgpOptions(TransitGatewayConnectRequestBgpOptions&& value) { m_bgpOptionsHasBeenSet = true; m_bgpOptions = std::move(value); }

    /**
     * <p>The BGP options for the Connect peer.</p>
     */
    inline CreateTransitGatewayConnectPeerRequest& WithBgpOptions(const TransitGatewayConnectRequestBgpOptions& value) { SetBgpOptions(value); return *this;}

    /**
     * <p>The BGP options for the Connect peer.</p>
     */
    inline CreateTransitGatewayConnectPeerRequest& WithBgpOptions(TransitGatewayConnectRequestBgpOptions&& value) { SetBgpOptions(std::move(value)); return *this;}


    /**
     * <p>The range of inside IP addresses that are used for BGP peering. You must
     * specify a size /29 IPv4 CIDR block from the <code>169.254.0.0/16</code> range.
     * The first address from the range must be configured on the appliance as the BGP
     * IP address. You can also optionally specify a size /125 IPv6 CIDR block from the
     * <code>fd00::/8</code> range.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInsideCidrBlocks() const{ return m_insideCidrBlocks; }

    /**
     * <p>The range of inside IP addresses that are used for BGP peering. You must
     * specify a size /29 IPv4 CIDR block from the <code>169.254.0.0/16</code> range.
     * The first address from the range must be configured on the appliance as the BGP
     * IP address. You can also optionally specify a size /125 IPv6 CIDR block from the
     * <code>fd00::/8</code> range.</p>
     */
    inline bool InsideCidrBlocksHasBeenSet() const { return m_insideCidrBlocksHasBeenSet; }

    /**
     * <p>The range of inside IP addresses that are used for BGP peering. You must
     * specify a size /29 IPv4 CIDR block from the <code>169.254.0.0/16</code> range.
     * The first address from the range must be configured on the appliance as the BGP
     * IP address. You can also optionally specify a size /125 IPv6 CIDR block from the
     * <code>fd00::/8</code> range.</p>
     */
    inline void SetInsideCidrBlocks(const Aws::Vector<Aws::String>& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks = value; }

    /**
     * <p>The range of inside IP addresses that are used for BGP peering. You must
     * specify a size /29 IPv4 CIDR block from the <code>169.254.0.0/16</code> range.
     * The first address from the range must be configured on the appliance as the BGP
     * IP address. You can also optionally specify a size /125 IPv6 CIDR block from the
     * <code>fd00::/8</code> range.</p>
     */
    inline void SetInsideCidrBlocks(Aws::Vector<Aws::String>&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks = std::move(value); }

    /**
     * <p>The range of inside IP addresses that are used for BGP peering. You must
     * specify a size /29 IPv4 CIDR block from the <code>169.254.0.0/16</code> range.
     * The first address from the range must be configured on the appliance as the BGP
     * IP address. You can also optionally specify a size /125 IPv6 CIDR block from the
     * <code>fd00::/8</code> range.</p>
     */
    inline CreateTransitGatewayConnectPeerRequest& WithInsideCidrBlocks(const Aws::Vector<Aws::String>& value) { SetInsideCidrBlocks(value); return *this;}

    /**
     * <p>The range of inside IP addresses that are used for BGP peering. You must
     * specify a size /29 IPv4 CIDR block from the <code>169.254.0.0/16</code> range.
     * The first address from the range must be configured on the appliance as the BGP
     * IP address. You can also optionally specify a size /125 IPv6 CIDR block from the
     * <code>fd00::/8</code> range.</p>
     */
    inline CreateTransitGatewayConnectPeerRequest& WithInsideCidrBlocks(Aws::Vector<Aws::String>&& value) { SetInsideCidrBlocks(std::move(value)); return *this;}

    /**
     * <p>The range of inside IP addresses that are used for BGP peering. You must
     * specify a size /29 IPv4 CIDR block from the <code>169.254.0.0/16</code> range.
     * The first address from the range must be configured on the appliance as the BGP
     * IP address. You can also optionally specify a size /125 IPv6 CIDR block from the
     * <code>fd00::/8</code> range.</p>
     */
    inline CreateTransitGatewayConnectPeerRequest& AddInsideCidrBlocks(const Aws::String& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.push_back(value); return *this; }

    /**
     * <p>The range of inside IP addresses that are used for BGP peering. You must
     * specify a size /29 IPv4 CIDR block from the <code>169.254.0.0/16</code> range.
     * The first address from the range must be configured on the appliance as the BGP
     * IP address. You can also optionally specify a size /125 IPv6 CIDR block from the
     * <code>fd00::/8</code> range.</p>
     */
    inline CreateTransitGatewayConnectPeerRequest& AddInsideCidrBlocks(Aws::String&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.push_back(std::move(value)); return *this; }

    /**
     * <p>The range of inside IP addresses that are used for BGP peering. You must
     * specify a size /29 IPv4 CIDR block from the <code>169.254.0.0/16</code> range.
     * The first address from the range must be configured on the appliance as the BGP
     * IP address. You can also optionally specify a size /125 IPv6 CIDR block from the
     * <code>fd00::/8</code> range.</p>
     */
    inline CreateTransitGatewayConnectPeerRequest& AddInsideCidrBlocks(const char* value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.push_back(value); return *this; }


    /**
     * <p>The tags to apply to the Connect peer.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the Connect peer.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the Connect peer.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the Connect peer.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the Connect peer.</p>
     */
    inline CreateTransitGatewayConnectPeerRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the Connect peer.</p>
     */
    inline CreateTransitGatewayConnectPeerRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the Connect peer.</p>
     */
    inline CreateTransitGatewayConnectPeerRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the Connect peer.</p>
     */
    inline CreateTransitGatewayConnectPeerRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


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
    inline CreateTransitGatewayConnectPeerRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

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

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
