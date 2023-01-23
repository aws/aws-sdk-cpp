/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/CreateTransitGatewayPeeringAttachmentRequestOptions.h>
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
  class CreateTransitGatewayPeeringAttachmentRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateTransitGatewayPeeringAttachmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTransitGatewayPeeringAttachment"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const{ return m_transitGatewayId; }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline void SetTransitGatewayId(const Aws::String& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = value; }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline void SetTransitGatewayId(Aws::String&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::move(value); }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline void SetTransitGatewayId(const char* value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId.assign(value); }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline CreateTransitGatewayPeeringAttachmentRequest& WithTransitGatewayId(const Aws::String& value) { SetTransitGatewayId(value); return *this;}

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline CreateTransitGatewayPeeringAttachmentRequest& WithTransitGatewayId(Aws::String&& value) { SetTransitGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline CreateTransitGatewayPeeringAttachmentRequest& WithTransitGatewayId(const char* value) { SetTransitGatewayId(value); return *this;}


    /**
     * <p>The ID of the peer transit gateway with which to create the peering
     * attachment.</p>
     */
    inline const Aws::String& GetPeerTransitGatewayId() const{ return m_peerTransitGatewayId; }

    /**
     * <p>The ID of the peer transit gateway with which to create the peering
     * attachment.</p>
     */
    inline bool PeerTransitGatewayIdHasBeenSet() const { return m_peerTransitGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the peer transit gateway with which to create the peering
     * attachment.</p>
     */
    inline void SetPeerTransitGatewayId(const Aws::String& value) { m_peerTransitGatewayIdHasBeenSet = true; m_peerTransitGatewayId = value; }

    /**
     * <p>The ID of the peer transit gateway with which to create the peering
     * attachment.</p>
     */
    inline void SetPeerTransitGatewayId(Aws::String&& value) { m_peerTransitGatewayIdHasBeenSet = true; m_peerTransitGatewayId = std::move(value); }

    /**
     * <p>The ID of the peer transit gateway with which to create the peering
     * attachment.</p>
     */
    inline void SetPeerTransitGatewayId(const char* value) { m_peerTransitGatewayIdHasBeenSet = true; m_peerTransitGatewayId.assign(value); }

    /**
     * <p>The ID of the peer transit gateway with which to create the peering
     * attachment.</p>
     */
    inline CreateTransitGatewayPeeringAttachmentRequest& WithPeerTransitGatewayId(const Aws::String& value) { SetPeerTransitGatewayId(value); return *this;}

    /**
     * <p>The ID of the peer transit gateway with which to create the peering
     * attachment.</p>
     */
    inline CreateTransitGatewayPeeringAttachmentRequest& WithPeerTransitGatewayId(Aws::String&& value) { SetPeerTransitGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the peer transit gateway with which to create the peering
     * attachment.</p>
     */
    inline CreateTransitGatewayPeeringAttachmentRequest& WithPeerTransitGatewayId(const char* value) { SetPeerTransitGatewayId(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account that owns the peer transit
     * gateway.</p>
     */
    inline const Aws::String& GetPeerAccountId() const{ return m_peerAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the peer transit
     * gateway.</p>
     */
    inline bool PeerAccountIdHasBeenSet() const { return m_peerAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the peer transit
     * gateway.</p>
     */
    inline void SetPeerAccountId(const Aws::String& value) { m_peerAccountIdHasBeenSet = true; m_peerAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the peer transit
     * gateway.</p>
     */
    inline void SetPeerAccountId(Aws::String&& value) { m_peerAccountIdHasBeenSet = true; m_peerAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the peer transit
     * gateway.</p>
     */
    inline void SetPeerAccountId(const char* value) { m_peerAccountIdHasBeenSet = true; m_peerAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the peer transit
     * gateway.</p>
     */
    inline CreateTransitGatewayPeeringAttachmentRequest& WithPeerAccountId(const Aws::String& value) { SetPeerAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the peer transit
     * gateway.</p>
     */
    inline CreateTransitGatewayPeeringAttachmentRequest& WithPeerAccountId(Aws::String&& value) { SetPeerAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the peer transit
     * gateway.</p>
     */
    inline CreateTransitGatewayPeeringAttachmentRequest& WithPeerAccountId(const char* value) { SetPeerAccountId(value); return *this;}


    /**
     * <p>The Region where the peer transit gateway is located.</p>
     */
    inline const Aws::String& GetPeerRegion() const{ return m_peerRegion; }

    /**
     * <p>The Region where the peer transit gateway is located.</p>
     */
    inline bool PeerRegionHasBeenSet() const { return m_peerRegionHasBeenSet; }

    /**
     * <p>The Region where the peer transit gateway is located.</p>
     */
    inline void SetPeerRegion(const Aws::String& value) { m_peerRegionHasBeenSet = true; m_peerRegion = value; }

    /**
     * <p>The Region where the peer transit gateway is located.</p>
     */
    inline void SetPeerRegion(Aws::String&& value) { m_peerRegionHasBeenSet = true; m_peerRegion = std::move(value); }

    /**
     * <p>The Region where the peer transit gateway is located.</p>
     */
    inline void SetPeerRegion(const char* value) { m_peerRegionHasBeenSet = true; m_peerRegion.assign(value); }

    /**
     * <p>The Region where the peer transit gateway is located.</p>
     */
    inline CreateTransitGatewayPeeringAttachmentRequest& WithPeerRegion(const Aws::String& value) { SetPeerRegion(value); return *this;}

    /**
     * <p>The Region where the peer transit gateway is located.</p>
     */
    inline CreateTransitGatewayPeeringAttachmentRequest& WithPeerRegion(Aws::String&& value) { SetPeerRegion(std::move(value)); return *this;}

    /**
     * <p>The Region where the peer transit gateway is located.</p>
     */
    inline CreateTransitGatewayPeeringAttachmentRequest& WithPeerRegion(const char* value) { SetPeerRegion(value); return *this;}


    /**
     * <p>Requests a transit gateway peering attachment.</p>
     */
    inline const CreateTransitGatewayPeeringAttachmentRequestOptions& GetOptions() const{ return m_options; }

    /**
     * <p>Requests a transit gateway peering attachment.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>Requests a transit gateway peering attachment.</p>
     */
    inline void SetOptions(const CreateTransitGatewayPeeringAttachmentRequestOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>Requests a transit gateway peering attachment.</p>
     */
    inline void SetOptions(CreateTransitGatewayPeeringAttachmentRequestOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>Requests a transit gateway peering attachment.</p>
     */
    inline CreateTransitGatewayPeeringAttachmentRequest& WithOptions(const CreateTransitGatewayPeeringAttachmentRequestOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>Requests a transit gateway peering attachment.</p>
     */
    inline CreateTransitGatewayPeeringAttachmentRequest& WithOptions(CreateTransitGatewayPeeringAttachmentRequestOptions&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>The tags to apply to the transit gateway peering attachment.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the transit gateway peering attachment.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the transit gateway peering attachment.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the transit gateway peering attachment.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the transit gateway peering attachment.</p>
     */
    inline CreateTransitGatewayPeeringAttachmentRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the transit gateway peering attachment.</p>
     */
    inline CreateTransitGatewayPeeringAttachmentRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the transit gateway peering attachment.</p>
     */
    inline CreateTransitGatewayPeeringAttachmentRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the transit gateway peering attachment.</p>
     */
    inline CreateTransitGatewayPeeringAttachmentRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


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
    inline CreateTransitGatewayPeeringAttachmentRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;

    Aws::String m_peerTransitGatewayId;
    bool m_peerTransitGatewayIdHasBeenSet = false;

    Aws::String m_peerAccountId;
    bool m_peerAccountIdHasBeenSet = false;

    Aws::String m_peerRegion;
    bool m_peerRegionHasBeenSet = false;

    CreateTransitGatewayPeeringAttachmentRequestOptions m_options;
    bool m_optionsHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
