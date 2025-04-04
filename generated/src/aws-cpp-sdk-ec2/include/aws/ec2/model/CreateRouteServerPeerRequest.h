/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/RouteServerBgpOptionsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateRouteServerPeerRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateRouteServerPeerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRouteServerPeer"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the route server endpoint for which to create a peer.</p>
     */
    inline const Aws::String& GetRouteServerEndpointId() const { return m_routeServerEndpointId; }
    inline bool RouteServerEndpointIdHasBeenSet() const { return m_routeServerEndpointIdHasBeenSet; }
    template<typename RouteServerEndpointIdT = Aws::String>
    void SetRouteServerEndpointId(RouteServerEndpointIdT&& value) { m_routeServerEndpointIdHasBeenSet = true; m_routeServerEndpointId = std::forward<RouteServerEndpointIdT>(value); }
    template<typename RouteServerEndpointIdT = Aws::String>
    CreateRouteServerPeerRequest& WithRouteServerEndpointId(RouteServerEndpointIdT&& value) { SetRouteServerEndpointId(std::forward<RouteServerEndpointIdT>(value)); return *this;}
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
    CreateRouteServerPeerRequest& WithPeerAddress(PeerAddressT&& value) { SetPeerAddress(std::forward<PeerAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The BGP options for the peer, including ASN (Autonomous System Number) and
     * BFD (Bidrectional Forwarding Detection) settings.</p>
     */
    inline const RouteServerBgpOptionsRequest& GetBgpOptions() const { return m_bgpOptions; }
    inline bool BgpOptionsHasBeenSet() const { return m_bgpOptionsHasBeenSet; }
    template<typename BgpOptionsT = RouteServerBgpOptionsRequest>
    void SetBgpOptions(BgpOptionsT&& value) { m_bgpOptionsHasBeenSet = true; m_bgpOptions = std::forward<BgpOptionsT>(value); }
    template<typename BgpOptionsT = RouteServerBgpOptionsRequest>
    CreateRouteServerPeerRequest& WithBgpOptions(BgpOptionsT&& value) { SetBgpOptions(std::forward<BgpOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateRouteServerPeerRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the route server peer during creation.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateRouteServerPeerRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateRouteServerPeerRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_routeServerEndpointId;
    bool m_routeServerEndpointIdHasBeenSet = false;

    Aws::String m_peerAddress;
    bool m_peerAddressHasBeenSet = false;

    RouteServerBgpOptionsRequest m_bgpOptions;
    bool m_bgpOptionsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
