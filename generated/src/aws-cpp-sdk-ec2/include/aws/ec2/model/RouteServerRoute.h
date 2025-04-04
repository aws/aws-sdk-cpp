/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/RouteServerRouteStatus.h>
#include <aws/ec2/model/RouteServerRouteInstallationDetail.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a route in the route server's routing database.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RouteServerRoute">AWS
   * API Reference</a></p>
   */
  class RouteServerRoute
  {
  public:
    AWS_EC2_API RouteServerRoute() = default;
    AWS_EC2_API RouteServerRoute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RouteServerRoute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the route server endpoint that received this route.</p>
     */
    inline const Aws::String& GetRouteServerEndpointId() const { return m_routeServerEndpointId; }
    inline bool RouteServerEndpointIdHasBeenSet() const { return m_routeServerEndpointIdHasBeenSet; }
    template<typename RouteServerEndpointIdT = Aws::String>
    void SetRouteServerEndpointId(RouteServerEndpointIdT&& value) { m_routeServerEndpointIdHasBeenSet = true; m_routeServerEndpointId = std::forward<RouteServerEndpointIdT>(value); }
    template<typename RouteServerEndpointIdT = Aws::String>
    RouteServerRoute& WithRouteServerEndpointId(RouteServerEndpointIdT&& value) { SetRouteServerEndpointId(std::forward<RouteServerEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the route server peer that advertised this route.</p>
     */
    inline const Aws::String& GetRouteServerPeerId() const { return m_routeServerPeerId; }
    inline bool RouteServerPeerIdHasBeenSet() const { return m_routeServerPeerIdHasBeenSet; }
    template<typename RouteServerPeerIdT = Aws::String>
    void SetRouteServerPeerId(RouteServerPeerIdT&& value) { m_routeServerPeerIdHasBeenSet = true; m_routeServerPeerId = std::forward<RouteServerPeerIdT>(value); }
    template<typename RouteServerPeerIdT = Aws::String>
    RouteServerRoute& WithRouteServerPeerId(RouteServerPeerIdT&& value) { SetRouteServerPeerId(std::forward<RouteServerPeerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the installation status of this route in route tables.</p>
     */
    inline const Aws::Vector<RouteServerRouteInstallationDetail>& GetRouteInstallationDetails() const { return m_routeInstallationDetails; }
    inline bool RouteInstallationDetailsHasBeenSet() const { return m_routeInstallationDetailsHasBeenSet; }
    template<typename RouteInstallationDetailsT = Aws::Vector<RouteServerRouteInstallationDetail>>
    void SetRouteInstallationDetails(RouteInstallationDetailsT&& value) { m_routeInstallationDetailsHasBeenSet = true; m_routeInstallationDetails = std::forward<RouteInstallationDetailsT>(value); }
    template<typename RouteInstallationDetailsT = Aws::Vector<RouteServerRouteInstallationDetail>>
    RouteServerRoute& WithRouteInstallationDetails(RouteInstallationDetailsT&& value) { SetRouteInstallationDetails(std::forward<RouteInstallationDetailsT>(value)); return *this;}
    template<typename RouteInstallationDetailsT = RouteServerRouteInstallationDetail>
    RouteServerRoute& AddRouteInstallationDetails(RouteInstallationDetailsT&& value) { m_routeInstallationDetailsHasBeenSet = true; m_routeInstallationDetails.emplace_back(std::forward<RouteInstallationDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current status of the route in the routing database. Values are
     * <code>in-rib</code> or <code>in-fib</code> depending on if the routes are in the
     * RIB or the FIB database.</p> <p>The <a
     * href="https://en.wikipedia.org/wiki/Routing_table">Routing Information Base
     * (RIB)</a> serves as a database that stores all the routing information and
     * network topology data collected by a router or routing system, such as routes
     * learned from BGP peers. The RIB is constantly updated as new routing information
     * is received or existing routes change. This ensures that the route server always
     * has the most current view of the network topology and can make optimal routing
     * decisions.</p> <p>The <a
     * href="https://en.wikipedia.org/wiki/Forwarding_information_base">Forwarding
     * Information Base (FIB)</a> serves as a forwarding table for what route server
     * has determined are the best-path routes in the RIB after evaluating all
     * available routing information and policies. The FIB routes are installed on the
     * route tables. The FIB is recomputed whenever there are changes to the RIB.</p>
     */
    inline RouteServerRouteStatus GetRouteStatus() const { return m_routeStatus; }
    inline bool RouteStatusHasBeenSet() const { return m_routeStatusHasBeenSet; }
    inline void SetRouteStatus(RouteServerRouteStatus value) { m_routeStatusHasBeenSet = true; m_routeStatus = value; }
    inline RouteServerRoute& WithRouteStatus(RouteServerRouteStatus value) { SetRouteStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination CIDR block of the route.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    RouteServerRoute& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AS path attributes of the BGP route.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAsPaths() const { return m_asPaths; }
    inline bool AsPathsHasBeenSet() const { return m_asPathsHasBeenSet; }
    template<typename AsPathsT = Aws::Vector<Aws::String>>
    void SetAsPaths(AsPathsT&& value) { m_asPathsHasBeenSet = true; m_asPaths = std::forward<AsPathsT>(value); }
    template<typename AsPathsT = Aws::Vector<Aws::String>>
    RouteServerRoute& WithAsPaths(AsPathsT&& value) { SetAsPaths(std::forward<AsPathsT>(value)); return *this;}
    template<typename AsPathsT = Aws::String>
    RouteServerRoute& AddAsPaths(AsPathsT&& value) { m_asPathsHasBeenSet = true; m_asPaths.emplace_back(std::forward<AsPathsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Multi-Exit Discriminator (MED) value of the BGP route.</p>
     */
    inline int GetMed() const { return m_med; }
    inline bool MedHasBeenSet() const { return m_medHasBeenSet; }
    inline void SetMed(int value) { m_medHasBeenSet = true; m_med = value; }
    inline RouteServerRoute& WithMed(int value) { SetMed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address for the next hop.</p>
     */
    inline const Aws::String& GetNextHopIp() const { return m_nextHopIp; }
    inline bool NextHopIpHasBeenSet() const { return m_nextHopIpHasBeenSet; }
    template<typename NextHopIpT = Aws::String>
    void SetNextHopIp(NextHopIpT&& value) { m_nextHopIpHasBeenSet = true; m_nextHopIp = std::forward<NextHopIpT>(value); }
    template<typename NextHopIpT = Aws::String>
    RouteServerRoute& WithNextHopIp(NextHopIpT&& value) { SetNextHopIp(std::forward<NextHopIpT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_routeServerEndpointId;
    bool m_routeServerEndpointIdHasBeenSet = false;

    Aws::String m_routeServerPeerId;
    bool m_routeServerPeerIdHasBeenSet = false;

    Aws::Vector<RouteServerRouteInstallationDetail> m_routeInstallationDetails;
    bool m_routeInstallationDetailsHasBeenSet = false;

    RouteServerRouteStatus m_routeStatus{RouteServerRouteStatus::NOT_SET};
    bool m_routeStatusHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::Vector<Aws::String> m_asPaths;
    bool m_asPathsHasBeenSet = false;

    int m_med{0};
    bool m_medHasBeenSet = false;

    Aws::String m_nextHopIp;
    bool m_nextHopIpHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
