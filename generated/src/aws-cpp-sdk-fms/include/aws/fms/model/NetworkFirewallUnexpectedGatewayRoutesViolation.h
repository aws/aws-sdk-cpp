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


    ///@{
    /**
     * <p>Information about the gateway ID.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
    inline void SetGatewayId(const Aws::String& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::move(value); }
    inline void SetGatewayId(const char* value) { m_gatewayIdHasBeenSet = true; m_gatewayId.assign(value); }
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routes that are in violation.</p>
     */
    inline const Aws::Vector<Route>& GetViolatingRoutes() const{ return m_violatingRoutes; }
    inline bool ViolatingRoutesHasBeenSet() const { return m_violatingRoutesHasBeenSet; }
    inline void SetViolatingRoutes(const Aws::Vector<Route>& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes = value; }
    inline void SetViolatingRoutes(Aws::Vector<Route>&& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes = std::move(value); }
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& WithViolatingRoutes(const Aws::Vector<Route>& value) { SetViolatingRoutes(value); return *this;}
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& WithViolatingRoutes(Aws::Vector<Route>&& value) { SetViolatingRoutes(std::move(value)); return *this;}
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& AddViolatingRoutes(const Route& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes.push_back(value); return *this; }
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& AddViolatingRoutes(Route&& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the route table.</p>
     */
    inline const Aws::String& GetRouteTableId() const{ return m_routeTableId; }
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }
    inline void SetRouteTableId(const Aws::String& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = value; }
    inline void SetRouteTableId(Aws::String&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::move(value); }
    inline void SetRouteTableId(const char* value) { m_routeTableIdHasBeenSet = true; m_routeTableId.assign(value); }
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& WithRouteTableId(const Aws::String& value) { SetRouteTableId(value); return *this;}
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& WithRouteTableId(Aws::String&& value) { SetRouteTableId(std::move(value)); return *this;}
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& WithRouteTableId(const char* value) { SetRouteTableId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the VPC ID.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline NetworkFirewallUnexpectedGatewayRoutesViolation& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}
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
