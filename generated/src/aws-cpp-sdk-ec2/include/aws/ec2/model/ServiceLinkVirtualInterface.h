/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ServiceLinkVirtualInterfaceConfigurationState.h>
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
   * <p>Describes the service link virtual interfaces that establish connectivity
   * between Amazon Web Services Outpost and on-premises networks.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ServiceLinkVirtualInterface">AWS
   * API Reference</a></p>
   */
  class ServiceLinkVirtualInterface
  {
  public:
    AWS_EC2_API ServiceLinkVirtualInterface() = default;
    AWS_EC2_API ServiceLinkVirtualInterface(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ServiceLinkVirtualInterface& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the service link virtual interface.</p>
     */
    inline const Aws::String& GetServiceLinkVirtualInterfaceId() const { return m_serviceLinkVirtualInterfaceId; }
    inline bool ServiceLinkVirtualInterfaceIdHasBeenSet() const { return m_serviceLinkVirtualInterfaceIdHasBeenSet; }
    template<typename ServiceLinkVirtualInterfaceIdT = Aws::String>
    void SetServiceLinkVirtualInterfaceId(ServiceLinkVirtualInterfaceIdT&& value) { m_serviceLinkVirtualInterfaceIdHasBeenSet = true; m_serviceLinkVirtualInterfaceId = std::forward<ServiceLinkVirtualInterfaceIdT>(value); }
    template<typename ServiceLinkVirtualInterfaceIdT = Aws::String>
    ServiceLinkVirtualInterface& WithServiceLinkVirtualInterfaceId(ServiceLinkVirtualInterfaceIdT&& value) { SetServiceLinkVirtualInterfaceId(std::forward<ServiceLinkVirtualInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) for the service link virtual interface. </p>
     */
    inline const Aws::String& GetServiceLinkVirtualInterfaceArn() const { return m_serviceLinkVirtualInterfaceArn; }
    inline bool ServiceLinkVirtualInterfaceArnHasBeenSet() const { return m_serviceLinkVirtualInterfaceArnHasBeenSet; }
    template<typename ServiceLinkVirtualInterfaceArnT = Aws::String>
    void SetServiceLinkVirtualInterfaceArn(ServiceLinkVirtualInterfaceArnT&& value) { m_serviceLinkVirtualInterfaceArnHasBeenSet = true; m_serviceLinkVirtualInterfaceArn = std::forward<ServiceLinkVirtualInterfaceArnT>(value); }
    template<typename ServiceLinkVirtualInterfaceArnT = Aws::String>
    ServiceLinkVirtualInterface& WithServiceLinkVirtualInterfaceArn(ServiceLinkVirtualInterfaceArnT&& value) { SetServiceLinkVirtualInterfaceArn(std::forward<ServiceLinkVirtualInterfaceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Outpost ID for the service link virtual interface.</p>
     */
    inline const Aws::String& GetOutpostId() const { return m_outpostId; }
    inline bool OutpostIdHasBeenSet() const { return m_outpostIdHasBeenSet; }
    template<typename OutpostIdT = Aws::String>
    void SetOutpostId(OutpostIdT&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::forward<OutpostIdT>(value); }
    template<typename OutpostIdT = Aws::String>
    ServiceLinkVirtualInterface& WithOutpostId(OutpostIdT&& value) { SetOutpostId(std::forward<OutpostIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Outpost Amazon Resource Number (ARN) for the service link virtual
     * interface.</p>
     */
    inline const Aws::String& GetOutpostArn() const { return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    template<typename OutpostArnT = Aws::String>
    void SetOutpostArn(OutpostArnT&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::forward<OutpostArnT>(value); }
    template<typename OutpostArnT = Aws::String>
    ServiceLinkVirtualInterface& WithOutpostArn(OutpostArnT&& value) { SetOutpostArn(std::forward<OutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the service link virtual
     * interface..</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    ServiceLinkVirtualInterface& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 address assigned to the local gateway virtual interface on the
     * Outpost side.</p>
     */
    inline const Aws::String& GetLocalAddress() const { return m_localAddress; }
    inline bool LocalAddressHasBeenSet() const { return m_localAddressHasBeenSet; }
    template<typename LocalAddressT = Aws::String>
    void SetLocalAddress(LocalAddressT&& value) { m_localAddressHasBeenSet = true; m_localAddress = std::forward<LocalAddressT>(value); }
    template<typename LocalAddressT = Aws::String>
    ServiceLinkVirtualInterface& WithLocalAddress(LocalAddressT&& value) { SetLocalAddress(std::forward<LocalAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 peer address for the service link virtual interface.</p>
     */
    inline const Aws::String& GetPeerAddress() const { return m_peerAddress; }
    inline bool PeerAddressHasBeenSet() const { return m_peerAddressHasBeenSet; }
    template<typename PeerAddressT = Aws::String>
    void SetPeerAddress(PeerAddressT&& value) { m_peerAddressHasBeenSet = true; m_peerAddress = std::forward<PeerAddressT>(value); }
    template<typename PeerAddressT = Aws::String>
    ServiceLinkVirtualInterface& WithPeerAddress(PeerAddressT&& value) { SetPeerAddress(std::forward<PeerAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ASN for the Border Gateway Protocol (BGP) associated with the service
     * link virtual interface.</p>
     */
    inline long long GetPeerBgpAsn() const { return m_peerBgpAsn; }
    inline bool PeerBgpAsnHasBeenSet() const { return m_peerBgpAsnHasBeenSet; }
    inline void SetPeerBgpAsn(long long value) { m_peerBgpAsnHasBeenSet = true; m_peerBgpAsn = value; }
    inline ServiceLinkVirtualInterface& WithPeerBgpAsn(long long value) { SetPeerBgpAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual local area network for the service link virtual interface.</p>
     */
    inline int GetVlan() const { return m_vlan; }
    inline bool VlanHasBeenSet() const { return m_vlanHasBeenSet; }
    inline void SetVlan(int value) { m_vlanHasBeenSet = true; m_vlan = value; }
    inline ServiceLinkVirtualInterface& WithVlan(int value) { SetVlan(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The link aggregation group (LAG) ID for the service link virtual
     * interface.</p>
     */
    inline const Aws::String& GetOutpostLagId() const { return m_outpostLagId; }
    inline bool OutpostLagIdHasBeenSet() const { return m_outpostLagIdHasBeenSet; }
    template<typename OutpostLagIdT = Aws::String>
    void SetOutpostLagId(OutpostLagIdT&& value) { m_outpostLagIdHasBeenSet = true; m_outpostLagId = std::forward<OutpostLagIdT>(value); }
    template<typename OutpostLagIdT = Aws::String>
    ServiceLinkVirtualInterface& WithOutpostLagId(OutpostLagIdT&& value) { SetOutpostLagId(std::forward<OutpostLagIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the service link virtual interface.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ServiceLinkVirtualInterface& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ServiceLinkVirtualInterface& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current state of the service link virtual interface.</p>
     */
    inline ServiceLinkVirtualInterfaceConfigurationState GetConfigurationState() const { return m_configurationState; }
    inline bool ConfigurationStateHasBeenSet() const { return m_configurationStateHasBeenSet; }
    inline void SetConfigurationState(ServiceLinkVirtualInterfaceConfigurationState value) { m_configurationStateHasBeenSet = true; m_configurationState = value; }
    inline ServiceLinkVirtualInterface& WithConfigurationState(ServiceLinkVirtualInterfaceConfigurationState value) { SetConfigurationState(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceLinkVirtualInterfaceId;
    bool m_serviceLinkVirtualInterfaceIdHasBeenSet = false;

    Aws::String m_serviceLinkVirtualInterfaceArn;
    bool m_serviceLinkVirtualInterfaceArnHasBeenSet = false;

    Aws::String m_outpostId;
    bool m_outpostIdHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_localAddress;
    bool m_localAddressHasBeenSet = false;

    Aws::String m_peerAddress;
    bool m_peerAddressHasBeenSet = false;

    long long m_peerBgpAsn{0};
    bool m_peerBgpAsnHasBeenSet = false;

    int m_vlan{0};
    bool m_vlanHasBeenSet = false;

    Aws::String m_outpostLagId;
    bool m_outpostLagIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ServiceLinkVirtualInterfaceConfigurationState m_configurationState{ServiceLinkVirtualInterfaceConfigurationState::NOT_SET};
    bool m_configurationStateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
