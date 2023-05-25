/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class RejectTransitGatewayMulticastDomainAssociationsRequest : public EC2Request
  {
  public:
    AWS_EC2_API RejectTransitGatewayMulticastDomainAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RejectTransitGatewayMulticastDomainAssociations"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline const Aws::String& GetTransitGatewayMulticastDomainId() const{ return m_transitGatewayMulticastDomainId; }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline bool TransitGatewayMulticastDomainIdHasBeenSet() const { return m_transitGatewayMulticastDomainIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomainId(const Aws::String& value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId = value; }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomainId(Aws::String&& value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId = std::move(value); }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomainId(const char* value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId.assign(value); }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline RejectTransitGatewayMulticastDomainAssociationsRequest& WithTransitGatewayMulticastDomainId(const Aws::String& value) { SetTransitGatewayMulticastDomainId(value); return *this;}

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline RejectTransitGatewayMulticastDomainAssociationsRequest& WithTransitGatewayMulticastDomainId(Aws::String&& value) { SetTransitGatewayMulticastDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline RejectTransitGatewayMulticastDomainAssociationsRequest& WithTransitGatewayMulticastDomainId(const char* value) { SetTransitGatewayMulticastDomainId(value); return *this;}


    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const{ return m_transitGatewayAttachmentId; }

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline void SetTransitGatewayAttachmentId(const Aws::String& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = value; }

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline void SetTransitGatewayAttachmentId(Aws::String&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::move(value); }

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline void SetTransitGatewayAttachmentId(const char* value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId.assign(value); }

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline RejectTransitGatewayMulticastDomainAssociationsRequest& WithTransitGatewayAttachmentId(const Aws::String& value) { SetTransitGatewayAttachmentId(value); return *this;}

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline RejectTransitGatewayMulticastDomainAssociationsRequest& WithTransitGatewayAttachmentId(Aws::String&& value) { SetTransitGatewayAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline RejectTransitGatewayMulticastDomainAssociationsRequest& WithTransitGatewayAttachmentId(const char* value) { SetTransitGatewayAttachmentId(value); return *this;}


    /**
     * <p>The IDs of the subnets to associate with the transit gateway multicast
     * domain.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The IDs of the subnets to associate with the transit gateway multicast
     * domain.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The IDs of the subnets to associate with the transit gateway multicast
     * domain.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The IDs of the subnets to associate with the transit gateway multicast
     * domain.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The IDs of the subnets to associate with the transit gateway multicast
     * domain.</p>
     */
    inline RejectTransitGatewayMulticastDomainAssociationsRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The IDs of the subnets to associate with the transit gateway multicast
     * domain.</p>
     */
    inline RejectTransitGatewayMulticastDomainAssociationsRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the subnets to associate with the transit gateway multicast
     * domain.</p>
     */
    inline RejectTransitGatewayMulticastDomainAssociationsRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the subnets to associate with the transit gateway multicast
     * domain.</p>
     */
    inline RejectTransitGatewayMulticastDomainAssociationsRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the subnets to associate with the transit gateway multicast
     * domain.</p>
     */
    inline RejectTransitGatewayMulticastDomainAssociationsRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


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
    inline RejectTransitGatewayMulticastDomainAssociationsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_transitGatewayMulticastDomainId;
    bool m_transitGatewayMulticastDomainIdHasBeenSet = false;

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
