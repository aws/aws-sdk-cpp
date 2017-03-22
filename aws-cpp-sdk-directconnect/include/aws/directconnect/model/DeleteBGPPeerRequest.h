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
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Container for the parameters to the DeleteBGPPeer operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteBGPPeerRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API DeleteBGPPeerRequest : public DirectConnectRequest
  {
  public:
    DeleteBGPPeerRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the virtual interface from which the BGP peer will be deleted.</p>
     * <p>Example: dxvif-456abc78</p> <p>Default: None</p>
     */
    inline const Aws::String& GetVirtualInterfaceId() const{ return m_virtualInterfaceId; }

    /**
     * <p>The ID of the virtual interface from which the BGP peer will be deleted.</p>
     * <p>Example: dxvif-456abc78</p> <p>Default: None</p>
     */
    inline void SetVirtualInterfaceId(const Aws::String& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = value; }

    /**
     * <p>The ID of the virtual interface from which the BGP peer will be deleted.</p>
     * <p>Example: dxvif-456abc78</p> <p>Default: None</p>
     */
    inline void SetVirtualInterfaceId(Aws::String&& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = value; }

    /**
     * <p>The ID of the virtual interface from which the BGP peer will be deleted.</p>
     * <p>Example: dxvif-456abc78</p> <p>Default: None</p>
     */
    inline void SetVirtualInterfaceId(const char* value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId.assign(value); }

    /**
     * <p>The ID of the virtual interface from which the BGP peer will be deleted.</p>
     * <p>Example: dxvif-456abc78</p> <p>Default: None</p>
     */
    inline DeleteBGPPeerRequest& WithVirtualInterfaceId(const Aws::String& value) { SetVirtualInterfaceId(value); return *this;}

    /**
     * <p>The ID of the virtual interface from which the BGP peer will be deleted.</p>
     * <p>Example: dxvif-456abc78</p> <p>Default: None</p>
     */
    inline DeleteBGPPeerRequest& WithVirtualInterfaceId(Aws::String&& value) { SetVirtualInterfaceId(value); return *this;}

    /**
     * <p>The ID of the virtual interface from which the BGP peer will be deleted.</p>
     * <p>Example: dxvif-456abc78</p> <p>Default: None</p>
     */
    inline DeleteBGPPeerRequest& WithVirtualInterfaceId(const char* value) { SetVirtualInterfaceId(value); return *this;}

    
    inline int GetAsn() const{ return m_asn; }

    
    inline void SetAsn(int value) { m_asnHasBeenSet = true; m_asn = value; }

    
    inline DeleteBGPPeerRequest& WithAsn(int value) { SetAsn(value); return *this;}

    
    inline const Aws::String& GetCustomerAddress() const{ return m_customerAddress; }

    
    inline void SetCustomerAddress(const Aws::String& value) { m_customerAddressHasBeenSet = true; m_customerAddress = value; }

    
    inline void SetCustomerAddress(Aws::String&& value) { m_customerAddressHasBeenSet = true; m_customerAddress = value; }

    
    inline void SetCustomerAddress(const char* value) { m_customerAddressHasBeenSet = true; m_customerAddress.assign(value); }

    
    inline DeleteBGPPeerRequest& WithCustomerAddress(const Aws::String& value) { SetCustomerAddress(value); return *this;}

    
    inline DeleteBGPPeerRequest& WithCustomerAddress(Aws::String&& value) { SetCustomerAddress(value); return *this;}

    
    inline DeleteBGPPeerRequest& WithCustomerAddress(const char* value) { SetCustomerAddress(value); return *this;}

  private:
    Aws::String m_virtualInterfaceId;
    bool m_virtualInterfaceIdHasBeenSet;
    int m_asn;
    bool m_asnHasBeenSet;
    Aws::String m_customerAddress;
    bool m_customerAddressHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
