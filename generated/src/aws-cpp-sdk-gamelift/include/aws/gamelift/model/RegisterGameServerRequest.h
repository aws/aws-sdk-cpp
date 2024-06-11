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


    ///@{
    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline const Aws::String& GetGameServerGroupName() const{ return m_gameServerGroupName; }
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }
    inline void SetGameServerGroupName(const Aws::String& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = value; }
    inline void SetGameServerGroupName(Aws::String&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::move(value); }
    inline void SetGameServerGroupName(const char* value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName.assign(value); }
    inline RegisterGameServerRequest& WithGameServerGroupName(const Aws::String& value) { SetGameServerGroupName(value); return *this;}
    inline RegisterGameServerRequest& WithGameServerGroupName(Aws::String&& value) { SetGameServerGroupName(std::move(value)); return *this;}
    inline RegisterGameServerRequest& WithGameServerGroupName(const char* value) { SetGameServerGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom string that uniquely identifies the game server to register. Game
     * server IDs are developer-defined and must be unique across all game server
     * groups in your Amazon Web Services account.</p>
     */
    inline const Aws::String& GetGameServerId() const{ return m_gameServerId; }
    inline bool GameServerIdHasBeenSet() const { return m_gameServerIdHasBeenSet; }
    inline void SetGameServerId(const Aws::String& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = value; }
    inline void SetGameServerId(Aws::String&& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = std::move(value); }
    inline void SetGameServerId(const char* value) { m_gameServerIdHasBeenSet = true; m_gameServerId.assign(value); }
    inline RegisterGameServerRequest& WithGameServerId(const Aws::String& value) { SetGameServerId(value); return *this;}
    inline RegisterGameServerRequest& WithGameServerId(Aws::String&& value) { SetGameServerId(std::move(value)); return *this;}
    inline RegisterGameServerRequest& WithGameServerId(const char* value) { SetGameServerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata. EC2 instance IDs use a 17-character
     * format, for example: <code>i-1234567890abcdef0</code>.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline RegisterGameServerRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline RegisterGameServerRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline RegisterGameServerRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information that is needed to make inbound client connections to the game
     * server. This might include the IP address and port, DNS name, and other
     * information.</p>
     */
    inline const Aws::String& GetConnectionInfo() const{ return m_connectionInfo; }
    inline bool ConnectionInfoHasBeenSet() const { return m_connectionInfoHasBeenSet; }
    inline void SetConnectionInfo(const Aws::String& value) { m_connectionInfoHasBeenSet = true; m_connectionInfo = value; }
    inline void SetConnectionInfo(Aws::String&& value) { m_connectionInfoHasBeenSet = true; m_connectionInfo = std::move(value); }
    inline void SetConnectionInfo(const char* value) { m_connectionInfoHasBeenSet = true; m_connectionInfo.assign(value); }
    inline RegisterGameServerRequest& WithConnectionInfo(const Aws::String& value) { SetConnectionInfo(value); return *this;}
    inline RegisterGameServerRequest& WithConnectionInfo(Aws::String&& value) { SetConnectionInfo(std::move(value)); return *this;}
    inline RegisterGameServerRequest& WithConnectionInfo(const char* value) { SetConnectionInfo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * game servers. </p>
     */
    inline const Aws::String& GetGameServerData() const{ return m_gameServerData; }
    inline bool GameServerDataHasBeenSet() const { return m_gameServerDataHasBeenSet; }
    inline void SetGameServerData(const Aws::String& value) { m_gameServerDataHasBeenSet = true; m_gameServerData = value; }
    inline void SetGameServerData(Aws::String&& value) { m_gameServerDataHasBeenSet = true; m_gameServerData = std::move(value); }
    inline void SetGameServerData(const char* value) { m_gameServerDataHasBeenSet = true; m_gameServerData.assign(value); }
    inline RegisterGameServerRequest& WithGameServerData(const Aws::String& value) { SetGameServerData(value); return *this;}
    inline RegisterGameServerRequest& WithGameServerData(Aws::String&& value) { SetGameServerData(std::move(value)); return *this;}
    inline RegisterGameServerRequest& WithGameServerData(const char* value) { SetGameServerData(value); return *this;}
    ///@}
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
