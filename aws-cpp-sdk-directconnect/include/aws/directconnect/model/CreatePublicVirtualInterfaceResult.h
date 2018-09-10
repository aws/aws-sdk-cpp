﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/AddressFamily.h>
#include <aws/directconnect/model/VirtualInterfaceState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/RouteFilterPrefix.h>
#include <aws/directconnect/model/BGPPeer.h>
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
   * <p>A virtual interface (VLAN) transmits the traffic between the AWS Direct
   * Connect location and the customer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/VirtualInterface">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API CreatePublicVirtualInterfaceResult
  {
  public:
    CreatePublicVirtualInterfaceResult();
    CreatePublicVirtualInterfaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreatePublicVirtualInterfaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The AWS account that will own the new virtual interface.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The AWS account that will own the new virtual interface.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccount = value; }

    /**
     * <p>The AWS account that will own the new virtual interface.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccount = std::move(value); }

    /**
     * <p>The AWS account that will own the new virtual interface.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccount.assign(value); }

    /**
     * <p>The AWS account that will own the new virtual interface.</p>
     */
    inline CreatePublicVirtualInterfaceResult& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The AWS account that will own the new virtual interface.</p>
     */
    inline CreatePublicVirtualInterfaceResult& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The AWS account that will own the new virtual interface.</p>
     */
    inline CreatePublicVirtualInterfaceResult& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}


    
    inline const Aws::String& GetVirtualInterfaceId() const{ return m_virtualInterfaceId; }

    
    inline void SetVirtualInterfaceId(const Aws::String& value) { m_virtualInterfaceId = value; }

    
    inline void SetVirtualInterfaceId(Aws::String&& value) { m_virtualInterfaceId = std::move(value); }

    
    inline void SetVirtualInterfaceId(const char* value) { m_virtualInterfaceId.assign(value); }

    
    inline CreatePublicVirtualInterfaceResult& WithVirtualInterfaceId(const Aws::String& value) { SetVirtualInterfaceId(value); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithVirtualInterfaceId(Aws::String&& value) { SetVirtualInterfaceId(std::move(value)); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithVirtualInterfaceId(const char* value) { SetVirtualInterfaceId(value); return *this;}


    
    inline const Aws::String& GetLocation() const{ return m_location; }

    
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    
    inline void SetLocation(const char* value) { m_location.assign(value); }

    
    inline CreatePublicVirtualInterfaceResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithLocation(const char* value) { SetLocation(value); return *this;}


    
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    
    inline void SetConnectionId(const Aws::String& value) { m_connectionId = value; }

    
    inline void SetConnectionId(Aws::String&& value) { m_connectionId = std::move(value); }

    
    inline void SetConnectionId(const char* value) { m_connectionId.assign(value); }

    
    inline CreatePublicVirtualInterfaceResult& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    
    inline const Aws::String& GetVirtualInterfaceType() const{ return m_virtualInterfaceType; }

    
    inline void SetVirtualInterfaceType(const Aws::String& value) { m_virtualInterfaceType = value; }

    
    inline void SetVirtualInterfaceType(Aws::String&& value) { m_virtualInterfaceType = std::move(value); }

    
    inline void SetVirtualInterfaceType(const char* value) { m_virtualInterfaceType.assign(value); }

    
    inline CreatePublicVirtualInterfaceResult& WithVirtualInterfaceType(const Aws::String& value) { SetVirtualInterfaceType(value); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithVirtualInterfaceType(Aws::String&& value) { SetVirtualInterfaceType(std::move(value)); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithVirtualInterfaceType(const char* value) { SetVirtualInterfaceType(value); return *this;}


    
    inline const Aws::String& GetVirtualInterfaceName() const{ return m_virtualInterfaceName; }

    
    inline void SetVirtualInterfaceName(const Aws::String& value) { m_virtualInterfaceName = value; }

    
    inline void SetVirtualInterfaceName(Aws::String&& value) { m_virtualInterfaceName = std::move(value); }

    
    inline void SetVirtualInterfaceName(const char* value) { m_virtualInterfaceName.assign(value); }

    
    inline CreatePublicVirtualInterfaceResult& WithVirtualInterfaceName(const Aws::String& value) { SetVirtualInterfaceName(value); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithVirtualInterfaceName(Aws::String&& value) { SetVirtualInterfaceName(std::move(value)); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithVirtualInterfaceName(const char* value) { SetVirtualInterfaceName(value); return *this;}


    
    inline int GetVlan() const{ return m_vlan; }

    
    inline void SetVlan(int value) { m_vlan = value; }

    
    inline CreatePublicVirtualInterfaceResult& WithVlan(int value) { SetVlan(value); return *this;}


    
    inline int GetAsn() const{ return m_asn; }

    
    inline void SetAsn(int value) { m_asn = value; }

    
    inline CreatePublicVirtualInterfaceResult& WithAsn(int value) { SetAsn(value); return *this;}


    /**
     * <p>The autonomous system number (ASN) for the Amazon side of the connection.</p>
     */
    inline long long GetAmazonSideAsn() const{ return m_amazonSideAsn; }

    /**
     * <p>The autonomous system number (ASN) for the Amazon side of the connection.</p>
     */
    inline void SetAmazonSideAsn(long long value) { m_amazonSideAsn = value; }

    /**
     * <p>The autonomous system number (ASN) for the Amazon side of the connection.</p>
     */
    inline CreatePublicVirtualInterfaceResult& WithAmazonSideAsn(long long value) { SetAmazonSideAsn(value); return *this;}


    
    inline const Aws::String& GetAuthKey() const{ return m_authKey; }

    
    inline void SetAuthKey(const Aws::String& value) { m_authKey = value; }

    
    inline void SetAuthKey(Aws::String&& value) { m_authKey = std::move(value); }

    
    inline void SetAuthKey(const char* value) { m_authKey.assign(value); }

    
    inline CreatePublicVirtualInterfaceResult& WithAuthKey(const Aws::String& value) { SetAuthKey(value); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithAuthKey(Aws::String&& value) { SetAuthKey(std::move(value)); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithAuthKey(const char* value) { SetAuthKey(value); return *this;}


    
    inline const Aws::String& GetAmazonAddress() const{ return m_amazonAddress; }

    
    inline void SetAmazonAddress(const Aws::String& value) { m_amazonAddress = value; }

    
    inline void SetAmazonAddress(Aws::String&& value) { m_amazonAddress = std::move(value); }

    
    inline void SetAmazonAddress(const char* value) { m_amazonAddress.assign(value); }

    
    inline CreatePublicVirtualInterfaceResult& WithAmazonAddress(const Aws::String& value) { SetAmazonAddress(value); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithAmazonAddress(Aws::String&& value) { SetAmazonAddress(std::move(value)); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithAmazonAddress(const char* value) { SetAmazonAddress(value); return *this;}


    
    inline const Aws::String& GetCustomerAddress() const{ return m_customerAddress; }

    
    inline void SetCustomerAddress(const Aws::String& value) { m_customerAddress = value; }

    
    inline void SetCustomerAddress(Aws::String&& value) { m_customerAddress = std::move(value); }

    
    inline void SetCustomerAddress(const char* value) { m_customerAddress.assign(value); }

    
    inline CreatePublicVirtualInterfaceResult& WithCustomerAddress(const Aws::String& value) { SetCustomerAddress(value); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithCustomerAddress(Aws::String&& value) { SetCustomerAddress(std::move(value)); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithCustomerAddress(const char* value) { SetCustomerAddress(value); return *this;}


    
    inline const AddressFamily& GetAddressFamily() const{ return m_addressFamily; }

    
    inline void SetAddressFamily(const AddressFamily& value) { m_addressFamily = value; }

    
    inline void SetAddressFamily(AddressFamily&& value) { m_addressFamily = std::move(value); }

    
    inline CreatePublicVirtualInterfaceResult& WithAddressFamily(const AddressFamily& value) { SetAddressFamily(value); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithAddressFamily(AddressFamily&& value) { SetAddressFamily(std::move(value)); return *this;}


    
    inline const VirtualInterfaceState& GetVirtualInterfaceState() const{ return m_virtualInterfaceState; }

    
    inline void SetVirtualInterfaceState(const VirtualInterfaceState& value) { m_virtualInterfaceState = value; }

    
    inline void SetVirtualInterfaceState(VirtualInterfaceState&& value) { m_virtualInterfaceState = std::move(value); }

    
    inline CreatePublicVirtualInterfaceResult& WithVirtualInterfaceState(const VirtualInterfaceState& value) { SetVirtualInterfaceState(value); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithVirtualInterfaceState(VirtualInterfaceState&& value) { SetVirtualInterfaceState(std::move(value)); return *this;}


    /**
     * <p>Information for generating the customer router configuration.</p>
     */
    inline const Aws::String& GetCustomerRouterConfig() const{ return m_customerRouterConfig; }

    /**
     * <p>Information for generating the customer router configuration.</p>
     */
    inline void SetCustomerRouterConfig(const Aws::String& value) { m_customerRouterConfig = value; }

    /**
     * <p>Information for generating the customer router configuration.</p>
     */
    inline void SetCustomerRouterConfig(Aws::String&& value) { m_customerRouterConfig = std::move(value); }

    /**
     * <p>Information for generating the customer router configuration.</p>
     */
    inline void SetCustomerRouterConfig(const char* value) { m_customerRouterConfig.assign(value); }

    /**
     * <p>Information for generating the customer router configuration.</p>
     */
    inline CreatePublicVirtualInterfaceResult& WithCustomerRouterConfig(const Aws::String& value) { SetCustomerRouterConfig(value); return *this;}

    /**
     * <p>Information for generating the customer router configuration.</p>
     */
    inline CreatePublicVirtualInterfaceResult& WithCustomerRouterConfig(Aws::String&& value) { SetCustomerRouterConfig(std::move(value)); return *this;}

    /**
     * <p>Information for generating the customer router configuration.</p>
     */
    inline CreatePublicVirtualInterfaceResult& WithCustomerRouterConfig(const char* value) { SetCustomerRouterConfig(value); return *this;}


    
    inline const Aws::String& GetVirtualGatewayId() const{ return m_virtualGatewayId; }

    
    inline void SetVirtualGatewayId(const Aws::String& value) { m_virtualGatewayId = value; }

    
    inline void SetVirtualGatewayId(Aws::String&& value) { m_virtualGatewayId = std::move(value); }

    
    inline void SetVirtualGatewayId(const char* value) { m_virtualGatewayId.assign(value); }

    
    inline CreatePublicVirtualInterfaceResult& WithVirtualGatewayId(const Aws::String& value) { SetVirtualGatewayId(value); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithVirtualGatewayId(Aws::String&& value) { SetVirtualGatewayId(std::move(value)); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithVirtualGatewayId(const char* value) { SetVirtualGatewayId(value); return *this;}


    
    inline const Aws::String& GetDirectConnectGatewayId() const{ return m_directConnectGatewayId; }

    
    inline void SetDirectConnectGatewayId(const Aws::String& value) { m_directConnectGatewayId = value; }

    
    inline void SetDirectConnectGatewayId(Aws::String&& value) { m_directConnectGatewayId = std::move(value); }

    
    inline void SetDirectConnectGatewayId(const char* value) { m_directConnectGatewayId.assign(value); }

    
    inline CreatePublicVirtualInterfaceResult& WithDirectConnectGatewayId(const Aws::String& value) { SetDirectConnectGatewayId(value); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithDirectConnectGatewayId(Aws::String&& value) { SetDirectConnectGatewayId(std::move(value)); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithDirectConnectGatewayId(const char* value) { SetDirectConnectGatewayId(value); return *this;}


    
    inline const Aws::Vector<RouteFilterPrefix>& GetRouteFilterPrefixes() const{ return m_routeFilterPrefixes; }

    
    inline void SetRouteFilterPrefixes(const Aws::Vector<RouteFilterPrefix>& value) { m_routeFilterPrefixes = value; }

    
    inline void SetRouteFilterPrefixes(Aws::Vector<RouteFilterPrefix>&& value) { m_routeFilterPrefixes = std::move(value); }

    
    inline CreatePublicVirtualInterfaceResult& WithRouteFilterPrefixes(const Aws::Vector<RouteFilterPrefix>& value) { SetRouteFilterPrefixes(value); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithRouteFilterPrefixes(Aws::Vector<RouteFilterPrefix>&& value) { SetRouteFilterPrefixes(std::move(value)); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& AddRouteFilterPrefixes(const RouteFilterPrefix& value) { m_routeFilterPrefixes.push_back(value); return *this; }

    
    inline CreatePublicVirtualInterfaceResult& AddRouteFilterPrefixes(RouteFilterPrefix&& value) { m_routeFilterPrefixes.push_back(std::move(value)); return *this; }


    
    inline const Aws::Vector<BGPPeer>& GetBgpPeers() const{ return m_bgpPeers; }

    
    inline void SetBgpPeers(const Aws::Vector<BGPPeer>& value) { m_bgpPeers = value; }

    
    inline void SetBgpPeers(Aws::Vector<BGPPeer>&& value) { m_bgpPeers = std::move(value); }

    
    inline CreatePublicVirtualInterfaceResult& WithBgpPeers(const Aws::Vector<BGPPeer>& value) { SetBgpPeers(value); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& WithBgpPeers(Aws::Vector<BGPPeer>&& value) { SetBgpPeers(std::move(value)); return *this;}

    
    inline CreatePublicVirtualInterfaceResult& AddBgpPeers(const BGPPeer& value) { m_bgpPeers.push_back(value); return *this; }

    
    inline CreatePublicVirtualInterfaceResult& AddBgpPeers(BGPPeer&& value) { m_bgpPeers.push_back(std::move(value)); return *this; }


    /**
     * <p>The AWS region where the virtual interface is located.</p> <p>Example:
     * us-east-1</p> <p>Default: None</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS region where the virtual interface is located.</p> <p>Example:
     * us-east-1</p> <p>Default: None</p>
     */
    inline void SetRegion(const Aws::String& value) { m_region = value; }

    /**
     * <p>The AWS region where the virtual interface is located.</p> <p>Example:
     * us-east-1</p> <p>Default: None</p>
     */
    inline void SetRegion(Aws::String&& value) { m_region = std::move(value); }

    /**
     * <p>The AWS region where the virtual interface is located.</p> <p>Example:
     * us-east-1</p> <p>Default: None</p>
     */
    inline void SetRegion(const char* value) { m_region.assign(value); }

    /**
     * <p>The AWS region where the virtual interface is located.</p> <p>Example:
     * us-east-1</p> <p>Default: None</p>
     */
    inline CreatePublicVirtualInterfaceResult& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS region where the virtual interface is located.</p> <p>Example:
     * us-east-1</p> <p>Default: None</p>
     */
    inline CreatePublicVirtualInterfaceResult& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS region where the virtual interface is located.</p> <p>Example:
     * us-east-1</p> <p>Default: None</p>
     */
    inline CreatePublicVirtualInterfaceResult& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The Direct Connection endpoint which the virtual interface terminates on.</p>
     */
    inline const Aws::String& GetAwsDeviceV2() const{ return m_awsDeviceV2; }

    /**
     * <p>The Direct Connection endpoint which the virtual interface terminates on.</p>
     */
    inline void SetAwsDeviceV2(const Aws::String& value) { m_awsDeviceV2 = value; }

    /**
     * <p>The Direct Connection endpoint which the virtual interface terminates on.</p>
     */
    inline void SetAwsDeviceV2(Aws::String&& value) { m_awsDeviceV2 = std::move(value); }

    /**
     * <p>The Direct Connection endpoint which the virtual interface terminates on.</p>
     */
    inline void SetAwsDeviceV2(const char* value) { m_awsDeviceV2.assign(value); }

    /**
     * <p>The Direct Connection endpoint which the virtual interface terminates on.</p>
     */
    inline CreatePublicVirtualInterfaceResult& WithAwsDeviceV2(const Aws::String& value) { SetAwsDeviceV2(value); return *this;}

    /**
     * <p>The Direct Connection endpoint which the virtual interface terminates on.</p>
     */
    inline CreatePublicVirtualInterfaceResult& WithAwsDeviceV2(Aws::String&& value) { SetAwsDeviceV2(std::move(value)); return *this;}

    /**
     * <p>The Direct Connection endpoint which the virtual interface terminates on.</p>
     */
    inline CreatePublicVirtualInterfaceResult& WithAwsDeviceV2(const char* value) { SetAwsDeviceV2(value); return *this;}

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

    Aws::String m_virtualGatewayId;

    Aws::String m_directConnectGatewayId;

    Aws::Vector<RouteFilterPrefix> m_routeFilterPrefixes;

    Aws::Vector<BGPPeer> m_bgpPeers;

    Aws::String m_region;

    Aws::String m_awsDeviceV2;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
