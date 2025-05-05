/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateLocalGatewayVirtualInterfaceRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateLocalGatewayVirtualInterfaceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocalGatewayVirtualInterface"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the local gateway virtual interface group.</p>
     */
    inline const Aws::String& GetLocalGatewayVirtualInterfaceGroupId() const { return m_localGatewayVirtualInterfaceGroupId; }
    inline bool LocalGatewayVirtualInterfaceGroupIdHasBeenSet() const { return m_localGatewayVirtualInterfaceGroupIdHasBeenSet; }
    template<typename LocalGatewayVirtualInterfaceGroupIdT = Aws::String>
    void SetLocalGatewayVirtualInterfaceGroupId(LocalGatewayVirtualInterfaceGroupIdT&& value) { m_localGatewayVirtualInterfaceGroupIdHasBeenSet = true; m_localGatewayVirtualInterfaceGroupId = std::forward<LocalGatewayVirtualInterfaceGroupIdT>(value); }
    template<typename LocalGatewayVirtualInterfaceGroupIdT = Aws::String>
    CreateLocalGatewayVirtualInterfaceRequest& WithLocalGatewayVirtualInterfaceGroupId(LocalGatewayVirtualInterfaceGroupIdT&& value) { SetLocalGatewayVirtualInterfaceGroupId(std::forward<LocalGatewayVirtualInterfaceGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>References the Link Aggregation Group (LAG) that connects the Outpost to
     * on-premises network devices.</p>
     */
    inline const Aws::String& GetOutpostLagId() const { return m_outpostLagId; }
    inline bool OutpostLagIdHasBeenSet() const { return m_outpostLagIdHasBeenSet; }
    template<typename OutpostLagIdT = Aws::String>
    void SetOutpostLagId(OutpostLagIdT&& value) { m_outpostLagIdHasBeenSet = true; m_outpostLagId = std::forward<OutpostLagIdT>(value); }
    template<typename OutpostLagIdT = Aws::String>
    CreateLocalGatewayVirtualInterfaceRequest& WithOutpostLagId(OutpostLagIdT&& value) { SetOutpostLagId(std::forward<OutpostLagIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual local area network (VLAN) used for the local gateway virtual
     * interface.</p>
     */
    inline int GetVlan() const { return m_vlan; }
    inline bool VlanHasBeenSet() const { return m_vlanHasBeenSet; }
    inline void SetVlan(int value) { m_vlanHasBeenSet = true; m_vlan = value; }
    inline CreateLocalGatewayVirtualInterfaceRequest& WithVlan(int value) { SetVlan(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address assigned to the local gateway virtual interface on the Outpost
     * side. Only IPv4 is supported.</p>
     */
    inline const Aws::String& GetLocalAddress() const { return m_localAddress; }
    inline bool LocalAddressHasBeenSet() const { return m_localAddressHasBeenSet; }
    template<typename LocalAddressT = Aws::String>
    void SetLocalAddress(LocalAddressT&& value) { m_localAddressHasBeenSet = true; m_localAddress = std::forward<LocalAddressT>(value); }
    template<typename LocalAddressT = Aws::String>
    CreateLocalGatewayVirtualInterfaceRequest& WithLocalAddress(LocalAddressT&& value) { SetLocalAddress(std::forward<LocalAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The peer IP address for the local gateway virtual interface. Only IPv4 is
     * supported.</p>
     */
    inline const Aws::String& GetPeerAddress() const { return m_peerAddress; }
    inline bool PeerAddressHasBeenSet() const { return m_peerAddressHasBeenSet; }
    template<typename PeerAddressT = Aws::String>
    void SetPeerAddress(PeerAddressT&& value) { m_peerAddressHasBeenSet = true; m_peerAddress = std::forward<PeerAddressT>(value); }
    template<typename PeerAddressT = Aws::String>
    CreateLocalGatewayVirtualInterfaceRequest& WithPeerAddress(PeerAddressT&& value) { SetPeerAddress(std::forward<PeerAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Autonomous System Number (ASN) of the Border Gateway Protocol (BGP)
     * peer.</p>
     */
    inline int GetPeerBgpAsn() const { return m_peerBgpAsn; }
    inline bool PeerBgpAsnHasBeenSet() const { return m_peerBgpAsnHasBeenSet; }
    inline void SetPeerBgpAsn(int value) { m_peerBgpAsnHasBeenSet = true; m_peerBgpAsn = value; }
    inline CreateLocalGatewayVirtualInterfaceRequest& WithPeerBgpAsn(int value) { SetPeerBgpAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to a resource when the local gateway virtual interface is
     * being created. </p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateLocalGatewayVirtualInterfaceRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateLocalGatewayVirtualInterfaceRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateLocalGatewayVirtualInterfaceRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The extended 32-bit ASN of the BGP peer for use with larger ASN values.</p>
     */
    inline long long GetPeerBgpAsnExtended() const { return m_peerBgpAsnExtended; }
    inline bool PeerBgpAsnExtendedHasBeenSet() const { return m_peerBgpAsnExtendedHasBeenSet; }
    inline void SetPeerBgpAsnExtended(long long value) { m_peerBgpAsnExtendedHasBeenSet = true; m_peerBgpAsnExtended = value; }
    inline CreateLocalGatewayVirtualInterfaceRequest& WithPeerBgpAsnExtended(long long value) { SetPeerBgpAsnExtended(value); return *this;}
    ///@}
  private:

    Aws::String m_localGatewayVirtualInterfaceGroupId;
    bool m_localGatewayVirtualInterfaceGroupIdHasBeenSet = false;

    Aws::String m_outpostLagId;
    bool m_outpostLagIdHasBeenSet = false;

    int m_vlan{0};
    bool m_vlanHasBeenSet = false;

    Aws::String m_localAddress;
    bool m_localAddressHasBeenSet = false;

    Aws::String m_peerAddress;
    bool m_peerAddressHasBeenSet = false;

    int m_peerBgpAsn{0};
    bool m_peerBgpAsnHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    long long m_peerBgpAsnExtended{0};
    bool m_peerBgpAsnExtendedHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
