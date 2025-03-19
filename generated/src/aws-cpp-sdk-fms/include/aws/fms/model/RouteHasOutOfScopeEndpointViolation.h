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
    AWS_FMS_API RouteHasOutOfScopeEndpointViolation() = default;
    AWS_FMS_API RouteHasOutOfScopeEndpointViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API RouteHasOutOfScopeEndpointViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the subnet associated with the route that violates the policy
     * scope.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    RouteHasOutOfScopeEndpointViolation& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID of the route that violates the policy scope.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    RouteHasOutOfScopeEndpointViolation& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the route table.</p>
     */
    inline const Aws::String& GetRouteTableId() const { return m_routeTableId; }
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }
    template<typename RouteTableIdT = Aws::String>
    void SetRouteTableId(RouteTableIdT&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::forward<RouteTableIdT>(value); }
    template<typename RouteTableIdT = Aws::String>
    RouteHasOutOfScopeEndpointViolation& WithRouteTableId(RouteTableIdT&& value) { SetRouteTableId(std::forward<RouteTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of routes that violate the route table.</p>
     */
    inline const Aws::Vector<Route>& GetViolatingRoutes() const { return m_violatingRoutes; }
    inline bool ViolatingRoutesHasBeenSet() const { return m_violatingRoutesHasBeenSet; }
    template<typename ViolatingRoutesT = Aws::Vector<Route>>
    void SetViolatingRoutes(ViolatingRoutesT&& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes = std::forward<ViolatingRoutesT>(value); }
    template<typename ViolatingRoutesT = Aws::Vector<Route>>
    RouteHasOutOfScopeEndpointViolation& WithViolatingRoutes(ViolatingRoutesT&& value) { SetViolatingRoutes(std::forward<ViolatingRoutesT>(value)); return *this;}
    template<typename ViolatingRoutesT = Route>
    RouteHasOutOfScopeEndpointViolation& AddViolatingRoutes(ViolatingRoutesT&& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes.emplace_back(std::forward<ViolatingRoutesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The subnet's Availability Zone.</p>
     */
    inline const Aws::String& GetSubnetAvailabilityZone() const { return m_subnetAvailabilityZone; }
    inline bool SubnetAvailabilityZoneHasBeenSet() const { return m_subnetAvailabilityZoneHasBeenSet; }
    template<typename SubnetAvailabilityZoneT = Aws::String>
    void SetSubnetAvailabilityZone(SubnetAvailabilityZoneT&& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = std::forward<SubnetAvailabilityZoneT>(value); }
    template<typename SubnetAvailabilityZoneT = Aws::String>
    RouteHasOutOfScopeEndpointViolation& WithSubnetAvailabilityZone(SubnetAvailabilityZoneT&& value) { SetSubnetAvailabilityZone(std::forward<SubnetAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet's Availability Zone.</p>
     */
    inline const Aws::String& GetSubnetAvailabilityZoneId() const { return m_subnetAvailabilityZoneId; }
    inline bool SubnetAvailabilityZoneIdHasBeenSet() const { return m_subnetAvailabilityZoneIdHasBeenSet; }
    template<typename SubnetAvailabilityZoneIdT = Aws::String>
    void SetSubnetAvailabilityZoneId(SubnetAvailabilityZoneIdT&& value) { m_subnetAvailabilityZoneIdHasBeenSet = true; m_subnetAvailabilityZoneId = std::forward<SubnetAvailabilityZoneIdT>(value); }
    template<typename SubnetAvailabilityZoneIdT = Aws::String>
    RouteHasOutOfScopeEndpointViolation& WithSubnetAvailabilityZoneId(SubnetAvailabilityZoneIdT&& value) { SetSubnetAvailabilityZoneId(std::forward<SubnetAvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route table associated with the current firewall subnet.</p>
     */
    inline const Aws::String& GetCurrentFirewallSubnetRouteTable() const { return m_currentFirewallSubnetRouteTable; }
    inline bool CurrentFirewallSubnetRouteTableHasBeenSet() const { return m_currentFirewallSubnetRouteTableHasBeenSet; }
    template<typename CurrentFirewallSubnetRouteTableT = Aws::String>
    void SetCurrentFirewallSubnetRouteTable(CurrentFirewallSubnetRouteTableT&& value) { m_currentFirewallSubnetRouteTableHasBeenSet = true; m_currentFirewallSubnetRouteTable = std::forward<CurrentFirewallSubnetRouteTableT>(value); }
    template<typename CurrentFirewallSubnetRouteTableT = Aws::String>
    RouteHasOutOfScopeEndpointViolation& WithCurrentFirewallSubnetRouteTable(CurrentFirewallSubnetRouteTableT&& value) { SetCurrentFirewallSubnetRouteTable(std::forward<CurrentFirewallSubnetRouteTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the firewall subnet.</p>
     */
    inline const Aws::String& GetFirewallSubnetId() const { return m_firewallSubnetId; }
    inline bool FirewallSubnetIdHasBeenSet() const { return m_firewallSubnetIdHasBeenSet; }
    template<typename FirewallSubnetIdT = Aws::String>
    void SetFirewallSubnetId(FirewallSubnetIdT&& value) { m_firewallSubnetIdHasBeenSet = true; m_firewallSubnetId = std::forward<FirewallSubnetIdT>(value); }
    template<typename FirewallSubnetIdT = Aws::String>
    RouteHasOutOfScopeEndpointViolation& WithFirewallSubnetId(FirewallSubnetIdT&& value) { SetFirewallSubnetId(std::forward<FirewallSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of firewall subnet routes.</p>
     */
    inline const Aws::Vector<Route>& GetFirewallSubnetRoutes() const { return m_firewallSubnetRoutes; }
    inline bool FirewallSubnetRoutesHasBeenSet() const { return m_firewallSubnetRoutesHasBeenSet; }
    template<typename FirewallSubnetRoutesT = Aws::Vector<Route>>
    void SetFirewallSubnetRoutes(FirewallSubnetRoutesT&& value) { m_firewallSubnetRoutesHasBeenSet = true; m_firewallSubnetRoutes = std::forward<FirewallSubnetRoutesT>(value); }
    template<typename FirewallSubnetRoutesT = Aws::Vector<Route>>
    RouteHasOutOfScopeEndpointViolation& WithFirewallSubnetRoutes(FirewallSubnetRoutesT&& value) { SetFirewallSubnetRoutes(std::forward<FirewallSubnetRoutesT>(value)); return *this;}
    template<typename FirewallSubnetRoutesT = Route>
    RouteHasOutOfScopeEndpointViolation& AddFirewallSubnetRoutes(FirewallSubnetRoutesT&& value) { m_firewallSubnetRoutesHasBeenSet = true; m_firewallSubnetRoutes.emplace_back(std::forward<FirewallSubnetRoutesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Internet Gateway.</p>
     */
    inline const Aws::String& GetInternetGatewayId() const { return m_internetGatewayId; }
    inline bool InternetGatewayIdHasBeenSet() const { return m_internetGatewayIdHasBeenSet; }
    template<typename InternetGatewayIdT = Aws::String>
    void SetInternetGatewayId(InternetGatewayIdT&& value) { m_internetGatewayIdHasBeenSet = true; m_internetGatewayId = std::forward<InternetGatewayIdT>(value); }
    template<typename InternetGatewayIdT = Aws::String>
    RouteHasOutOfScopeEndpointViolation& WithInternetGatewayId(InternetGatewayIdT&& value) { SetInternetGatewayId(std::forward<InternetGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current route table associated with the Internet Gateway.</p>
     */
    inline const Aws::String& GetCurrentInternetGatewayRouteTable() const { return m_currentInternetGatewayRouteTable; }
    inline bool CurrentInternetGatewayRouteTableHasBeenSet() const { return m_currentInternetGatewayRouteTableHasBeenSet; }
    template<typename CurrentInternetGatewayRouteTableT = Aws::String>
    void SetCurrentInternetGatewayRouteTable(CurrentInternetGatewayRouteTableT&& value) { m_currentInternetGatewayRouteTableHasBeenSet = true; m_currentInternetGatewayRouteTable = std::forward<CurrentInternetGatewayRouteTableT>(value); }
    template<typename CurrentInternetGatewayRouteTableT = Aws::String>
    RouteHasOutOfScopeEndpointViolation& WithCurrentInternetGatewayRouteTable(CurrentInternetGatewayRouteTableT&& value) { SetCurrentInternetGatewayRouteTable(std::forward<CurrentInternetGatewayRouteTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routes in the route table associated with the Internet Gateway.</p>
     */
    inline const Aws::Vector<Route>& GetInternetGatewayRoutes() const { return m_internetGatewayRoutes; }
    inline bool InternetGatewayRoutesHasBeenSet() const { return m_internetGatewayRoutesHasBeenSet; }
    template<typename InternetGatewayRoutesT = Aws::Vector<Route>>
    void SetInternetGatewayRoutes(InternetGatewayRoutesT&& value) { m_internetGatewayRoutesHasBeenSet = true; m_internetGatewayRoutes = std::forward<InternetGatewayRoutesT>(value); }
    template<typename InternetGatewayRoutesT = Aws::Vector<Route>>
    RouteHasOutOfScopeEndpointViolation& WithInternetGatewayRoutes(InternetGatewayRoutesT&& value) { SetInternetGatewayRoutes(std::forward<InternetGatewayRoutesT>(value)); return *this;}
    template<typename InternetGatewayRoutesT = Route>
    RouteHasOutOfScopeEndpointViolation& AddInternetGatewayRoutes(InternetGatewayRoutesT&& value) { m_internetGatewayRoutesHasBeenSet = true; m_internetGatewayRoutes.emplace_back(std::forward<InternetGatewayRoutesT>(value)); return *this; }
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
