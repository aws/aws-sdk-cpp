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
  class UpdateConnectionRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API UpdateConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConnection"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline UpdateConnectionRequest& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline UpdateConnectionRequest& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline UpdateConnectionRequest& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


    /**
     * <p>The ID of the connection.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The ID of the connection.</p>
     */
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }

    /**
     * <p>The ID of the connection.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The ID of the connection.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }

    /**
     * <p>The ID of the connection.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    /**
     * <p>The ID of the connection.</p>
     */
    inline UpdateConnectionRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the connection.</p>
     */
    inline UpdateConnectionRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the connection.</p>
     */
    inline UpdateConnectionRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>The ID of the link for the first device in the connection.</p>
     */
    inline const Aws::String& GetLinkId() const{ return m_linkId; }

    /**
     * <p>The ID of the link for the first device in the connection.</p>
     */
    inline bool LinkIdHasBeenSet() const { return m_linkIdHasBeenSet; }

    /**
     * <p>The ID of the link for the first device in the connection.</p>
     */
    inline void SetLinkId(const Aws::String& value) { m_linkIdHasBeenSet = true; m_linkId = value; }

    /**
     * <p>The ID of the link for the first device in the connection.</p>
     */
    inline void SetLinkId(Aws::String&& value) { m_linkIdHasBeenSet = true; m_linkId = std::move(value); }

    /**
     * <p>The ID of the link for the first device in the connection.</p>
     */
    inline void SetLinkId(const char* value) { m_linkIdHasBeenSet = true; m_linkId.assign(value); }

    /**
     * <p>The ID of the link for the first device in the connection.</p>
     */
    inline UpdateConnectionRequest& WithLinkId(const Aws::String& value) { SetLinkId(value); return *this;}

    /**
     * <p>The ID of the link for the first device in the connection.</p>
     */
    inline UpdateConnectionRequest& WithLinkId(Aws::String&& value) { SetLinkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the link for the first device in the connection.</p>
     */
    inline UpdateConnectionRequest& WithLinkId(const char* value) { SetLinkId(value); return *this;}


    /**
     * <p>The ID of the link for the second device in the connection.</p>
     */
    inline const Aws::String& GetConnectedLinkId() const{ return m_connectedLinkId; }

    /**
     * <p>The ID of the link for the second device in the connection.</p>
     */
    inline bool ConnectedLinkIdHasBeenSet() const { return m_connectedLinkIdHasBeenSet; }

    /**
     * <p>The ID of the link for the second device in the connection.</p>
     */
    inline void SetConnectedLinkId(const Aws::String& value) { m_connectedLinkIdHasBeenSet = true; m_connectedLinkId = value; }

    /**
     * <p>The ID of the link for the second device in the connection.</p>
     */
    inline void SetConnectedLinkId(Aws::String&& value) { m_connectedLinkIdHasBeenSet = true; m_connectedLinkId = std::move(value); }

    /**
     * <p>The ID of the link for the second device in the connection.</p>
     */
    inline void SetConnectedLinkId(const char* value) { m_connectedLinkIdHasBeenSet = true; m_connectedLinkId.assign(value); }

    /**
     * <p>The ID of the link for the second device in the connection.</p>
     */
    inline UpdateConnectionRequest& WithConnectedLinkId(const Aws::String& value) { SetConnectedLinkId(value); return *this;}

    /**
     * <p>The ID of the link for the second device in the connection.</p>
     */
    inline UpdateConnectionRequest& WithConnectedLinkId(Aws::String&& value) { SetConnectedLinkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the link for the second device in the connection.</p>
     */
    inline UpdateConnectionRequest& WithConnectedLinkId(const char* value) { SetConnectedLinkId(value); return *this;}


    /**
     * <p>A description of the connection.</p> <p>Length Constraints: Maximum length of
     * 256 characters.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the connection.</p> <p>Length Constraints: Maximum length of
     * 256 characters.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the connection.</p> <p>Length Constraints: Maximum length of
     * 256 characters.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the connection.</p> <p>Length Constraints: Maximum length of
     * 256 characters.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the connection.</p> <p>Length Constraints: Maximum length of
     * 256 characters.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the connection.</p> <p>Length Constraints: Maximum length of
     * 256 characters.</p>
     */
    inline UpdateConnectionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the connection.</p> <p>Length Constraints: Maximum length of
     * 256 characters.</p>
     */
    inline UpdateConnectionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the connection.</p> <p>Length Constraints: Maximum length of
     * 256 characters.</p>
     */
    inline UpdateConnectionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    Aws::String m_linkId;
    bool m_linkIdHasBeenSet = false;

    Aws::String m_connectedLinkId;
    bool m_connectedLinkIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
