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
   * <p>Contains the parameters for EnableVgwRoutePropagation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableVgwRoutePropagationRequest">AWS
   * API Reference</a></p>
   */
  class EnableVgwRoutePropagationRequest : public EC2Request
  {
  public:
    AWS_EC2_API EnableVgwRoutePropagationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableVgwRoutePropagation"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the virtual private gateway that is attached to a VPC. The virtual
     * private gateway must be attached to the same VPC that the routing tables are
     * associated with. </p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }

    /**
     * <p>The ID of the virtual private gateway that is attached to a VPC. The virtual
     * private gateway must be attached to the same VPC that the routing tables are
     * associated with. </p>
     */
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }

    /**
     * <p>The ID of the virtual private gateway that is attached to a VPC. The virtual
     * private gateway must be attached to the same VPC that the routing tables are
     * associated with. </p>
     */
    inline void SetGatewayId(const Aws::String& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }

    /**
     * <p>The ID of the virtual private gateway that is attached to a VPC. The virtual
     * private gateway must be attached to the same VPC that the routing tables are
     * associated with. </p>
     */
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::move(value); }

    /**
     * <p>The ID of the virtual private gateway that is attached to a VPC. The virtual
     * private gateway must be attached to the same VPC that the routing tables are
     * associated with. </p>
     */
    inline void SetGatewayId(const char* value) { m_gatewayIdHasBeenSet = true; m_gatewayId.assign(value); }

    /**
     * <p>The ID of the virtual private gateway that is attached to a VPC. The virtual
     * private gateway must be attached to the same VPC that the routing tables are
     * associated with. </p>
     */
    inline EnableVgwRoutePropagationRequest& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}

    /**
     * <p>The ID of the virtual private gateway that is attached to a VPC. The virtual
     * private gateway must be attached to the same VPC that the routing tables are
     * associated with. </p>
     */
    inline EnableVgwRoutePropagationRequest& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual private gateway that is attached to a VPC. The virtual
     * private gateway must be attached to the same VPC that the routing tables are
     * associated with. </p>
     */
    inline EnableVgwRoutePropagationRequest& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}


    /**
     * <p>The ID of the route table. The routing table must be associated with the same
     * VPC that the virtual private gateway is attached to. </p>
     */
    inline const Aws::String& GetRouteTableId() const{ return m_routeTableId; }

    /**
     * <p>The ID of the route table. The routing table must be associated with the same
     * VPC that the virtual private gateway is attached to. </p>
     */
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }

    /**
     * <p>The ID of the route table. The routing table must be associated with the same
     * VPC that the virtual private gateway is attached to. </p>
     */
    inline void SetRouteTableId(const Aws::String& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = value; }

    /**
     * <p>The ID of the route table. The routing table must be associated with the same
     * VPC that the virtual private gateway is attached to. </p>
     */
    inline void SetRouteTableId(Aws::String&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::move(value); }

    /**
     * <p>The ID of the route table. The routing table must be associated with the same
     * VPC that the virtual private gateway is attached to. </p>
     */
    inline void SetRouteTableId(const char* value) { m_routeTableIdHasBeenSet = true; m_routeTableId.assign(value); }

    /**
     * <p>The ID of the route table. The routing table must be associated with the same
     * VPC that the virtual private gateway is attached to. </p>
     */
    inline EnableVgwRoutePropagationRequest& WithRouteTableId(const Aws::String& value) { SetRouteTableId(value); return *this;}

    /**
     * <p>The ID of the route table. The routing table must be associated with the same
     * VPC that the virtual private gateway is attached to. </p>
     */
    inline EnableVgwRoutePropagationRequest& WithRouteTableId(Aws::String&& value) { SetRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the route table. The routing table must be associated with the same
     * VPC that the virtual private gateway is attached to. </p>
     */
    inline EnableVgwRoutePropagationRequest& WithRouteTableId(const char* value) { SetRouteTableId(value); return *this;}


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
    inline EnableVgwRoutePropagationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
