/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/RouteServerPeerState.h>
#include <aws/ec2/model/RouteServerBgpOptions.h>
#include <aws/ec2/model/RouteServerBgpStatus.h>
#include <aws/ec2/model/RouteServerBfdStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Describes a BGP peer configuration for a route server endpoint.</p> <p>A
   * route server peer is a session between a route server endpoint and the device
   * deployed in Amazon Web Services (such as a firewall appliance or other network
   * security function running on an EC2 instance). The device must meet these
   * requirements:</p> <ul> <li> <p>Have an elastic network interface in the VPC</p>
   * </li> <li> <p>Support BGP (Border Gateway Protocol)</p> </li> <li> <p>Can
   * initiate BGP sessions</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RouteServerPeer">AWS
   * API Reference</a></p>
   */
  class RouteServerPeer
  {
  public:
    AWS_EC2_API RouteServerPeer() = default;
    AWS_EC2_API RouteServerPeer(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RouteServerPeer& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique identifier of the route server peer.</p>
     */
    inline const Aws::String& GetRouteServerPeerId() const { return m_routeServerPeerId; }
    inline bool RouteServerPeerIdHasBeenSet() const { return m_routeServerPeerIdHasBeenSet; }
    template<typename RouteServerPeerIdT = Aws::String>
    void SetRouteServerPeerId(RouteServerPeerIdT&& value) { m_routeServerPeerIdHasBeenSet = true; m_routeServerPeerId = std::forward<RouteServerPeerIdT>(value); }
    template<typename RouteServerPeerIdT = Aws::String>
    RouteServerPeer& WithRouteServerPeerId(RouteServerPeerIdT&& value) { SetRouteServerPeerId(std::forward<RouteServerPeerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the route server endpoint associated with this peer.</p>
     */
    inline const Aws::String& GetRouteServerEndpointId() const { return m_routeServerEndpointId; }
    inline bool RouteServerEndpointIdHasBeenSet() const { return m_routeServerEndpointIdHasBeenSet; }
    template<typename RouteServerEndpointIdT = Aws::String>
    void SetRouteServerEndpointId(RouteServerEndpointIdT&& value) { m_routeServerEndpointIdHasBeenSet = true; m_routeServerEndpointId = std::forward<RouteServerEndpointIdT>(value); }
    template<typename RouteServerEndpointIdT = Aws::String>
    RouteServerPeer& WithRouteServerEndpointId(RouteServerEndpointIdT&& value) { SetRouteServerEndpointId(std::forward<RouteServerEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the route server associated with this peer.</p>
     */
    inline const Aws::String& GetRouteServerId() const { return m_routeServerId; }
    inline bool RouteServerIdHasBeenSet() const { return m_routeServerIdHasBeenSet; }
    template<typename RouteServerIdT = Aws::String>
    void SetRouteServerId(RouteServerIdT&& value) { m_routeServerIdHasBeenSet = true; m_routeServerId = std::forward<RouteServerIdT>(value); }
    template<typename RouteServerIdT = Aws::String>
    RouteServerPeer& WithRouteServerId(RouteServerIdT&& value) { SetRouteServerId(std::forward<RouteServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC containing the route server peer.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    RouteServerPeer& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet containing the route server peer.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    RouteServerPeer& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the route server peer.</p>
     */
    inline RouteServerPeerState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(RouteServerPeerState value) { m_stateHasBeenSet = true; m_state = value; }
    inline RouteServerPeer& WithState(RouteServerPeerState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for any failure in peer creation or operation.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    RouteServerPeer& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Elastic network interface for the route server endpoint.</p>
     */
    inline const Aws::String& GetEndpointEniId() const { return m_endpointEniId; }
    inline bool EndpointEniIdHasBeenSet() const { return m_endpointEniIdHasBeenSet; }
    template<typename EndpointEniIdT = Aws::String>
    void SetEndpointEniId(EndpointEniIdT&& value) { m_endpointEniIdHasBeenSet = true; m_endpointEniId = std::forward<EndpointEniIdT>(value); }
    template<typename EndpointEniIdT = Aws::String>
    RouteServerPeer& WithEndpointEniId(EndpointEniIdT&& value) { SetEndpointEniId(std::forward<EndpointEniIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the Elastic network interface for the route server
     * endpoint.</p>
     */
    inline const Aws::String& GetEndpointEniAddress() const { return m_endpointEniAddress; }
    inline bool EndpointEniAddressHasBeenSet() const { return m_endpointEniAddressHasBeenSet; }
    template<typename EndpointEniAddressT = Aws::String>
    void SetEndpointEniAddress(EndpointEniAddressT&& value) { m_endpointEniAddressHasBeenSet = true; m_endpointEniAddress = std::forward<EndpointEniAddressT>(value); }
    template<typename EndpointEniAddressT = Aws::String>
    RouteServerPeer& WithEndpointEniAddress(EndpointEniAddressT&& value) { SetEndpointEniAddress(std::forward<EndpointEniAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 address of the peer device.</p>
     */
    inline const Aws::String& GetPeerAddress() const { return m_peerAddress; }
    inline bool PeerAddressHasBeenSet() const { return m_peerAddressHasBeenSet; }
    template<typename PeerAddressT = Aws::String>
    void SetPeerAddress(PeerAddressT&& value) { m_peerAddressHasBeenSet = true; m_peerAddress = std::forward<PeerAddressT>(value); }
    template<typename PeerAddressT = Aws::String>
    RouteServerPeer& WithPeerAddress(PeerAddressT&& value) { SetPeerAddress(std::forward<PeerAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The BGP configuration options for this peer, including ASN (Autonomous System
     * Number) and BFD (Bidrectional Forwarding Detection) settings.</p>
     */
    inline const RouteServerBgpOptions& GetBgpOptions() const { return m_bgpOptions; }
    inline bool BgpOptionsHasBeenSet() const { return m_bgpOptionsHasBeenSet; }
    template<typename BgpOptionsT = RouteServerBgpOptions>
    void SetBgpOptions(BgpOptionsT&& value) { m_bgpOptionsHasBeenSet = true; m_bgpOptions = std::forward<BgpOptionsT>(value); }
    template<typename BgpOptionsT = RouteServerBgpOptions>
    RouteServerPeer& WithBgpOptions(BgpOptionsT&& value) { SetBgpOptions(std::forward<BgpOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the BGP session with this peer.</p>
     */
    inline const RouteServerBgpStatus& GetBgpStatus() const { return m_bgpStatus; }
    inline bool BgpStatusHasBeenSet() const { return m_bgpStatusHasBeenSet; }
    template<typename BgpStatusT = RouteServerBgpStatus>
    void SetBgpStatus(BgpStatusT&& value) { m_bgpStatusHasBeenSet = true; m_bgpStatus = std::forward<BgpStatusT>(value); }
    template<typename BgpStatusT = RouteServerBgpStatus>
    RouteServerPeer& WithBgpStatus(BgpStatusT&& value) { SetBgpStatus(std::forward<BgpStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the BFD session with this peer.</p>
     */
    inline const RouteServerBfdStatus& GetBfdStatus() const { return m_bfdStatus; }
    inline bool BfdStatusHasBeenSet() const { return m_bfdStatusHasBeenSet; }
    template<typename BfdStatusT = RouteServerBfdStatus>
    void SetBfdStatus(BfdStatusT&& value) { m_bfdStatusHasBeenSet = true; m_bfdStatus = std::forward<BfdStatusT>(value); }
    template<typename BfdStatusT = RouteServerBfdStatus>
    RouteServerPeer& WithBfdStatus(BfdStatusT&& value) { SetBfdStatus(std::forward<BfdStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the route server peer.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    RouteServerPeer& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    RouteServerPeer& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_routeServerPeerId;
    bool m_routeServerPeerIdHasBeenSet = false;

    Aws::String m_routeServerEndpointId;
    bool m_routeServerEndpointIdHasBeenSet = false;

    Aws::String m_routeServerId;
    bool m_routeServerIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    RouteServerPeerState m_state{RouteServerPeerState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_endpointEniId;
    bool m_endpointEniIdHasBeenSet = false;

    Aws::String m_endpointEniAddress;
    bool m_endpointEniAddressHasBeenSet = false;

    Aws::String m_peerAddress;
    bool m_peerAddressHasBeenSet = false;

    RouteServerBgpOptions m_bgpOptions;
    bool m_bgpOptionsHasBeenSet = false;

    RouteServerBgpStatus m_bgpStatus;
    bool m_bgpStatusHasBeenSet = false;

    RouteServerBfdStatus m_bfdStatus;
    bool m_bfdStatusHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
