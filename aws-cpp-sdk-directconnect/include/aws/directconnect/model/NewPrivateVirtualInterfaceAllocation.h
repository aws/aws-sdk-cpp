﻿/*
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
#include <aws/directconnect/model/AddressFamily.h>

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
   * <p>A structure containing information about a private virtual interface that
   * will be provisioned on a connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/NewPrivateVirtualInterfaceAllocation">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API NewPrivateVirtualInterfaceAllocation
  {
  public:
    NewPrivateVirtualInterfaceAllocation();
    NewPrivateVirtualInterfaceAllocation(const Aws::Utils::Json::JsonValue& jsonValue);
    NewPrivateVirtualInterfaceAllocation& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetVirtualInterfaceName() const{ return m_virtualInterfaceName; }

    
    inline void SetVirtualInterfaceName(const Aws::String& value) { m_virtualInterfaceNameHasBeenSet = true; m_virtualInterfaceName = value; }

    
    inline void SetVirtualInterfaceName(Aws::String&& value) { m_virtualInterfaceNameHasBeenSet = true; m_virtualInterfaceName = value; }

    
    inline void SetVirtualInterfaceName(const char* value) { m_virtualInterfaceNameHasBeenSet = true; m_virtualInterfaceName.assign(value); }

    
    inline NewPrivateVirtualInterfaceAllocation& WithVirtualInterfaceName(const Aws::String& value) { SetVirtualInterfaceName(value); return *this;}

    
    inline NewPrivateVirtualInterfaceAllocation& WithVirtualInterfaceName(Aws::String&& value) { SetVirtualInterfaceName(value); return *this;}

    
    inline NewPrivateVirtualInterfaceAllocation& WithVirtualInterfaceName(const char* value) { SetVirtualInterfaceName(value); return *this;}

    
    inline int GetVlan() const{ return m_vlan; }

    
    inline void SetVlan(int value) { m_vlanHasBeenSet = true; m_vlan = value; }

    
    inline NewPrivateVirtualInterfaceAllocation& WithVlan(int value) { SetVlan(value); return *this;}

    
    inline int GetAsn() const{ return m_asn; }

    
    inline void SetAsn(int value) { m_asnHasBeenSet = true; m_asn = value; }

    
    inline NewPrivateVirtualInterfaceAllocation& WithAsn(int value) { SetAsn(value); return *this;}

    
    inline const Aws::String& GetAuthKey() const{ return m_authKey; }

    
    inline void SetAuthKey(const Aws::String& value) { m_authKeyHasBeenSet = true; m_authKey = value; }

    
    inline void SetAuthKey(Aws::String&& value) { m_authKeyHasBeenSet = true; m_authKey = value; }

    
    inline void SetAuthKey(const char* value) { m_authKeyHasBeenSet = true; m_authKey.assign(value); }

    
    inline NewPrivateVirtualInterfaceAllocation& WithAuthKey(const Aws::String& value) { SetAuthKey(value); return *this;}

    
    inline NewPrivateVirtualInterfaceAllocation& WithAuthKey(Aws::String&& value) { SetAuthKey(value); return *this;}

    
    inline NewPrivateVirtualInterfaceAllocation& WithAuthKey(const char* value) { SetAuthKey(value); return *this;}

    
    inline const Aws::String& GetAmazonAddress() const{ return m_amazonAddress; }

    
    inline void SetAmazonAddress(const Aws::String& value) { m_amazonAddressHasBeenSet = true; m_amazonAddress = value; }

    
    inline void SetAmazonAddress(Aws::String&& value) { m_amazonAddressHasBeenSet = true; m_amazonAddress = value; }

    
    inline void SetAmazonAddress(const char* value) { m_amazonAddressHasBeenSet = true; m_amazonAddress.assign(value); }

    
    inline NewPrivateVirtualInterfaceAllocation& WithAmazonAddress(const Aws::String& value) { SetAmazonAddress(value); return *this;}

    
    inline NewPrivateVirtualInterfaceAllocation& WithAmazonAddress(Aws::String&& value) { SetAmazonAddress(value); return *this;}

    
    inline NewPrivateVirtualInterfaceAllocation& WithAmazonAddress(const char* value) { SetAmazonAddress(value); return *this;}

    
    inline const AddressFamily& GetAddressFamily() const{ return m_addressFamily; }

    
    inline void SetAddressFamily(const AddressFamily& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = value; }

    
    inline void SetAddressFamily(AddressFamily&& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = value; }

    
    inline NewPrivateVirtualInterfaceAllocation& WithAddressFamily(const AddressFamily& value) { SetAddressFamily(value); return *this;}

    
    inline NewPrivateVirtualInterfaceAllocation& WithAddressFamily(AddressFamily&& value) { SetAddressFamily(value); return *this;}

    
    inline const Aws::String& GetCustomerAddress() const{ return m_customerAddress; }

    
    inline void SetCustomerAddress(const Aws::String& value) { m_customerAddressHasBeenSet = true; m_customerAddress = value; }

    
    inline void SetCustomerAddress(Aws::String&& value) { m_customerAddressHasBeenSet = true; m_customerAddress = value; }

    
    inline void SetCustomerAddress(const char* value) { m_customerAddressHasBeenSet = true; m_customerAddress.assign(value); }

    
    inline NewPrivateVirtualInterfaceAllocation& WithCustomerAddress(const Aws::String& value) { SetCustomerAddress(value); return *this;}

    
    inline NewPrivateVirtualInterfaceAllocation& WithCustomerAddress(Aws::String&& value) { SetCustomerAddress(value); return *this;}

    
    inline NewPrivateVirtualInterfaceAllocation& WithCustomerAddress(const char* value) { SetCustomerAddress(value); return *this;}

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
    AddressFamily m_addressFamily;
    bool m_addressFamilyHasBeenSet;
    Aws::String m_customerAddress;
    bool m_customerAddressHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
