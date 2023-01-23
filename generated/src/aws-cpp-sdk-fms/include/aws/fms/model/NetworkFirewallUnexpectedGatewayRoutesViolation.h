/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/model/Route.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FMS
{
namespace Model
{

  /**
   * <p>Violation detail for an unexpected gateway route that’s present in a route
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/NetworkFirewallUnexpectedGatewayRoutesViolation">AWS
   * API Reference</a></p>
   */
  class NetworkFirewallUnexpectedGatewayRoutesViolation
  {
  public:
    AWS_FMS_API NetworkFirewallUnexpectedGatewayRoutesViolation();
    AWS_FMS_API NetworkFirewallUnexpectedGatewayRoutesViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkFirewallUnexpectedGatewayRoutesViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the gateway ID.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }

    /**
     * <p>Information about the gateway ID.</p>
     */
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }

    /**
     * <p>Information about the gateway ID.</p>
     */
    inline void SetGatewayId(const Aws::String& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }

    /**
     * <p>Information about the gateway ID.</p>
     */
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::move(value); }

    /**
     * <p>Information about the gateway ID.</p>
     */
    inline void SetGatewayId(const char* value) { m_gatewayIdHasBeenSet = true; m_gatewayId.assign(value); }

    /**
     * <p>Information about the gateway ID.</p>
     */
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}

    /**
     * <p>Information about the gateway ID.</p>
     */
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}

    /**
     * <p>Information about the gateway ID.</p>
     */
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}


    /**
     * <p>The routes that are in violation.</p>
     */
    inline const Aws::Vector<Route>& GetViolatingRoutes() const{ return m_violatingRoutes; }

    /**
     * <p>The routes that are in violation.</p>
     */
    inline bool ViolatingRoutesHasBeenSet() const { return m_violatingRoutesHasBeenSet; }

    /**
     * <p>The routes that are in violation.</p>
     */
    inline void SetViolatingRoutes(const Aws::Vector<Route>& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes = value; }

    /**
     * <p>The routes that are in violation.</p>
     */
    inline void SetViolatingRoutes(Aws::Vector<Route>&& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes = std::move(value); }

    /**
     * <p>The routes that are in violation.</p>
     */
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& WithViolatingRoutes(const Aws::Vector<Route>& value) { SetViolatingRoutes(value); return *this;}

    /**
     * <p>The routes that are in violation.</p>
     */
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& WithViolatingRoutes(Aws::Vector<Route>&& value) { SetViolatingRoutes(std::move(value)); return *this;}

    /**
     * <p>The routes that are in violation.</p>
     */
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& AddViolatingRoutes(const Route& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes.push_back(value); return *this; }

    /**
     * <p>The routes that are in violation.</p>
     */
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& AddViolatingRoutes(Route&& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the route table.</p>
     */
    inline const Aws::String& GetRouteTableId() const{ return m_routeTableId; }

    /**
     * <p>Information about the route table.</p>
     */
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }

    /**
     * <p>Information about the route table.</p>
     */
    inline void SetRouteTableId(const Aws::String& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = value; }

    /**
     * <p>Information about the route table.</p>
     */
    inline void SetRouteTableId(Aws::String&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::move(value); }

    /**
     * <p>Information about the route table.</p>
     */
    inline void SetRouteTableId(const char* value) { m_routeTableIdHasBeenSet = true; m_routeTableId.assign(value); }

    /**
     * <p>Information about the route table.</p>
     */
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& WithRouteTableId(const Aws::String& value) { SetRouteTableId(value); return *this;}

    /**
     * <p>Information about the route table.</p>
     */
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& WithRouteTableId(Aws::String&& value) { SetRouteTableId(std::move(value)); return *this;}

    /**
     * <p>Information about the route table.</p>
     */
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& WithRouteTableId(const char* value) { SetRouteTableId(value); return *this;}


    /**
     * <p>Information about the VPC ID.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>Information about the VPC ID.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>Information about the VPC ID.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>Information about the VPC ID.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>Information about the VPC ID.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>Information about the VPC ID.</p>
     */
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>Information about the VPC ID.</p>
     */
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>Information about the VPC ID.</p>
     */
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    Aws::Vector<Route> m_violatingRoutes;
    bool m_violatingRoutesHasBeenSet = false;

    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
