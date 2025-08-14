/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/AddressFamily.h>
#include <aws/directconnect/model/VirtualInterfaceState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/RouteFilterPrefix.h>
#include <aws/directconnect/model/BGPPeer.h>
#include <aws/directconnect/model/Tag.h>
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
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Information about a virtual interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/VirtualInterface">AWS
   * API Reference</a></p>
   */
  class VirtualInterface
  {
  public:
    AWS_DIRECTCONNECT_API VirtualInterface() = default;
    AWS_DIRECTCONNECT_API VirtualInterface(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API VirtualInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the virtual
     * interface.</p>
     */
    inline const Aws::String& GetOwnerAccount() const { return m_ownerAccount; }
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
    template<typename OwnerAccountT = Aws::String>
    void SetOwnerAccount(OwnerAccountT&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::forward<OwnerAccountT>(value); }
    template<typename OwnerAccountT = Aws::String>
    VirtualInterface& WithOwnerAccount(OwnerAccountT&& value) { SetOwnerAccount(std::forward<OwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline const Aws::String& GetVirtualInterfaceId() const { return m_virtualInterfaceId; }
    inline bool VirtualInterfaceIdHasBeenSet() const { return m_virtualInterfaceIdHasBeenSet; }
    template<typename VirtualInterfaceIdT = Aws::String>
    void SetVirtualInterfaceId(VirtualInterfaceIdT&& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = std::forward<VirtualInterfaceIdT>(value); }
    template<typename VirtualInterfaceIdT = Aws::String>
    VirtualInterface& WithVirtualInterfaceId(VirtualInterfaceIdT&& value) { SetVirtualInterfaceId(std::forward<VirtualInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the connection.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    VirtualInterface& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the connection.</p>
     */
    inline const Aws::String& GetConnectionId() const { return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    template<typename ConnectionIdT = Aws::String>
    void SetConnectionId(ConnectionIdT&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::forward<ConnectionIdT>(value); }
    template<typename ConnectionIdT = Aws::String>
    VirtualInterface& WithConnectionId(ConnectionIdT&& value) { SetConnectionId(std::forward<ConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of virtual interface. The possible values are <code>private</code>,
     * <code>public</code> and <code>transit</code>.</p>
     */
    inline const Aws::String& GetVirtualInterfaceType() const { return m_virtualInterfaceType; }
    inline bool VirtualInterfaceTypeHasBeenSet() const { return m_virtualInterfaceTypeHasBeenSet; }
    template<typename VirtualInterfaceTypeT = Aws::String>
    void SetVirtualInterfaceType(VirtualInterfaceTypeT&& value) { m_virtualInterfaceTypeHasBeenSet = true; m_virtualInterfaceType = std::forward<VirtualInterfaceTypeT>(value); }
    template<typename VirtualInterfaceTypeT = Aws::String>
    VirtualInterface& WithVirtualInterfaceType(VirtualInterfaceTypeT&& value) { SetVirtualInterfaceType(std::forward<VirtualInterfaceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the virtual interface assigned by the customer network. The name
     * has a maximum of 100 characters. The following are valid characters: a-z, 0-9
     * and a hyphen (-).</p>
     */
    inline const Aws::String& GetVirtualInterfaceName() const { return m_virtualInterfaceName; }
    inline bool VirtualInterfaceNameHasBeenSet() const { return m_virtualInterfaceNameHasBeenSet; }
    template<typename VirtualInterfaceNameT = Aws::String>
    void SetVirtualInterfaceName(VirtualInterfaceNameT&& value) { m_virtualInterfaceNameHasBeenSet = true; m_virtualInterfaceName = std::forward<VirtualInterfaceNameT>(value); }
    template<typename VirtualInterfaceNameT = Aws::String>
    VirtualInterface& WithVirtualInterfaceName(VirtualInterfaceNameT&& value) { SetVirtualInterfaceName(std::forward<VirtualInterfaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VLAN.</p>
     */
    inline int GetVlan() const { return m_vlan; }
    inline bool VlanHasBeenSet() const { return m_vlanHasBeenSet; }
    inline void SetVlan(int value) { m_vlanHasBeenSet = true; m_vlan = value; }
    inline VirtualInterface& WithVlan(int value) { SetVlan(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The autonomous system number (ASN). The valid range is from 1 to 2147483646
     * for Border Gateway Protocol (BGP) configuration. If you provide a number greater
     * than the maximum, an error is returned. Use <code>asnLong</code> instead.</p>
     *  <p>You can use <code>asnLong</code> or <code>asn</code>, but not both. We
     * recommend using <code>asnLong</code> as it supports a greater pool of numbers.
     * </p> <ul> <li> <p>The <code>asnLong</code> attribute accepts both ASN and long
     * ASN ranges.</p> </li> <li> <p>If you provide a value in the same API call for
     * both <code>asn</code> and <code>asnLong</code>, the API will only accept the
     * value for <code>asnLong</code>.</p> </li> </ul> 
     */
    inline int GetAsn() const { return m_asn; }
    inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }
    inline void SetAsn(int value) { m_asnHasBeenSet = true; m_asn = value; }
    inline VirtualInterface& WithAsn(int value) { SetAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The long ASN for the virtual interface. The valid range is from 1 to
     * 4294967294 for BGP configuration.</p>  <p>You can use <code>asnLong</code>
     * or <code>asn</code>, but not both. We recommend using <code>asnLong</code> as it
     * supports a greater pool of numbers. </p> <ul> <li> <p>The <code>asnLong</code>
     * attribute accepts both ASN and long ASN ranges.</p> </li> <li> <p>If you provide
     * a value in the same API call for both <code>asn</code> and <code>asnLong</code>,
     * the API will only accept the value for <code>asnLong</code>.</p> </li> </ul>
     * 
     */
    inline long long GetAsnLong() const { return m_asnLong; }
    inline bool AsnLongHasBeenSet() const { return m_asnLongHasBeenSet; }
    inline void SetAsnLong(long long value) { m_asnLongHasBeenSet = true; m_asnLong = value; }
    inline VirtualInterface& WithAsnLong(long long value) { SetAsnLong(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The autonomous system number (AS) for the Amazon side of the connection.</p>
     */
    inline long long GetAmazonSideAsn() const { return m_amazonSideAsn; }
    inline bool AmazonSideAsnHasBeenSet() const { return m_amazonSideAsnHasBeenSet; }
    inline void SetAmazonSideAsn(long long value) { m_amazonSideAsnHasBeenSet = true; m_amazonSideAsn = value; }
    inline VirtualInterface& WithAmazonSideAsn(long long value) { SetAmazonSideAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication key for BGP configuration. This string has a minimum
     * length of 6 characters and and a maximun lenth of 80 characters.</p>
     */
    inline const Aws::String& GetAuthKey() const { return m_authKey; }
    inline bool AuthKeyHasBeenSet() const { return m_authKeyHasBeenSet; }
    template<typename AuthKeyT = Aws::String>
    void SetAuthKey(AuthKeyT&& value) { m_authKeyHasBeenSet = true; m_authKey = std::forward<AuthKeyT>(value); }
    template<typename AuthKeyT = Aws::String>
    VirtualInterface& WithAuthKey(AuthKeyT&& value) { SetAuthKey(std::forward<AuthKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address assigned to the Amazon interface.</p>
     */
    inline const Aws::String& GetAmazonAddress() const { return m_amazonAddress; }
    inline bool AmazonAddressHasBeenSet() const { return m_amazonAddressHasBeenSet; }
    template<typename AmazonAddressT = Aws::String>
    void SetAmazonAddress(AmazonAddressT&& value) { m_amazonAddressHasBeenSet = true; m_amazonAddress = std::forward<AmazonAddressT>(value); }
    template<typename AmazonAddressT = Aws::String>
    VirtualInterface& WithAmazonAddress(AmazonAddressT&& value) { SetAmazonAddress(std::forward<AmazonAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address assigned to the customer interface.</p>
     */
    inline const Aws::String& GetCustomerAddress() const { return m_customerAddress; }
    inline bool CustomerAddressHasBeenSet() const { return m_customerAddressHasBeenSet; }
    template<typename CustomerAddressT = Aws::String>
    void SetCustomerAddress(CustomerAddressT&& value) { m_customerAddressHasBeenSet = true; m_customerAddress = std::forward<CustomerAddressT>(value); }
    template<typename CustomerAddressT = Aws::String>
    VirtualInterface& WithCustomerAddress(CustomerAddressT&& value) { SetCustomerAddress(std::forward<CustomerAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address family for the BGP peer.</p>
     */
    inline AddressFamily GetAddressFamily() const { return m_addressFamily; }
    inline bool AddressFamilyHasBeenSet() const { return m_addressFamilyHasBeenSet; }
    inline void SetAddressFamily(AddressFamily value) { m_addressFamilyHasBeenSet = true; m_addressFamily = value; }
    inline VirtualInterface& WithAddressFamily(AddressFamily value) { SetAddressFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the virtual interface. The following are the possible
     * values:</p> <ul> <li> <p> <code>confirming</code>: The creation of the virtual
     * interface is pending confirmation from the virtual interface owner. If the owner
     * of the virtual interface is different from the owner of the connection on which
     * it is provisioned, then the virtual interface will remain in this state until it
     * is confirmed by the virtual interface owner.</p> </li> <li> <p>
     * <code>verifying</code>: This state only applies to public virtual interfaces.
     * Each public virtual interface needs validation before the virtual interface can
     * be created.</p> </li> <li> <p> <code>pending</code>: A virtual interface is in
     * this state from the time that it is created until the virtual interface is ready
     * to forward traffic.</p> </li> <li> <p> <code>available</code>: A virtual
     * interface that is able to forward traffic.</p> </li> <li> <p> <code>down</code>:
     * A virtual interface that is BGP down.</p> </li> <li> <p> <code>testing</code>: A
     * virtual interface is in this state immediately after calling
     * <a>StartBgpFailoverTest</a> and remains in this state during the duration of the
     * test.</p> </li> <li> <p> <code>deleting</code>: A virtual interface is in this
     * state immediately after calling <a>DeleteVirtualInterface</a> until it can no
     * longer forward traffic.</p> </li> <li> <p> <code>deleted</code>: A virtual
     * interface that cannot forward traffic.</p> </li> <li> <p> <code>rejected</code>:
     * The virtual interface owner has declined creation of the virtual interface. If a
     * virtual interface in the <code>Confirming</code> state is deleted by the virtual
     * interface owner, the virtual interface enters the <code>Rejected</code>
     * state.</p> </li> <li> <p> <code>unknown</code>: The state of the virtual
     * interface is not available.</p> </li> </ul>
     */
    inline VirtualInterfaceState GetVirtualInterfaceState() const { return m_virtualInterfaceState; }
    inline bool VirtualInterfaceStateHasBeenSet() const { return m_virtualInterfaceStateHasBeenSet; }
    inline void SetVirtualInterfaceState(VirtualInterfaceState value) { m_virtualInterfaceStateHasBeenSet = true; m_virtualInterfaceState = value; }
    inline VirtualInterface& WithVirtualInterfaceState(VirtualInterfaceState value) { SetVirtualInterfaceState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer router configuration.</p>
     */
    inline const Aws::String& GetCustomerRouterConfig() const { return m_customerRouterConfig; }
    inline bool CustomerRouterConfigHasBeenSet() const { return m_customerRouterConfigHasBeenSet; }
    template<typename CustomerRouterConfigT = Aws::String>
    void SetCustomerRouterConfig(CustomerRouterConfigT&& value) { m_customerRouterConfigHasBeenSet = true; m_customerRouterConfig = std::forward<CustomerRouterConfigT>(value); }
    template<typename CustomerRouterConfigT = Aws::String>
    VirtualInterface& WithCustomerRouterConfig(CustomerRouterConfigT&& value) { SetCustomerRouterConfig(std::forward<CustomerRouterConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum transmission unit (MTU), in bytes. The supported values are 1500
     * and 8500. The default value is 1500</p>
     */
    inline int GetMtu() const { return m_mtu; }
    inline bool MtuHasBeenSet() const { return m_mtuHasBeenSet; }
    inline void SetMtu(int value) { m_mtuHasBeenSet = true; m_mtu = value; }
    inline VirtualInterface& WithMtu(int value) { SetMtu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether jumbo frames are supported.</p>
     */
    inline bool GetJumboFrameCapable() const { return m_jumboFrameCapable; }
    inline bool JumboFrameCapableHasBeenSet() const { return m_jumboFrameCapableHasBeenSet; }
    inline void SetJumboFrameCapable(bool value) { m_jumboFrameCapableHasBeenSet = true; m_jumboFrameCapable = value; }
    inline VirtualInterface& WithJumboFrameCapable(bool value) { SetJumboFrameCapable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual private gateway. Applies only to private virtual
     * interfaces.</p>
     */
    inline const Aws::String& GetVirtualGatewayId() const { return m_virtualGatewayId; }
    inline bool VirtualGatewayIdHasBeenSet() const { return m_virtualGatewayIdHasBeenSet; }
    template<typename VirtualGatewayIdT = Aws::String>
    void SetVirtualGatewayId(VirtualGatewayIdT&& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = std::forward<VirtualGatewayIdT>(value); }
    template<typename VirtualGatewayIdT = Aws::String>
    VirtualInterface& WithVirtualGatewayId(VirtualGatewayIdT&& value) { SetVirtualGatewayId(std::forward<VirtualGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayId() const { return m_directConnectGatewayId; }
    inline bool DirectConnectGatewayIdHasBeenSet() const { return m_directConnectGatewayIdHasBeenSet; }
    template<typename DirectConnectGatewayIdT = Aws::String>
    void SetDirectConnectGatewayId(DirectConnectGatewayIdT&& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = std::forward<DirectConnectGatewayIdT>(value); }
    template<typename DirectConnectGatewayIdT = Aws::String>
    VirtualInterface& WithDirectConnectGatewayId(DirectConnectGatewayIdT&& value) { SetDirectConnectGatewayId(std::forward<DirectConnectGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routes to be advertised to the Amazon Web Services network in this
     * Region. Applies to public virtual interfaces.</p>
     */
    inline const Aws::Vector<RouteFilterPrefix>& GetRouteFilterPrefixes() const { return m_routeFilterPrefixes; }
    inline bool RouteFilterPrefixesHasBeenSet() const { return m_routeFilterPrefixesHasBeenSet; }
    template<typename RouteFilterPrefixesT = Aws::Vector<RouteFilterPrefix>>
    void SetRouteFilterPrefixes(RouteFilterPrefixesT&& value) { m_routeFilterPrefixesHasBeenSet = true; m_routeFilterPrefixes = std::forward<RouteFilterPrefixesT>(value); }
    template<typename RouteFilterPrefixesT = Aws::Vector<RouteFilterPrefix>>
    VirtualInterface& WithRouteFilterPrefixes(RouteFilterPrefixesT&& value) { SetRouteFilterPrefixes(std::forward<RouteFilterPrefixesT>(value)); return *this;}
    template<typename RouteFilterPrefixesT = RouteFilterPrefix>
    VirtualInterface& AddRouteFilterPrefixes(RouteFilterPrefixesT&& value) { m_routeFilterPrefixesHasBeenSet = true; m_routeFilterPrefixes.emplace_back(std::forward<RouteFilterPrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The BGP peers configured on this virtual interface.</p>
     */
    inline const Aws::Vector<BGPPeer>& GetBgpPeers() const { return m_bgpPeers; }
    inline bool BgpPeersHasBeenSet() const { return m_bgpPeersHasBeenSet; }
    template<typename BgpPeersT = Aws::Vector<BGPPeer>>
    void SetBgpPeers(BgpPeersT&& value) { m_bgpPeersHasBeenSet = true; m_bgpPeers = std::forward<BgpPeersT>(value); }
    template<typename BgpPeersT = Aws::Vector<BGPPeer>>
    VirtualInterface& WithBgpPeers(BgpPeersT&& value) { SetBgpPeers(std::forward<BgpPeersT>(value)); return *this;}
    template<typename BgpPeersT = BGPPeer>
    VirtualInterface& AddBgpPeers(BgpPeersT&& value) { m_bgpPeersHasBeenSet = true; m_bgpPeers.emplace_back(std::forward<BgpPeersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the virtual interface is located.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    VirtualInterface& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Direct Connect endpoint that terminates the physical connection.</p>
     */
    inline const Aws::String& GetAwsDeviceV2() const { return m_awsDeviceV2; }
    inline bool AwsDeviceV2HasBeenSet() const { return m_awsDeviceV2HasBeenSet; }
    template<typename AwsDeviceV2T = Aws::String>
    void SetAwsDeviceV2(AwsDeviceV2T&& value) { m_awsDeviceV2HasBeenSet = true; m_awsDeviceV2 = std::forward<AwsDeviceV2T>(value); }
    template<typename AwsDeviceV2T = Aws::String>
    VirtualInterface& WithAwsDeviceV2(AwsDeviceV2T&& value) { SetAwsDeviceV2(std::forward<AwsDeviceV2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Direct Connect endpoint that terminates the logical connection. This
     * device might be different than the device that terminates the physical
     * connection.</p>
     */
    inline const Aws::String& GetAwsLogicalDeviceId() const { return m_awsLogicalDeviceId; }
    inline bool AwsLogicalDeviceIdHasBeenSet() const { return m_awsLogicalDeviceIdHasBeenSet; }
    template<typename AwsLogicalDeviceIdT = Aws::String>
    void SetAwsLogicalDeviceId(AwsLogicalDeviceIdT&& value) { m_awsLogicalDeviceIdHasBeenSet = true; m_awsLogicalDeviceId = std::forward<AwsLogicalDeviceIdT>(value); }
    template<typename AwsLogicalDeviceIdT = Aws::String>
    VirtualInterface& WithAwsLogicalDeviceId(AwsLogicalDeviceIdT&& value) { SetAwsLogicalDeviceId(std::forward<AwsLogicalDeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the virtual interface.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    VirtualInterface& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    VirtualInterface& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether SiteLink is enabled.</p>
     */
    inline bool GetSiteLinkEnabled() const { return m_siteLinkEnabled; }
    inline bool SiteLinkEnabledHasBeenSet() const { return m_siteLinkEnabledHasBeenSet; }
    inline void SetSiteLinkEnabled(bool value) { m_siteLinkEnabledHasBeenSet = true; m_siteLinkEnabled = value; }
    inline VirtualInterface& WithSiteLinkEnabled(bool value) { SetSiteLinkEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    VirtualInterface& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    Aws::String m_virtualInterfaceId;
    bool m_virtualInterfaceIdHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    Aws::String m_virtualInterfaceType;
    bool m_virtualInterfaceTypeHasBeenSet = false;

    Aws::String m_virtualInterfaceName;
    bool m_virtualInterfaceNameHasBeenSet = false;

    int m_vlan{0};
    bool m_vlanHasBeenSet = false;

    int m_asn{0};
    bool m_asnHasBeenSet = false;

    long long m_asnLong{0};
    bool m_asnLongHasBeenSet = false;

    long long m_amazonSideAsn{0};
    bool m_amazonSideAsnHasBeenSet = false;

    Aws::String m_authKey;
    bool m_authKeyHasBeenSet = false;

    Aws::String m_amazonAddress;
    bool m_amazonAddressHasBeenSet = false;

    Aws::String m_customerAddress;
    bool m_customerAddressHasBeenSet = false;

    AddressFamily m_addressFamily{AddressFamily::NOT_SET};
    bool m_addressFamilyHasBeenSet = false;

    VirtualInterfaceState m_virtualInterfaceState{VirtualInterfaceState::NOT_SET};
    bool m_virtualInterfaceStateHasBeenSet = false;

    Aws::String m_customerRouterConfig;
    bool m_customerRouterConfigHasBeenSet = false;

    int m_mtu{0};
    bool m_mtuHasBeenSet = false;

    bool m_jumboFrameCapable{false};
    bool m_jumboFrameCapableHasBeenSet = false;

    Aws::String m_virtualGatewayId;
    bool m_virtualGatewayIdHasBeenSet = false;

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet = false;

    Aws::Vector<RouteFilterPrefix> m_routeFilterPrefixes;
    bool m_routeFilterPrefixesHasBeenSet = false;

    Aws::Vector<BGPPeer> m_bgpPeers;
    bool m_bgpPeersHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_awsDeviceV2;
    bool m_awsDeviceV2HasBeenSet = false;

    Aws::String m_awsLogicalDeviceId;
    bool m_awsLogicalDeviceIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_siteLinkEnabled{false};
    bool m_siteLinkEnabledHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
