/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/model/Route.h>
#include <aws/fms/model/ExpectedRoute.h>
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
   * <p>Violation detail for the subnet for which internet traffic that hasn't been
   * inspected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/NetworkFirewallInternetTrafficNotInspectedViolation">AWS
   * API Reference</a></p>
   */
  class NetworkFirewallInternetTrafficNotInspectedViolation
  {
  public:
    AWS_FMS_API NetworkFirewallInternetTrafficNotInspectedViolation() = default;
    AWS_FMS_API NetworkFirewallInternetTrafficNotInspectedViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkFirewallInternetTrafficNotInspectedViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The subnet ID.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    NetworkFirewallInternetTrafficNotInspectedViolation& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet Availability Zone.</p>
     */
    inline const Aws::String& GetSubnetAvailabilityZone() const { return m_subnetAvailabilityZone; }
    inline bool SubnetAvailabilityZoneHasBeenSet() const { return m_subnetAvailabilityZoneHasBeenSet; }
    template<typename SubnetAvailabilityZoneT = Aws::String>
    void SetSubnetAvailabilityZone(SubnetAvailabilityZoneT&& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = std::forward<SubnetAvailabilityZoneT>(value); }
    template<typename SubnetAvailabilityZoneT = Aws::String>
    NetworkFirewallInternetTrafficNotInspectedViolation& WithSubnetAvailabilityZone(SubnetAvailabilityZoneT&& value) { SetSubnetAvailabilityZone(std::forward<SubnetAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the route table ID.</p>
     */
    inline const Aws::String& GetRouteTableId() const { return m_routeTableId; }
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }
    template<typename RouteTableIdT = Aws::String>
    void SetRouteTableId(RouteTableIdT&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::forward<RouteTableIdT>(value); }
    template<typename RouteTableIdT = Aws::String>
    NetworkFirewallInternetTrafficNotInspectedViolation& WithRouteTableId(RouteTableIdT&& value) { SetRouteTableId(std::forward<RouteTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route or routes that are in violation.</p>
     */
    inline const Aws::Vector<Route>& GetViolatingRoutes() const { return m_violatingRoutes; }
    inline bool ViolatingRoutesHasBeenSet() const { return m_violatingRoutesHasBeenSet; }
    template<typename ViolatingRoutesT = Aws::Vector<Route>>
    void SetViolatingRoutes(ViolatingRoutesT&& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes = std::forward<ViolatingRoutesT>(value); }
    template<typename ViolatingRoutesT = Aws::Vector<Route>>
    NetworkFirewallInternetTrafficNotInspectedViolation& WithViolatingRoutes(ViolatingRoutesT&& value) { SetViolatingRoutes(std::forward<ViolatingRoutesT>(value)); return *this;}
    template<typename ViolatingRoutesT = Route>
    NetworkFirewallInternetTrafficNotInspectedViolation& AddViolatingRoutes(ViolatingRoutesT&& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes.emplace_back(std::forward<ViolatingRoutesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about whether the route table is used in another Availability
     * Zone.</p>
     */
    inline bool GetIsRouteTableUsedInDifferentAZ() const { return m_isRouteTableUsedInDifferentAZ; }
    inline bool IsRouteTableUsedInDifferentAZHasBeenSet() const { return m_isRouteTableUsedInDifferentAZHasBeenSet; }
    inline void SetIsRouteTableUsedInDifferentAZ(bool value) { m_isRouteTableUsedInDifferentAZHasBeenSet = true; m_isRouteTableUsedInDifferentAZ = value; }
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithIsRouteTableUsedInDifferentAZ(bool value) { SetIsRouteTableUsedInDifferentAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the subnet route table for the current firewall.</p>
     */
    inline const Aws::String& GetCurrentFirewallSubnetRouteTable() const { return m_currentFirewallSubnetRouteTable; }
    inline bool CurrentFirewallSubnetRouteTableHasBeenSet() const { return m_currentFirewallSubnetRouteTableHasBeenSet; }
    template<typename CurrentFirewallSubnetRouteTableT = Aws::String>
    void SetCurrentFirewallSubnetRouteTable(CurrentFirewallSubnetRouteTableT&& value) { m_currentFirewallSubnetRouteTableHasBeenSet = true; m_currentFirewallSubnetRouteTable = std::forward<CurrentFirewallSubnetRouteTableT>(value); }
    template<typename CurrentFirewallSubnetRouteTableT = Aws::String>
    NetworkFirewallInternetTrafficNotInspectedViolation& WithCurrentFirewallSubnetRouteTable(CurrentFirewallSubnetRouteTableT&& value) { SetCurrentFirewallSubnetRouteTable(std::forward<CurrentFirewallSubnetRouteTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected endpoint for the current firewall.</p>
     */
    inline const Aws::String& GetExpectedFirewallEndpoint() const { return m_expectedFirewallEndpoint; }
    inline bool ExpectedFirewallEndpointHasBeenSet() const { return m_expectedFirewallEndpointHasBeenSet; }
    template<typename ExpectedFirewallEndpointT = Aws::String>
    void SetExpectedFirewallEndpoint(ExpectedFirewallEndpointT&& value) { m_expectedFirewallEndpointHasBeenSet = true; m_expectedFirewallEndpoint = std::forward<ExpectedFirewallEndpointT>(value); }
    template<typename ExpectedFirewallEndpointT = Aws::String>
    NetworkFirewallInternetTrafficNotInspectedViolation& WithExpectedFirewallEndpoint(ExpectedFirewallEndpointT&& value) { SetExpectedFirewallEndpoint(std::forward<ExpectedFirewallEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The firewall subnet ID.</p>
     */
    inline const Aws::String& GetFirewallSubnetId() const { return m_firewallSubnetId; }
    inline bool FirewallSubnetIdHasBeenSet() const { return m_firewallSubnetIdHasBeenSet; }
    template<typename FirewallSubnetIdT = Aws::String>
    void SetFirewallSubnetId(FirewallSubnetIdT&& value) { m_firewallSubnetIdHasBeenSet = true; m_firewallSubnetId = std::forward<FirewallSubnetIdT>(value); }
    template<typename FirewallSubnetIdT = Aws::String>
    NetworkFirewallInternetTrafficNotInspectedViolation& WithFirewallSubnetId(FirewallSubnetIdT&& value) { SetFirewallSubnetId(std::forward<FirewallSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The firewall subnet routes that are expected.</p>
     */
    inline const Aws::Vector<ExpectedRoute>& GetExpectedFirewallSubnetRoutes() const { return m_expectedFirewallSubnetRoutes; }
    inline bool ExpectedFirewallSubnetRoutesHasBeenSet() const { return m_expectedFirewallSubnetRoutesHasBeenSet; }
    template<typename ExpectedFirewallSubnetRoutesT = Aws::Vector<ExpectedRoute>>
    void SetExpectedFirewallSubnetRoutes(ExpectedFirewallSubnetRoutesT&& value) { m_expectedFirewallSubnetRoutesHasBeenSet = true; m_expectedFirewallSubnetRoutes = std::forward<ExpectedFirewallSubnetRoutesT>(value); }
    template<typename ExpectedFirewallSubnetRoutesT = Aws::Vector<ExpectedRoute>>
    NetworkFirewallInternetTrafficNotInspectedViolation& WithExpectedFirewallSubnetRoutes(ExpectedFirewallSubnetRoutesT&& value) { SetExpectedFirewallSubnetRoutes(std::forward<ExpectedFirewallSubnetRoutesT>(value)); return *this;}
    template<typename ExpectedFirewallSubnetRoutesT = ExpectedRoute>
    NetworkFirewallInternetTrafficNotInspectedViolation& AddExpectedFirewallSubnetRoutes(ExpectedFirewallSubnetRoutesT&& value) { m_expectedFirewallSubnetRoutesHasBeenSet = true; m_expectedFirewallSubnetRoutes.emplace_back(std::forward<ExpectedFirewallSubnetRoutesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actual firewall subnet routes.</p>
     */
    inline const Aws::Vector<Route>& GetActualFirewallSubnetRoutes() const { return m_actualFirewallSubnetRoutes; }
    inline bool ActualFirewallSubnetRoutesHasBeenSet() const { return m_actualFirewallSubnetRoutesHasBeenSet; }
    template<typename ActualFirewallSubnetRoutesT = Aws::Vector<Route>>
    void SetActualFirewallSubnetRoutes(ActualFirewallSubnetRoutesT&& value) { m_actualFirewallSubnetRoutesHasBeenSet = true; m_actualFirewallSubnetRoutes = std::forward<ActualFirewallSubnetRoutesT>(value); }
    template<typename ActualFirewallSubnetRoutesT = Aws::Vector<Route>>
    NetworkFirewallInternetTrafficNotInspectedViolation& WithActualFirewallSubnetRoutes(ActualFirewallSubnetRoutesT&& value) { SetActualFirewallSubnetRoutes(std::forward<ActualFirewallSubnetRoutesT>(value)); return *this;}
    template<typename ActualFirewallSubnetRoutesT = Route>
    NetworkFirewallInternetTrafficNotInspectedViolation& AddActualFirewallSubnetRoutes(ActualFirewallSubnetRoutesT&& value) { m_actualFirewallSubnetRoutesHasBeenSet = true; m_actualFirewallSubnetRoutes.emplace_back(std::forward<ActualFirewallSubnetRoutesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The internet gateway ID.</p>
     */
    inline const Aws::String& GetInternetGatewayId() const { return m_internetGatewayId; }
    inline bool InternetGatewayIdHasBeenSet() const { return m_internetGatewayIdHasBeenSet; }
    template<typename InternetGatewayIdT = Aws::String>
    void SetInternetGatewayId(InternetGatewayIdT&& value) { m_internetGatewayIdHasBeenSet = true; m_internetGatewayId = std::forward<InternetGatewayIdT>(value); }
    template<typename InternetGatewayIdT = Aws::String>
    NetworkFirewallInternetTrafficNotInspectedViolation& WithInternetGatewayId(InternetGatewayIdT&& value) { SetInternetGatewayId(std::forward<InternetGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current route table for the internet gateway.</p>
     */
    inline const Aws::String& GetCurrentInternetGatewayRouteTable() const { return m_currentInternetGatewayRouteTable; }
    inline bool CurrentInternetGatewayRouteTableHasBeenSet() const { return m_currentInternetGatewayRouteTableHasBeenSet; }
    template<typename CurrentInternetGatewayRouteTableT = Aws::String>
    void SetCurrentInternetGatewayRouteTable(CurrentInternetGatewayRouteTableT&& value) { m_currentInternetGatewayRouteTableHasBeenSet = true; m_currentInternetGatewayRouteTable = std::forward<CurrentInternetGatewayRouteTableT>(value); }
    template<typename CurrentInternetGatewayRouteTableT = Aws::String>
    NetworkFirewallInternetTrafficNotInspectedViolation& WithCurrentInternetGatewayRouteTable(CurrentInternetGatewayRouteTableT&& value) { SetCurrentInternetGatewayRouteTable(std::forward<CurrentInternetGatewayRouteTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The internet gateway routes that are expected.</p>
     */
    inline const Aws::Vector<ExpectedRoute>& GetExpectedInternetGatewayRoutes() const { return m_expectedInternetGatewayRoutes; }
    inline bool ExpectedInternetGatewayRoutesHasBeenSet() const { return m_expectedInternetGatewayRoutesHasBeenSet; }
    template<typename ExpectedInternetGatewayRoutesT = Aws::Vector<ExpectedRoute>>
    void SetExpectedInternetGatewayRoutes(ExpectedInternetGatewayRoutesT&& value) { m_expectedInternetGatewayRoutesHasBeenSet = true; m_expectedInternetGatewayRoutes = std::forward<ExpectedInternetGatewayRoutesT>(value); }
    template<typename ExpectedInternetGatewayRoutesT = Aws::Vector<ExpectedRoute>>
    NetworkFirewallInternetTrafficNotInspectedViolation& WithExpectedInternetGatewayRoutes(ExpectedInternetGatewayRoutesT&& value) { SetExpectedInternetGatewayRoutes(std::forward<ExpectedInternetGatewayRoutesT>(value)); return *this;}
    template<typename ExpectedInternetGatewayRoutesT = ExpectedRoute>
    NetworkFirewallInternetTrafficNotInspectedViolation& AddExpectedInternetGatewayRoutes(ExpectedInternetGatewayRoutesT&& value) { m_expectedInternetGatewayRoutesHasBeenSet = true; m_expectedInternetGatewayRoutes.emplace_back(std::forward<ExpectedInternetGatewayRoutesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actual internet gateway routes.</p>
     */
    inline const Aws::Vector<Route>& GetActualInternetGatewayRoutes() const { return m_actualInternetGatewayRoutes; }
    inline bool ActualInternetGatewayRoutesHasBeenSet() const { return m_actualInternetGatewayRoutesHasBeenSet; }
    template<typename ActualInternetGatewayRoutesT = Aws::Vector<Route>>
    void SetActualInternetGatewayRoutes(ActualInternetGatewayRoutesT&& value) { m_actualInternetGatewayRoutesHasBeenSet = true; m_actualInternetGatewayRoutes = std::forward<ActualInternetGatewayRoutesT>(value); }
    template<typename ActualInternetGatewayRoutesT = Aws::Vector<Route>>
    NetworkFirewallInternetTrafficNotInspectedViolation& WithActualInternetGatewayRoutes(ActualInternetGatewayRoutesT&& value) { SetActualInternetGatewayRoutes(std::forward<ActualInternetGatewayRoutesT>(value)); return *this;}
    template<typename ActualInternetGatewayRoutesT = Route>
    NetworkFirewallInternetTrafficNotInspectedViolation& AddActualInternetGatewayRoutes(ActualInternetGatewayRoutesT&& value) { m_actualInternetGatewayRoutesHasBeenSet = true; m_actualInternetGatewayRoutes.emplace_back(std::forward<ActualInternetGatewayRoutesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the VPC ID.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    NetworkFirewallInternetTrafficNotInspectedViolation& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_subnetAvailabilityZone;
    bool m_subnetAvailabilityZoneHasBeenSet = false;

    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;

    Aws::Vector<Route> m_violatingRoutes;
    bool m_violatingRoutesHasBeenSet = false;

    bool m_isRouteTableUsedInDifferentAZ{false};
    bool m_isRouteTableUsedInDifferentAZHasBeenSet = false;

    Aws::String m_currentFirewallSubnetRouteTable;
    bool m_currentFirewallSubnetRouteTableHasBeenSet = false;

    Aws::String m_expectedFirewallEndpoint;
    bool m_expectedFirewallEndpointHasBeenSet = false;

    Aws::String m_firewallSubnetId;
    bool m_firewallSubnetIdHasBeenSet = false;

    Aws::Vector<ExpectedRoute> m_expectedFirewallSubnetRoutes;
    bool m_expectedFirewallSubnetRoutesHasBeenSet = false;

    Aws::Vector<Route> m_actualFirewallSubnetRoutes;
    bool m_actualFirewallSubnetRoutesHasBeenSet = false;

    Aws::String m_internetGatewayId;
    bool m_internetGatewayIdHasBeenSet = false;

    Aws::String m_currentInternetGatewayRouteTable;
    bool m_currentInternetGatewayRouteTableHasBeenSet = false;

    Aws::Vector<ExpectedRoute> m_expectedInternetGatewayRoutes;
    bool m_expectedInternetGatewayRoutesHasBeenSet = false;

    Aws::Vector<Route> m_actualInternetGatewayRoutes;
    bool m_actualInternetGatewayRoutesHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
