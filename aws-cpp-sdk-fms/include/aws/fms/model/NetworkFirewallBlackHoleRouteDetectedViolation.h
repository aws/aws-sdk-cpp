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
   * <p>Violation detail for an internet gateway route with an inactive state in the
   * customer subnet route table or Network Firewall subnet route
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/NetworkFirewallBlackHoleRouteDetectedViolation">AWS
   * API Reference</a></p>
   */
  class NetworkFirewallBlackHoleRouteDetectedViolation
  {
  public:
    AWS_FMS_API NetworkFirewallBlackHoleRouteDetectedViolation();
    AWS_FMS_API NetworkFirewallBlackHoleRouteDetectedViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkFirewallBlackHoleRouteDetectedViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The subnet that has an inactive state.</p>
     */
    inline const Aws::String& GetViolationTarget() const{ return m_violationTarget; }

    /**
     * <p>The subnet that has an inactive state.</p>
     */
    inline bool ViolationTargetHasBeenSet() const { return m_violationTargetHasBeenSet; }

    /**
     * <p>The subnet that has an inactive state.</p>
     */
    inline void SetViolationTarget(const Aws::String& value) { m_violationTargetHasBeenSet = true; m_violationTarget = value; }

    /**
     * <p>The subnet that has an inactive state.</p>
     */
    inline void SetViolationTarget(Aws::String&& value) { m_violationTargetHasBeenSet = true; m_violationTarget = std::move(value); }

    /**
     * <p>The subnet that has an inactive state.</p>
     */
    inline void SetViolationTarget(const char* value) { m_violationTargetHasBeenSet = true; m_violationTarget.assign(value); }

    /**
     * <p>The subnet that has an inactive state.</p>
     */
    inline NetworkFirewallBlackHoleRouteDetectedViolation& WithViolationTarget(const Aws::String& value) { SetViolationTarget(value); return *this;}

    /**
     * <p>The subnet that has an inactive state.</p>
     */
    inline NetworkFirewallBlackHoleRouteDetectedViolation& WithViolationTarget(Aws::String&& value) { SetViolationTarget(std::move(value)); return *this;}

    /**
     * <p>The subnet that has an inactive state.</p>
     */
    inline NetworkFirewallBlackHoleRouteDetectedViolation& WithViolationTarget(const char* value) { SetViolationTarget(value); return *this;}


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
    inline NetworkFirewallBlackHoleRouteDetectedViolation& WithRouteTableId(const Aws::String& value) { SetRouteTableId(value); return *this;}

    /**
     * <p>Information about the route table ID.</p>
     */
    inline NetworkFirewallBlackHoleRouteDetectedViolation& WithRouteTableId(Aws::String&& value) { SetRouteTableId(std::move(value)); return *this;}

    /**
     * <p>Information about the route table ID.</p>
     */
    inline NetworkFirewallBlackHoleRouteDetectedViolation& WithRouteTableId(const char* value) { SetRouteTableId(value); return *this;}


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
    inline NetworkFirewallBlackHoleRouteDetectedViolation& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>Information about the VPC ID.</p>
     */
    inline NetworkFirewallBlackHoleRouteDetectedViolation& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>Information about the VPC ID.</p>
     */
    inline NetworkFirewallBlackHoleRouteDetectedViolation& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>Information about the route or routes that are in violation.</p>
     */
    inline const Aws::Vector<Route>& GetViolatingRoutes() const{ return m_violatingRoutes; }

    /**
     * <p>Information about the route or routes that are in violation.</p>
     */
    inline bool ViolatingRoutesHasBeenSet() const { return m_violatingRoutesHasBeenSet; }

    /**
     * <p>Information about the route or routes that are in violation.</p>
     */
    inline void SetViolatingRoutes(const Aws::Vector<Route>& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes = value; }

    /**
     * <p>Information about the route or routes that are in violation.</p>
     */
    inline void SetViolatingRoutes(Aws::Vector<Route>&& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes = std::move(value); }

    /**
     * <p>Information about the route or routes that are in violation.</p>
     */
    inline NetworkFirewallBlackHoleRouteDetectedViolation& WithViolatingRoutes(const Aws::Vector<Route>& value) { SetViolatingRoutes(value); return *this;}

    /**
     * <p>Information about the route or routes that are in violation.</p>
     */
    inline NetworkFirewallBlackHoleRouteDetectedViolation& WithViolatingRoutes(Aws::Vector<Route>&& value) { SetViolatingRoutes(std::move(value)); return *this;}

    /**
     * <p>Information about the route or routes that are in violation.</p>
     */
    inline NetworkFirewallBlackHoleRouteDetectedViolation& AddViolatingRoutes(const Route& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes.push_back(value); return *this; }

    /**
     * <p>Information about the route or routes that are in violation.</p>
     */
    inline NetworkFirewallBlackHoleRouteDetectedViolation& AddViolatingRoutes(Route&& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_violationTarget;
    bool m_violationTargetHasBeenSet = false;

    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Route> m_violatingRoutes;
    bool m_violatingRoutesHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
