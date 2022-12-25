/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateTransitGatewayPrefixListReferenceRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateTransitGatewayPrefixListReferenceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTransitGatewayPrefixListReference"; }

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
    inline CreateTransitGatewayPrefixListReferenceRequest& WithTransitGatewayRouteTableId(const Aws::String& value) { SetTransitGatewayRouteTableId(value); return *this;}

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline CreateTransitGatewayPrefixListReferenceRequest& WithTransitGatewayRouteTableId(Aws::String&& value) { SetTransitGatewayRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline CreateTransitGatewayPrefixListReferenceRequest& WithTransitGatewayRouteTableId(const char* value) { SetTransitGatewayRouteTableId(value); return *this;}


    /**
     * <p>The ID of the prefix list that is used for destination matches.</p>
     */
    inline const Aws::String& GetPrefixListId() const{ return m_prefixListId; }

    /**
     * <p>The ID of the prefix list that is used for destination matches.</p>
     */
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }

    /**
     * <p>The ID of the prefix list that is used for destination matches.</p>
     */
    inline void SetPrefixListId(const Aws::String& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = value; }

    /**
     * <p>The ID of the prefix list that is used for destination matches.</p>
     */
    inline void SetPrefixListId(Aws::String&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::move(value); }

    /**
     * <p>The ID of the prefix list that is used for destination matches.</p>
     */
    inline void SetPrefixListId(const char* value) { m_prefixListIdHasBeenSet = true; m_prefixListId.assign(value); }

    /**
     * <p>The ID of the prefix list that is used for destination matches.</p>
     */
    inline CreateTransitGatewayPrefixListReferenceRequest& WithPrefixListId(const Aws::String& value) { SetPrefixListId(value); return *this;}

    /**
     * <p>The ID of the prefix list that is used for destination matches.</p>
     */
    inline CreateTransitGatewayPrefixListReferenceRequest& WithPrefixListId(Aws::String&& value) { SetPrefixListId(std::move(value)); return *this;}

    /**
     * <p>The ID of the prefix list that is used for destination matches.</p>
     */
    inline CreateTransitGatewayPrefixListReferenceRequest& WithPrefixListId(const char* value) { SetPrefixListId(value); return *this;}


    /**
     * <p>The ID of the attachment to which traffic is routed.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const{ return m_transitGatewayAttachmentId; }

    /**
     * <p>The ID of the attachment to which traffic is routed.</p>
     */
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }

    /**
     * <p>The ID of the attachment to which traffic is routed.</p>
     */
    inline void SetTransitGatewayAttachmentId(const Aws::String& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = value; }

    /**
     * <p>The ID of the attachment to which traffic is routed.</p>
     */
    inline void SetTransitGatewayAttachmentId(Aws::String&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::move(value); }

    /**
     * <p>The ID of the attachment to which traffic is routed.</p>
     */
    inline void SetTransitGatewayAttachmentId(const char* value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId.assign(value); }

    /**
     * <p>The ID of the attachment to which traffic is routed.</p>
     */
    inline CreateTransitGatewayPrefixListReferenceRequest& WithTransitGatewayAttachmentId(const Aws::String& value) { SetTransitGatewayAttachmentId(value); return *this;}

    /**
     * <p>The ID of the attachment to which traffic is routed.</p>
     */
    inline CreateTransitGatewayPrefixListReferenceRequest& WithTransitGatewayAttachmentId(Aws::String&& value) { SetTransitGatewayAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the attachment to which traffic is routed.</p>
     */
    inline CreateTransitGatewayPrefixListReferenceRequest& WithTransitGatewayAttachmentId(const char* value) { SetTransitGatewayAttachmentId(value); return *this;}


    /**
     * <p>Indicates whether to drop traffic that matches this route.</p>
     */
    inline bool GetBlackhole() const{ return m_blackhole; }

    /**
     * <p>Indicates whether to drop traffic that matches this route.</p>
     */
    inline bool BlackholeHasBeenSet() const { return m_blackholeHasBeenSet; }

    /**
     * <p>Indicates whether to drop traffic that matches this route.</p>
     */
    inline void SetBlackhole(bool value) { m_blackholeHasBeenSet = true; m_blackhole = value; }

    /**
     * <p>Indicates whether to drop traffic that matches this route.</p>
     */
    inline CreateTransitGatewayPrefixListReferenceRequest& WithBlackhole(bool value) { SetBlackhole(value); return *this;}


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
    inline CreateTransitGatewayPrefixListReferenceRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_transitGatewayRouteTableId;
    bool m_transitGatewayRouteTableIdHasBeenSet = false;

    Aws::String m_prefixListId;
    bool m_prefixListIdHasBeenSet = false;

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet = false;

    bool m_blackhole;
    bool m_blackholeHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
