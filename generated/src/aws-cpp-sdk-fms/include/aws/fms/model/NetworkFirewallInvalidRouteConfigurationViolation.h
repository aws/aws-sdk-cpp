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
    AWS_FMS_API NetworkFirewallInvalidRouteConfigurationViolation();
    AWS_FMS_API NetworkFirewallInvalidRouteConfigurationViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkFirewallInvalidRouteConfigurationViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The subnets that are affected.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAffectedSubnets() const{ return m_affectedSubnets; }
    inline bool AffectedSubnetsHasBeenSet() const { return m_affectedSubnetsHasBeenSet; }
    inline void SetAffectedSubnets(const Aws::Vector<Aws::String>& value) { m_affectedSubnetsHasBeenSet = true; m_affectedSubnets = value; }
    inline void SetAffectedSubnets(Aws::Vector<Aws::String>&& value) { m_affectedSubnetsHasBeenSet = true; m_affectedSubnets = std::move(value); }
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithAffectedSubnets(const Aws::Vector<Aws::String>& value) { SetAffectedSubnets(value); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithAffectedSubnets(Aws::Vector<Aws::String>&& value) { SetAffectedSubnets(std::move(value)); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& AddAffectedSubnets(const Aws::String& value) { m_affectedSubnetsHasBeenSet = true; m_affectedSubnets.push_back(value); return *this; }
    inline NetworkFirewallInvalidRouteConfigurationViolation& AddAffectedSubnets(Aws::String&& value) { m_affectedSubnetsHasBeenSet = true; m_affectedSubnets.push_back(std::move(value)); return *this; }
    inline NetworkFirewallInvalidRouteConfigurationViolation& AddAffectedSubnets(const char* value) { m_affectedSubnetsHasBeenSet = true; m_affectedSubnets.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The route table ID.</p>
     */
    inline const Aws::String& GetRouteTableId() const{ return m_routeTableId; }
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }
    inline void SetRouteTableId(const Aws::String& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = value; }
    inline void SetRouteTableId(Aws::String&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::move(value); }
    inline void SetRouteTableId(const char* value) { m_routeTableIdHasBeenSet = true; m_routeTableId.assign(value); }
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithRouteTableId(const Aws::String& value) { SetRouteTableId(value); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithRouteTableId(Aws::String&& value) { SetRouteTableId(std::move(value)); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithRouteTableId(const char* value) { SetRouteTableId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about whether the route table is used in another Availability
     * Zone.</p>
     */
    inline bool GetIsRouteTableUsedInDifferentAZ() const{ return m_isRouteTableUsedInDifferentAZ; }
    inline bool IsRouteTableUsedInDifferentAZHasBeenSet() const { return m_isRouteTableUsedInDifferentAZHasBeenSet; }
    inline void SetIsRouteTableUsedInDifferentAZ(bool value) { m_isRouteTableUsedInDifferentAZHasBeenSet = true; m_isRouteTableUsedInDifferentAZ = value; }
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithIsRouteTableUsedInDifferentAZ(bool value) { SetIsRouteTableUsedInDifferentAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route that's in violation.</p>
     */
    inline const Route& GetViolatingRoute() const{ return m_violatingRoute; }
    inline bool ViolatingRouteHasBeenSet() const { return m_violatingRouteHasBeenSet; }
    inline void SetViolatingRoute(const Route& value) { m_violatingRouteHasBeenSet = true; m_violatingRoute = value; }
    inline void SetViolatingRoute(Route&& value) { m_violatingRouteHasBeenSet = true; m_violatingRoute = std::move(value); }
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithViolatingRoute(const Route& value) { SetViolatingRoute(value); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithViolatingRoute(Route&& value) { SetViolatingRoute(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet route table for the current firewall.</p>
     */
    inline const Aws::String& GetCurrentFirewallSubnetRouteTable() const{ return m_currentFirewallSubnetRouteTable; }
    inline bool CurrentFirewallSubnetRouteTableHasBeenSet() const { return m_currentFirewallSubnetRouteTableHasBeenSet; }
    inline void SetCurrentFirewallSubnetRouteTable(const Aws::String& value) { m_currentFirewallSubnetRouteTableHasBeenSet = true; m_currentFirewallSubnetRouteTable = value; }
    inline void SetCurrentFirewallSubnetRouteTable(Aws::String&& value) { m_currentFirewallSubnetRouteTableHasBeenSet = true; m_currentFirewallSubnetRouteTable = std::move(value); }
    inline void SetCurrentFirewallSubnetRouteTable(const char* value) { m_currentFirewallSubnetRouteTableHasBeenSet = true; m_currentFirewallSubnetRouteTable.assign(value); }
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithCurrentFirewallSubnetRouteTable(const Aws::String& value) { SetCurrentFirewallSubnetRouteTable(value); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithCurrentFirewallSubnetRouteTable(Aws::String&& value) { SetCurrentFirewallSubnetRouteTable(std::move(value)); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithCurrentFirewallSubnetRouteTable(const char* value) { SetCurrentFirewallSubnetRouteTable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The firewall endpoint that's expected.</p>
     */
    inline const Aws::String& GetExpectedFirewallEndpoint() const{ return m_expectedFirewallEndpoint; }
    inline bool ExpectedFirewallEndpointHasBeenSet() const { return m_expectedFirewallEndpointHasBeenSet; }
    inline void SetExpectedFirewallEndpoint(const Aws::String& value) { m_expectedFirewallEndpointHasBeenSet = true; m_expectedFirewallEndpoint = value; }
    inline void SetExpectedFirewallEndpoint(Aws::String&& value) { m_expectedFirewallEndpointHasBeenSet = true; m_expectedFirewallEndpoint = std::move(value); }
    inline void SetExpectedFirewallEndpoint(const char* value) { m_expectedFirewallEndpointHasBeenSet = true; m_expectedFirewallEndpoint.assign(value); }
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithExpectedFirewallEndpoint(const Aws::String& value) { SetExpectedFirewallEndpoint(value); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithExpectedFirewallEndpoint(Aws::String&& value) { SetExpectedFirewallEndpoint(std::move(value)); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithExpectedFirewallEndpoint(const char* value) { SetExpectedFirewallEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual firewall endpoint.</p>
     */
    inline const Aws::String& GetActualFirewallEndpoint() const{ return m_actualFirewallEndpoint; }
    inline bool ActualFirewallEndpointHasBeenSet() const { return m_actualFirewallEndpointHasBeenSet; }
    inline void SetActualFirewallEndpoint(const Aws::String& value) { m_actualFirewallEndpointHasBeenSet = true; m_actualFirewallEndpoint = value; }
    inline void SetActualFirewallEndpoint(Aws::String&& value) { m_actualFirewallEndpointHasBeenSet = true; m_actualFirewallEndpoint = std::move(value); }
    inline void SetActualFirewallEndpoint(const char* value) { m_actualFirewallEndpointHasBeenSet = true; m_actualFirewallEndpoint.assign(value); }
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithActualFirewallEndpoint(const Aws::String& value) { SetActualFirewallEndpoint(value); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithActualFirewallEndpoint(Aws::String&& value) { SetActualFirewallEndpoint(std::move(value)); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithActualFirewallEndpoint(const char* value) { SetActualFirewallEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected subnet ID for the firewall.</p>
     */
    inline const Aws::String& GetExpectedFirewallSubnetId() const{ return m_expectedFirewallSubnetId; }
    inline bool ExpectedFirewallSubnetIdHasBeenSet() const { return m_expectedFirewallSubnetIdHasBeenSet; }
    inline void SetExpectedFirewallSubnetId(const Aws::String& value) { m_expectedFirewallSubnetIdHasBeenSet = true; m_expectedFirewallSubnetId = value; }
    inline void SetExpectedFirewallSubnetId(Aws::String&& value) { m_expectedFirewallSubnetIdHasBeenSet = true; m_expectedFirewallSubnetId = std::move(value); }
    inline void SetExpectedFirewallSubnetId(const char* value) { m_expectedFirewallSubnetIdHasBeenSet = true; m_expectedFirewallSubnetId.assign(value); }
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithExpectedFirewallSubnetId(const Aws::String& value) { SetExpectedFirewallSubnetId(value); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithExpectedFirewallSubnetId(Aws::String&& value) { SetExpectedFirewallSubnetId(std::move(value)); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithExpectedFirewallSubnetId(const char* value) { SetExpectedFirewallSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual subnet ID for the firewall.</p>
     */
    inline const Aws::String& GetActualFirewallSubnetId() const{ return m_actualFirewallSubnetId; }
    inline bool ActualFirewallSubnetIdHasBeenSet() const { return m_actualFirewallSubnetIdHasBeenSet; }
    inline void SetActualFirewallSubnetId(const Aws::String& value) { m_actualFirewallSubnetIdHasBeenSet = true; m_actualFirewallSubnetId = value; }
    inline void SetActualFirewallSubnetId(Aws::String&& value) { m_actualFirewallSubnetIdHasBeenSet = true; m_actualFirewallSubnetId = std::move(value); }
    inline void SetActualFirewallSubnetId(const char* value) { m_actualFirewallSubnetIdHasBeenSet = true; m_actualFirewallSubnetId.assign(value); }
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithActualFirewallSubnetId(const Aws::String& value) { SetActualFirewallSubnetId(value); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithActualFirewallSubnetId(Aws::String&& value) { SetActualFirewallSubnetId(std::move(value)); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithActualFirewallSubnetId(const char* value) { SetActualFirewallSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The firewall subnet routes that are expected.</p>
     */
    inline const Aws::Vector<ExpectedRoute>& GetExpectedFirewallSubnetRoutes() const{ return m_expectedFirewallSubnetRoutes; }
    inline bool ExpectedFirewallSubnetRoutesHasBeenSet() const { return m_expectedFirewallSubnetRoutesHasBeenSet; }
    inline void SetExpectedFirewallSubnetRoutes(const Aws::Vector<ExpectedRoute>& value) { m_expectedFirewallSubnetRoutesHasBeenSet = true; m_expectedFirewallSubnetRoutes = value; }
    inline void SetExpectedFirewallSubnetRoutes(Aws::Vector<ExpectedRoute>&& value) { m_expectedFirewallSubnetRoutesHasBeenSet = true; m_expectedFirewallSubnetRoutes = std::move(value); }
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithExpectedFirewallSubnetRoutes(const Aws::Vector<ExpectedRoute>& value) { SetExpectedFirewallSubnetRoutes(value); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithExpectedFirewallSubnetRoutes(Aws::Vector<ExpectedRoute>&& value) { SetExpectedFirewallSubnetRoutes(std::move(value)); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& AddExpectedFirewallSubnetRoutes(const ExpectedRoute& value) { m_expectedFirewallSubnetRoutesHasBeenSet = true; m_expectedFirewallSubnetRoutes.push_back(value); return *this; }
    inline NetworkFirewallInvalidRouteConfigurationViolation& AddExpectedFirewallSubnetRoutes(ExpectedRoute&& value) { m_expectedFirewallSubnetRoutesHasBeenSet = true; m_expectedFirewallSubnetRoutes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actual firewall subnet routes that are expected.</p>
     */
    inline const Aws::Vector<Route>& GetActualFirewallSubnetRoutes() const{ return m_actualFirewallSubnetRoutes; }
    inline bool ActualFirewallSubnetRoutesHasBeenSet() const { return m_actualFirewallSubnetRoutesHasBeenSet; }
    inline void SetActualFirewallSubnetRoutes(const Aws::Vector<Route>& value) { m_actualFirewallSubnetRoutesHasBeenSet = true; m_actualFirewallSubnetRoutes = value; }
    inline void SetActualFirewallSubnetRoutes(Aws::Vector<Route>&& value) { m_actualFirewallSubnetRoutesHasBeenSet = true; m_actualFirewallSubnetRoutes = std::move(value); }
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithActualFirewallSubnetRoutes(const Aws::Vector<Route>& value) { SetActualFirewallSubnetRoutes(value); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithActualFirewallSubnetRoutes(Aws::Vector<Route>&& value) { SetActualFirewallSubnetRoutes(std::move(value)); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& AddActualFirewallSubnetRoutes(const Route& value) { m_actualFirewallSubnetRoutesHasBeenSet = true; m_actualFirewallSubnetRoutes.push_back(value); return *this; }
    inline NetworkFirewallInvalidRouteConfigurationViolation& AddActualFirewallSubnetRoutes(Route&& value) { m_actualFirewallSubnetRoutesHasBeenSet = true; m_actualFirewallSubnetRoutes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The internet gateway ID.</p>
     */
    inline const Aws::String& GetInternetGatewayId() const{ return m_internetGatewayId; }
    inline bool InternetGatewayIdHasBeenSet() const { return m_internetGatewayIdHasBeenSet; }
    inline void SetInternetGatewayId(const Aws::String& value) { m_internetGatewayIdHasBeenSet = true; m_internetGatewayId = value; }
    inline void SetInternetGatewayId(Aws::String&& value) { m_internetGatewayIdHasBeenSet = true; m_internetGatewayId = std::move(value); }
    inline void SetInternetGatewayId(const char* value) { m_internetGatewayIdHasBeenSet = true; m_internetGatewayId.assign(value); }
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithInternetGatewayId(const Aws::String& value) { SetInternetGatewayId(value); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithInternetGatewayId(Aws::String&& value) { SetInternetGatewayId(std::move(value)); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithInternetGatewayId(const char* value) { SetInternetGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route table for the current internet gateway.</p>
     */
    inline const Aws::String& GetCurrentInternetGatewayRouteTable() const{ return m_currentInternetGatewayRouteTable; }
    inline bool CurrentInternetGatewayRouteTableHasBeenSet() const { return m_currentInternetGatewayRouteTableHasBeenSet; }
    inline void SetCurrentInternetGatewayRouteTable(const Aws::String& value) { m_currentInternetGatewayRouteTableHasBeenSet = true; m_currentInternetGatewayRouteTable = value; }
    inline void SetCurrentInternetGatewayRouteTable(Aws::String&& value) { m_currentInternetGatewayRouteTableHasBeenSet = true; m_currentInternetGatewayRouteTable = std::move(value); }
    inline void SetCurrentInternetGatewayRouteTable(const char* value) { m_currentInternetGatewayRouteTableHasBeenSet = true; m_currentInternetGatewayRouteTable.assign(value); }
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithCurrentInternetGatewayRouteTable(const Aws::String& value) { SetCurrentInternetGatewayRouteTable(value); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithCurrentInternetGatewayRouteTable(Aws::String&& value) { SetCurrentInternetGatewayRouteTable(std::move(value)); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithCurrentInternetGatewayRouteTable(const char* value) { SetCurrentInternetGatewayRouteTable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected routes for the internet gateway.</p>
     */
    inline const Aws::Vector<ExpectedRoute>& GetExpectedInternetGatewayRoutes() const{ return m_expectedInternetGatewayRoutes; }
    inline bool ExpectedInternetGatewayRoutesHasBeenSet() const { return m_expectedInternetGatewayRoutesHasBeenSet; }
    inline void SetExpectedInternetGatewayRoutes(const Aws::Vector<ExpectedRoute>& value) { m_expectedInternetGatewayRoutesHasBeenSet = true; m_expectedInternetGatewayRoutes = value; }
    inline void SetExpectedInternetGatewayRoutes(Aws::Vector<ExpectedRoute>&& value) { m_expectedInternetGatewayRoutesHasBeenSet = true; m_expectedInternetGatewayRoutes = std::move(value); }
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithExpectedInternetGatewayRoutes(const Aws::Vector<ExpectedRoute>& value) { SetExpectedInternetGatewayRoutes(value); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithExpectedInternetGatewayRoutes(Aws::Vector<ExpectedRoute>&& value) { SetExpectedInternetGatewayRoutes(std::move(value)); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& AddExpectedInternetGatewayRoutes(const ExpectedRoute& value) { m_expectedInternetGatewayRoutesHasBeenSet = true; m_expectedInternetGatewayRoutes.push_back(value); return *this; }
    inline NetworkFirewallInvalidRouteConfigurationViolation& AddExpectedInternetGatewayRoutes(ExpectedRoute&& value) { m_expectedInternetGatewayRoutesHasBeenSet = true; m_expectedInternetGatewayRoutes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actual internet gateway routes.</p>
     */
    inline const Aws::Vector<Route>& GetActualInternetGatewayRoutes() const{ return m_actualInternetGatewayRoutes; }
    inline bool ActualInternetGatewayRoutesHasBeenSet() const { return m_actualInternetGatewayRoutesHasBeenSet; }
    inline void SetActualInternetGatewayRoutes(const Aws::Vector<Route>& value) { m_actualInternetGatewayRoutesHasBeenSet = true; m_actualInternetGatewayRoutes = value; }
    inline void SetActualInternetGatewayRoutes(Aws::Vector<Route>&& value) { m_actualInternetGatewayRoutesHasBeenSet = true; m_actualInternetGatewayRoutes = std::move(value); }
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithActualInternetGatewayRoutes(const Aws::Vector<Route>& value) { SetActualInternetGatewayRoutes(value); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithActualInternetGatewayRoutes(Aws::Vector<Route>&& value) { SetActualInternetGatewayRoutes(std::move(value)); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& AddActualInternetGatewayRoutes(const Route& value) { m_actualInternetGatewayRoutesHasBeenSet = true; m_actualInternetGatewayRoutes.push_back(value); return *this; }
    inline NetworkFirewallInvalidRouteConfigurationViolation& AddActualInternetGatewayRoutes(Route&& value) { m_actualInternetGatewayRoutesHasBeenSet = true; m_actualInternetGatewayRoutes.push_back(std::move(value)); return *this; }
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
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline NetworkFirewallInvalidRouteConfigurationViolation& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_affectedSubnets;
    bool m_affectedSubnetsHasBeenSet = false;

    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;

    bool m_isRouteTableUsedInDifferentAZ;
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
