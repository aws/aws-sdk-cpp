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
    AWS_DIRECTCONNECT_API DeleteBGPPeerRequest();

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
    inline const Aws::String& GetVirtualInterfaceId() const{ return m_virtualInterfaceId; }
    inline bool VirtualInterfaceIdHasBeenSet() const { return m_virtualInterfaceIdHasBeenSet; }
    inline void SetVirtualInterfaceId(const Aws::String& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = value; }
    inline void SetVirtualInterfaceId(Aws::String&& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = std::move(value); }
    inline void SetVirtualInterfaceId(const char* value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId.assign(value); }
    inline DeleteBGPPeerRequest& WithVirtualInterfaceId(const Aws::String& value) { SetVirtualInterfaceId(value); return *this;}
    inline DeleteBGPPeerRequest& WithVirtualInterfaceId(Aws::String&& value) { SetVirtualInterfaceId(std::move(value)); return *this;}
    inline DeleteBGPPeerRequest& WithVirtualInterfaceId(const char* value) { SetVirtualInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The autonomous system (AS) number for Border Gateway Protocol (BGP)
     * configuration.</p>
     */
    inline int GetAsn() const{ return m_asn; }
    inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }
    inline void SetAsn(int value) { m_asnHasBeenSet = true; m_asn = value; }
    inline DeleteBGPPeerRequest& WithAsn(int value) { SetAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address assigned to the customer interface.</p>
     */
    inline const Aws::String& GetCustomerAddress() const{ return m_customerAddress; }
    inline bool CustomerAddressHasBeenSet() const { return m_customerAddressHasBeenSet; }
    inline void SetCustomerAddress(const Aws::String& value) { m_customerAddressHasBeenSet = true; m_customerAddress = value; }
    inline void SetCustomerAddress(Aws::String&& value) { m_customerAddressHasBeenSet = true; m_customerAddress = std::move(value); }
    inline void SetCustomerAddress(const char* value) { m_customerAddressHasBeenSet = true; m_customerAddress.assign(value); }
    inline DeleteBGPPeerRequest& WithCustomerAddress(const Aws::String& value) { SetCustomerAddress(value); return *this;}
    inline DeleteBGPPeerRequest& WithCustomerAddress(Aws::String&& value) { SetCustomerAddress(std::move(value)); return *this;}
    inline DeleteBGPPeerRequest& WithCustomerAddress(const char* value) { SetCustomerAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the BGP peer.</p>
     */
    inline const Aws::String& GetBgpPeerId() const{ return m_bgpPeerId; }
    inline bool BgpPeerIdHasBeenSet() const { return m_bgpPeerIdHasBeenSet; }
    inline void SetBgpPeerId(const Aws::String& value) { m_bgpPeerIdHasBeenSet = true; m_bgpPeerId = value; }
    inline void SetBgpPeerId(Aws::String&& value) { m_bgpPeerIdHasBeenSet = true; m_bgpPeerId = std::move(value); }
    inline void SetBgpPeerId(const char* value) { m_bgpPeerIdHasBeenSet = true; m_bgpPeerId.assign(value); }
    inline DeleteBGPPeerRequest& WithBgpPeerId(const Aws::String& value) { SetBgpPeerId(value); return *this;}
    inline DeleteBGPPeerRequest& WithBgpPeerId(Aws::String&& value) { SetBgpPeerId(std::move(value)); return *this;}
    inline DeleteBGPPeerRequest& WithBgpPeerId(const char* value) { SetBgpPeerId(value); return *this;}
    ///@}
  private:

    Aws::String m_virtualInterfaceId;
    bool m_virtualInterfaceIdHasBeenSet = false;

    int m_asn;
    bool m_asnHasBeenSet = false;

    Aws::String m_customerAddress;
    bool m_customerAddressHasBeenSet = false;

    Aws::String m_bgpPeerId;
    bool m_bgpPeerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
