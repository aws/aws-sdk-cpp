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
   * <p>Contains details about the route endpoint that violates the policy
   * scope.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/RouteHasOutOfScopeEndpointViolation">AWS
   * API Reference</a></p>
   */
  class RouteHasOutOfScopeEndpointViolation
  {
  public:
    AWS_FMS_API RouteHasOutOfScopeEndpointViolation();
    AWS_FMS_API RouteHasOutOfScopeEndpointViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API RouteHasOutOfScopeEndpointViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the subnet associated with the route that violates the policy
     * scope.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline RouteHasOutOfScopeEndpointViolation& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID of the route that violates the policy scope.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline RouteHasOutOfScopeEndpointViolation& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the route table.</p>
     */
    inline const Aws::String& GetRouteTableId() const{ return m_routeTableId; }
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }
    inline void SetRouteTableId(const Aws::String& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = value; }
    inline void SetRouteTableId(Aws::String&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::move(value); }
    inline void SetRouteTableId(const char* value) { m_routeTableIdHasBeenSet = true; m_routeTableId.assign(value); }
    inline RouteHasOutOfScopeEndpointViolation& WithRouteTableId(const Aws::String& value) { SetRouteTableId(value); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& WithRouteTableId(Aws::String&& value) { SetRouteTableId(std::move(value)); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& WithRouteTableId(const char* value) { SetRouteTableId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of routes that violate the route table.</p>
     */
    inline const Aws::Vector<Route>& GetViolatingRoutes() const{ return m_violatingRoutes; }
    inline bool ViolatingRoutesHasBeenSet() const { return m_violatingRoutesHasBeenSet; }
    inline void SetViolatingRoutes(const Aws::Vector<Route>& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes = value; }
    inline void SetViolatingRoutes(Aws::Vector<Route>&& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes = std::move(value); }
    inline RouteHasOutOfScopeEndpointViolation& WithViolatingRoutes(const Aws::Vector<Route>& value) { SetViolatingRoutes(value); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& WithViolatingRoutes(Aws::Vector<Route>&& value) { SetViolatingRoutes(std::move(value)); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& AddViolatingRoutes(const Route& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes.push_back(value); return *this; }
    inline RouteHasOutOfScopeEndpointViolation& AddViolatingRoutes(Route&& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The subnet's Availability Zone.</p>
     */
    inline const Aws::String& GetSubnetAvailabilityZone() const{ return m_subnetAvailabilityZone; }
    inline bool SubnetAvailabilityZoneHasBeenSet() const { return m_subnetAvailabilityZoneHasBeenSet; }
    inline void SetSubnetAvailabilityZone(const Aws::String& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = value; }
    inline void SetSubnetAvailabilityZone(Aws::String&& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = std::move(value); }
    inline void SetSubnetAvailabilityZone(const char* value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone.assign(value); }
    inline RouteHasOutOfScopeEndpointViolation& WithSubnetAvailabilityZone(const Aws::String& value) { SetSubnetAvailabilityZone(value); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& WithSubnetAvailabilityZone(Aws::String&& value) { SetSubnetAvailabilityZone(std::move(value)); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& WithSubnetAvailabilityZone(const char* value) { SetSubnetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet's Availability Zone.</p>
     */
    inline const Aws::String& GetSubnetAvailabilityZoneId() const{ return m_subnetAvailabilityZoneId; }
    inline bool SubnetAvailabilityZoneIdHasBeenSet() const { return m_subnetAvailabilityZoneIdHasBeenSet; }
    inline void SetSubnetAvailabilityZoneId(const Aws::String& value) { m_subnetAvailabilityZoneIdHasBeenSet = true; m_subnetAvailabilityZoneId = value; }
    inline void SetSubnetAvailabilityZoneId(Aws::String&& value) { m_subnetAvailabilityZoneIdHasBeenSet = true; m_subnetAvailabilityZoneId = std::move(value); }
    inline void SetSubnetAvailabilityZoneId(const char* value) { m_subnetAvailabilityZoneIdHasBeenSet = true; m_subnetAvailabilityZoneId.assign(value); }
    inline RouteHasOutOfScopeEndpointViolation& WithSubnetAvailabilityZoneId(const Aws::String& value) { SetSubnetAvailabilityZoneId(value); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& WithSubnetAvailabilityZoneId(Aws::String&& value) { SetSubnetAvailabilityZoneId(std::move(value)); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& WithSubnetAvailabilityZoneId(const char* value) { SetSubnetAvailabilityZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route table associated with the current firewall subnet.</p>
     */
    inline const Aws::String& GetCurrentFirewallSubnetRouteTable() const{ return m_currentFirewallSubnetRouteTable; }
    inline bool CurrentFirewallSubnetRouteTableHasBeenSet() const { return m_currentFirewallSubnetRouteTableHasBeenSet; }
    inline void SetCurrentFirewallSubnetRouteTable(const Aws::String& value) { m_currentFirewallSubnetRouteTableHasBeenSet = true; m_currentFirewallSubnetRouteTable = value; }
    inline void SetCurrentFirewallSubnetRouteTable(Aws::String&& value) { m_currentFirewallSubnetRouteTableHasBeenSet = true; m_currentFirewallSubnetRouteTable = std::move(value); }
    inline void SetCurrentFirewallSubnetRouteTable(const char* value) { m_currentFirewallSubnetRouteTableHasBeenSet = true; m_currentFirewallSubnetRouteTable.assign(value); }
    inline RouteHasOutOfScopeEndpointViolation& WithCurrentFirewallSubnetRouteTable(const Aws::String& value) { SetCurrentFirewallSubnetRouteTable(value); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& WithCurrentFirewallSubnetRouteTable(Aws::String&& value) { SetCurrentFirewallSubnetRouteTable(std::move(value)); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& WithCurrentFirewallSubnetRouteTable(const char* value) { SetCurrentFirewallSubnetRouteTable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the firewall subnet.</p>
     */
    inline const Aws::String& GetFirewallSubnetId() const{ return m_firewallSubnetId; }
    inline bool FirewallSubnetIdHasBeenSet() const { return m_firewallSubnetIdHasBeenSet; }
    inline void SetFirewallSubnetId(const Aws::String& value) { m_firewallSubnetIdHasBeenSet = true; m_firewallSubnetId = value; }
    inline void SetFirewallSubnetId(Aws::String&& value) { m_firewallSubnetIdHasBeenSet = true; m_firewallSubnetId = std::move(value); }
    inline void SetFirewallSubnetId(const char* value) { m_firewallSubnetIdHasBeenSet = true; m_firewallSubnetId.assign(value); }
    inline RouteHasOutOfScopeEndpointViolation& WithFirewallSubnetId(const Aws::String& value) { SetFirewallSubnetId(value); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& WithFirewallSubnetId(Aws::String&& value) { SetFirewallSubnetId(std::move(value)); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& WithFirewallSubnetId(const char* value) { SetFirewallSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of firewall subnet routes.</p>
     */
    inline const Aws::Vector<Route>& GetFirewallSubnetRoutes() const{ return m_firewallSubnetRoutes; }
    inline bool FirewallSubnetRoutesHasBeenSet() const { return m_firewallSubnetRoutesHasBeenSet; }
    inline void SetFirewallSubnetRoutes(const Aws::Vector<Route>& value) { m_firewallSubnetRoutesHasBeenSet = true; m_firewallSubnetRoutes = value; }
    inline void SetFirewallSubnetRoutes(Aws::Vector<Route>&& value) { m_firewallSubnetRoutesHasBeenSet = true; m_firewallSubnetRoutes = std::move(value); }
    inline RouteHasOutOfScopeEndpointViolation& WithFirewallSubnetRoutes(const Aws::Vector<Route>& value) { SetFirewallSubnetRoutes(value); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& WithFirewallSubnetRoutes(Aws::Vector<Route>&& value) { SetFirewallSubnetRoutes(std::move(value)); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& AddFirewallSubnetRoutes(const Route& value) { m_firewallSubnetRoutesHasBeenSet = true; m_firewallSubnetRoutes.push_back(value); return *this; }
    inline RouteHasOutOfScopeEndpointViolation& AddFirewallSubnetRoutes(Route&& value) { m_firewallSubnetRoutesHasBeenSet = true; m_firewallSubnetRoutes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Internet Gateway.</p>
     */
    inline const Aws::String& GetInternetGatewayId() const{ return m_internetGatewayId; }
    inline bool InternetGatewayIdHasBeenSet() const { return m_internetGatewayIdHasBeenSet; }
    inline void SetInternetGatewayId(const Aws::String& value) { m_internetGatewayIdHasBeenSet = true; m_internetGatewayId = value; }
    inline void SetInternetGatewayId(Aws::String&& value) { m_internetGatewayIdHasBeenSet = true; m_internetGatewayId = std::move(value); }
    inline void SetInternetGatewayId(const char* value) { m_internetGatewayIdHasBeenSet = true; m_internetGatewayId.assign(value); }
    inline RouteHasOutOfScopeEndpointViolation& WithInternetGatewayId(const Aws::String& value) { SetInternetGatewayId(value); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& WithInternetGatewayId(Aws::String&& value) { SetInternetGatewayId(std::move(value)); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& WithInternetGatewayId(const char* value) { SetInternetGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current route table associated with the Internet Gateway.</p>
     */
    inline const Aws::String& GetCurrentInternetGatewayRouteTable() const{ return m_currentInternetGatewayRouteTable; }
    inline bool CurrentInternetGatewayRouteTableHasBeenSet() const { return m_currentInternetGatewayRouteTableHasBeenSet; }
    inline void SetCurrentInternetGatewayRouteTable(const Aws::String& value) { m_currentInternetGatewayRouteTableHasBeenSet = true; m_currentInternetGatewayRouteTable = value; }
    inline void SetCurrentInternetGatewayRouteTable(Aws::String&& value) { m_currentInternetGatewayRouteTableHasBeenSet = true; m_currentInternetGatewayRouteTable = std::move(value); }
    inline void SetCurrentInternetGatewayRouteTable(const char* value) { m_currentInternetGatewayRouteTableHasBeenSet = true; m_currentInternetGatewayRouteTable.assign(value); }
    inline RouteHasOutOfScopeEndpointViolation& WithCurrentInternetGatewayRouteTable(const Aws::String& value) { SetCurrentInternetGatewayRouteTable(value); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& WithCurrentInternetGatewayRouteTable(Aws::String&& value) { SetCurrentInternetGatewayRouteTable(std::move(value)); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& WithCurrentInternetGatewayRouteTable(const char* value) { SetCurrentInternetGatewayRouteTable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routes in the route table associated with the Internet Gateway.</p>
     */
    inline const Aws::Vector<Route>& GetInternetGatewayRoutes() const{ return m_internetGatewayRoutes; }
    inline bool InternetGatewayRoutesHasBeenSet() const { return m_internetGatewayRoutesHasBeenSet; }
    inline void SetInternetGatewayRoutes(const Aws::Vector<Route>& value) { m_internetGatewayRoutesHasBeenSet = true; m_internetGatewayRoutes = value; }
    inline void SetInternetGatewayRoutes(Aws::Vector<Route>&& value) { m_internetGatewayRoutesHasBeenSet = true; m_internetGatewayRoutes = std::move(value); }
    inline RouteHasOutOfScopeEndpointViolation& WithInternetGatewayRoutes(const Aws::Vector<Route>& value) { SetInternetGatewayRoutes(value); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& WithInternetGatewayRoutes(Aws::Vector<Route>&& value) { SetInternetGatewayRoutes(std::move(value)); return *this;}
    inline RouteHasOutOfScopeEndpointViolation& AddInternetGatewayRoutes(const Route& value) { m_internetGatewayRoutesHasBeenSet = true; m_internetGatewayRoutes.push_back(value); return *this; }
    inline RouteHasOutOfScopeEndpointViolation& AddInternetGatewayRoutes(Route&& value) { m_internetGatewayRoutesHasBeenSet = true; m_internetGatewayRoutes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;

    Aws::Vector<Route> m_violatingRoutes;
    bool m_violatingRoutesHasBeenSet = false;

    Aws::String m_subnetAvailabilityZone;
    bool m_subnetAvailabilityZoneHasBeenSet = false;

    Aws::String m_subnetAvailabilityZoneId;
    bool m_subnetAvailabilityZoneIdHasBeenSet = false;

    Aws::String m_currentFirewallSubnetRouteTable;
    bool m_currentFirewallSubnetRouteTableHasBeenSet = false;

    Aws::String m_firewallSubnetId;
    bool m_firewallSubnetIdHasBeenSet = false;

    Aws::Vector<Route> m_firewallSubnetRoutes;
    bool m_firewallSubnetRoutesHasBeenSet = false;

    Aws::String m_internetGatewayId;
    bool m_internetGatewayIdHasBeenSet = false;

    Aws::String m_currentInternetGatewayRouteTable;
    bool m_currentInternetGatewayRouteTableHasBeenSet = false;

    Aws::Vector<Route> m_internetGatewayRoutes;
    bool m_internetGatewayRoutesHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
