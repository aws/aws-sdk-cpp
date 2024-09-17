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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
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
  class CreatePrivateVirtualInterfaceResult
  {
  public:
    AWS_DIRECTCONNECT_API CreatePrivateVirtualInterfaceResult();
    AWS_DIRECTCONNECT_API CreatePrivateVirtualInterfaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API CreatePrivateVirtualInterfaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the virtual
     * interface.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccount = value; }
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccount = std::move(value); }
    inline void SetOwnerAccount(const char* value) { m_ownerAccount.assign(value); }
    inline CreatePrivateVirtualInterfaceResult& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline const Aws::String& GetVirtualInterfaceId() const{ return m_virtualInterfaceId; }
    inline void SetVirtualInterfaceId(const Aws::String& value) { m_virtualInterfaceId = value; }
    inline void SetVirtualInterfaceId(Aws::String&& value) { m_virtualInterfaceId = std::move(value); }
    inline void SetVirtualInterfaceId(const char* value) { m_virtualInterfaceId.assign(value); }
    inline CreatePrivateVirtualInterfaceResult& WithVirtualInterfaceId(const Aws::String& value) { SetVirtualInterfaceId(value); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithVirtualInterfaceId(Aws::String&& value) { SetVirtualInterfaceId(std::move(value)); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithVirtualInterfaceId(const char* value) { SetVirtualInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the connection.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline void SetLocation(const Aws::String& value) { m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_location.assign(value); }
    inline CreatePrivateVirtualInterfaceResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the connection.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }
    inline void SetConnectionId(const Aws::String& value) { m_connectionId = value; }
    inline void SetConnectionId(Aws::String&& value) { m_connectionId = std::move(value); }
    inline void SetConnectionId(const char* value) { m_connectionId.assign(value); }
    inline CreatePrivateVirtualInterfaceResult& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of virtual interface. The possible values are <code>private</code>,
     * <code>public</code> and <code>transit</code>.</p>
     */
    inline const Aws::String& GetVirtualInterfaceType() const{ return m_virtualInterfaceType; }
    inline void SetVirtualInterfaceType(const Aws::String& value) { m_virtualInterfaceType = value; }
    inline void SetVirtualInterfaceType(Aws::String&& value) { m_virtualInterfaceType = std::move(value); }
    inline void SetVirtualInterfaceType(const char* value) { m_virtualInterfaceType.assign(value); }
    inline CreatePrivateVirtualInterfaceResult& WithVirtualInterfaceType(const Aws::String& value) { SetVirtualInterfaceType(value); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithVirtualInterfaceType(Aws::String&& value) { SetVirtualInterfaceType(std::move(value)); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithVirtualInterfaceType(const char* value) { SetVirtualInterfaceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the virtual interface assigned by the customer network. The name
     * has a maximum of 100 characters. The following are valid characters: a-z, 0-9
     * and a hyphen (-).</p>
     */
    inline const Aws::String& GetVirtualInterfaceName() const{ return m_virtualInterfaceName; }
    inline void SetVirtualInterfaceName(const Aws::String& value) { m_virtualInterfaceName = value; }
    inline void SetVirtualInterfaceName(Aws::String&& value) { m_virtualInterfaceName = std::move(value); }
    inline void SetVirtualInterfaceName(const char* value) { m_virtualInterfaceName.assign(value); }
    inline CreatePrivateVirtualInterfaceResult& WithVirtualInterfaceName(const Aws::String& value) { SetVirtualInterfaceName(value); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithVirtualInterfaceName(Aws::String&& value) { SetVirtualInterfaceName(std::move(value)); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithVirtualInterfaceName(const char* value) { SetVirtualInterfaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VLAN.</p>
     */
    inline int GetVlan() const{ return m_vlan; }
    inline void SetVlan(int value) { m_vlan = value; }
    inline CreatePrivateVirtualInterfaceResult& WithVlan(int value) { SetVlan(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The autonomous system (AS) number for Border Gateway Protocol (BGP)
     * configuration.</p> <p>The valid values are 1-2147483647.</p>
     */
    inline int GetAsn() const{ return m_asn; }
    inline void SetAsn(int value) { m_asn = value; }
    inline CreatePrivateVirtualInterfaceResult& WithAsn(int value) { SetAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The autonomous system number (ASN) for the Amazon side of the connection.</p>
     */
    inline long long GetAmazonSideAsn() const{ return m_amazonSideAsn; }
    inline void SetAmazonSideAsn(long long value) { m_amazonSideAsn = value; }
    inline CreatePrivateVirtualInterfaceResult& WithAmazonSideAsn(long long value) { SetAmazonSideAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication key for BGP configuration. This string has a minimum
     * length of 6 characters and and a maximun lenth of 80 characters.</p>
     */
    inline const Aws::String& GetAuthKey() const{ return m_authKey; }
    inline void SetAuthKey(const Aws::String& value) { m_authKey = value; }
    inline void SetAuthKey(Aws::String&& value) { m_authKey = std::move(value); }
    inline void SetAuthKey(const char* value) { m_authKey.assign(value); }
    inline CreatePrivateVirtualInterfaceResult& WithAuthKey(const Aws::String& value) { SetAuthKey(value); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithAuthKey(Aws::String&& value) { SetAuthKey(std::move(value)); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithAuthKey(const char* value) { SetAuthKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address assigned to the Amazon interface.</p>
     */
    inline const Aws::String& GetAmazonAddress() const{ return m_amazonAddress; }
    inline void SetAmazonAddress(const Aws::String& value) { m_amazonAddress = value; }
    inline void SetAmazonAddress(Aws::String&& value) { m_amazonAddress = std::move(value); }
    inline void SetAmazonAddress(const char* value) { m_amazonAddress.assign(value); }
    inline CreatePrivateVirtualInterfaceResult& WithAmazonAddress(const Aws::String& value) { SetAmazonAddress(value); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithAmazonAddress(Aws::String&& value) { SetAmazonAddress(std::move(value)); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithAmazonAddress(const char* value) { SetAmazonAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address assigned to the customer interface.</p>
     */
    inline const Aws::String& GetCustomerAddress() const{ return m_customerAddress; }
    inline void SetCustomerAddress(const Aws::String& value) { m_customerAddress = value; }
    inline void SetCustomerAddress(Aws::String&& value) { m_customerAddress = std::move(value); }
    inline void SetCustomerAddress(const char* value) { m_customerAddress.assign(value); }
    inline CreatePrivateVirtualInterfaceResult& WithCustomerAddress(const Aws::String& value) { SetCustomerAddress(value); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithCustomerAddress(Aws::String&& value) { SetCustomerAddress(std::move(value)); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithCustomerAddress(const char* value) { SetCustomerAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address family for the BGP peer.</p>
     */
    inline const AddressFamily& GetAddressFamily() const{ return m_addressFamily; }
    inline void SetAddressFamily(const AddressFamily& value) { m_addressFamily = value; }
    inline void SetAddressFamily(AddressFamily&& value) { m_addressFamily = std::move(value); }
    inline CreatePrivateVirtualInterfaceResult& WithAddressFamily(const AddressFamily& value) { SetAddressFamily(value); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithAddressFamily(AddressFamily&& value) { SetAddressFamily(std::move(value)); return *this;}
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
     * A virtual interface that is BGP down.</p> </li> <li> <p> <code>deleting</code>:
     * A virtual interface is in this state immediately after calling
     * <a>DeleteVirtualInterface</a> until it can no longer forward traffic.</p> </li>
     * <li> <p> <code>deleted</code>: A virtual interface that cannot forward
     * traffic.</p> </li> <li> <p> <code>rejected</code>: The virtual interface owner
     * has declined creation of the virtual interface. If a virtual interface in the
     * <code>Confirming</code> state is deleted by the virtual interface owner, the
     * virtual interface enters the <code>Rejected</code> state.</p> </li> <li> <p>
     * <code>unknown</code>: The state of the virtual interface is not available.</p>
     * </li> </ul>
     */
    inline const VirtualInterfaceState& GetVirtualInterfaceState() const{ return m_virtualInterfaceState; }
    inline void SetVirtualInterfaceState(const VirtualInterfaceState& value) { m_virtualInterfaceState = value; }
    inline void SetVirtualInterfaceState(VirtualInterfaceState&& value) { m_virtualInterfaceState = std::move(value); }
    inline CreatePrivateVirtualInterfaceResult& WithVirtualInterfaceState(const VirtualInterfaceState& value) { SetVirtualInterfaceState(value); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithVirtualInterfaceState(VirtualInterfaceState&& value) { SetVirtualInterfaceState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer router configuration.</p>
     */
    inline const Aws::String& GetCustomerRouterConfig() const{ return m_customerRouterConfig; }
    inline void SetCustomerRouterConfig(const Aws::String& value) { m_customerRouterConfig = value; }
    inline void SetCustomerRouterConfig(Aws::String&& value) { m_customerRouterConfig = std::move(value); }
    inline void SetCustomerRouterConfig(const char* value) { m_customerRouterConfig.assign(value); }
    inline CreatePrivateVirtualInterfaceResult& WithCustomerRouterConfig(const Aws::String& value) { SetCustomerRouterConfig(value); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithCustomerRouterConfig(Aws::String&& value) { SetCustomerRouterConfig(std::move(value)); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithCustomerRouterConfig(const char* value) { SetCustomerRouterConfig(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum transmission unit (MTU), in bytes. The supported values are 1500
     * and 8500. The default value is 1500</p>
     */
    inline int GetMtu() const{ return m_mtu; }
    inline void SetMtu(int value) { m_mtu = value; }
    inline CreatePrivateVirtualInterfaceResult& WithMtu(int value) { SetMtu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether jumbo frames are supported.</p>
     */
    inline bool GetJumboFrameCapable() const{ return m_jumboFrameCapable; }
    inline void SetJumboFrameCapable(bool value) { m_jumboFrameCapable = value; }
    inline CreatePrivateVirtualInterfaceResult& WithJumboFrameCapable(bool value) { SetJumboFrameCapable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual private gateway. Applies only to private virtual
     * interfaces.</p>
     */
    inline const Aws::String& GetVirtualGatewayId() const{ return m_virtualGatewayId; }
    inline void SetVirtualGatewayId(const Aws::String& value) { m_virtualGatewayId = value; }
    inline void SetVirtualGatewayId(Aws::String&& value) { m_virtualGatewayId = std::move(value); }
    inline void SetVirtualGatewayId(const char* value) { m_virtualGatewayId.assign(value); }
    inline CreatePrivateVirtualInterfaceResult& WithVirtualGatewayId(const Aws::String& value) { SetVirtualGatewayId(value); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithVirtualGatewayId(Aws::String&& value) { SetVirtualGatewayId(std::move(value)); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithVirtualGatewayId(const char* value) { SetVirtualGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayId() const{ return m_directConnectGatewayId; }
    inline void SetDirectConnectGatewayId(const Aws::String& value) { m_directConnectGatewayId = value; }
    inline void SetDirectConnectGatewayId(Aws::String&& value) { m_directConnectGatewayId = std::move(value); }
    inline void SetDirectConnectGatewayId(const char* value) { m_directConnectGatewayId.assign(value); }
    inline CreatePrivateVirtualInterfaceResult& WithDirectConnectGatewayId(const Aws::String& value) { SetDirectConnectGatewayId(value); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithDirectConnectGatewayId(Aws::String&& value) { SetDirectConnectGatewayId(std::move(value)); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithDirectConnectGatewayId(const char* value) { SetDirectConnectGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routes to be advertised to the Amazon Web Services network in this
     * Region. Applies to public virtual interfaces.</p>
     */
    inline const Aws::Vector<RouteFilterPrefix>& GetRouteFilterPrefixes() const{ return m_routeFilterPrefixes; }
    inline void SetRouteFilterPrefixes(const Aws::Vector<RouteFilterPrefix>& value) { m_routeFilterPrefixes = value; }
    inline void SetRouteFilterPrefixes(Aws::Vector<RouteFilterPrefix>&& value) { m_routeFilterPrefixes = std::move(value); }
    inline CreatePrivateVirtualInterfaceResult& WithRouteFilterPrefixes(const Aws::Vector<RouteFilterPrefix>& value) { SetRouteFilterPrefixes(value); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithRouteFilterPrefixes(Aws::Vector<RouteFilterPrefix>&& value) { SetRouteFilterPrefixes(std::move(value)); return *this;}
    inline CreatePrivateVirtualInterfaceResult& AddRouteFilterPrefixes(const RouteFilterPrefix& value) { m_routeFilterPrefixes.push_back(value); return *this; }
    inline CreatePrivateVirtualInterfaceResult& AddRouteFilterPrefixes(RouteFilterPrefix&& value) { m_routeFilterPrefixes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The BGP peers configured on this virtual interface.</p>
     */
    inline const Aws::Vector<BGPPeer>& GetBgpPeers() const{ return m_bgpPeers; }
    inline void SetBgpPeers(const Aws::Vector<BGPPeer>& value) { m_bgpPeers = value; }
    inline void SetBgpPeers(Aws::Vector<BGPPeer>&& value) { m_bgpPeers = std::move(value); }
    inline CreatePrivateVirtualInterfaceResult& WithBgpPeers(const Aws::Vector<BGPPeer>& value) { SetBgpPeers(value); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithBgpPeers(Aws::Vector<BGPPeer>&& value) { SetBgpPeers(std::move(value)); return *this;}
    inline CreatePrivateVirtualInterfaceResult& AddBgpPeers(const BGPPeer& value) { m_bgpPeers.push_back(value); return *this; }
    inline CreatePrivateVirtualInterfaceResult& AddBgpPeers(BGPPeer&& value) { m_bgpPeers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the virtual interface is located.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline void SetRegion(const Aws::String& value) { m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_region.assign(value); }
    inline CreatePrivateVirtualInterfaceResult& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Direct Connect endpoint that terminates the physical connection.</p>
     */
    inline const Aws::String& GetAwsDeviceV2() const{ return m_awsDeviceV2; }
    inline void SetAwsDeviceV2(const Aws::String& value) { m_awsDeviceV2 = value; }
    inline void SetAwsDeviceV2(Aws::String&& value) { m_awsDeviceV2 = std::move(value); }
    inline void SetAwsDeviceV2(const char* value) { m_awsDeviceV2.assign(value); }
    inline CreatePrivateVirtualInterfaceResult& WithAwsDeviceV2(const Aws::String& value) { SetAwsDeviceV2(value); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithAwsDeviceV2(Aws::String&& value) { SetAwsDeviceV2(std::move(value)); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithAwsDeviceV2(const char* value) { SetAwsDeviceV2(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Direct Connect endpoint that terminates the logical connection. This
     * device might be different than the device that terminates the physical
     * connection.</p>
     */
    inline const Aws::String& GetAwsLogicalDeviceId() const{ return m_awsLogicalDeviceId; }
    inline void SetAwsLogicalDeviceId(const Aws::String& value) { m_awsLogicalDeviceId = value; }
    inline void SetAwsLogicalDeviceId(Aws::String&& value) { m_awsLogicalDeviceId = std::move(value); }
    inline void SetAwsLogicalDeviceId(const char* value) { m_awsLogicalDeviceId.assign(value); }
    inline CreatePrivateVirtualInterfaceResult& WithAwsLogicalDeviceId(const Aws::String& value) { SetAwsLogicalDeviceId(value); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithAwsLogicalDeviceId(Aws::String&& value) { SetAwsLogicalDeviceId(std::move(value)); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithAwsLogicalDeviceId(const char* value) { SetAwsLogicalDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the virtual interface.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline CreatePrivateVirtualInterfaceResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreatePrivateVirtualInterfaceResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline CreatePrivateVirtualInterfaceResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether SiteLink is enabled.</p>
     */
    inline bool GetSiteLinkEnabled() const{ return m_siteLinkEnabled; }
    inline void SetSiteLinkEnabled(bool value) { m_siteLinkEnabled = value; }
    inline CreatePrivateVirtualInterfaceResult& WithSiteLinkEnabled(bool value) { SetSiteLinkEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreatePrivateVirtualInterfaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreatePrivateVirtualInterfaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_ownerAccount;

    Aws::String m_virtualInterfaceId;

    Aws::String m_location;

    Aws::String m_connectionId;

    Aws::String m_virtualInterfaceType;

    Aws::String m_virtualInterfaceName;

    int m_vlan;

    int m_asn;

    long long m_amazonSideAsn;

    Aws::String m_authKey;

    Aws::String m_amazonAddress;

    Aws::String m_customerAddress;

    AddressFamily m_addressFamily;

    VirtualInterfaceState m_virtualInterfaceState;

    Aws::String m_customerRouterConfig;

    int m_mtu;

    bool m_jumboFrameCapable;

    Aws::String m_virtualGatewayId;

    Aws::String m_directConnectGatewayId;

    Aws::Vector<RouteFilterPrefix> m_routeFilterPrefixes;

    Aws::Vector<BGPPeer> m_bgpPeers;

    Aws::String m_region;

    Aws::String m_awsDeviceV2;

    Aws::String m_awsLogicalDeviceId;

    Aws::Vector<Tag> m_tags;

    bool m_siteLinkEnabled;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
