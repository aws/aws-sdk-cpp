/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class RegisterGameServerRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API RegisterGameServerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterGameServer"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline const Aws::String& GetGameServerGroupName() const{ return m_gameServerGroupName; }

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline void SetGameServerGroupName(const Aws::String& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = value; }

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline void SetGameServerGroupName(Aws::String&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::move(value); }

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline void SetGameServerGroupName(const char* value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName.assign(value); }

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline RegisterGameServerRequest& WithGameServerGroupName(const Aws::String& value) { SetGameServerGroupName(value); return *this;}

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline RegisterGameServerRequest& WithGameServerGroupName(Aws::String&& value) { SetGameServerGroupName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline RegisterGameServerRequest& WithGameServerGroupName(const char* value) { SetGameServerGroupName(value); return *this;}


    /**
     * <p>A custom string that uniquely identifies the game server to register. Game
     * server IDs are developer-defined and must be unique across all game server
     * groups in your Amazon Web Services account.</p>
     */
    inline const Aws::String& GetGameServerId() const{ return m_gameServerId; }

    /**
     * <p>A custom string that uniquely identifies the game server to register. Game
     * server IDs are developer-defined and must be unique across all game server
     * groups in your Amazon Web Services account.</p>
     */
    inline bool GameServerIdHasBeenSet() const { return m_gameServerIdHasBeenSet; }

    /**
     * <p>A custom string that uniquely identifies the game server to register. Game
     * server IDs are developer-defined and must be unique across all game server
     * groups in your Amazon Web Services account.</p>
     */
    inline void SetGameServerId(const Aws::String& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = value; }

    /**
     * <p>A custom string that uniquely identifies the game server to register. Game
     * server IDs are developer-defined and must be unique across all game server
     * groups in your Amazon Web Services account.</p>
     */
    inline void SetGameServerId(Aws::String&& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = std::move(value); }

    /**
     * <p>A custom string that uniquely identifies the game server to register. Game
     * server IDs are developer-defined and must be unique across all game server
     * groups in your Amazon Web Services account.</p>
     */
    inline void SetGameServerId(const char* value) { m_gameServerIdHasBeenSet = true; m_gameServerId.assign(value); }

    /**
     * <p>A custom string that uniquely identifies the game server to register. Game
     * server IDs are developer-defined and must be unique across all game server
     * groups in your Amazon Web Services account.</p>
     */
    inline RegisterGameServerRequest& WithGameServerId(const Aws::String& value) { SetGameServerId(value); return *this;}

    /**
     * <p>A custom string that uniquely identifies the game server to register. Game
     * server IDs are developer-defined and must be unique across all game server
     * groups in your Amazon Web Services account.</p>
     */
    inline RegisterGameServerRequest& WithGameServerId(Aws::String&& value) { SetGameServerId(std::move(value)); return *this;}

    /**
     * <p>A custom string that uniquely identifies the game server to register. Game
     * server IDs are developer-defined and must be unique across all game server
     * groups in your Amazon Web Services account.</p>
     */
    inline RegisterGameServerRequest& WithGameServerId(const char* value) { SetGameServerId(value); return *this;}


    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata. EC2 instance IDs use a 17-character
     * format, for example: <code>i-1234567890abcdef0</code>.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata. EC2 instance IDs use a 17-character
     * format, for example: <code>i-1234567890abcdef0</code>.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata. EC2 instance IDs use a 17-character
     * format, for example: <code>i-1234567890abcdef0</code>.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata. EC2 instance IDs use a 17-character
     * format, for example: <code>i-1234567890abcdef0</code>.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata. EC2 instance IDs use a 17-character
     * format, for example: <code>i-1234567890abcdef0</code>.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata. EC2 instance IDs use a 17-character
     * format, for example: <code>i-1234567890abcdef0</code>.</p>
     */
    inline RegisterGameServerRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata. EC2 instance IDs use a 17-character
     * format, for example: <code>i-1234567890abcdef0</code>.</p>
     */
    inline RegisterGameServerRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata. EC2 instance IDs use a 17-character
     * format, for example: <code>i-1234567890abcdef0</code>.</p>
     */
    inline RegisterGameServerRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>Information that is needed to make inbound client connections to the game
     * server. This might include the IP address and port, DNS name, and other
     * information.</p>
     */
    inline const Aws::String& GetConnectionInfo() const{ return m_connectionInfo; }

    /**
     * <p>Information that is needed to make inbound client connections to the game
     * server. This might include the IP address and port, DNS name, and other
     * information.</p>
     */
    inline bool ConnectionInfoHasBeenSet() const { return m_connectionInfoHasBeenSet; }

    /**
     * <p>Information that is needed to make inbound client connections to the game
     * server. This might include the IP address and port, DNS name, and other
     * information.</p>
     */
    inline void SetConnectionInfo(const Aws::String& value) { m_connectionInfoHasBeenSet = true; m_connectionInfo = value; }

    /**
     * <p>Information that is needed to make inbound client connections to the game
     * server. This might include the IP address and port, DNS name, and other
     * information.</p>
     */
    inline void SetConnectionInfo(Aws::String&& value) { m_connectionInfoHasBeenSet = true; m_connectionInfo = std::move(value); }

    /**
     * <p>Information that is needed to make inbound client connections to the game
     * server. This might include the IP address and port, DNS name, and other
     * information.</p>
     */
    inline void SetConnectionInfo(const char* value) { m_connectionInfoHasBeenSet = true; m_connectionInfo.assign(value); }

    /**
     * <p>Information that is needed to make inbound client connections to the game
     * server. This might include the IP address and port, DNS name, and other
     * information.</p>
     */
    inline RegisterGameServerRequest& WithConnectionInfo(const Aws::String& value) { SetConnectionInfo(value); return *this;}

    /**
     * <p>Information that is needed to make inbound client connections to the game
     * server. This might include the IP address and port, DNS name, and other
     * information.</p>
     */
    inline RegisterGameServerRequest& WithConnectionInfo(Aws::String&& value) { SetConnectionInfo(std::move(value)); return *this;}

    /**
     * <p>Information that is needed to make inbound client connections to the game
     * server. This might include the IP address and port, DNS name, and other
     * information.</p>
     */
    inline RegisterGameServerRequest& WithConnectionInfo(const char* value) { SetConnectionInfo(value); return *this;}


    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * game servers. </p>
     */
    inline const Aws::String& GetGameServerData() const{ return m_gameServerData; }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * game servers. </p>
     */
    inline bool GameServerDataHasBeenSet() const { return m_gameServerDataHasBeenSet; }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * game servers. </p>
     */
    inline void SetGameServerData(const Aws::String& value) { m_gameServerDataHasBeenSet = true; m_gameServerData = value; }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * game servers. </p>
     */
    inline void SetGameServerData(Aws::String&& value) { m_gameServerDataHasBeenSet = true; m_gameServerData = std::move(value); }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * game servers. </p>
     */
    inline void SetGameServerData(const char* value) { m_gameServerDataHasBeenSet = true; m_gameServerData.assign(value); }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * game servers. </p>
     */
    inline RegisterGameServerRequest& WithGameServerData(const Aws::String& value) { SetGameServerData(value); return *this;}

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * game servers. </p>
     */
    inline RegisterGameServerRequest& WithGameServerData(Aws::String&& value) { SetGameServerData(std::move(value)); return *this;}

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * game servers. </p>
     */
    inline RegisterGameServerRequest& WithGameServerData(const char* value) { SetGameServerData(value); return *this;}

  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet = false;

    Aws::String m_gameServerId;
    bool m_gameServerIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_connectionInfo;
    bool m_connectionInfoHasBeenSet = false;

    Aws::String m_gameServerData;
    bool m_gameServerDataHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
