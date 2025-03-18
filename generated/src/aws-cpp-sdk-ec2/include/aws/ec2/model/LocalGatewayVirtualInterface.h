﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes a local gateway virtual interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LocalGatewayVirtualInterface">AWS
   * API Reference</a></p>
   */
  class LocalGatewayVirtualInterface
  {
  public:
    AWS_EC2_API LocalGatewayVirtualInterface() = default;
    AWS_EC2_API LocalGatewayVirtualInterface(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LocalGatewayVirtualInterface& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline const Aws::String& GetLocalGatewayVirtualInterfaceId() const { return m_localGatewayVirtualInterfaceId; }
    inline bool LocalGatewayVirtualInterfaceIdHasBeenSet() const { return m_localGatewayVirtualInterfaceIdHasBeenSet; }
    template<typename LocalGatewayVirtualInterfaceIdT = Aws::String>
    void SetLocalGatewayVirtualInterfaceId(LocalGatewayVirtualInterfaceIdT&& value) { m_localGatewayVirtualInterfaceIdHasBeenSet = true; m_localGatewayVirtualInterfaceId = std::forward<LocalGatewayVirtualInterfaceIdT>(value); }
    template<typename LocalGatewayVirtualInterfaceIdT = Aws::String>
    LocalGatewayVirtualInterface& WithLocalGatewayVirtualInterfaceId(LocalGatewayVirtualInterfaceIdT&& value) { SetLocalGatewayVirtualInterfaceId(std::forward<LocalGatewayVirtualInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the local gateway.</p>
     */
    inline const Aws::String& GetLocalGatewayId() const { return m_localGatewayId; }
    inline bool LocalGatewayIdHasBeenSet() const { return m_localGatewayIdHasBeenSet; }
    template<typename LocalGatewayIdT = Aws::String>
    void SetLocalGatewayId(LocalGatewayIdT&& value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId = std::forward<LocalGatewayIdT>(value); }
    template<typename LocalGatewayIdT = Aws::String>
    LocalGatewayVirtualInterface& WithLocalGatewayId(LocalGatewayIdT&& value) { SetLocalGatewayId(std::forward<LocalGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VLAN.</p>
     */
    inline int GetVlan() const { return m_vlan; }
    inline bool VlanHasBeenSet() const { return m_vlanHasBeenSet; }
    inline void SetVlan(int value) { m_vlanHasBeenSet = true; m_vlan = value; }
    inline LocalGatewayVirtualInterface& WithVlan(int value) { SetVlan(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The local address.</p>
     */
    inline const Aws::String& GetLocalAddress() const { return m_localAddress; }
    inline bool LocalAddressHasBeenSet() const { return m_localAddressHasBeenSet; }
    template<typename LocalAddressT = Aws::String>
    void SetLocalAddress(LocalAddressT&& value) { m_localAddressHasBeenSet = true; m_localAddress = std::forward<LocalAddressT>(value); }
    template<typename LocalAddressT = Aws::String>
    LocalGatewayVirtualInterface& WithLocalAddress(LocalAddressT&& value) { SetLocalAddress(std::forward<LocalAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The peer address.</p>
     */
    inline const Aws::String& GetPeerAddress() const { return m_peerAddress; }
    inline bool PeerAddressHasBeenSet() const { return m_peerAddressHasBeenSet; }
    template<typename PeerAddressT = Aws::String>
    void SetPeerAddress(PeerAddressT&& value) { m_peerAddressHasBeenSet = true; m_peerAddress = std::forward<PeerAddressT>(value); }
    template<typename PeerAddressT = Aws::String>
    LocalGatewayVirtualInterface& WithPeerAddress(PeerAddressT&& value) { SetPeerAddress(std::forward<PeerAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Border Gateway Protocol (BGP) Autonomous System Number (ASN) of the local
     * gateway.</p>
     */
    inline int GetLocalBgpAsn() const { return m_localBgpAsn; }
    inline bool LocalBgpAsnHasBeenSet() const { return m_localBgpAsnHasBeenSet; }
    inline void SetLocalBgpAsn(int value) { m_localBgpAsnHasBeenSet = true; m_localBgpAsn = value; }
    inline LocalGatewayVirtualInterface& WithLocalBgpAsn(int value) { SetLocalBgpAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The peer BGP ASN.</p>
     */
    inline int GetPeerBgpAsn() const { return m_peerBgpAsn; }
    inline bool PeerBgpAsnHasBeenSet() const { return m_peerBgpAsnHasBeenSet; }
    inline void SetPeerBgpAsn(int value) { m_peerBgpAsnHasBeenSet = true; m_peerBgpAsn = value; }
    inline LocalGatewayVirtualInterface& WithPeerBgpAsn(int value) { SetPeerBgpAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway virtual
     * interface.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    LocalGatewayVirtualInterface& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the virtual interface.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    LocalGatewayVirtualInterface& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    LocalGatewayVirtualInterface& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_localGatewayVirtualInterfaceId;
    bool m_localGatewayVirtualInterfaceIdHasBeenSet = false;

    Aws::String m_localGatewayId;
    bool m_localGatewayIdHasBeenSet = false;

    int m_vlan{0};
    bool m_vlanHasBeenSet = false;

    Aws::String m_localAddress;
    bool m_localAddressHasBeenSet = false;

    Aws::String m_peerAddress;
    bool m_peerAddressHasBeenSet = false;

    int m_localBgpAsn{0};
    bool m_localBgpAsnHasBeenSet = false;

    int m_peerBgpAsn{0};
    bool m_peerBgpAsnHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
