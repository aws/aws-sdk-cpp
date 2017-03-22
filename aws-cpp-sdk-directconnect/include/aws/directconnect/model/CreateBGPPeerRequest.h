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
#include <aws/directconnect/model/NewBGPPeer.h>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Container for the parameters to the CreateBGPPeer operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/CreateBGPPeerRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API CreateBGPPeerRequest : public DirectConnectRequest
  {
  public:
    CreateBGPPeerRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the virtual interface on which the BGP peer will be
     * provisioned.</p> <p>Example: dxvif-456abc78</p> <p>Default: None</p>
     */
    inline const Aws::String& GetVirtualInterfaceId() const{ return m_virtualInterfaceId; }

    /**
     * <p>The ID of the virtual interface on which the BGP peer will be
     * provisioned.</p> <p>Example: dxvif-456abc78</p> <p>Default: None</p>
     */
    inline void SetVirtualInterfaceId(const Aws::String& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = value; }

    /**
     * <p>The ID of the virtual interface on which the BGP peer will be
     * provisioned.</p> <p>Example: dxvif-456abc78</p> <p>Default: None</p>
     */
    inline void SetVirtualInterfaceId(Aws::String&& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = value; }

    /**
     * <p>The ID of the virtual interface on which the BGP peer will be
     * provisioned.</p> <p>Example: dxvif-456abc78</p> <p>Default: None</p>
     */
    inline void SetVirtualInterfaceId(const char* value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId.assign(value); }

    /**
     * <p>The ID of the virtual interface on which the BGP peer will be
     * provisioned.</p> <p>Example: dxvif-456abc78</p> <p>Default: None</p>
     */
    inline CreateBGPPeerRequest& WithVirtualInterfaceId(const Aws::String& value) { SetVirtualInterfaceId(value); return *this;}

    /**
     * <p>The ID of the virtual interface on which the BGP peer will be
     * provisioned.</p> <p>Example: dxvif-456abc78</p> <p>Default: None</p>
     */
    inline CreateBGPPeerRequest& WithVirtualInterfaceId(Aws::String&& value) { SetVirtualInterfaceId(value); return *this;}

    /**
     * <p>The ID of the virtual interface on which the BGP peer will be
     * provisioned.</p> <p>Example: dxvif-456abc78</p> <p>Default: None</p>
     */
    inline CreateBGPPeerRequest& WithVirtualInterfaceId(const char* value) { SetVirtualInterfaceId(value); return *this;}

    /**
     * <p>Detailed information for the BGP peer to be created.</p> <p>Default: None</p>
     */
    inline const NewBGPPeer& GetNewBGPPeer() const{ return m_newBGPPeer; }

    /**
     * <p>Detailed information for the BGP peer to be created.</p> <p>Default: None</p>
     */
    inline void SetNewBGPPeer(const NewBGPPeer& value) { m_newBGPPeerHasBeenSet = true; m_newBGPPeer = value; }

    /**
     * <p>Detailed information for the BGP peer to be created.</p> <p>Default: None</p>
     */
    inline void SetNewBGPPeer(NewBGPPeer&& value) { m_newBGPPeerHasBeenSet = true; m_newBGPPeer = value; }

    /**
     * <p>Detailed information for the BGP peer to be created.</p> <p>Default: None</p>
     */
    inline CreateBGPPeerRequest& WithNewBGPPeer(const NewBGPPeer& value) { SetNewBGPPeer(value); return *this;}

    /**
     * <p>Detailed information for the BGP peer to be created.</p> <p>Default: None</p>
     */
    inline CreateBGPPeerRequest& WithNewBGPPeer(NewBGPPeer&& value) { SetNewBGPPeer(value); return *this;}

  private:
    Aws::String m_virtualInterfaceId;
    bool m_virtualInterfaceIdHasBeenSet;
    NewBGPPeer m_newBGPPeer;
    bool m_newBGPPeerHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
