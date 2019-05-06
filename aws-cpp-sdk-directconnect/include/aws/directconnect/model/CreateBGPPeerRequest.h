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
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/NewBGPPeer.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class AWS_DIRECTCONNECT_API CreateBGPPeerRequest : public DirectConnectRequest
  {
  public:
    CreateBGPPeerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBGPPeer"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline const Aws::String& GetVirtualInterfaceId() const{ return m_virtualInterfaceId; }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline bool VirtualInterfaceIdHasBeenSet() const { return m_virtualInterfaceIdHasBeenSet; }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline void SetVirtualInterfaceId(const Aws::String& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = value; }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline void SetVirtualInterfaceId(Aws::String&& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = std::move(value); }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline void SetVirtualInterfaceId(const char* value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId.assign(value); }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline CreateBGPPeerRequest& WithVirtualInterfaceId(const Aws::String& value) { SetVirtualInterfaceId(value); return *this;}

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline CreateBGPPeerRequest& WithVirtualInterfaceId(Aws::String&& value) { SetVirtualInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline CreateBGPPeerRequest& WithVirtualInterfaceId(const char* value) { SetVirtualInterfaceId(value); return *this;}


    /**
     * <p>Information about the BGP peer.</p>
     */
    inline const NewBGPPeer& GetNewBGPPeer() const{ return m_newBGPPeer; }

    /**
     * <p>Information about the BGP peer.</p>
     */
    inline bool NewBGPPeerHasBeenSet() const { return m_newBGPPeerHasBeenSet; }

    /**
     * <p>Information about the BGP peer.</p>
     */
    inline void SetNewBGPPeer(const NewBGPPeer& value) { m_newBGPPeerHasBeenSet = true; m_newBGPPeer = value; }

    /**
     * <p>Information about the BGP peer.</p>
     */
    inline void SetNewBGPPeer(NewBGPPeer&& value) { m_newBGPPeerHasBeenSet = true; m_newBGPPeer = std::move(value); }

    /**
     * <p>Information about the BGP peer.</p>
     */
    inline CreateBGPPeerRequest& WithNewBGPPeer(const NewBGPPeer& value) { SetNewBGPPeer(value); return *this;}

    /**
     * <p>Information about the BGP peer.</p>
     */
    inline CreateBGPPeerRequest& WithNewBGPPeer(NewBGPPeer&& value) { SetNewBGPPeer(std::move(value)); return *this;}

  private:

    Aws::String m_virtualInterfaceId;
    bool m_virtualInterfaceIdHasBeenSet;

    NewBGPPeer m_newBGPPeer;
    bool m_newBGPPeerHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
