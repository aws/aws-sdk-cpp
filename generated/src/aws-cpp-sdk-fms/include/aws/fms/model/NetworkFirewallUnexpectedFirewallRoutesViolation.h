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
    AWS_FMS_API NetworkFirewallUnexpectedFirewallRoutesViolation();
    AWS_FMS_API NetworkFirewallUnexpectedFirewallRoutesViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkFirewallUnexpectedFirewallRoutesViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The subnet ID for the firewall.</p>
     */
    inline const Aws::String& GetFirewallSubnetId() const{ return m_firewallSubnetId; }
    inline bool FirewallSubnetIdHasBeenSet() const { return m_firewallSubnetIdHasBeenSet; }
    inline void SetFirewallSubnetId(const Aws::String& value) { m_firewallSubnetIdHasBeenSet = true; m_firewallSubnetId = value; }
    inline void SetFirewallSubnetId(Aws::String&& value) { m_firewallSubnetIdHasBeenSet = true; m_firewallSubnetId = std::move(value); }
    inline void SetFirewallSubnetId(const char* value) { m_firewallSubnetIdHasBeenSet = true; m_firewallSubnetId.assign(value); }
    inline NetworkFirewallUnexpectedFirewallRoutesViolation& WithFirewallSubnetId(const Aws::String& value) { SetFirewallSubnetId(value); return *this;}
    inline NetworkFirewallUnexpectedFirewallRoutesViolation& WithFirewallSubnetId(Aws::String&& value) { SetFirewallSubnetId(std::move(value)); return *this;}
    inline NetworkFirewallUnexpectedFirewallRoutesViolation& WithFirewallSubnetId(const char* value) { SetFirewallSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routes that are in violation.</p>
     */
    inline const Aws::Vector<Route>& GetViolatingRoutes() const{ return m_violatingRoutes; }
    inline bool ViolatingRoutesHasBeenSet() const { return m_violatingRoutesHasBeenSet; }
    inline void SetViolatingRoutes(const Aws::Vector<Route>& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes = value; }
    inline void SetViolatingRoutes(Aws::Vector<Route>&& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes = std::move(value); }
    inline NetworkFirewallUnexpectedFirewallRoutesViolation& WithViolatingRoutes(const Aws::Vector<Route>& value) { SetViolatingRoutes(value); return *this;}
    inline NetworkFirewallUnexpectedFirewallRoutesViolation& WithViolatingRoutes(Aws::Vector<Route>&& value) { SetViolatingRoutes(std::move(value)); return *this;}
    inline NetworkFirewallUnexpectedFirewallRoutesViolation& AddViolatingRoutes(const Route& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes.push_back(value); return *this; }
    inline NetworkFirewallUnexpectedFirewallRoutesViolation& AddViolatingRoutes(Route&& value) { m_violatingRoutesHasBeenSet = true; m_violatingRoutes.push_back(std::move(value)); return *this; }
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
    inline NetworkFirewallUnexpectedFirewallRoutesViolation& WithRouteTableId(const Aws::String& value) { SetRouteTableId(value); return *this;}
    inline NetworkFirewallUnexpectedFirewallRoutesViolation& WithRouteTableId(Aws::String&& value) { SetRouteTableId(std::move(value)); return *this;}
    inline NetworkFirewallUnexpectedFirewallRoutesViolation& WithRouteTableId(const char* value) { SetRouteTableId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint of the firewall.</p>
     */
    inline const Aws::String& GetFirewallEndpoint() const{ return m_firewallEndpoint; }
    inline bool FirewallEndpointHasBeenSet() const { return m_firewallEndpointHasBeenSet; }
    inline void SetFirewallEndpoint(const Aws::String& value) { m_firewallEndpointHasBeenSet = true; m_firewallEndpoint = value; }
    inline void SetFirewallEndpoint(Aws::String&& value) { m_firewallEndpointHasBeenSet = true; m_firewallEndpoint = std::move(value); }
    inline void SetFirewallEndpoint(const char* value) { m_firewallEndpointHasBeenSet = true; m_firewallEndpoint.assign(value); }
    inline NetworkFirewallUnexpectedFirewallRoutesViolation& WithFirewallEndpoint(const Aws::String& value) { SetFirewallEndpoint(value); return *this;}
    inline NetworkFirewallUnexpectedFirewallRoutesViolation& WithFirewallEndpoint(Aws::String&& value) { SetFirewallEndpoint(std::move(value)); return *this;}
    inline NetworkFirewallUnexpectedFirewallRoutesViolation& WithFirewallEndpoint(const char* value) { SetFirewallEndpoint(value); return *this;}
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
    inline NetworkFirewallUnexpectedFirewallRoutesViolation& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline NetworkFirewallUnexpectedFirewallRoutesViolation& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline NetworkFirewallUnexpectedFirewallRoutesViolation& WithVpcId(const char* value) { SetVpcId(value); return *this;}
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
