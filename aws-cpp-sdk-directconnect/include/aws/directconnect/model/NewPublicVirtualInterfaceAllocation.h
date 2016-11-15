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
   * <p>A structure containing information about a public virtual interface that will
   * be provisioned on a connection.</p>
   */
  class AWS_DIRECTCONNECT_API NewPublicVirtualInterfaceAllocation
  {
  public:
    NewPublicVirtualInterfaceAllocation();
    NewPublicVirtualInterfaceAllocation(const Aws::Utils::Json::JsonValue& jsonValue);
    NewPublicVirtualInterfaceAllocation& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetVirtualInterfaceName() const{ return m_virtualInterfaceName; }

    
    inline void SetVirtualInterfaceName(const Aws::String& value) { m_virtualInterfaceNameHasBeenSet = true; m_virtualInterfaceName = value; }

    
    inline void SetVirtualInterfaceName(Aws::String&& value) { m_virtualInterfaceNameHasBeenSet = true; m_virtualInterfaceName = value; }

    
    inline void SetVirtualInterfaceName(const char* value) { m_virtualInterfaceNameHasBeenSet = true; m_virtualInterfaceName.assign(value); }

    
    inline NewPublicVirtualInterfaceAllocation& WithVirtualInterfaceName(const Aws::String& value) { SetVirtualInterfaceName(value); return *this;}

    
    inline NewPublicVirtualInterfaceAllocation& WithVirtualInterfaceName(Aws::String&& value) { SetVirtualInterfaceName(value); return *this;}

    
    inline NewPublicVirtualInterfaceAllocation& WithVirtualInterfaceName(const char* value) { SetVirtualInterfaceName(value); return *this;}

    
    inline int GetVlan() const{ return m_vlan; }

    
    inline void SetVlan(int value) { m_vlanHasBeenSet = true; m_vlan = value; }

    
    inline NewPublicVirtualInterfaceAllocation& WithVlan(int value) { SetVlan(value); return *this;}

    
    inline int GetAsn() const{ return m_asn; }

    
    inline void SetAsn(int value) { m_asnHasBeenSet = true; m_asn = value; }

    
    inline NewPublicVirtualInterfaceAllocation& WithAsn(int value) { SetAsn(value); return *this;}

    
    inline const Aws::String& GetAuthKey() const{ return m_authKey; }

    
    inline void SetAuthKey(const Aws::String& value) { m_authKeyHasBeenSet = true; m_authKey = value; }

    
    inline void SetAuthKey(Aws::String&& value) { m_authKeyHasBeenSet = true; m_authKey = value; }

    
    inline void SetAuthKey(const char* value) { m_authKeyHasBeenSet = true; m_authKey.assign(value); }

    
    inline NewPublicVirtualInterfaceAllocation& WithAuthKey(const Aws::String& value) { SetAuthKey(value); return *this;}

    
    inline NewPublicVirtualInterfaceAllocation& WithAuthKey(Aws::String&& value) { SetAuthKey(value); return *this;}

    
    inline NewPublicVirtualInterfaceAllocation& WithAuthKey(const char* value) { SetAuthKey(value); return *this;}

    
    inline const Aws::String& GetAmazonAddress() const{ return m_amazonAddress; }

    
    inline void SetAmazonAddress(const Aws::String& value) { m_amazonAddressHasBeenSet = true; m_amazonAddress = value; }

    
    inline void SetAmazonAddress(Aws::String&& value) { m_amazonAddressHasBeenSet = true; m_amazonAddress = value; }

    
    inline void SetAmazonAddress(const char* value) { m_amazonAddressHasBeenSet = true; m_amazonAddress.assign(value); }

    
    inline NewPublicVirtualInterfaceAllocation& WithAmazonAddress(const Aws::String& value) { SetAmazonAddress(value); return *this;}

    
    inline NewPublicVirtualInterfaceAllocation& WithAmazonAddress(Aws::String&& value) { SetAmazonAddress(value); return *this;}

    
    inline NewPublicVirtualInterfaceAllocation& WithAmazonAddress(const char* value) { SetAmazonAddress(value); return *this;}

    
    inline const Aws::String& GetCustomerAddress() const{ return m_customerAddress; }

    
    inline void SetCustomerAddress(const Aws::String& value) { m_customerAddressHasBeenSet = true; m_customerAddress = value; }

    
    inline void SetCustomerAddress(Aws::String&& value) { m_customerAddressHasBeenSet = true; m_customerAddress = value; }

    
    inline void SetCustomerAddress(const char* value) { m_customerAddressHasBeenSet = true; m_customerAddress.assign(value); }

    
    inline NewPublicVirtualInterfaceAllocation& WithCustomerAddress(const Aws::String& value) { SetCustomerAddress(value); return *this;}

    
    inline NewPublicVirtualInterfaceAllocation& WithCustomerAddress(Aws::String&& value) { SetCustomerAddress(value); return *this;}

    
    inline NewPublicVirtualInterfaceAllocation& WithCustomerAddress(const char* value) { SetCustomerAddress(value); return *this;}

    
    inline const Aws::Vector<RouteFilterPrefix>& GetRouteFilterPrefixes() const{ return m_routeFilterPrefixes; }

    
    inline void SetRouteFilterPrefixes(const Aws::Vector<RouteFilterPrefix>& value) { m_routeFilterPrefixesHasBeenSet = true; m_routeFilterPrefixes = value; }

    
    inline void SetRouteFilterPrefixes(Aws::Vector<RouteFilterPrefix>&& value) { m_routeFilterPrefixesHasBeenSet = true; m_routeFilterPrefixes = value; }

    
    inline NewPublicVirtualInterfaceAllocation& WithRouteFilterPrefixes(const Aws::Vector<RouteFilterPrefix>& value) { SetRouteFilterPrefixes(value); return *this;}

    
    inline NewPublicVirtualInterfaceAllocation& WithRouteFilterPrefixes(Aws::Vector<RouteFilterPrefix>&& value) { SetRouteFilterPrefixes(value); return *this;}

    
    inline NewPublicVirtualInterfaceAllocation& AddRouteFilterPrefixes(const RouteFilterPrefix& value) { m_routeFilterPrefixesHasBeenSet = true; m_routeFilterPrefixes.push_back(value); return *this; }

    
    inline NewPublicVirtualInterfaceAllocation& AddRouteFilterPrefixes(RouteFilterPrefix&& value) { m_routeFilterPrefixesHasBeenSet = true; m_routeFilterPrefixes.push_back(value); return *this; }

  private:
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
    Aws::Vector<RouteFilterPrefix> m_routeFilterPrefixes;
    bool m_routeFilterPrefixesHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
