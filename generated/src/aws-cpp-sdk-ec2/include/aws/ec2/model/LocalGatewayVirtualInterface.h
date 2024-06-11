/**
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
    AWS_EC2_API LocalGatewayVirtualInterface();
    AWS_EC2_API LocalGatewayVirtualInterface(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LocalGatewayVirtualInterface& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline const Aws::String& GetLocalGatewayVirtualInterfaceId() const{ return m_localGatewayVirtualInterfaceId; }
    inline bool LocalGatewayVirtualInterfaceIdHasBeenSet() const { return m_localGatewayVirtualInterfaceIdHasBeenSet; }
    inline void SetLocalGatewayVirtualInterfaceId(const Aws::String& value) { m_localGatewayVirtualInterfaceIdHasBeenSet = true; m_localGatewayVirtualInterfaceId = value; }
    inline void SetLocalGatewayVirtualInterfaceId(Aws::String&& value) { m_localGatewayVirtualInterfaceIdHasBeenSet = true; m_localGatewayVirtualInterfaceId = std::move(value); }
    inline void SetLocalGatewayVirtualInterfaceId(const char* value) { m_localGatewayVirtualInterfaceIdHasBeenSet = true; m_localGatewayVirtualInterfaceId.assign(value); }
    inline LocalGatewayVirtualInterface& WithLocalGatewayVirtualInterfaceId(const Aws::String& value) { SetLocalGatewayVirtualInterfaceId(value); return *this;}
    inline LocalGatewayVirtualInterface& WithLocalGatewayVirtualInterfaceId(Aws::String&& value) { SetLocalGatewayVirtualInterfaceId(std::move(value)); return *this;}
    inline LocalGatewayVirtualInterface& WithLocalGatewayVirtualInterfaceId(const char* value) { SetLocalGatewayVirtualInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the local gateway.</p>
     */
    inline const Aws::String& GetLocalGatewayId() const{ return m_localGatewayId; }
    inline bool LocalGatewayIdHasBeenSet() const { return m_localGatewayIdHasBeenSet; }
    inline void SetLocalGatewayId(const Aws::String& value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId = value; }
    inline void SetLocalGatewayId(Aws::String&& value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId = std::move(value); }
    inline void SetLocalGatewayId(const char* value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId.assign(value); }
    inline LocalGatewayVirtualInterface& WithLocalGatewayId(const Aws::String& value) { SetLocalGatewayId(value); return *this;}
    inline LocalGatewayVirtualInterface& WithLocalGatewayId(Aws::String&& value) { SetLocalGatewayId(std::move(value)); return *this;}
    inline LocalGatewayVirtualInterface& WithLocalGatewayId(const char* value) { SetLocalGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VLAN.</p>
     */
    inline int GetVlan() const{ return m_vlan; }
    inline bool VlanHasBeenSet() const { return m_vlanHasBeenSet; }
    inline void SetVlan(int value) { m_vlanHasBeenSet = true; m_vlan = value; }
    inline LocalGatewayVirtualInterface& WithVlan(int value) { SetVlan(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The local address.</p>
     */
    inline const Aws::String& GetLocalAddress() const{ return m_localAddress; }
    inline bool LocalAddressHasBeenSet() const { return m_localAddressHasBeenSet; }
    inline void SetLocalAddress(const Aws::String& value) { m_localAddressHasBeenSet = true; m_localAddress = value; }
    inline void SetLocalAddress(Aws::String&& value) { m_localAddressHasBeenSet = true; m_localAddress = std::move(value); }
    inline void SetLocalAddress(const char* value) { m_localAddressHasBeenSet = true; m_localAddress.assign(value); }
    inline LocalGatewayVirtualInterface& WithLocalAddress(const Aws::String& value) { SetLocalAddress(value); return *this;}
    inline LocalGatewayVirtualInterface& WithLocalAddress(Aws::String&& value) { SetLocalAddress(std::move(value)); return *this;}
    inline LocalGatewayVirtualInterface& WithLocalAddress(const char* value) { SetLocalAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The peer address.</p>
     */
    inline const Aws::String& GetPeerAddress() const{ return m_peerAddress; }
    inline bool PeerAddressHasBeenSet() const { return m_peerAddressHasBeenSet; }
    inline void SetPeerAddress(const Aws::String& value) { m_peerAddressHasBeenSet = true; m_peerAddress = value; }
    inline void SetPeerAddress(Aws::String&& value) { m_peerAddressHasBeenSet = true; m_peerAddress = std::move(value); }
    inline void SetPeerAddress(const char* value) { m_peerAddressHasBeenSet = true; m_peerAddress.assign(value); }
    inline LocalGatewayVirtualInterface& WithPeerAddress(const Aws::String& value) { SetPeerAddress(value); return *this;}
    inline LocalGatewayVirtualInterface& WithPeerAddress(Aws::String&& value) { SetPeerAddress(std::move(value)); return *this;}
    inline LocalGatewayVirtualInterface& WithPeerAddress(const char* value) { SetPeerAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Border Gateway Protocol (BGP) Autonomous System Number (ASN) of the local
     * gateway.</p>
     */
    inline int GetLocalBgpAsn() const{ return m_localBgpAsn; }
    inline bool LocalBgpAsnHasBeenSet() const { return m_localBgpAsnHasBeenSet; }
    inline void SetLocalBgpAsn(int value) { m_localBgpAsnHasBeenSet = true; m_localBgpAsn = value; }
    inline LocalGatewayVirtualInterface& WithLocalBgpAsn(int value) { SetLocalBgpAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The peer BGP ASN.</p>
     */
    inline int GetPeerBgpAsn() const{ return m_peerBgpAsn; }
    inline bool PeerBgpAsnHasBeenSet() const { return m_peerBgpAsnHasBeenSet; }
    inline void SetPeerBgpAsn(int value) { m_peerBgpAsnHasBeenSet = true; m_peerBgpAsn = value; }
    inline LocalGatewayVirtualInterface& WithPeerBgpAsn(int value) { SetPeerBgpAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway virtual
     * interface.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline LocalGatewayVirtualInterface& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline LocalGatewayVirtualInterface& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline LocalGatewayVirtualInterface& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the virtual interface.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline LocalGatewayVirtualInterface& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline LocalGatewayVirtualInterface& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline LocalGatewayVirtualInterface& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline LocalGatewayVirtualInterface& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_localGatewayVirtualInterfaceId;
    bool m_localGatewayVirtualInterfaceIdHasBeenSet = false;

    Aws::String m_localGatewayId;
    bool m_localGatewayIdHasBeenSet = false;

    int m_vlan;
    bool m_vlanHasBeenSet = false;

    Aws::String m_localAddress;
    bool m_localAddressHasBeenSet = false;

    Aws::String m_peerAddress;
    bool m_peerAddressHasBeenSet = false;

    int m_localBgpAsn;
    bool m_localBgpAsnHasBeenSet = false;

    int m_peerBgpAsn;
    bool m_peerBgpAsnHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
