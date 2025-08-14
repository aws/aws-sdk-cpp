/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/AddressFamily.h>
#include <aws/directconnect/model/BGPPeerState.h>
#include <aws/directconnect/model/BGPStatus.h>
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
   * <p>Information about a BGP peer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/BGPPeer">AWS
   * API Reference</a></p>
   */
  class BGPPeer
  {
  public:
    AWS_DIRECTCONNECT_API BGPPeer() = default;
    AWS_DIRECTCONNECT_API BGPPeer(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API BGPPeer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the BGP peer.</p>
     */
    inline const Aws::String& GetBgpPeerId() const { return m_bgpPeerId; }
    inline bool BgpPeerIdHasBeenSet() const { return m_bgpPeerIdHasBeenSet; }
    template<typename BgpPeerIdT = Aws::String>
    void SetBgpPeerId(BgpPeerIdT&& value) { m_bgpPeerIdHasBeenSet = true; m_bgpPeerId = std::forward<BgpPeerIdT>(value); }
    template<typename BgpPeerIdT = Aws::String>
    BGPPeer& WithBgpPeerId(BgpPeerIdT&& value) { SetBgpPeerId(std::forward<BgpPeerIdT>(value)); return *this;}
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
    inline BGPPeer& WithAsn(int value) { SetAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The long ASN for the BGP peer. The valid range is from 1 to 4294967294 for
     * BGP configuration. </p>  <p>You can use <code>asnLong</code> or
     * <code>asn</code>, but not both. We recommend using <code>asnLong</code> as it
     * supports a greater pool of numbers. </p> <ul> <li> <p>The <code>asnLong</code>
     * attribute accepts both ASN and long ASN ranges.</p> </li> <li> <p>If you provide
     * a value in the same API call for both <code>asn</code> and <code>asnLong</code>,
     * the API will only accept the value for <code>asnLong</code>.</p> </li> </ul>
     * 
     */
    inline long long GetAsnLong() const { return m_asnLong; }
    inline bool AsnLongHasBeenSet() const { return m_asnLongHasBeenSet; }
    inline void SetAsnLong(long long value) { m_asnLongHasBeenSet = true; m_asnLong = value; }
    inline BGPPeer& WithAsnLong(long long value) { SetAsnLong(value); return *this;}
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
    BGPPeer& WithAuthKey(AuthKeyT&& value) { SetAuthKey(std::forward<AuthKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address family for the BGP peer.</p>
     */
    inline AddressFamily GetAddressFamily() const { return m_addressFamily; }
    inline bool AddressFamilyHasBeenSet() const { return m_addressFamilyHasBeenSet; }
    inline void SetAddressFamily(AddressFamily value) { m_addressFamilyHasBeenSet = true; m_addressFamily = value; }
    inline BGPPeer& WithAddressFamily(AddressFamily value) { SetAddressFamily(value); return *this;}
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
    BGPPeer& WithAmazonAddress(AmazonAddressT&& value) { SetAmazonAddress(std::forward<AmazonAddressT>(value)); return *this;}
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
    BGPPeer& WithCustomerAddress(CustomerAddressT&& value) { SetCustomerAddress(std::forward<CustomerAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the BGP peer. The following are the possible values:</p> <ul>
     * <li> <p> <code>verifying</code>: The BGP peering addresses or ASN require
     * validation before the BGP peer can be created. This state applies only to public
     * virtual interfaces.</p> </li> <li> <p> <code>pending</code>: The BGP peer is
     * created, and remains in this state until it is ready to be established.</p>
     * </li> <li> <p> <code>available</code>: The BGP peer is ready to be
     * established.</p> </li> <li> <p> <code>deleting</code>: The BGP peer is being
     * deleted.</p> </li> <li> <p> <code>deleted</code>: The BGP peer is deleted and
     * cannot be established.</p> </li> </ul>
     */
    inline BGPPeerState GetBgpPeerState() const { return m_bgpPeerState; }
    inline bool BgpPeerStateHasBeenSet() const { return m_bgpPeerStateHasBeenSet; }
    inline void SetBgpPeerState(BGPPeerState value) { m_bgpPeerStateHasBeenSet = true; m_bgpPeerState = value; }
    inline BGPPeer& WithBgpPeerState(BGPPeerState value) { SetBgpPeerState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the BGP peer. The following are the possible values:</p> <ul>
     * <li> <p> <code>up</code>: The BGP peer is established. This state does not
     * indicate the state of the routing function. Ensure that you are receiving routes
     * over the BGP session.</p> </li> <li> <p> <code>down</code>: The BGP peer is
     * down.</p> </li> <li> <p> <code>unknown</code>: The BGP peer status is not
     * available.</p> </li> </ul>
     */
    inline BGPStatus GetBgpStatus() const { return m_bgpStatus; }
    inline bool BgpStatusHasBeenSet() const { return m_bgpStatusHasBeenSet; }
    inline void SetBgpStatus(BGPStatus value) { m_bgpStatusHasBeenSet = true; m_bgpStatus = value; }
    inline BGPPeer& WithBgpStatus(BGPStatus value) { SetBgpStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Direct Connect endpoint that terminates the BGP peer.</p>
     */
    inline const Aws::String& GetAwsDeviceV2() const { return m_awsDeviceV2; }
    inline bool AwsDeviceV2HasBeenSet() const { return m_awsDeviceV2HasBeenSet; }
    template<typename AwsDeviceV2T = Aws::String>
    void SetAwsDeviceV2(AwsDeviceV2T&& value) { m_awsDeviceV2HasBeenSet = true; m_awsDeviceV2 = std::forward<AwsDeviceV2T>(value); }
    template<typename AwsDeviceV2T = Aws::String>
    BGPPeer& WithAwsDeviceV2(AwsDeviceV2T&& value) { SetAwsDeviceV2(std::forward<AwsDeviceV2T>(value)); return *this;}
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
    BGPPeer& WithAwsLogicalDeviceId(AwsLogicalDeviceIdT&& value) { SetAwsLogicalDeviceId(std::forward<AwsLogicalDeviceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bgpPeerId;
    bool m_bgpPeerIdHasBeenSet = false;

    int m_asn{0};
    bool m_asnHasBeenSet = false;

    long long m_asnLong{0};
    bool m_asnLongHasBeenSet = false;

    Aws::String m_authKey;
    bool m_authKeyHasBeenSet = false;

    AddressFamily m_addressFamily{AddressFamily::NOT_SET};
    bool m_addressFamilyHasBeenSet = false;

    Aws::String m_amazonAddress;
    bool m_amazonAddressHasBeenSet = false;

    Aws::String m_customerAddress;
    bool m_customerAddressHasBeenSet = false;

    BGPPeerState m_bgpPeerState{BGPPeerState::NOT_SET};
    bool m_bgpPeerStateHasBeenSet = false;

    BGPStatus m_bgpStatus{BGPStatus::NOT_SET};
    bool m_bgpStatusHasBeenSet = false;

    Aws::String m_awsDeviceV2;
    bool m_awsDeviceV2HasBeenSet = false;

    Aws::String m_awsLogicalDeviceId;
    bool m_awsLogicalDeviceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
