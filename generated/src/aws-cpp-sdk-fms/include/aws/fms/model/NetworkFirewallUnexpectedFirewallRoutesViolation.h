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
   * <p>Violation detail for an unexpected route that's present in a route
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/NetworkFirewallUnexpectedFirewallRoutesViolation">AWS
   * API Reference</a></p>
   */
  class NetworkFirewallUnexpectedFirewallRoutesViolation
  {
  public:
    AWS_FMS_API NetworkFirewallUnexpectedFirewallRoutesViolation() = default;
    AWS_FMS_API NetworkFirewallUnexpectedFirewallRoutesViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkFirewallUnexpectedFirewallRoutesViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The subnet ID for the firewall.</p>
     */
    inline const Aws::String& GetFirewallSubnetId() const { return m_firewallSubnetId; }
    inline bool FirewallSubnetIdHasBeenSet() const { return m_firewallSubnetIdHasBeenSet; }
    template<typename FirewallSubnetIdT = Aws::String>
    void SetFirewallSubnetId(FirewallSubnetIdT&& value) { m_firewallSubnetIdHasBeenSet = true; m_firewallSubnetId = std::forward<FirewallSubnetIdT>(value); }
    template<typename FirewallSubnetIdT = Aws::String>
    NetworkFirewallUnexpectedFirewallRoutesViolation& WithFirewallSubnetId(FirewallSubnetIdT&& value) { SetFirewallSubnetId(std::forward<FirewallSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routes that are in violation.</p>
     */
    inline const Aws::Vector<Route>& GetViolatingRoutes() const { return m_violatingRoutes; }
    inline bool ViolatingRoutesHasBeenSet() const { return m_violatingRoutesHasBeenSet; }
    template<typename ViolatingRoutesT = Aws::Vector<Route>>
    void SetViolatingRoutes(ViolatingRoutesT&& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes = std::forward<ViolatingRoutesT>(value); }
    template<typename ViolatingRoutesT = Aws::Vector<Route>>
    NetworkFirewallUnexpectedFirewallRoutesViolation& WithViolatingRoutes(ViolatingRoutesT&& value) { SetViolatingRoutes(std::forward<ViolatingRoutesT>(value)); return *this;}
    template<typename ViolatingRoutesT = Route>
    NetworkFirewallUnexpectedFirewallRoutesViolation& AddViolatingRoutes(ViolatingRoutesT&& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes.emplace_back(std::forward<ViolatingRoutesT>(value)); return *this; }
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
    NetworkFirewallUnexpectedFirewallRoutesViolation& WithRouteTableId(RouteTableIdT&& value) { SetRouteTableId(std::forward<RouteTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint of the firewall.</p>
     */
    inline const Aws::String& GetFirewallEndpoint() const { return m_firewallEndpoint; }
    inline bool FirewallEndpointHasBeenSet() const { return m_firewallEndpointHasBeenSet; }
    template<typename FirewallEndpointT = Aws::String>
    void SetFirewallEndpoint(FirewallEndpointT&& value) { m_firewallEndpointHasBeenSet = true; m_firewallEndpoint = std::forward<FirewallEndpointT>(value); }
    template<typename FirewallEndpointT = Aws::String>
    NetworkFirewallUnexpectedFirewallRoutesViolation& WithFirewallEndpoint(FirewallEndpointT&& value) { SetFirewallEndpoint(std::forward<FirewallEndpointT>(value)); return *this;}
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
    NetworkFirewallUnexpectedFirewallRoutesViolation& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_firewallSubnetId;
    bool m_firewallSubnetIdHasBeenSet = false;

    Aws::Vector<Route> m_violatingRoutes;
    bool m_violatingRoutesHasBeenSet = false;

    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;

    Aws::String m_firewallEndpoint;
    bool m_firewallEndpointHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
