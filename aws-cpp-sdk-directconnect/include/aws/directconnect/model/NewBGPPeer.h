/*
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
#include <utility>

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
   * <p>A structure containing information about a new BGP peer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/NewBGPPeer">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API NewBGPPeer
  {
  public:
    NewBGPPeer();
    NewBGPPeer(const Aws::Utils::Json::JsonValue& jsonValue);
    NewBGPPeer& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline int GetAsn() const{ return m_asn; }

    
    inline void SetAsn(int value) { m_asnHasBeenSet = true; m_asn = value; }

    
    inline NewBGPPeer& WithAsn(int value) { SetAsn(value); return *this;}

    
    inline const Aws::String& GetAuthKey() const{ return m_authKey; }

    
    inline void SetAuthKey(const Aws::String& value) { m_authKeyHasBeenSet = true; m_authKey = value; }

    
    inline void SetAuthKey(Aws::String&& value) { m_authKeyHasBeenSet = true; m_authKey = std::move(value); }

    
    inline void SetAuthKey(const char* value) { m_authKeyHasBeenSet = true; m_authKey.assign(value); }

    
    inline NewBGPPeer& WithAuthKey(const Aws::String& value) { SetAuthKey(value); return *this;}

    
    inline NewBGPPeer& WithAuthKey(Aws::String&& value) { SetAuthKey(std::move(value)); return *this;}

    
    inline NewBGPPeer& WithAuthKey(const char* value) { SetAuthKey(value); return *this;}

    
    inline const AddressFamily& GetAddressFamily() const{ return m_addressFamily; }

    
    inline void SetAddressFamily(const AddressFamily& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = value; }

    
    inline void SetAddressFamily(AddressFamily&& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = std::move(value); }

    
    inline NewBGPPeer& WithAddressFamily(const AddressFamily& value) { SetAddressFamily(value); return *this;}

    
    inline NewBGPPeer& WithAddressFamily(AddressFamily&& value) { SetAddressFamily(std::move(value)); return *this;}

    
    inline const Aws::String& GetAmazonAddress() const{ return m_amazonAddress; }

    
    inline void SetAmazonAddress(const Aws::String& value) { m_amazonAddressHasBeenSet = true; m_amazonAddress = value; }

    
    inline void SetAmazonAddress(Aws::String&& value) { m_amazonAddressHasBeenSet = true; m_amazonAddress = std::move(value); }

    
    inline void SetAmazonAddress(const char* value) { m_amazonAddressHasBeenSet = true; m_amazonAddress.assign(value); }

    
    inline NewBGPPeer& WithAmazonAddress(const Aws::String& value) { SetAmazonAddress(value); return *this;}

    
    inline NewBGPPeer& WithAmazonAddress(Aws::String&& value) { SetAmazonAddress(std::move(value)); return *this;}

    
    inline NewBGPPeer& WithAmazonAddress(const char* value) { SetAmazonAddress(value); return *this;}

    
    inline const Aws::String& GetCustomerAddress() const{ return m_customerAddress; }

    
    inline void SetCustomerAddress(const Aws::String& value) { m_customerAddressHasBeenSet = true; m_customerAddress = value; }

    
    inline void SetCustomerAddress(Aws::String&& value) { m_customerAddressHasBeenSet = true; m_customerAddress = std::move(value); }

    
    inline void SetCustomerAddress(const char* value) { m_customerAddressHasBeenSet = true; m_customerAddress.assign(value); }

    
    inline NewBGPPeer& WithCustomerAddress(const Aws::String& value) { SetCustomerAddress(value); return *this;}

    
    inline NewBGPPeer& WithCustomerAddress(Aws::String&& value) { SetCustomerAddress(std::move(value)); return *this;}

    
    inline NewBGPPeer& WithCustomerAddress(const char* value) { SetCustomerAddress(value); return *this;}

  private:
    int m_asn;
    bool m_asnHasBeenSet;
    Aws::String m_authKey;
    bool m_authKeyHasBeenSet;
    AddressFamily m_addressFamily;
    bool m_addressFamilyHasBeenSet;
    Aws::String m_amazonAddress;
    bool m_amazonAddressHasBeenSet;
    Aws::String m_customerAddress;
    bool m_customerAddressHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
