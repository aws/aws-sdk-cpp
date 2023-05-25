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
  class DeleteTransitGatewayRouteTableRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeleteTransitGatewayRouteTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTransitGatewayRouteTable"; }

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
    inline DeleteTransitGatewayRouteTableRequest& WithTransitGatewayRouteTableId(const Aws::String& value) { SetTransitGatewayRouteTableId(value); return *this;}

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline DeleteTransitGatewayRouteTableRequest& WithTransitGatewayRouteTableId(Aws::String&& value) { SetTransitGatewayRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline DeleteTransitGatewayRouteTableRequest& WithTransitGatewayRouteTableId(const char* value) { SetTransitGatewayRouteTableId(value); return *this;}


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
    inline DeleteTransitGatewayRouteTableRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_transitGatewayRouteTableId;
    bool m_transitGatewayRouteTableIdHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
