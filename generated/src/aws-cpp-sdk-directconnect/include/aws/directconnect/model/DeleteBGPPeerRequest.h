/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class DeleteBGPPeerRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API DeleteBGPPeerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBGPPeer"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline const Aws::String& GetVirtualInterfaceId() const { return m_virtualInterfaceId; }
    inline bool VirtualInterfaceIdHasBeenSet() const { return m_virtualInterfaceIdHasBeenSet; }
    template<typename VirtualInterfaceIdT = Aws::String>
    void SetVirtualInterfaceId(VirtualInterfaceIdT&& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = std::forward<VirtualInterfaceIdT>(value); }
    template<typename VirtualInterfaceIdT = Aws::String>
    DeleteBGPPeerRequest& WithVirtualInterfaceId(VirtualInterfaceIdT&& value) { SetVirtualInterfaceId(std::forward<VirtualInterfaceIdT>(value)); return *this;}
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
    inline DeleteBGPPeerRequest& WithAsn(int value) { SetAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The long ASN for the BGP peer to be deleted from a Direct Connect virtual
     * interface. The valid range is from 1 to 4294967294 for BGP configuration. </p>
     *  <p>You can use <code>asnLong</code> or <code>asn</code>, but not both. We
     * recommend using <code>asnLong</code> as it supports a greater pool of numbers.
     * </p> <ul> <li> <p>The <code>asnLong</code> attribute accepts both ASN and long
     * ASN ranges.</p> </li> <li> <p>If you provide a value in the same API call for
     * both <code>asn</code> and <code>asnLong</code>, the API will only accept the
     * value for <code>asnLong</code>.</p> </li> </ul> 
     */
    inline long long GetAsnLong() const { return m_asnLong; }
    inline bool AsnLongHasBeenSet() const { return m_asnLongHasBeenSet; }
    inline void SetAsnLong(long long value) { m_asnLongHasBeenSet = true; m_asnLong = value; }
    inline DeleteBGPPeerRequest& WithAsnLong(long long value) { SetAsnLong(value); return *this;}
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
    DeleteBGPPeerRequest& WithCustomerAddress(CustomerAddressT&& value) { SetCustomerAddress(std::forward<CustomerAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the BGP peer.</p>
     */
    inline const Aws::String& GetBgpPeerId() const { return m_bgpPeerId; }
    inline bool BgpPeerIdHasBeenSet() const { return m_bgpPeerIdHasBeenSet; }
    template<typename BgpPeerIdT = Aws::String>
    void SetBgpPeerId(BgpPeerIdT&& value) { m_bgpPeerIdHasBeenSet = true; m_bgpPeerId = std::forward<BgpPeerIdT>(value); }
    template<typename BgpPeerIdT = Aws::String>
    DeleteBGPPeerRequest& WithBgpPeerId(BgpPeerIdT&& value) { SetBgpPeerId(std::forward<BgpPeerIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_virtualInterfaceId;
    bool m_virtualInterfaceIdHasBeenSet = false;

    int m_asn{0};
    bool m_asnHasBeenSet = false;

    long long m_asnLong{0};
    bool m_asnLongHasBeenSet = false;

    Aws::String m_customerAddress;
    bool m_customerAddressHasBeenSet = false;

    Aws::String m_bgpPeerId;
    bool m_bgpPeerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
