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
   * Connect location and the customer.</p>
   */
  class AWS_DIRECTCONNECT_API AllocatePrivateVirtualInterfaceResult
  {
  public:
    AllocatePrivateVirtualInterfaceResult();
    AllocatePrivateVirtualInterfaceResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AllocatePrivateVirtualInterfaceResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccount = value; }

    /**
     * <p>The AWS account that will own the new virtual interface.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccount.assign(value); }

    /**
     * <p>The AWS account that will own the new virtual interface.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The AWS account that will own the new virtual interface.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The AWS account that will own the new virtual interface.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}

    
    inline const Aws::String& GetVirtualInterfaceId() const{ return m_virtualInterfaceId; }

    
    inline void SetVirtualInterfaceId(const Aws::String& value) { m_virtualInterfaceId = value; }

    
    inline void SetVirtualInterfaceId(Aws::String&& value) { m_virtualInterfaceId = value; }

    
    inline void SetVirtualInterfaceId(const char* value) { m_virtualInterfaceId.assign(value); }

    
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualInterfaceId(const Aws::String& value) { SetVirtualInterfaceId(value); return *this;}

    
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualInterfaceId(Aws::String&& value) { SetVirtualInterfaceId(value); return *this;}

    
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualInterfaceId(const char* value) { SetVirtualInterfaceId(value); return *this;}

    
    inline const Aws::String& GetLocation() const{ return m_location; }

    
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    
    inline void SetLocation(Aws::String&& value) { m_location = value; }

    
    inline void SetLocation(const char* value) { m_location.assign(value); }

    
    inline AllocatePrivateVirtualInterfaceResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    
    inline AllocatePrivateVirtualInterfaceResult& WithLocation(Aws::String&& value) { SetLocation(value); return *this;}

    
    inline AllocatePrivateVirtualInterfaceResult& WithLocation(const char* value) { SetLocation(value); return *this;}

    
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    
    inline void SetConnectionId(const Aws::String& value) { m_connectionId = value; }

    
    inline void SetConnectionId(Aws::String&& value) { m_connectionId = value; }

    
    inline void SetConnectionId(const char* value) { m_connectionId.assign(value); }

    
    inline AllocatePrivateVirtualInterfaceResult& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    
    inline AllocatePrivateVirtualInterfaceResult& WithConnectionId(Aws::String&& value) { SetConnectionId(value); return *this;}

    
    inline AllocatePrivateVirtualInterfaceResult& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}

    
    inline const Aws::String& GetVirtualInterfaceType() const{ return m_virtualInterfaceType; }

    
    inline void SetVirtualInterfaceType(const Aws::String& value) { m_virtualInterfaceType = value; }

    
    inline void SetVirtualInterfaceType(Aws::String&& value) { m_virtualInterfaceType = value; }

    
    inline void SetVirtualInterfaceType(const char* value) { m_virtualInterfaceType.assign(value); }

    
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualInterfaceType(const Aws::String& value) { SetVirtualInterfaceType(value); return *this;}

    
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualInterfaceType(Aws::String&& value) { SetVirtualInterfaceType(value); return *this;}

    
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualInterfaceType(const char* value) { SetVirtualInterfaceType(value); return *this;}

    
    inline const Aws::String& GetVirtualInterfaceName() const{ return m_virtualInterfaceName; }

    
    inline void SetVirtualInterfaceName(const Aws::String& value) { m_virtualInterfaceName = value; }

    
    inline void SetVirtualInterfaceName(Aws::String&& value) { m_virtualInterfaceName = value; }

    
    inline void SetVirtualInterfaceName(const char* value) { m_virtualInterfaceName.assign(value); }

    
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualInterfaceName(const Aws::String& value) { SetVirtualInterfaceName(value); return *this;}

    
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualInterfaceName(Aws::String&& value) { SetVirtualInterfaceName(value); return *this;}

    
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualInterfaceName(const char* value) { SetVirtualInterfaceName(value); return *this;}

    
    inline int GetVlan() const{ return m_vlan; }

    
    inline void SetVlan(int value) { m_vlan = value; }

    
    inline AllocatePrivateVirtualInterfaceResult& WithVlan(int value) { SetVlan(value); return *this;}

    
    inline int GetAsn() const{ return m_asn; }

    
    inline void SetAsn(int value) { m_asn = value; }

    
    inline AllocatePrivateVirtualInterfaceResult& WithAsn(int value) { SetAsn(value); return *this;}

    
    inline const Aws::String& GetAuthKey() const{ return m_authKey; }

    
    inline void SetAuthKey(const Aws::String& value) { m_authKey = value; }

    
    inline void SetAuthKey(Aws::String&& value) { m_authKey = value; }

    
    inline void SetAuthKey(const char* value) { m_authKey.assign(value); }

    
    inline AllocatePrivateVirtualInterfaceResult& WithAuthKey(const Aws::String& value) { SetAuthKey(value); return *this;}

    
    inline AllocatePrivateVirtualInterfaceResult& WithAuthKey(Aws::String&& value) { SetAuthKey(value); return *this;}

    
    inline AllocatePrivateVirtualInterfaceResult& WithAuthKey(const char* value) { SetAuthKey(value); return *this;}

    
    inline const Aws::String& GetAmazonAddress() const{ return m_amazonAddress; }

    
    inline void SetAmazonAddress(const Aws::String& value) { m_amazonAddress = value; }

    
    inline void SetAmazonAddress(Aws::String&& value) { m_amazonAddress = value; }

    
    inline void SetAmazonAddress(const char* value) { m_amazonAddress.assign(value); }

    
    inline AllocatePrivateVirtualInterfaceResult& WithAmazonAddress(const Aws::String& value) { SetAmazonAddress(value); return *this;}

    
    inline AllocatePrivateVirtualInterfaceResult& WithAmazonAddress(Aws::String&& value) { SetAmazonAddress(value); return *this;}

    
    inline AllocatePrivateVirtualInterfaceResult& WithAmazonAddress(const char* value) { SetAmazonAddress(value); return *this;}

    
    inline const Aws::String& GetCustomerAddress() const{ return m_customerAddress; }

    
    inline void SetCustomerAddress(const Aws::String& value) { m_customerAddress = value; }

    
    inline void SetCustomerAddress(Aws::String&& value) { m_customerAddress = value; }

    
    inline void SetCustomerAddress(const char* value) { m_customerAddress.assign(value); }

    
    inline AllocatePrivateVirtualInterfaceResult& WithCustomerAddress(const Aws::String& value) { SetCustomerAddress(value); return *this;}

    
    inline AllocatePrivateVirtualInterfaceResult& WithCustomerAddress(Aws::String&& value) { SetCustomerAddress(value); return *this;}

    
    inline AllocatePrivateVirtualInterfaceResult& WithCustomerAddress(const char* value) { SetCustomerAddress(value); return *this;}

    
    inline const VirtualInterfaceState& GetVirtualInterfaceState() const{ return m_virtualInterfaceState; }

    
    inline void SetVirtualInterfaceState(const VirtualInterfaceState& value) { m_virtualInterfaceState = value; }

    
    inline void SetVirtualInterfaceState(VirtualInterfaceState&& value) { m_virtualInterfaceState = value; }

    
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualInterfaceState(const VirtualInterfaceState& value) { SetVirtualInterfaceState(value); return *this;}

    
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualInterfaceState(VirtualInterfaceState&& value) { SetVirtualInterfaceState(value); return *this;}

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
    inline void SetCustomerRouterConfig(Aws::String&& value) { m_customerRouterConfig = value; }

    /**
     * <p>Information for generating the customer router configuration.</p>
     */
    inline void SetCustomerRouterConfig(const char* value) { m_customerRouterConfig.assign(value); }

    /**
     * <p>Information for generating the customer router configuration.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithCustomerRouterConfig(const Aws::String& value) { SetCustomerRouterConfig(value); return *this;}

    /**
     * <p>Information for generating the customer router configuration.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithCustomerRouterConfig(Aws::String&& value) { SetCustomerRouterConfig(value); return *this;}

    /**
     * <p>Information for generating the customer router configuration.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithCustomerRouterConfig(const char* value) { SetCustomerRouterConfig(value); return *this;}

    
    inline const Aws::String& GetVirtualGatewayId() const{ return m_virtualGatewayId; }

    
    inline void SetVirtualGatewayId(const Aws::String& value) { m_virtualGatewayId = value; }

    
    inline void SetVirtualGatewayId(Aws::String&& value) { m_virtualGatewayId = value; }

    
    inline void SetVirtualGatewayId(const char* value) { m_virtualGatewayId.assign(value); }

    
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualGatewayId(const Aws::String& value) { SetVirtualGatewayId(value); return *this;}

    
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualGatewayId(Aws::String&& value) { SetVirtualGatewayId(value); return *this;}

    
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualGatewayId(const char* value) { SetVirtualGatewayId(value); return *this;}

    
    inline const Aws::Vector<RouteFilterPrefix>& GetRouteFilterPrefixes() const{ return m_routeFilterPrefixes; }

    
    inline void SetRouteFilterPrefixes(const Aws::Vector<RouteFilterPrefix>& value) { m_routeFilterPrefixes = value; }

    
    inline void SetRouteFilterPrefixes(Aws::Vector<RouteFilterPrefix>&& value) { m_routeFilterPrefixes = value; }

    
    inline AllocatePrivateVirtualInterfaceResult& WithRouteFilterPrefixes(const Aws::Vector<RouteFilterPrefix>& value) { SetRouteFilterPrefixes(value); return *this;}

    
    inline AllocatePrivateVirtualInterfaceResult& WithRouteFilterPrefixes(Aws::Vector<RouteFilterPrefix>&& value) { SetRouteFilterPrefixes(value); return *this;}

    
    inline AllocatePrivateVirtualInterfaceResult& AddRouteFilterPrefixes(const RouteFilterPrefix& value) { m_routeFilterPrefixes.push_back(value); return *this; }

    
    inline AllocatePrivateVirtualInterfaceResult& AddRouteFilterPrefixes(RouteFilterPrefix&& value) { m_routeFilterPrefixes.push_back(value); return *this; }

  private:
    Aws::String m_ownerAccount;
    Aws::String m_virtualInterfaceId;
    Aws::String m_location;
    Aws::String m_connectionId;
    Aws::String m_virtualInterfaceType;
    Aws::String m_virtualInterfaceName;
    int m_vlan;
    int m_asn;
    Aws::String m_authKey;
    Aws::String m_amazonAddress;
    Aws::String m_customerAddress;
    VirtualInterfaceState m_virtualInterfaceState;
    Aws::String m_customerRouterConfig;
    Aws::String m_virtualGatewayId;
    Aws::Vector<RouteFilterPrefix> m_routeFilterPrefixes;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
