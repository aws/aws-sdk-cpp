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
    AWS_FMS_API NetworkFirewallBlackHoleRouteDetectedViolation() = default;
    AWS_FMS_API NetworkFirewallBlackHoleRouteDetectedViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkFirewallBlackHoleRouteDetectedViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The subnet that has an inactive state.</p>
     */
    inline const Aws::String& GetViolationTarget() const { return m_violationTarget; }
    inline bool ViolationTargetHasBeenSet() const { return m_violationTargetHasBeenSet; }
    template<typename ViolationTargetT = Aws::String>
    void SetViolationTarget(ViolationTargetT&& value) { m_violationTargetHasBeenSet = true; m_violationTarget = std::forward<ViolationTargetT>(value); }
    template<typename ViolationTargetT = Aws::String>
    NetworkFirewallBlackHoleRouteDetectedViolation& WithViolationTarget(ViolationTargetT&& value) { SetViolationTarget(std::forward<ViolationTargetT>(value)); return *this;}
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
    NetworkFirewallBlackHoleRouteDetectedViolation& WithRouteTableId(RouteTableIdT&& value) { SetRouteTableId(std::forward<RouteTableIdT>(value)); return *this;}
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
    NetworkFirewallBlackHoleRouteDetectedViolation& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the route or routes that are in violation.</p>
     */
    inline const Aws::Vector<Route>& GetViolatingRoutes() const { return m_violatingRoutes; }
    inline bool ViolatingRoutesHasBeenSet() const { return m_violatingRoutesHasBeenSet; }
    template<typename ViolatingRoutesT = Aws::Vector<Route>>
    void SetViolatingRoutes(ViolatingRoutesT&& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes = std::forward<ViolatingRoutesT>(value); }
    template<typename ViolatingRoutesT = Aws::Vector<Route>>
    NetworkFirewallBlackHoleRouteDetectedViolation& WithViolatingRoutes(ViolatingRoutesT&& value) { SetViolatingRoutes(std::forward<ViolatingRoutesT>(value)); return *this;}
    template<typename ViolatingRoutesT = Route>
    NetworkFirewallBlackHoleRouteDetectedViolation& AddViolatingRoutes(ViolatingRoutesT&& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes.emplace_back(std::forward<ViolatingRoutesT>(value)); return *this; }
    ///@}
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
