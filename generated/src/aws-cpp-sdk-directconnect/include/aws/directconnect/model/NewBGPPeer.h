/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Information about a new BGP peer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/NewBGPPeer">AWS
   * API Reference</a></p>
   */
  class NewBGPPeer
  {
  public:
    AWS_DIRECTCONNECT_API NewBGPPeer() = default;
    AWS_DIRECTCONNECT_API NewBGPPeer(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API NewBGPPeer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The autonomous system number (ASN). The valid range is from 1 to 2147483646
     * for Border Gateway Protocol (BGP) configuration. If you provide a number greater
     * than the maximum, an error is returned. Use <code>asnLong</code> instead.</p>
     */
    inline int GetAsn() const { return m_asn; }
    inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }
    inline void SetAsn(int value) { m_asnHasBeenSet = true; m_asn = value; }
    inline NewBGPPeer& WithAsn(int value) { SetAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The long ASN for a new BGP peer. The valid range is from 1 to 4294967294.</p>
     */
    inline long long GetAsnLong() const { return m_asnLong; }
    inline bool AsnLongHasBeenSet() const { return m_asnLongHasBeenSet; }
    inline void SetAsnLong(long long value) { m_asnLongHasBeenSet = true; m_asnLong = value; }
    inline NewBGPPeer& WithAsnLong(long long value) { SetAsnLong(value); return *this;}
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
    NewBGPPeer& WithAuthKey(AuthKeyT&& value) { SetAuthKey(std::forward<AuthKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address family for the BGP peer.</p>
     */
    inline AddressFamily GetAddressFamily() const { return m_addressFamily; }
    inline bool AddressFamilyHasBeenSet() const { return m_addressFamilyHasBeenSet; }
    inline void SetAddressFamily(AddressFamily value) { m_addressFamilyHasBeenSet = true; m_addressFamily = value; }
    inline NewBGPPeer& WithAddressFamily(AddressFamily value) { SetAddressFamily(value); return *this;}
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
    NewBGPPeer& WithAmazonAddress(AmazonAddressT&& value) { SetAmazonAddress(std::forward<AmazonAddressT>(value)); return *this;}
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
    NewBGPPeer& WithCustomerAddress(CustomerAddressT&& value) { SetCustomerAddress(std::forward<CustomerAddressT>(value)); return *this;}
    ///@}
  private:

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
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
