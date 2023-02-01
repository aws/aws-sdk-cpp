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
    AWS_FMS_API NetworkFirewallInternetTrafficNotInspectedViolation();
    AWS_FMS_API NetworkFirewallInternetTrafficNotInspectedViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkFirewallInternetTrafficNotInspectedViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The subnet ID.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The subnet ID.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The subnet ID.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The subnet ID.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The subnet ID.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The subnet ID.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The subnet ID.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The subnet ID.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The subnet Availability Zone.</p>
     */
    inline const Aws::String& GetSubnetAvailabilityZone() const{ return m_subnetAvailabilityZone; }

    /**
     * <p>The subnet Availability Zone.</p>
     */
    inline bool SubnetAvailabilityZoneHasBeenSet() const { return m_subnetAvailabilityZoneHasBeenSet; }

    /**
     * <p>The subnet Availability Zone.</p>
     */
    inline void SetSubnetAvailabilityZone(const Aws::String& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = value; }

    /**
     * <p>The subnet Availability Zone.</p>
     */
    inline void SetSubnetAvailabilityZone(Aws::String&& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = std::move(value); }

    /**
     * <p>The subnet Availability Zone.</p>
     */
    inline void SetSubnetAvailabilityZone(const char* value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone.assign(value); }

    /**
     * <p>The subnet Availability Zone.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithSubnetAvailabilityZone(const Aws::String& value) { SetSubnetAvailabilityZone(value); return *this;}

    /**
     * <p>The subnet Availability Zone.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithSubnetAvailabilityZone(Aws::String&& value) { SetSubnetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The subnet Availability Zone.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithSubnetAvailabilityZone(const char* value) { SetSubnetAvailabilityZone(value); return *this;}


    /**
     * <p>Information about the route table ID.</p>
     */
    inline const Aws::String& GetRouteTableId() const{ return m_routeTableId; }

    /**
     * <p>Information about the route table ID.</p>
     */
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }

    /**
     * <p>Information about the route table ID.</p>
     */
    inline void SetRouteTableId(const Aws::String& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = value; }

    /**
     * <p>Information about the route table ID.</p>
     */
    inline void SetRouteTableId(Aws::String&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::move(value); }

    /**
     * <p>Information about the route table ID.</p>
     */
    inline void SetRouteTableId(const char* value) { m_routeTableIdHasBeenSet = true; m_routeTableId.assign(value); }

    /**
     * <p>Information about the route table ID.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithRouteTableId(const Aws::String& value) { SetRouteTableId(value); return *this;}

    /**
     * <p>Information about the route table ID.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithRouteTableId(Aws::String&& value) { SetRouteTableId(std::move(value)); return *this;}

    /**
     * <p>Information about the route table ID.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithRouteTableId(const char* value) { SetRouteTableId(value); return *this;}


    /**
     * <p>The route or routes that are in violation.</p>
     */
    inline const Aws::Vector<Route>& GetViolatingRoutes() const{ return m_violatingRoutes; }

    /**
     * <p>The route or routes that are in violation.</p>
     */
    inline bool ViolatingRoutesHasBeenSet() const { return m_violatingRoutesHasBeenSet; }

    /**
     * <p>The route or routes that are in violation.</p>
     */
    inline void SetViolatingRoutes(const Aws::Vector<Route>& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes = value; }

    /**
     * <p>The route or routes that are in violation.</p>
     */
    inline void SetViolatingRoutes(Aws::Vector<Route>&& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes = std::move(value); }

    /**
     * <p>The route or routes that are in violation.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithViolatingRoutes(const Aws::Vector<Route>& value) { SetViolatingRoutes(value); return *this;}

    /**
     * <p>The route or routes that are in violation.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithViolatingRoutes(Aws::Vector<Route>&& value) { SetViolatingRoutes(std::move(value)); return *this;}

    /**
     * <p>The route or routes that are in violation.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& AddViolatingRoutes(const Route& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes.push_back(value); return *this; }

    /**
     * <p>The route or routes that are in violation.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& AddViolatingRoutes(Route&& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about whether the route table is used in another Availability
     * Zone.</p>
     */
    inline bool GetIsRouteTableUsedInDifferentAZ() const{ return m_isRouteTableUsedInDifferentAZ; }

    /**
     * <p>Information about whether the route table is used in another Availability
     * Zone.</p>
     */
    inline bool IsRouteTableUsedInDifferentAZHasBeenSet() const { return m_isRouteTableUsedInDifferentAZHasBeenSet; }

    /**
     * <p>Information about whether the route table is used in another Availability
     * Zone.</p>
     */
    inline void SetIsRouteTableUsedInDifferentAZ(bool value) { m_isRouteTableUsedInDifferentAZHasBeenSet = true; m_isRouteTableUsedInDifferentAZ = value; }

    /**
     * <p>Information about whether the route table is used in another Availability
     * Zone.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithIsRouteTableUsedInDifferentAZ(bool value) { SetIsRouteTableUsedInDifferentAZ(value); return *this;}


    /**
     * <p>Information about the subnet route table for the current firewall.</p>
     */
    inline const Aws::String& GetCurrentFirewallSubnetRouteTable() const{ return m_currentFirewallSubnetRouteTable; }

    /**
     * <p>Information about the subnet route table for the current firewall.</p>
     */
    inline bool CurrentFirewallSubnetRouteTableHasBeenSet() const { return m_currentFirewallSubnetRouteTableHasBeenSet; }

    /**
     * <p>Information about the subnet route table for the current firewall.</p>
     */
    inline void SetCurrentFirewallSubnetRouteTable(const Aws::String& value) { m_currentFirewallSubnetRouteTableHasBeenSet = true; m_currentFirewallSubnetRouteTable = value; }

    /**
     * <p>Information about the subnet route table for the current firewall.</p>
     */
    inline void SetCurrentFirewallSubnetRouteTable(Aws::String&& value) { m_currentFirewallSubnetRouteTableHasBeenSet = true; m_currentFirewallSubnetRouteTable = std::move(value); }

    /**
     * <p>Information about the subnet route table for the current firewall.</p>
     */
    inline void SetCurrentFirewallSubnetRouteTable(const char* value) { m_currentFirewallSubnetRouteTableHasBeenSet = true; m_currentFirewallSubnetRouteTable.assign(value); }

    /**
     * <p>Information about the subnet route table for the current firewall.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithCurrentFirewallSubnetRouteTable(const Aws::String& value) { SetCurrentFirewallSubnetRouteTable(value); return *this;}

    /**
     * <p>Information about the subnet route table for the current firewall.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithCurrentFirewallSubnetRouteTable(Aws::String&& value) { SetCurrentFirewallSubnetRouteTable(std::move(value)); return *this;}

    /**
     * <p>Information about the subnet route table for the current firewall.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithCurrentFirewallSubnetRouteTable(const char* value) { SetCurrentFirewallSubnetRouteTable(value); return *this;}


    /**
     * <p>The expected endpoint for the current firewall.</p>
     */
    inline const Aws::String& GetExpectedFirewallEndpoint() const{ return m_expectedFirewallEndpoint; }

    /**
     * <p>The expected endpoint for the current firewall.</p>
     */
    inline bool ExpectedFirewallEndpointHasBeenSet() const { return m_expectedFirewallEndpointHasBeenSet; }

    /**
     * <p>The expected endpoint for the current firewall.</p>
     */
    inline void SetExpectedFirewallEndpoint(const Aws::String& value) { m_expectedFirewallEndpointHasBeenSet = true; m_expectedFirewallEndpoint = value; }

    /**
     * <p>The expected endpoint for the current firewall.</p>
     */
    inline void SetExpectedFirewallEndpoint(Aws::String&& value) { m_expectedFirewallEndpointHasBeenSet = true; m_expectedFirewallEndpoint = std::move(value); }

    /**
     * <p>The expected endpoint for the current firewall.</p>
     */
    inline void SetExpectedFirewallEndpoint(const char* value) { m_expectedFirewallEndpointHasBeenSet = true; m_expectedFirewallEndpoint.assign(value); }

    /**
     * <p>The expected endpoint for the current firewall.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithExpectedFirewallEndpoint(const Aws::String& value) { SetExpectedFirewallEndpoint(value); return *this;}

    /**
     * <p>The expected endpoint for the current firewall.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithExpectedFirewallEndpoint(Aws::String&& value) { SetExpectedFirewallEndpoint(std::move(value)); return *this;}

    /**
     * <p>The expected endpoint for the current firewall.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithExpectedFirewallEndpoint(const char* value) { SetExpectedFirewallEndpoint(value); return *this;}


    /**
     * <p>The firewall subnet ID.</p>
     */
    inline const Aws::String& GetFirewallSubnetId() const{ return m_firewallSubnetId; }

    /**
     * <p>The firewall subnet ID.</p>
     */
    inline bool FirewallSubnetIdHasBeenSet() const { return m_firewallSubnetIdHasBeenSet; }

    /**
     * <p>The firewall subnet ID.</p>
     */
    inline void SetFirewallSubnetId(const Aws::String& value) { m_firewallSubnetIdHasBeenSet = true; m_firewallSubnetId = value; }

    /**
     * <p>The firewall subnet ID.</p>
     */
    inline void SetFirewallSubnetId(Aws::String&& value) { m_firewallSubnetIdHasBeenSet = true; m_firewallSubnetId = std::move(value); }

    /**
     * <p>The firewall subnet ID.</p>
     */
    inline void SetFirewallSubnetId(const char* value) { m_firewallSubnetIdHasBeenSet = true; m_firewallSubnetId.assign(value); }

    /**
     * <p>The firewall subnet ID.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithFirewallSubnetId(const Aws::String& value) { SetFirewallSubnetId(value); return *this;}

    /**
     * <p>The firewall subnet ID.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithFirewallSubnetId(Aws::String&& value) { SetFirewallSubnetId(std::move(value)); return *this;}

    /**
     * <p>The firewall subnet ID.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithFirewallSubnetId(const char* value) { SetFirewallSubnetId(value); return *this;}


    /**
     * <p>The firewall subnet routes that are expected.</p>
     */
    inline const Aws::Vector<ExpectedRoute>& GetExpectedFirewallSubnetRoutes() const{ return m_expectedFirewallSubnetRoutes; }

    /**
     * <p>The firewall subnet routes that are expected.</p>
     */
    inline bool ExpectedFirewallSubnetRoutesHasBeenSet() const { return m_expectedFirewallSubnetRoutesHasBeenSet; }

    /**
     * <p>The firewall subnet routes that are expected.</p>
     */
    inline void SetExpectedFirewallSubnetRoutes(const Aws::Vector<ExpectedRoute>& value) { m_expectedFirewallSubnetRoutesHasBeenSet = true; m_expectedFirewallSubnetRoutes = value; }

    /**
     * <p>The firewall subnet routes that are expected.</p>
     */
    inline void SetExpectedFirewallSubnetRoutes(Aws::Vector<ExpectedRoute>&& value) { m_expectedFirewallSubnetRoutesHasBeenSet = true; m_expectedFirewallSubnetRoutes = std::move(value); }

    /**
     * <p>The firewall subnet routes that are expected.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithExpectedFirewallSubnetRoutes(const Aws::Vector<ExpectedRoute>& value) { SetExpectedFirewallSubnetRoutes(value); return *this;}

    /**
     * <p>The firewall subnet routes that are expected.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithExpectedFirewallSubnetRoutes(Aws::Vector<ExpectedRoute>&& value) { SetExpectedFirewallSubnetRoutes(std::move(value)); return *this;}

    /**
     * <p>The firewall subnet routes that are expected.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& AddExpectedFirewallSubnetRoutes(const ExpectedRoute& value) { m_expectedFirewallSubnetRoutesHasBeenSet = true; m_expectedFirewallSubnetRoutes.push_back(value); return *this; }

    /**
     * <p>The firewall subnet routes that are expected.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& AddExpectedFirewallSubnetRoutes(ExpectedRoute&& value) { m_expectedFirewallSubnetRoutesHasBeenSet = true; m_expectedFirewallSubnetRoutes.push_back(std::move(value)); return *this; }


    /**
     * <p>The actual firewall subnet routes.</p>
     */
    inline const Aws::Vector<Route>& GetActualFirewallSubnetRoutes() const{ return m_actualFirewallSubnetRoutes; }

    /**
     * <p>The actual firewall subnet routes.</p>
     */
    inline bool ActualFirewallSubnetRoutesHasBeenSet() const { return m_actualFirewallSubnetRoutesHasBeenSet; }

    /**
     * <p>The actual firewall subnet routes.</p>
     */
    inline void SetActualFirewallSubnetRoutes(const Aws::Vector<Route>& value) { m_actualFirewallSubnetRoutesHasBeenSet = true; m_actualFirewallSubnetRoutes = value; }

    /**
     * <p>The actual firewall subnet routes.</p>
     */
    inline void SetActualFirewallSubnetRoutes(Aws::Vector<Route>&& value) { m_actualFirewallSubnetRoutesHasBeenSet = true; m_actualFirewallSubnetRoutes = std::move(value); }

    /**
     * <p>The actual firewall subnet routes.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithActualFirewallSubnetRoutes(const Aws::Vector<Route>& value) { SetActualFirewallSubnetRoutes(value); return *this;}

    /**
     * <p>The actual firewall subnet routes.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithActualFirewallSubnetRoutes(Aws::Vector<Route>&& value) { SetActualFirewallSubnetRoutes(std::move(value)); return *this;}

    /**
     * <p>The actual firewall subnet routes.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& AddActualFirewallSubnetRoutes(const Route& value) { m_actualFirewallSubnetRoutesHasBeenSet = true; m_actualFirewallSubnetRoutes.push_back(value); return *this; }

    /**
     * <p>The actual firewall subnet routes.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& AddActualFirewallSubnetRoutes(Route&& value) { m_actualFirewallSubnetRoutesHasBeenSet = true; m_actualFirewallSubnetRoutes.push_back(std::move(value)); return *this; }


    /**
     * <p>The internet gateway ID.</p>
     */
    inline const Aws::String& GetInternetGatewayId() const{ return m_internetGatewayId; }

    /**
     * <p>The internet gateway ID.</p>
     */
    inline bool InternetGatewayIdHasBeenSet() const { return m_internetGatewayIdHasBeenSet; }

    /**
     * <p>The internet gateway ID.</p>
     */
    inline void SetInternetGatewayId(const Aws::String& value) { m_internetGatewayIdHasBeenSet = true; m_internetGatewayId = value; }

    /**
     * <p>The internet gateway ID.</p>
     */
    inline void SetInternetGatewayId(Aws::String&& value) { m_internetGatewayIdHasBeenSet = true; m_internetGatewayId = std::move(value); }

    /**
     * <p>The internet gateway ID.</p>
     */
    inline void SetInternetGatewayId(const char* value) { m_internetGatewayIdHasBeenSet = true; m_internetGatewayId.assign(value); }

    /**
     * <p>The internet gateway ID.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithInternetGatewayId(const Aws::String& value) { SetInternetGatewayId(value); return *this;}

    /**
     * <p>The internet gateway ID.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithInternetGatewayId(Aws::String&& value) { SetInternetGatewayId(std::move(value)); return *this;}

    /**
     * <p>The internet gateway ID.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithInternetGatewayId(const char* value) { SetInternetGatewayId(value); return *this;}


    /**
     * <p>The current route table for the internet gateway.</p>
     */
    inline const Aws::String& GetCurrentInternetGatewayRouteTable() const{ return m_currentInternetGatewayRouteTable; }

    /**
     * <p>The current route table for the internet gateway.</p>
     */
    inline bool CurrentInternetGatewayRouteTableHasBeenSet() const { return m_currentInternetGatewayRouteTableHasBeenSet; }

    /**
     * <p>The current route table for the internet gateway.</p>
     */
    inline void SetCurrentInternetGatewayRouteTable(const Aws::String& value) { m_currentInternetGatewayRouteTableHasBeenSet = true; m_currentInternetGatewayRouteTable = value; }

    /**
     * <p>The current route table for the internet gateway.</p>
     */
    inline void SetCurrentInternetGatewayRouteTable(Aws::String&& value) { m_currentInternetGatewayRouteTableHasBeenSet = true; m_currentInternetGatewayRouteTable = std::move(value); }

    /**
     * <p>The current route table for the internet gateway.</p>
     */
    inline void SetCurrentInternetGatewayRouteTable(const char* value) { m_currentInternetGatewayRouteTableHasBeenSet = true; m_currentInternetGatewayRouteTable.assign(value); }

    /**
     * <p>The current route table for the internet gateway.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithCurrentInternetGatewayRouteTable(const Aws::String& value) { SetCurrentInternetGatewayRouteTable(value); return *this;}

    /**
     * <p>The current route table for the internet gateway.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithCurrentInternetGatewayRouteTable(Aws::String&& value) { SetCurrentInternetGatewayRouteTable(std::move(value)); return *this;}

    /**
     * <p>The current route table for the internet gateway.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithCurrentInternetGatewayRouteTable(const char* value) { SetCurrentInternetGatewayRouteTable(value); return *this;}


    /**
     * <p>The internet gateway routes that are expected.</p>
     */
    inline const Aws::Vector<ExpectedRoute>& GetExpectedInternetGatewayRoutes() const{ return m_expectedInternetGatewayRoutes; }

    /**
     * <p>The internet gateway routes that are expected.</p>
     */
    inline bool ExpectedInternetGatewayRoutesHasBeenSet() const { return m_expectedInternetGatewayRoutesHasBeenSet; }

    /**
     * <p>The internet gateway routes that are expected.</p>
     */
    inline void SetExpectedInternetGatewayRoutes(const Aws::Vector<ExpectedRoute>& value) { m_expectedInternetGatewayRoutesHasBeenSet = true; m_expectedInternetGatewayRoutes = value; }

    /**
     * <p>The internet gateway routes that are expected.</p>
     */
    inline void SetExpectedInternetGatewayRoutes(Aws::Vector<ExpectedRoute>&& value) { m_expectedInternetGatewayRoutesHasBeenSet = true; m_expectedInternetGatewayRoutes = std::move(value); }

    /**
     * <p>The internet gateway routes that are expected.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithExpectedInternetGatewayRoutes(const Aws::Vector<ExpectedRoute>& value) { SetExpectedInternetGatewayRoutes(value); return *this;}

    /**
     * <p>The internet gateway routes that are expected.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithExpectedInternetGatewayRoutes(Aws::Vector<ExpectedRoute>&& value) { SetExpectedInternetGatewayRoutes(std::move(value)); return *this;}

    /**
     * <p>The internet gateway routes that are expected.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& AddExpectedInternetGatewayRoutes(const ExpectedRoute& value) { m_expectedInternetGatewayRoutesHasBeenSet = true; m_expectedInternetGatewayRoutes.push_back(value); return *this; }

    /**
     * <p>The internet gateway routes that are expected.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& AddExpectedInternetGatewayRoutes(ExpectedRoute&& value) { m_expectedInternetGatewayRoutesHasBeenSet = true; m_expectedInternetGatewayRoutes.push_back(std::move(value)); return *this; }


    /**
     * <p>The actual internet gateway routes.</p>
     */
    inline const Aws::Vector<Route>& GetActualInternetGatewayRoutes() const{ return m_actualInternetGatewayRoutes; }

    /**
     * <p>The actual internet gateway routes.</p>
     */
    inline bool ActualInternetGatewayRoutesHasBeenSet() const { return m_actualInternetGatewayRoutesHasBeenSet; }

    /**
     * <p>The actual internet gateway routes.</p>
     */
    inline void SetActualInternetGatewayRoutes(const Aws::Vector<Route>& value) { m_actualInternetGatewayRoutesHasBeenSet = true; m_actualInternetGatewayRoutes = value; }

    /**
     * <p>The actual internet gateway routes.</p>
     */
    inline void SetActualInternetGatewayRoutes(Aws::Vector<Route>&& value) { m_actualInternetGatewayRoutesHasBeenSet = true; m_actualInternetGatewayRoutes = std::move(value); }

    /**
     * <p>The actual internet gateway routes.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithActualInternetGatewayRoutes(const Aws::Vector<Route>& value) { SetActualInternetGatewayRoutes(value); return *this;}

    /**
     * <p>The actual internet gateway routes.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithActualInternetGatewayRoutes(Aws::Vector<Route>&& value) { SetActualInternetGatewayRoutes(std::move(value)); return *this;}

    /**
     * <p>The actual internet gateway routes.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& AddActualInternetGatewayRoutes(const Route& value) { m_actualInternetGatewayRoutesHasBeenSet = true; m_actualInternetGatewayRoutes.push_back(value); return *this; }

    /**
     * <p>The actual internet gateway routes.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& AddActualInternetGatewayRoutes(Route&& value) { m_actualInternetGatewayRoutesHasBeenSet = true; m_actualInternetGatewayRoutes.push_back(std::move(value)); return *this; }


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
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>Information about the VPC ID.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>Information about the VPC ID.</p>
     */
    inline NetworkFirewallInternetTrafficNotInspectedViolation& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_subnetAvailabilityZone;
    bool m_subnetAvailabilityZoneHasBeenSet = false;

    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;

    Aws::Vector<Route> m_violatingRoutes;
    bool m_violatingRoutesHasBeenSet = false;

    bool m_isRouteTableUsedInDifferentAZ;
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
