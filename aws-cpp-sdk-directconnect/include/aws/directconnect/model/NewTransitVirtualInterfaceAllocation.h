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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Information about a transit virtual interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/NewTransitVirtualInterfaceAllocation">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API NewTransitVirtualInterfaceAllocation
  {
  public:
    NewTransitVirtualInterfaceAllocation();
    NewTransitVirtualInterfaceAllocation(Aws::Utils::Json::JsonView jsonValue);
    NewTransitVirtualInterfaceAllocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the virtual interface assigned by the customer network.</p>
     */
    inline const Aws::String& GetVirtualInterfaceName() const{ return m_virtualInterfaceName; }

    /**
     * <p>The name of the virtual interface assigned by the customer network.</p>
     */
    inline bool VirtualInterfaceNameHasBeenSet() const { return m_virtualInterfaceNameHasBeenSet; }

    /**
     * <p>The name of the virtual interface assigned by the customer network.</p>
     */
    inline void SetVirtualInterfaceName(const Aws::String& value) { m_virtualInterfaceNameHasBeenSet = true; m_virtualInterfaceName = value; }

    /**
     * <p>The name of the virtual interface assigned by the customer network.</p>
     */
    inline void SetVirtualInterfaceName(Aws::String&& value) { m_virtualInterfaceNameHasBeenSet = true; m_virtualInterfaceName = std::move(value); }

    /**
     * <p>The name of the virtual interface assigned by the customer network.</p>
     */
    inline void SetVirtualInterfaceName(const char* value) { m_virtualInterfaceNameHasBeenSet = true; m_virtualInterfaceName.assign(value); }

    /**
     * <p>The name of the virtual interface assigned by the customer network.</p>
     */
    inline NewTransitVirtualInterfaceAllocation& WithVirtualInterfaceName(const Aws::String& value) { SetVirtualInterfaceName(value); return *this;}

    /**
     * <p>The name of the virtual interface assigned by the customer network.</p>
     */
    inline NewTransitVirtualInterfaceAllocation& WithVirtualInterfaceName(Aws::String&& value) { SetVirtualInterfaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the virtual interface assigned by the customer network.</p>
     */
    inline NewTransitVirtualInterfaceAllocation& WithVirtualInterfaceName(const char* value) { SetVirtualInterfaceName(value); return *this;}


    /**
     * <p>The ID of the VLAN.</p>
     */
    inline int GetVlan() const{ return m_vlan; }

    /**
     * <p>The ID of the VLAN.</p>
     */
    inline bool VlanHasBeenSet() const { return m_vlanHasBeenSet; }

    /**
     * <p>The ID of the VLAN.</p>
     */
    inline void SetVlan(int value) { m_vlanHasBeenSet = true; m_vlan = value; }

    /**
     * <p>The ID of the VLAN.</p>
     */
    inline NewTransitVirtualInterfaceAllocation& WithVlan(int value) { SetVlan(value); return *this;}


    /**
     * <p>The autonomous system (AS) number for Border Gateway Protocol (BGP)
     * configuration.</p>
     */
    inline int GetAsn() const{ return m_asn; }

    /**
     * <p>The autonomous system (AS) number for Border Gateway Protocol (BGP)
     * configuration.</p>
     */
    inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }

    /**
     * <p>The autonomous system (AS) number for Border Gateway Protocol (BGP)
     * configuration.</p>
     */
    inline void SetAsn(int value) { m_asnHasBeenSet = true; m_asn = value; }

    /**
     * <p>The autonomous system (AS) number for Border Gateway Protocol (BGP)
     * configuration.</p>
     */
    inline NewTransitVirtualInterfaceAllocation& WithAsn(int value) { SetAsn(value); return *this;}


    /**
     * <p>The maximum transmission unit (MTU), in bytes. The supported values are 1500
     * and 8500. The default value is 1500. </p>
     */
    inline int GetMtu() const{ return m_mtu; }

    /**
     * <p>The maximum transmission unit (MTU), in bytes. The supported values are 1500
     * and 8500. The default value is 1500. </p>
     */
    inline bool MtuHasBeenSet() const { return m_mtuHasBeenSet; }

    /**
     * <p>The maximum transmission unit (MTU), in bytes. The supported values are 1500
     * and 8500. The default value is 1500. </p>
     */
    inline void SetMtu(int value) { m_mtuHasBeenSet = true; m_mtu = value; }

    /**
     * <p>The maximum transmission unit (MTU), in bytes. The supported values are 1500
     * and 8500. The default value is 1500. </p>
     */
    inline NewTransitVirtualInterfaceAllocation& WithMtu(int value) { SetMtu(value); return *this;}


    /**
     * <p>The authentication key for BGP configuration.</p>
     */
    inline const Aws::String& GetAuthKey() const{ return m_authKey; }

    /**
     * <p>The authentication key for BGP configuration.</p>
     */
    inline bool AuthKeyHasBeenSet() const { return m_authKeyHasBeenSet; }

    /**
     * <p>The authentication key for BGP configuration.</p>
     */
    inline void SetAuthKey(const Aws::String& value) { m_authKeyHasBeenSet = true; m_authKey = value; }

    /**
     * <p>The authentication key for BGP configuration.</p>
     */
    inline void SetAuthKey(Aws::String&& value) { m_authKeyHasBeenSet = true; m_authKey = std::move(value); }

    /**
     * <p>The authentication key for BGP configuration.</p>
     */
    inline void SetAuthKey(const char* value) { m_authKeyHasBeenSet = true; m_authKey.assign(value); }

    /**
     * <p>The authentication key for BGP configuration.</p>
     */
    inline NewTransitVirtualInterfaceAllocation& WithAuthKey(const Aws::String& value) { SetAuthKey(value); return *this;}

    /**
     * <p>The authentication key for BGP configuration.</p>
     */
    inline NewTransitVirtualInterfaceAllocation& WithAuthKey(Aws::String&& value) { SetAuthKey(std::move(value)); return *this;}

    /**
     * <p>The authentication key for BGP configuration.</p>
     */
    inline NewTransitVirtualInterfaceAllocation& WithAuthKey(const char* value) { SetAuthKey(value); return *this;}


    /**
     * <p>The IP address assigned to the Amazon interface.</p>
     */
    inline const Aws::String& GetAmazonAddress() const{ return m_amazonAddress; }

    /**
     * <p>The IP address assigned to the Amazon interface.</p>
     */
    inline bool AmazonAddressHasBeenSet() const { return m_amazonAddressHasBeenSet; }

    /**
     * <p>The IP address assigned to the Amazon interface.</p>
     */
    inline void SetAmazonAddress(const Aws::String& value) { m_amazonAddressHasBeenSet = true; m_amazonAddress = value; }

    /**
     * <p>The IP address assigned to the Amazon interface.</p>
     */
    inline void SetAmazonAddress(Aws::String&& value) { m_amazonAddressHasBeenSet = true; m_amazonAddress = std::move(value); }

    /**
     * <p>The IP address assigned to the Amazon interface.</p>
     */
    inline void SetAmazonAddress(const char* value) { m_amazonAddressHasBeenSet = true; m_amazonAddress.assign(value); }

    /**
     * <p>The IP address assigned to the Amazon interface.</p>
     */
    inline NewTransitVirtualInterfaceAllocation& WithAmazonAddress(const Aws::String& value) { SetAmazonAddress(value); return *this;}

    /**
     * <p>The IP address assigned to the Amazon interface.</p>
     */
    inline NewTransitVirtualInterfaceAllocation& WithAmazonAddress(Aws::String&& value) { SetAmazonAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address assigned to the Amazon interface.</p>
     */
    inline NewTransitVirtualInterfaceAllocation& WithAmazonAddress(const char* value) { SetAmazonAddress(value); return *this;}


    /**
     * <p>The IP address assigned to the customer interface.</p>
     */
    inline const Aws::String& GetCustomerAddress() const{ return m_customerAddress; }

    /**
     * <p>The IP address assigned to the customer interface.</p>
     */
    inline bool CustomerAddressHasBeenSet() const { return m_customerAddressHasBeenSet; }

    /**
     * <p>The IP address assigned to the customer interface.</p>
     */
    inline void SetCustomerAddress(const Aws::String& value) { m_customerAddressHasBeenSet = true; m_customerAddress = value; }

    /**
     * <p>The IP address assigned to the customer interface.</p>
     */
    inline void SetCustomerAddress(Aws::String&& value) { m_customerAddressHasBeenSet = true; m_customerAddress = std::move(value); }

    /**
     * <p>The IP address assigned to the customer interface.</p>
     */
    inline void SetCustomerAddress(const char* value) { m_customerAddressHasBeenSet = true; m_customerAddress.assign(value); }

    /**
     * <p>The IP address assigned to the customer interface.</p>
     */
    inline NewTransitVirtualInterfaceAllocation& WithCustomerAddress(const Aws::String& value) { SetCustomerAddress(value); return *this;}

    /**
     * <p>The IP address assigned to the customer interface.</p>
     */
    inline NewTransitVirtualInterfaceAllocation& WithCustomerAddress(Aws::String&& value) { SetCustomerAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address assigned to the customer interface.</p>
     */
    inline NewTransitVirtualInterfaceAllocation& WithCustomerAddress(const char* value) { SetCustomerAddress(value); return *this;}


    /**
     * <p>The address family for the BGP peer.</p>
     */
    inline const AddressFamily& GetAddressFamily() const{ return m_addressFamily; }

    /**
     * <p>The address family for the BGP peer.</p>
     */
    inline bool AddressFamilyHasBeenSet() const { return m_addressFamilyHasBeenSet; }

    /**
     * <p>The address family for the BGP peer.</p>
     */
    inline void SetAddressFamily(const AddressFamily& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = value; }

    /**
     * <p>The address family for the BGP peer.</p>
     */
    inline void SetAddressFamily(AddressFamily&& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = std::move(value); }

    /**
     * <p>The address family for the BGP peer.</p>
     */
    inline NewTransitVirtualInterfaceAllocation& WithAddressFamily(const AddressFamily& value) { SetAddressFamily(value); return *this;}

    /**
     * <p>The address family for the BGP peer.</p>
     */
    inline NewTransitVirtualInterfaceAllocation& WithAddressFamily(AddressFamily&& value) { SetAddressFamily(std::move(value)); return *this;}


    /**
     * <p>Any tags assigned to the transit virtual interface.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the transit virtual interface.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Any tags assigned to the transit virtual interface.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the transit virtual interface.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the transit virtual interface.</p>
     */
    inline NewTransitVirtualInterfaceAllocation& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the transit virtual interface.</p>
     */
    inline NewTransitVirtualInterfaceAllocation& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the transit virtual interface.</p>
     */
    inline NewTransitVirtualInterfaceAllocation& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the transit virtual interface.</p>
     */
    inline NewTransitVirtualInterfaceAllocation& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_virtualInterfaceName;
    bool m_virtualInterfaceNameHasBeenSet;

    int m_vlan;
    bool m_vlanHasBeenSet;

    int m_asn;
    bool m_asnHasBeenSet;

    int m_mtu;
    bool m_mtuHasBeenSet;

    Aws::String m_authKey;
    bool m_authKeyHasBeenSet;

    Aws::String m_amazonAddress;
    bool m_amazonAddressHasBeenSet;

    Aws::String m_customerAddress;
    bool m_customerAddressHasBeenSet;

    AddressFamily m_addressFamily;
    bool m_addressFamilyHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
