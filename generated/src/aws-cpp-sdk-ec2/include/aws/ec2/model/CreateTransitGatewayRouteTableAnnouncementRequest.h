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
  class CreateTransitGatewayRouteTableAnnouncementRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateTransitGatewayRouteTableAnnouncementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTransitGatewayRouteTableAnnouncement"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableId() const{ return m_transitGatewayRouteTableId; }

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline bool TransitGatewayRouteTableIdHasBeenSet() const { return m_transitGatewayRouteTableIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline void SetTransitGatewayRouteTableId(const Aws::String& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = value; }

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline void SetTransitGatewayRouteTableId(Aws::String&& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = std::move(value); }

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline void SetTransitGatewayRouteTableId(const char* value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId.assign(value); }

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline CreateTransitGatewayRouteTableAnnouncementRequest& WithTransitGatewayRouteTableId(const Aws::String& value) { SetTransitGatewayRouteTableId(value); return *this;}

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline CreateTransitGatewayRouteTableAnnouncementRequest& WithTransitGatewayRouteTableId(Aws::String&& value) { SetTransitGatewayRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline CreateTransitGatewayRouteTableAnnouncementRequest& WithTransitGatewayRouteTableId(const char* value) { SetTransitGatewayRouteTableId(value); return *this;}


    /**
     * <p>The ID of the peering attachment.</p>
     */
    inline const Aws::String& GetPeeringAttachmentId() const{ return m_peeringAttachmentId; }

    /**
     * <p>The ID of the peering attachment.</p>
     */
    inline bool PeeringAttachmentIdHasBeenSet() const { return m_peeringAttachmentIdHasBeenSet; }

    /**
     * <p>The ID of the peering attachment.</p>
     */
    inline void SetPeeringAttachmentId(const Aws::String& value) { m_peeringAttachmentIdHasBeenSet = true; m_peeringAttachmentId = value; }

    /**
     * <p>The ID of the peering attachment.</p>
     */
    inline void SetPeeringAttachmentId(Aws::String&& value) { m_peeringAttachmentIdHasBeenSet = true; m_peeringAttachmentId = std::move(value); }

    /**
     * <p>The ID of the peering attachment.</p>
     */
    inline void SetPeeringAttachmentId(const char* value) { m_peeringAttachmentIdHasBeenSet = true; m_peeringAttachmentId.assign(value); }

    /**
     * <p>The ID of the peering attachment.</p>
     */
    inline CreateTransitGatewayRouteTableAnnouncementRequest& WithPeeringAttachmentId(const Aws::String& value) { SetPeeringAttachmentId(value); return *this;}

    /**
     * <p>The ID of the peering attachment.</p>
     */
    inline CreateTransitGatewayRouteTableAnnouncementRequest& WithPeeringAttachmentId(Aws::String&& value) { SetPeeringAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the peering attachment.</p>
     */
    inline CreateTransitGatewayRouteTableAnnouncementRequest& WithPeeringAttachmentId(const char* value) { SetPeeringAttachmentId(value); return *this;}


    /**
     * <p>The tags specifications applied to the transit gateway route table
     * announcement.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags specifications applied to the transit gateway route table
     * announcement.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags specifications applied to the transit gateway route table
     * announcement.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags specifications applied to the transit gateway route table
     * announcement.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags specifications applied to the transit gateway route table
     * announcement.</p>
     */
    inline CreateTransitGatewayRouteTableAnnouncementRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags specifications applied to the transit gateway route table
     * announcement.</p>
     */
    inline CreateTransitGatewayRouteTableAnnouncementRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags specifications applied to the transit gateway route table
     * announcement.</p>
     */
    inline CreateTransitGatewayRouteTableAnnouncementRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags specifications applied to the transit gateway route table
     * announcement.</p>
     */
    inline CreateTransitGatewayRouteTableAnnouncementRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


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
    inline CreateTransitGatewayRouteTableAnnouncementRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_transitGatewayRouteTableId;
    bool m_transitGatewayRouteTableIdHasBeenSet = false;

    Aws::String m_peeringAttachmentId;
    bool m_peeringAttachmentIdHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
