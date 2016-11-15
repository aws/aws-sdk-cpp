/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/directconnect/model/VirtualInterfaceState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/RouteFilterPrefix.h>

namespace Aws
{
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
   * Connect location and the customer.</p>
   */
  class AWS_DIRECTCONNECT_API VirtualInterface
  {
  public:
    VirtualInterface();
    VirtualInterface(const Aws::Utils::Json::JsonValue& jsonValue);
    VirtualInterface& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The AWS account that will own the new virtual interface.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The AWS account that will own the new virtual interface.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>The AWS account that will own the new virtual interface.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>The AWS account that will own the new virtual interface.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }

    /**
     * <p>The AWS account that will own the new virtual interface.</p>
     */
    inline VirtualInterface& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The AWS account that will own the new virtual interface.</p>
     */
    inline VirtualInterface& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The AWS account that will own the new virtual interface.</p>
     */
    inline VirtualInterface& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}

    
    inline const Aws::String& GetVirtualInterfaceId() const{ return m_virtualInterfaceId; }

    
    inline void SetVirtualInterfaceId(const Aws::String& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = value; }

    
    inline void SetVirtualInterfaceId(Aws::String&& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = value; }

    
    inline void SetVirtualInterfaceId(const char* value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId.assign(value); }

    
    inline VirtualInterface& WithVirtualInterfaceId(const Aws::String& value) { SetVirtualInterfaceId(value); return *this;}

    
    inline VirtualInterface& WithVirtualInterfaceId(Aws::String&& value) { SetVirtualInterfaceId(value); return *this;}

    
    inline VirtualInterface& WithVirtualInterfaceId(const char* value) { SetVirtualInterfaceId(value); return *this;}

    
    inline const Aws::String& GetLocation() const{ return m_location; }

    
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = value; }

    
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    
    inline VirtualInterface& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    
    inline VirtualInterface& WithLocation(Aws::String&& value) { SetLocation(value); return *this;}

    
    inline VirtualInterface& WithLocation(const char* value) { SetLocation(value); return *this;}

    
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    
    inline VirtualInterface& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    
    inline VirtualInterface& WithConnectionId(Aws::String&& value) { SetConnectionId(value); return *this;}

    
    inline VirtualInterface& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}

    
    inline const Aws::String& GetVirtualInterfaceType() const{ return m_virtualInterfaceType; }

    
    inline void SetVirtualInterfaceType(const Aws::String& value) { m_virtualInterfaceTypeHasBeenSet = true; m_virtualInterfaceType = value; }

    
    inline void SetVirtualInterfaceType(Aws::String&& value) { m_virtualInterfaceTypeHasBeenSet = true; m_virtualInterfaceType = value; }

    
    inline void SetVirtualInterfaceType(const char* value) { m_virtualInterfaceTypeHasBeenSet = true; m_virtualInterfaceType.assign(value); }

    
    inline VirtualInterface& WithVirtualInterfaceType(const Aws::String& value) { SetVirtualInterfaceType(value); return *this;}

    
    inline VirtualInterface& WithVirtualInterfaceType(Aws::String&& value) { SetVirtualInterfaceType(value); return *this;}

    
    inline VirtualInterface& WithVirtualInterfaceType(const char* value) { SetVirtualInterfaceType(value); return *this;}

    
    inline const Aws::String& GetVirtualInterfaceName() const{ return m_virtualInterfaceName; }

    
    inline void SetVirtualInterfaceName(const Aws::String& value) { m_virtualInterfaceNameHasBeenSet = true; m_virtualInterfaceName = value; }

    
    inline void SetVirtualInterfaceName(Aws::String&& value) { m_virtualInterfaceNameHasBeenSet = true; m_virtualInterfaceName = value; }

    
    inline void SetVirtualInterfaceName(const char* value) { m_virtualInterfaceNameHasBeenSet = true; m_virtualInterfaceName.assign(value); }

    
    inline VirtualInterface& WithVirtualInterfaceName(const Aws::String& value) { SetVirtualInterfaceName(value); return *this;}

    
    inline VirtualInterface& WithVirtualInterfaceName(Aws::String&& value) { SetVirtualInterfaceName(value); return *this;}

    
    inline VirtualInterface& WithVirtualInterfaceName(const char* value) { SetVirtualInterfaceName(value); return *this;}

    
    inline int GetVlan() const{ return m_vlan; }

    
    inline void SetVlan(int value) { m_vlanHasBeenSet = true; m_vlan = value; }

    
    inline VirtualInterface& WithVlan(int value) { SetVlan(value); return *this;}

    
    inline int GetAsn() const{ return m_asn; }

    
    inline void SetAsn(int value) { m_asnHasBeenSet = true; m_asn = value; }

    
    inline VirtualInterface& WithAsn(int value) { SetAsn(value); return *this;}

    
    inline const Aws::String& GetAuthKey() const{ return m_authKey; }

    
    inline void SetAuthKey(const Aws::String& value) { m_authKeyHasBeenSet = true; m_authKey = value; }

    
    inline void SetAuthKey(Aws::String&& value) { m_authKeyHasBeenSet = true; m_authKey = value; }

    
    inline void SetAuthKey(const char* value) { m_authKeyHasBeenSet = true; m_authKey.assign(value); }

    
    inline VirtualInterface& WithAuthKey(const Aws::String& value) { SetAuthKey(value); return *this;}

    
    inline VirtualInterface& WithAuthKey(Aws::String&& value) { SetAuthKey(value); return *this;}

    
    inline VirtualInterface& WithAuthKey(const char* value) { SetAuthKey(value); return *this;}

    
    inline const Aws::String& GetAmazonAddress() const{ return m_amazonAddress; }

    
    inline void SetAmazonAddress(const Aws::String& value) { m_amazonAddressHasBeenSet = true; m_amazonAddress = value; }

    
    inline void SetAmazonAddress(Aws::String&& value) { m_amazonAddressHasBeenSet = true; m_amazonAddress = value; }

    
    inline void SetAmazonAddress(const char* value) { m_amazonAddressHasBeenSet = true; m_amazonAddress.assign(value); }

    
    inline VirtualInterface& WithAmazonAddress(const Aws::String& value) { SetAmazonAddress(value); return *this;}

    
    inline VirtualInterface& WithAmazonAddress(Aws::String&& value) { SetAmazonAddress(value); return *this;}

    
    inline VirtualInterface& WithAmazonAddress(const char* value) { SetAmazonAddress(value); return *this;}

    
    inline const Aws::String& GetCustomerAddress() const{ return m_customerAddress; }

    
    inline void SetCustomerAddress(const Aws::String& value) { m_customerAddressHasBeenSet = true; m_customerAddress = value; }

    
    inline void SetCustomerAddress(Aws::String&& value) { m_customerAddressHasBeenSet = true; m_customerAddress = value; }

    
    inline void SetCustomerAddress(const char* value) { m_customerAddressHasBeenSet = true; m_customerAddress.assign(value); }

    
    inline VirtualInterface& WithCustomerAddress(const Aws::String& value) { SetCustomerAddress(value); return *this;}

    
    inline VirtualInterface& WithCustomerAddress(Aws::String&& value) { SetCustomerAddress(value); return *this;}

    
    inline VirtualInterface& WithCustomerAddress(const char* value) { SetCustomerAddress(value); return *this;}

    
    inline const VirtualInterfaceState& GetVirtualInterfaceState() const{ return m_virtualInterfaceState; }

    
    inline void SetVirtualInterfaceState(const VirtualInterfaceState& value) { m_virtualInterfaceStateHasBeenSet = true; m_virtualInterfaceState = value; }

    
    inline void SetVirtualInterfaceState(VirtualInterfaceState&& value) { m_virtualInterfaceStateHasBeenSet = true; m_virtualInterfaceState = value; }

    
    inline VirtualInterface& WithVirtualInterfaceState(const VirtualInterfaceState& value) { SetVirtualInterfaceState(value); return *this;}

    
    inline VirtualInterface& WithVirtualInterfaceState(VirtualInterfaceState&& value) { SetVirtualInterfaceState(value); return *this;}

    /**
     * <p>Information for generating the customer router configuration.</p>
     */
    inline const Aws::String& GetCustomerRouterConfig() const{ return m_customerRouterConfig; }

    /**
     * <p>Information for generating the customer router configuration.</p>
     */
    inline void SetCustomerRouterConfig(const Aws::String& value) { m_customerRouterConfigHasBeenSet = true; m_customerRouterConfig = value; }

    /**
     * <p>Information for generating the customer router configuration.</p>
     */
    inline void SetCustomerRouterConfig(Aws::String&& value) { m_customerRouterConfigHasBeenSet = true; m_customerRouterConfig = value; }

    /**
     * <p>Information for generating the customer router configuration.</p>
     */
    inline void SetCustomerRouterConfig(const char* value) { m_customerRouterConfigHasBeenSet = true; m_customerRouterConfig.assign(value); }

    /**
     * <p>Information for generating the customer router configuration.</p>
     */
    inline VirtualInterface& WithCustomerRouterConfig(const Aws::String& value) { SetCustomerRouterConfig(value); return *this;}

    /**
     * <p>Information for generating the customer router configuration.</p>
     */
    inline VirtualInterface& WithCustomerRouterConfig(Aws::String&& value) { SetCustomerRouterConfig(value); return *this;}

    /**
     * <p>Information for generating the customer router configuration.</p>
     */
    inline VirtualInterface& WithCustomerRouterConfig(const char* value) { SetCustomerRouterConfig(value); return *this;}

    
    inline const Aws::String& GetVirtualGatewayId() const{ return m_virtualGatewayId; }

    
    inline void SetVirtualGatewayId(const Aws::String& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = value; }

    
    inline void SetVirtualGatewayId(Aws::String&& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = value; }

    
    inline void SetVirtualGatewayId(const char* value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId.assign(value); }

    
    inline VirtualInterface& WithVirtualGatewayId(const Aws::String& value) { SetVirtualGatewayId(value); return *this;}

    
    inline VirtualInterface& WithVirtualGatewayId(Aws::String&& value) { SetVirtualGatewayId(value); return *this;}

    
    inline VirtualInterface& WithVirtualGatewayId(const char* value) { SetVirtualGatewayId(value); return *this;}

    
    inline const Aws::Vector<RouteFilterPrefix>& GetRouteFilterPrefixes() const{ return m_routeFilterPrefixes; }

    
    inline void SetRouteFilterPrefixes(const Aws::Vector<RouteFilterPrefix>& value) { m_routeFilterPrefixesHasBeenSet = true; m_routeFilterPrefixes = value; }

    
    inline void SetRouteFilterPrefixes(Aws::Vector<RouteFilterPrefix>&& value) { m_routeFilterPrefixesHasBeenSet = true; m_routeFilterPrefixes = value; }

    
    inline VirtualInterface& WithRouteFilterPrefixes(const Aws::Vector<RouteFilterPrefix>& value) { SetRouteFilterPrefixes(value); return *this;}

    
    inline VirtualInterface& WithRouteFilterPrefixes(Aws::Vector<RouteFilterPrefix>&& value) { SetRouteFilterPrefixes(value); return *this;}

    
    inline VirtualInterface& AddRouteFilterPrefixes(const RouteFilterPrefix& value) { m_routeFilterPrefixesHasBeenSet = true; m_routeFilterPrefixes.push_back(value); return *this; }

    
    inline VirtualInterface& AddRouteFilterPrefixes(RouteFilterPrefix&& value) { m_routeFilterPrefixesHasBeenSet = true; m_routeFilterPrefixes.push_back(value); return *this; }

  private:
    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet;
    Aws::String m_virtualInterfaceId;
    bool m_virtualInterfaceIdHasBeenSet;
    Aws::String m_location;
    bool m_locationHasBeenSet;
    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet;
    Aws::String m_virtualInterfaceType;
    bool m_virtualInterfaceTypeHasBeenSet;
    Aws::String m_virtualInterfaceName;
    bool m_virtualInterfaceNameHasBeenSet;
    int m_vlan;
    bool m_vlanHasBeenSet;
    int m_asn;
    bool m_asnHasBeenSet;
    Aws::String m_authKey;
    bool m_authKeyHasBeenSet;
    Aws::String m_amazonAddress;
    bool m_amazonAddressHasBeenSet;
    Aws::String m_customerAddress;
    bool m_customerAddressHasBeenSet;
    VirtualInterfaceState m_virtualInterfaceState;
    bool m_virtualInterfaceStateHasBeenSet;
    Aws::String m_customerRouterConfig;
    bool m_customerRouterConfigHasBeenSet;
    Aws::String m_virtualGatewayId;
    bool m_virtualGatewayIdHasBeenSet;
    Aws::Vector<RouteFilterPrefix> m_routeFilterPrefixes;
    bool m_routeFilterPrefixesHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
