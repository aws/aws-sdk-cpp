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
  class AWS_DIRECTCONNECT_API BGPPeer
  {
  public:
    BGPPeer();
    BGPPeer(Aws::Utils::Json::JsonView jsonValue);
    BGPPeer& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the BGP peer.</p>
     */
    inline const Aws::String& GetBgpPeerId() const{ return m_bgpPeerId; }

    /**
     * <p>The ID of the BGP peer.</p>
     */
    inline bool BgpPeerIdHasBeenSet() const { return m_bgpPeerIdHasBeenSet; }

    /**
     * <p>The ID of the BGP peer.</p>
     */
    inline void SetBgpPeerId(const Aws::String& value) { m_bgpPeerIdHasBeenSet = true; m_bgpPeerId = value; }

    /**
     * <p>The ID of the BGP peer.</p>
     */
    inline void SetBgpPeerId(Aws::String&& value) { m_bgpPeerIdHasBeenSet = true; m_bgpPeerId = std::move(value); }

    /**
     * <p>The ID of the BGP peer.</p>
     */
    inline void SetBgpPeerId(const char* value) { m_bgpPeerIdHasBeenSet = true; m_bgpPeerId.assign(value); }

    /**
     * <p>The ID of the BGP peer.</p>
     */
    inline BGPPeer& WithBgpPeerId(const Aws::String& value) { SetBgpPeerId(value); return *this;}

    /**
     * <p>The ID of the BGP peer.</p>
     */
    inline BGPPeer& WithBgpPeerId(Aws::String&& value) { SetBgpPeerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the BGP peer.</p>
     */
    inline BGPPeer& WithBgpPeerId(const char* value) { SetBgpPeerId(value); return *this;}


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
    inline BGPPeer& WithAsn(int value) { SetAsn(value); return *this;}


    /**
     * <p>The authentication key for BGP configuration. This string has a minimum
     * length of 6 characters and and a maximun lenth of 80 characters.</p>
     */
    inline const Aws::String& GetAuthKey() const{ return m_authKey; }

    /**
     * <p>The authentication key for BGP configuration. This string has a minimum
     * length of 6 characters and and a maximun lenth of 80 characters.</p>
     */
    inline bool AuthKeyHasBeenSet() const { return m_authKeyHasBeenSet; }

    /**
     * <p>The authentication key for BGP configuration. This string has a minimum
     * length of 6 characters and and a maximun lenth of 80 characters.</p>
     */
    inline void SetAuthKey(const Aws::String& value) { m_authKeyHasBeenSet = true; m_authKey = value; }

    /**
     * <p>The authentication key for BGP configuration. This string has a minimum
     * length of 6 characters and and a maximun lenth of 80 characters.</p>
     */
    inline void SetAuthKey(Aws::String&& value) { m_authKeyHasBeenSet = true; m_authKey = std::move(value); }

    /**
     * <p>The authentication key for BGP configuration. This string has a minimum
     * length of 6 characters and and a maximun lenth of 80 characters.</p>
     */
    inline void SetAuthKey(const char* value) { m_authKeyHasBeenSet = true; m_authKey.assign(value); }

    /**
     * <p>The authentication key for BGP configuration. This string has a minimum
     * length of 6 characters and and a maximun lenth of 80 characters.</p>
     */
    inline BGPPeer& WithAuthKey(const Aws::String& value) { SetAuthKey(value); return *this;}

    /**
     * <p>The authentication key for BGP configuration. This string has a minimum
     * length of 6 characters and and a maximun lenth of 80 characters.</p>
     */
    inline BGPPeer& WithAuthKey(Aws::String&& value) { SetAuthKey(std::move(value)); return *this;}

    /**
     * <p>The authentication key for BGP configuration. This string has a minimum
     * length of 6 characters and and a maximun lenth of 80 characters.</p>
     */
    inline BGPPeer& WithAuthKey(const char* value) { SetAuthKey(value); return *this;}


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
    inline BGPPeer& WithAddressFamily(const AddressFamily& value) { SetAddressFamily(value); return *this;}

    /**
     * <p>The address family for the BGP peer.</p>
     */
    inline BGPPeer& WithAddressFamily(AddressFamily&& value) { SetAddressFamily(std::move(value)); return *this;}


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
    inline BGPPeer& WithAmazonAddress(const Aws::String& value) { SetAmazonAddress(value); return *this;}

    /**
     * <p>The IP address assigned to the Amazon interface.</p>
     */
    inline BGPPeer& WithAmazonAddress(Aws::String&& value) { SetAmazonAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address assigned to the Amazon interface.</p>
     */
    inline BGPPeer& WithAmazonAddress(const char* value) { SetAmazonAddress(value); return *this;}


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
    inline BGPPeer& WithCustomerAddress(const Aws::String& value) { SetCustomerAddress(value); return *this;}

    /**
     * <p>The IP address assigned to the customer interface.</p>
     */
    inline BGPPeer& WithCustomerAddress(Aws::String&& value) { SetCustomerAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address assigned to the customer interface.</p>
     */
    inline BGPPeer& WithCustomerAddress(const char* value) { SetCustomerAddress(value); return *this;}


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
    inline const BGPPeerState& GetBgpPeerState() const{ return m_bgpPeerState; }

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
    inline bool BgpPeerStateHasBeenSet() const { return m_bgpPeerStateHasBeenSet; }

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
    inline void SetBgpPeerState(const BGPPeerState& value) { m_bgpPeerStateHasBeenSet = true; m_bgpPeerState = value; }

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
    inline void SetBgpPeerState(BGPPeerState&& value) { m_bgpPeerStateHasBeenSet = true; m_bgpPeerState = std::move(value); }

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
    inline BGPPeer& WithBgpPeerState(const BGPPeerState& value) { SetBgpPeerState(value); return *this;}

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
    inline BGPPeer& WithBgpPeerState(BGPPeerState&& value) { SetBgpPeerState(std::move(value)); return *this;}


    /**
     * <p>The status of the BGP peer. The following are the possible values:</p> <ul>
     * <li> <p> <code>up</code>: The BGP peer is established. This state does not
     * indicate the state of the routing function. Ensure that you are receiving routes
     * over the BGP session.</p> </li> <li> <p> <code>down</code>: The BGP peer is
     * down.</p> </li> <li> <p> <code>unknown</code>: The BGP peer status is not
     * available.</p> </li> </ul>
     */
    inline const BGPStatus& GetBgpStatus() const{ return m_bgpStatus; }

    /**
     * <p>The status of the BGP peer. The following are the possible values:</p> <ul>
     * <li> <p> <code>up</code>: The BGP peer is established. This state does not
     * indicate the state of the routing function. Ensure that you are receiving routes
     * over the BGP session.</p> </li> <li> <p> <code>down</code>: The BGP peer is
     * down.</p> </li> <li> <p> <code>unknown</code>: The BGP peer status is not
     * available.</p> </li> </ul>
     */
    inline bool BgpStatusHasBeenSet() const { return m_bgpStatusHasBeenSet; }

    /**
     * <p>The status of the BGP peer. The following are the possible values:</p> <ul>
     * <li> <p> <code>up</code>: The BGP peer is established. This state does not
     * indicate the state of the routing function. Ensure that you are receiving routes
     * over the BGP session.</p> </li> <li> <p> <code>down</code>: The BGP peer is
     * down.</p> </li> <li> <p> <code>unknown</code>: The BGP peer status is not
     * available.</p> </li> </ul>
     */
    inline void SetBgpStatus(const BGPStatus& value) { m_bgpStatusHasBeenSet = true; m_bgpStatus = value; }

    /**
     * <p>The status of the BGP peer. The following are the possible values:</p> <ul>
     * <li> <p> <code>up</code>: The BGP peer is established. This state does not
     * indicate the state of the routing function. Ensure that you are receiving routes
     * over the BGP session.</p> </li> <li> <p> <code>down</code>: The BGP peer is
     * down.</p> </li> <li> <p> <code>unknown</code>: The BGP peer status is not
     * available.</p> </li> </ul>
     */
    inline void SetBgpStatus(BGPStatus&& value) { m_bgpStatusHasBeenSet = true; m_bgpStatus = std::move(value); }

    /**
     * <p>The status of the BGP peer. The following are the possible values:</p> <ul>
     * <li> <p> <code>up</code>: The BGP peer is established. This state does not
     * indicate the state of the routing function. Ensure that you are receiving routes
     * over the BGP session.</p> </li> <li> <p> <code>down</code>: The BGP peer is
     * down.</p> </li> <li> <p> <code>unknown</code>: The BGP peer status is not
     * available.</p> </li> </ul>
     */
    inline BGPPeer& WithBgpStatus(const BGPStatus& value) { SetBgpStatus(value); return *this;}

    /**
     * <p>The status of the BGP peer. The following are the possible values:</p> <ul>
     * <li> <p> <code>up</code>: The BGP peer is established. This state does not
     * indicate the state of the routing function. Ensure that you are receiving routes
     * over the BGP session.</p> </li> <li> <p> <code>down</code>: The BGP peer is
     * down.</p> </li> <li> <p> <code>unknown</code>: The BGP peer status is not
     * available.</p> </li> </ul>
     */
    inline BGPPeer& WithBgpStatus(BGPStatus&& value) { SetBgpStatus(std::move(value)); return *this;}


    /**
     * <p>The Direct Connect endpoint on which the BGP peer terminates.</p>
     */
    inline const Aws::String& GetAwsDeviceV2() const{ return m_awsDeviceV2; }

    /**
     * <p>The Direct Connect endpoint on which the BGP peer terminates.</p>
     */
    inline bool AwsDeviceV2HasBeenSet() const { return m_awsDeviceV2HasBeenSet; }

    /**
     * <p>The Direct Connect endpoint on which the BGP peer terminates.</p>
     */
    inline void SetAwsDeviceV2(const Aws::String& value) { m_awsDeviceV2HasBeenSet = true; m_awsDeviceV2 = value; }

    /**
     * <p>The Direct Connect endpoint on which the BGP peer terminates.</p>
     */
    inline void SetAwsDeviceV2(Aws::String&& value) { m_awsDeviceV2HasBeenSet = true; m_awsDeviceV2 = std::move(value); }

    /**
     * <p>The Direct Connect endpoint on which the BGP peer terminates.</p>
     */
    inline void SetAwsDeviceV2(const char* value) { m_awsDeviceV2HasBeenSet = true; m_awsDeviceV2.assign(value); }

    /**
     * <p>The Direct Connect endpoint on which the BGP peer terminates.</p>
     */
    inline BGPPeer& WithAwsDeviceV2(const Aws::String& value) { SetAwsDeviceV2(value); return *this;}

    /**
     * <p>The Direct Connect endpoint on which the BGP peer terminates.</p>
     */
    inline BGPPeer& WithAwsDeviceV2(Aws::String&& value) { SetAwsDeviceV2(std::move(value)); return *this;}

    /**
     * <p>The Direct Connect endpoint on which the BGP peer terminates.</p>
     */
    inline BGPPeer& WithAwsDeviceV2(const char* value) { SetAwsDeviceV2(value); return *this;}

  private:

    Aws::String m_bgpPeerId;
    bool m_bgpPeerIdHasBeenSet;

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

    BGPPeerState m_bgpPeerState;
    bool m_bgpPeerStateHasBeenSet;

    BGPStatus m_bgpStatus;
    bool m_bgpStatusHasBeenSet;

    Aws::String m_awsDeviceV2;
    bool m_awsDeviceV2HasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
