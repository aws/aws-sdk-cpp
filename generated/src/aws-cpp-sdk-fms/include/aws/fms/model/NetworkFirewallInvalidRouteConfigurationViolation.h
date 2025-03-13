/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Violation detail for the improperly configured subnet route. It's possible
   * there is a missing route table route, or a configuration that causes traffic to
   * cross an Availability Zone boundary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/NetworkFirewallInvalidRouteConfigurationViolation">AWS
   * API Reference</a></p>
   */
  class NetworkFirewallInvalidRouteConfigurationViolation
  {
  public:
    AWS_FMS_API NetworkFirewallInvalidRouteConfigurationViolation() = default;
    AWS_FMS_API NetworkFirewallInvalidRouteConfigurationViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkFirewallInvalidRouteConfigurationViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The subnets that are affected.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAffectedSubnets() const { return m_affectedSubnets; }
    inline bool AffectedSubnetsHasBeenSet() const { return m_affectedSubnetsHasBeenSet; }
    template<typename AffectedSubnetsT = Aws::Vector<Aws::String>>
    void SetAffectedSubnets(AffectedSubnetsT&& value) { m_affectedSubnetsHasBeenSet = true; m_affectedSubnets = std::forward<AffectedSubnetsT>(value); }
    template<typename AffectedSubnetsT = Aws::Vector<Aws::String>>
    NetworkFirewallInvalidRouteConfigurationViolation& WithAffectedSubnets(AffectedSubnetsT&& value) { SetAffectedSubnets(std::forward<AffectedSubnetsT>(value)); return *this;}
    template<typename AffectedSubnetsT = Aws::String>
    NetworkFirewallInvalidRouteConfigurationViolation& AddAffectedSubnets(AffectedSubnetsT&& value) { m_affectedSubnetsHasBeenSet = true; m_affectedSubnets.emplace_back(std::forward<AffectedSubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The route table ID.</p>
     */
    inline const Aws::String& GetRouteTableId() const { return m_routeTableId; }
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }
    template<typename RouteTableIdT = Aws::String>
    void SetRouteTableId(RouteTableIdT&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::forward<RouteTableIdT>(value); }
    template<typename RouteTableIdT = Aws::String>
    NetworkFirewallInvalidRouteConfigurationViolation& WithRouteTableId(RouteTableIdT&& value) { SetRouteTableId(std::forward<RouteTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about whether the route table is used in another Availability
     * Zone.</p>
     */
    inline bool GetIsRouteTableUsedInDifferentAZ() const { return m_isRouteTableUsedInDifferentAZ; }
    inline bool IsRouteTableUsedInDifferentAZHasBeenSet() const { return m_isRouteTableUsedInDifferentAZHasBeenSet; }
    inline void SetIsRouteTableUsedInDifferentAZ(bool value) { m_isRouteTableUsedInDifferentAZHasBeenSet = true; m_isRouteTableUsedInDifferentAZ = value; }
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithIsRouteTableUsedInDifferentAZ(bool value) { SetIsRouteTableUsedInDifferentAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route that's in violation.</p>
     */
    inline const Route& GetViolatingRoute() const { return m_violatingRoute; }
    inline bool ViolatingRouteHasBeenSet() const { return m_violatingRouteHasBeenSet; }
    template<typename ViolatingRouteT = Route>
    void SetViolatingRoute(ViolatingRouteT&& value) { m_violatingRouteHasBeenSet = true; m_violatingRoute = std::forward<ViolatingRouteT>(value); }
    template<typename ViolatingRouteT = Route>
    NetworkFirewallInvalidRouteConfigurationViolation& WithViolatingRoute(ViolatingRouteT&& value) { SetViolatingRoute(std::forward<ViolatingRouteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet route table for the current firewall.</p>
     */
    inline const Aws::String& GetCurrentFirewallSubnetRouteTable() const { return m_currentFirewallSubnetRouteTable; }
    inline bool CurrentFirewallSubnetRouteTableHasBeenSet() const { return m_currentFirewallSubnetRouteTableHasBeenSet; }
    template<typename CurrentFirewallSubnetRouteTableT = Aws::String>
    void SetCurrentFirewallSubnetRouteTable(CurrentFirewallSubnetRouteTableT&& value) { m_currentFirewallSubnetRouteTableHasBeenSet = true; m_currentFirewallSubnetRouteTable = std::forward<CurrentFirewallSubnetRouteTableT>(value); }
    template<typename CurrentFirewallSubnetRouteTableT = Aws::String>
    NetworkFirewallInvalidRouteConfigurationViolation& WithCurrentFirewallSubnetRouteTable(CurrentFirewallSubnetRouteTableT&& value) { SetCurrentFirewallSubnetRouteTable(std::forward<CurrentFirewallSubnetRouteTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The firewall endpoint that's expected.</p>
     */
    inline const Aws::String& GetExpectedFirewallEndpoint() const { return m_expectedFirewallEndpoint; }
    inline bool ExpectedFirewallEndpointHasBeenSet() const { return m_expectedFirewallEndpointHasBeenSet; }
    template<typename ExpectedFirewallEndpointT = Aws::String>
    void SetExpectedFirewallEndpoint(ExpectedFirewallEndpointT&& value) { m_expectedFirewallEndpointHasBeenSet = true; m_expectedFirewallEndpoint = std::forward<ExpectedFirewallEndpointT>(value); }
    template<typename ExpectedFirewallEndpointT = Aws::String>
    NetworkFirewallInvalidRouteConfigurationViolation& WithExpectedFirewallEndpoint(ExpectedFirewallEndpointT&& value) { SetExpectedFirewallEndpoint(std::forward<ExpectedFirewallEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual firewall endpoint.</p>
     */
    inline const Aws::String& GetActualFirewallEndpoint() const { return m_actualFirewallEndpoint; }
    inline bool ActualFirewallEndpointHasBeenSet() const { return m_actualFirewallEndpointHasBeenSet; }
    template<typename ActualFirewallEndpointT = Aws::String>
    void SetActualFirewallEndpoint(ActualFirewallEndpointT&& value) { m_actualFirewallEndpointHasBeenSet = true; m_actualFirewallEndpoint = std::forward<ActualFirewallEndpointT>(value); }
    template<typename ActualFirewallEndpointT = Aws::String>
    NetworkFirewallInvalidRouteConfigurationViolation& WithActualFirewallEndpoint(ActualFirewallEndpointT&& value) { SetActualFirewallEndpoint(std::forward<ActualFirewallEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected subnet ID for the firewall.</p>
     */
    inline const Aws::String& GetExpectedFirewallSubnetId() const { return m_expectedFirewallSubnetId; }
    inline bool ExpectedFirewallSubnetIdHasBeenSet() const { return m_expectedFirewallSubnetIdHasBeenSet; }
    template<typename ExpectedFirewallSubnetIdT = Aws::String>
    void SetExpectedFirewallSubnetId(ExpectedFirewallSubnetIdT&& value) { m_expectedFirewallSubnetIdHasBeenSet = true; m_expectedFirewallSubnetId = std::forward<ExpectedFirewallSubnetIdT>(value); }
    template<typename ExpectedFirewallSubnetIdT = Aws::String>
    NetworkFirewallInvalidRouteConfigurationViolation& WithExpectedFirewallSubnetId(ExpectedFirewallSubnetIdT&& value) { SetExpectedFirewallSubnetId(std::forward<ExpectedFirewallSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual subnet ID for the firewall.</p>
     */
    inline const Aws::String& GetActualFirewallSubnetId() const { return m_actualFirewallSubnetId; }
    inline bool ActualFirewallSubnetIdHasBeenSet() const { return m_actualFirewallSubnetIdHasBeenSet; }
    template<typename ActualFirewallSubnetIdT = Aws::String>
    void SetActualFirewallSubnetId(ActualFirewallSubnetIdT&& value) { m_actualFirewallSubnetIdHasBeenSet = true; m_actualFirewallSubnetId = std::forward<ActualFirewallSubnetIdT>(value); }
    template<typename ActualFirewallSubnetIdT = Aws::String>
    NetworkFirewallInvalidRouteConfigurationViolation& WithActualFirewallSubnetId(ActualFirewallSubnetIdT&& value) { SetActualFirewallSubnetId(std::forward<ActualFirewallSubnetIdT>(value)); return *this;}
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
    NetworkFirewallInvalidRouteConfigurationViolation& WithExpectedFirewallSubnetRoutes(ExpectedFirewallSubnetRoutesT&& value) { SetExpectedFirewallSubnetRoutes(std::forward<ExpectedFirewallSubnetRoutesT>(value)); return *this;}
    template<typename ExpectedFirewallSubnetRoutesT = ExpectedRoute>
    NetworkFirewallInvalidRouteConfigurationViolation& AddExpectedFirewallSubnetRoutes(ExpectedFirewallSubnetRoutesT&& value) { m_expectedFirewallSubnetRoutesHasBeenSet = true; m_expectedFirewallSubnetRoutes.emplace_back(std::forward<ExpectedFirewallSubnetRoutesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actual firewall subnet routes that are expected.</p>
     */
    inline const Aws::Vector<Route>& GetActualFirewallSubnetRoutes() const { return m_actualFirewallSubnetRoutes; }
    inline bool ActualFirewallSubnetRoutesHasBeenSet() const { return m_actualFirewallSubnetRoutesHasBeenSet; }
    template<typename ActualFirewallSubnetRoutesT = Aws::Vector<Route>>
    void SetActualFirewallSubnetRoutes(ActualFirewallSubnetRoutesT&& value) { m_actualFirewallSubnetRoutesHasBeenSet = true; m_actualFirewallSubnetRoutes = std::forward<ActualFirewallSubnetRoutesT>(value); }
    template<typename ActualFirewallSubnetRoutesT = Aws::Vector<Route>>
    NetworkFirewallInvalidRouteConfigurationViolation& WithActualFirewallSubnetRoutes(ActualFirewallSubnetRoutesT&& value) { SetActualFirewallSubnetRoutes(std::forward<ActualFirewallSubnetRoutesT>(value)); return *this;}
    template<typename ActualFirewallSubnetRoutesT = Route>
    NetworkFirewallInvalidRouteConfigurationViolation& AddActualFirewallSubnetRoutes(ActualFirewallSubnetRoutesT&& value) { m_actualFirewallSubnetRoutesHasBeenSet = true; m_actualFirewallSubnetRoutes.emplace_back(std::forward<ActualFirewallSubnetRoutesT>(value)); return *this; }
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
    NetworkFirewallInvalidRouteConfigurationViolation& WithInternetGatewayId(InternetGatewayIdT&& value) { SetInternetGatewayId(std::forward<InternetGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route table for the current internet gateway.</p>
     */
    inline const Aws::String& GetCurrentInternetGatewayRouteTable() const { return m_currentInternetGatewayRouteTable; }
    inline bool CurrentInternetGatewayRouteTableHasBeenSet() const { return m_currentInternetGatewayRouteTableHasBeenSet; }
    template<typename CurrentInternetGatewayRouteTableT = Aws::String>
    void SetCurrentInternetGatewayRouteTable(CurrentInternetGatewayRouteTableT&& value) { m_currentInternetGatewayRouteTableHasBeenSet = true; m_currentInternetGatewayRouteTable = std::forward<CurrentInternetGatewayRouteTableT>(value); }
    template<typename CurrentInternetGatewayRouteTableT = Aws::String>
    NetworkFirewallInvalidRouteConfigurationViolation& WithCurrentInternetGatewayRouteTable(CurrentInternetGatewayRouteTableT&& value) { SetCurrentInternetGatewayRouteTable(std::forward<CurrentInternetGatewayRouteTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected routes for the internet gateway.</p>
     */
    inline const Aws::Vector<ExpectedRoute>& GetExpectedInternetGatewayRoutes() const { return m_expectedInternetGatewayRoutes; }
    inline bool ExpectedInternetGatewayRoutesHasBeenSet() const { return m_expectedInternetGatewayRoutesHasBeenSet; }
    template<typename ExpectedInternetGatewayRoutesT = Aws::Vector<ExpectedRoute>>
    void SetExpectedInternetGatewayRoutes(ExpectedInternetGatewayRoutesT&& value) { m_expectedInternetGatewayRoutesHasBeenSet = true; m_expectedInternetGatewayRoutes = std::forward<ExpectedInternetGatewayRoutesT>(value); }
    template<typename ExpectedInternetGatewayRoutesT = Aws::Vector<ExpectedRoute>>
    NetworkFirewallInvalidRouteConfigurationViolation& WithExpectedInternetGatewayRoutes(ExpectedInternetGatewayRoutesT&& value) { SetExpectedInternetGatewayRoutes(std::forward<ExpectedInternetGatewayRoutesT>(value)); return *this;}
    template<typename ExpectedInternetGatewayRoutesT = ExpectedRoute>
    NetworkFirewallInvalidRouteConfigurationViolation& AddExpectedInternetGatewayRoutes(ExpectedInternetGatewayRoutesT&& value) { m_expectedInternetGatewayRoutesHasBeenSet = true; m_expectedInternetGatewayRoutes.emplace_back(std::forward<ExpectedInternetGatewayRoutesT>(value)); return *this; }
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
    NetworkFirewallInvalidRouteConfigurationViolation& WithActualInternetGatewayRoutes(ActualInternetGatewayRoutesT&& value) { SetActualInternetGatewayRoutes(std::forward<ActualInternetGatewayRoutesT>(value)); return *this;}
    template<typename ActualInternetGatewayRoutesT = Route>
    NetworkFirewallInvalidRouteConfigurationViolation& AddActualInternetGatewayRoutes(ActualInternetGatewayRoutesT&& value) { m_actualInternetGatewayRoutesHasBeenSet = true; m_actualInternetGatewayRoutes.emplace_back(std::forward<ActualInternetGatewayRoutesT>(value)); return *this; }
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
    NetworkFirewallInvalidRouteConfigurationViolation& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_affectedSubnets;
    bool m_affectedSubnetsHasBeenSet = false;

    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;

    bool m_isRouteTableUsedInDifferentAZ{false};
    bool m_isRouteTableUsedInDifferentAZHasBeenSet = false;

    Route m_violatingRoute;
    bool m_violatingRouteHasBeenSet = false;

    Aws::String m_currentFirewallSubnetRouteTable;
    bool m_currentFirewallSubnetRouteTableHasBeenSet = false;

    Aws::String m_expectedFirewallEndpoint;
    bool m_expectedFirewallEndpointHasBeenSet = false;

    Aws::String m_actualFirewallEndpoint;
    bool m_actualFirewallEndpointHasBeenSet = false;

    Aws::String m_expectedFirewallSubnetId;
    bool m_expectedFirewallSubnetIdHasBeenSet = false;

    Aws::String m_actualFirewallSubnetId;
    bool m_actualFirewallSubnetIdHasBeenSet = false;

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
