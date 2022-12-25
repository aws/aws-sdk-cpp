/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class GetConnectPeerRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API GetConnectPeerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConnectPeer"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline const Aws::String& GetConnectPeerId() const{ return m_connectPeerId; }

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline bool ConnectPeerIdHasBeenSet() const { return m_connectPeerIdHasBeenSet; }

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline void SetConnectPeerId(const Aws::String& value) { m_connectPeerIdHasBeenSet = true; m_connectPeerId = value; }

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline void SetConnectPeerId(Aws::String&& value) { m_connectPeerIdHasBeenSet = true; m_connectPeerId = std::move(value); }

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline void SetConnectPeerId(const char* value) { m_connectPeerIdHasBeenSet = true; m_connectPeerId.assign(value); }

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline GetConnectPeerRequest& WithConnectPeerId(const Aws::String& value) { SetConnectPeerId(value); return *this;}

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline GetConnectPeerRequest& WithConnectPeerId(Aws::String&& value) { SetConnectPeerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline GetConnectPeerRequest& WithConnectPeerId(const char* value) { SetConnectPeerId(value); return *this;}

  private:

    Aws::String m_connectPeerId;
    bool m_connectPeerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
