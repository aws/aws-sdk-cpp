/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/AddressFamily.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/RouteFilterPrefix.h>
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
   * <p>Information about a public virtual interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/NewPublicVirtualInterface">AWS
   * API Reference</a></p>
   */
  class NewPublicVirtualInterface
  {
  public:
    AWS_DIRECTCONNECT_API NewPublicVirtualInterface() = default;
    AWS_DIRECTCONNECT_API NewPublicVirtualInterface(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API NewPublicVirtualInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    NewPublicVirtualInterface& WithVirtualInterfaceName(VirtualInterfaceNameT&& value) { SetVirtualInterfaceName(std::forward<VirtualInterfaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VLAN.</p>
     */
    inline int GetVlan() const { return m_vlan; }
    inline bool VlanHasBeenSet() const { return m_vlanHasBeenSet; }
    inline void SetVlan(int value) { m_vlanHasBeenSet = true; m_vlan = value; }
    inline NewPublicVirtualInterface& WithVlan(int value) { SetVlan(value); return *this;}
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
    inline NewPublicVirtualInterface& WithAsn(int value) { SetAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The long ASN for a new public virtual interface. The valid range is from 1 to
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
    inline NewPublicVirtualInterface& WithAsnLong(long long value) { SetAsnLong(value); return *this;}
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
    NewPublicVirtualInterface& WithAuthKey(AuthKeyT&& value) { SetAuthKey(std::forward<AuthKeyT>(value)); return *this;}
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
    NewPublicVirtualInterface& WithAmazonAddress(AmazonAddressT&& value) { SetAmazonAddress(std::forward<AmazonAddressT>(value)); return *this;}
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
    NewPublicVirtualInterface& WithCustomerAddress(CustomerAddressT&& value) { SetCustomerAddress(std::forward<CustomerAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address family for the BGP peer.</p>
     */
    inline AddressFamily GetAddressFamily() const { return m_addressFamily; }
    inline bool AddressFamilyHasBeenSet() const { return m_addressFamilyHasBeenSet; }
    inline void SetAddressFamily(AddressFamily value) { m_addressFamilyHasBeenSet = true; m_addressFamily = value; }
    inline NewPublicVirtualInterface& WithAddressFamily(AddressFamily value) { SetAddressFamily(value); return *this;}
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
    NewPublicVirtualInterface& WithRouteFilterPrefixes(RouteFilterPrefixesT&& value) { SetRouteFilterPrefixes(std::forward<RouteFilterPrefixesT>(value)); return *this;}
    template<typename RouteFilterPrefixesT = RouteFilterPrefix>
    NewPublicVirtualInterface& AddRouteFilterPrefixes(RouteFilterPrefixesT&& value) { m_routeFilterPrefixesHasBeenSet = true; m_routeFilterPrefixes.emplace_back(std::forward<RouteFilterPrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags associated with the public virtual interface.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    NewPublicVirtualInterface& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    NewPublicVirtualInterface& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_virtualInterfaceName;
    bool m_virtualInterfaceNameHasBeenSet = false;

    int m_vlan{0};
    bool m_vlanHasBeenSet = false;

    int m_asn{0};
    bool m_asnHasBeenSet = false;

    long long m_asnLong{0};
    bool m_asnLongHasBeenSet = false;

    Aws::String m_authKey;
    bool m_authKeyHasBeenSet = false;

    Aws::String m_amazonAddress;
    bool m_amazonAddressHasBeenSet = false;

    Aws::String m_customerAddress;
    bool m_customerAddressHasBeenSet = false;

    AddressFamily m_addressFamily{AddressFamily::NOT_SET};
    bool m_addressFamilyHasBeenSet = false;

    Aws::Vector<RouteFilterPrefix> m_routeFilterPrefixes;
    bool m_routeFilterPrefixesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
