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
  class AWS_GAMELIFT_API ClaimGameServerRequest : public GameLiftRequest
  {
  public:
    ClaimGameServerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ClaimGameServer"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An identifier for the game server group. When claiming a specific game
     * server, this is the game server group whether the game server is located. When
     * requesting that GameLift FleetIQ locate an available game server, this is the
     * game server group to search on. You can use either the <a>GameServerGroup</a>
     * name or ARN value.</p>
     */
    inline const Aws::String& GetGameServerGroupName() const{ return m_gameServerGroupName; }

    /**
     * <p>An identifier for the game server group. When claiming a specific game
     * server, this is the game server group whether the game server is located. When
     * requesting that GameLift FleetIQ locate an available game server, this is the
     * game server group to search on. You can use either the <a>GameServerGroup</a>
     * name or ARN value.</p>
     */
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }

    /**
     * <p>An identifier for the game server group. When claiming a specific game
     * server, this is the game server group whether the game server is located. When
     * requesting that GameLift FleetIQ locate an available game server, this is the
     * game server group to search on. You can use either the <a>GameServerGroup</a>
     * name or ARN value.</p>
     */
    inline void SetGameServerGroupName(const Aws::String& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = value; }

    /**
     * <p>An identifier for the game server group. When claiming a specific game
     * server, this is the game server group whether the game server is located. When
     * requesting that GameLift FleetIQ locate an available game server, this is the
     * game server group to search on. You can use either the <a>GameServerGroup</a>
     * name or ARN value.</p>
     */
    inline void SetGameServerGroupName(Aws::String&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::move(value); }

    /**
     * <p>An identifier for the game server group. When claiming a specific game
     * server, this is the game server group whether the game server is located. When
     * requesting that GameLift FleetIQ locate an available game server, this is the
     * game server group to search on. You can use either the <a>GameServerGroup</a>
     * name or ARN value.</p>
     */
    inline void SetGameServerGroupName(const char* value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName.assign(value); }

    /**
     * <p>An identifier for the game server group. When claiming a specific game
     * server, this is the game server group whether the game server is located. When
     * requesting that GameLift FleetIQ locate an available game server, this is the
     * game server group to search on. You can use either the <a>GameServerGroup</a>
     * name or ARN value.</p>
     */
    inline ClaimGameServerRequest& WithGameServerGroupName(const Aws::String& value) { SetGameServerGroupName(value); return *this;}

    /**
     * <p>An identifier for the game server group. When claiming a specific game
     * server, this is the game server group whether the game server is located. When
     * requesting that GameLift FleetIQ locate an available game server, this is the
     * game server group to search on. You can use either the <a>GameServerGroup</a>
     * name or ARN value.</p>
     */
    inline ClaimGameServerRequest& WithGameServerGroupName(Aws::String&& value) { SetGameServerGroupName(std::move(value)); return *this;}

    /**
     * <p>An identifier for the game server group. When claiming a specific game
     * server, this is the game server group whether the game server is located. When
     * requesting that GameLift FleetIQ locate an available game server, this is the
     * game server group to search on. You can use either the <a>GameServerGroup</a>
     * name or ARN value.</p>
     */
    inline ClaimGameServerRequest& WithGameServerGroupName(const char* value) { SetGameServerGroupName(value); return *this;}


    /**
     * <p>A custom string that uniquely identifies the game server to claim. If this
     * parameter is left empty, GameLift FleetIQ searches for an available game server
     * in the specified game server group.</p>
     */
    inline const Aws::String& GetGameServerId() const{ return m_gameServerId; }

    /**
     * <p>A custom string that uniquely identifies the game server to claim. If this
     * parameter is left empty, GameLift FleetIQ searches for an available game server
     * in the specified game server group.</p>
     */
    inline bool GameServerIdHasBeenSet() const { return m_gameServerIdHasBeenSet; }

    /**
     * <p>A custom string that uniquely identifies the game server to claim. If this
     * parameter is left empty, GameLift FleetIQ searches for an available game server
     * in the specified game server group.</p>
     */
    inline void SetGameServerId(const Aws::String& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = value; }

    /**
     * <p>A custom string that uniquely identifies the game server to claim. If this
     * parameter is left empty, GameLift FleetIQ searches for an available game server
     * in the specified game server group.</p>
     */
    inline void SetGameServerId(Aws::String&& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = std::move(value); }

    /**
     * <p>A custom string that uniquely identifies the game server to claim. If this
     * parameter is left empty, GameLift FleetIQ searches for an available game server
     * in the specified game server group.</p>
     */
    inline void SetGameServerId(const char* value) { m_gameServerIdHasBeenSet = true; m_gameServerId.assign(value); }

    /**
     * <p>A custom string that uniquely identifies the game server to claim. If this
     * parameter is left empty, GameLift FleetIQ searches for an available game server
     * in the specified game server group.</p>
     */
    inline ClaimGameServerRequest& WithGameServerId(const Aws::String& value) { SetGameServerId(value); return *this;}

    /**
     * <p>A custom string that uniquely identifies the game server to claim. If this
     * parameter is left empty, GameLift FleetIQ searches for an available game server
     * in the specified game server group.</p>
     */
    inline ClaimGameServerRequest& WithGameServerId(Aws::String&& value) { SetGameServerId(std::move(value)); return *this;}

    /**
     * <p>A custom string that uniquely identifies the game server to claim. If this
     * parameter is left empty, GameLift FleetIQ searches for an available game server
     * in the specified game server group.</p>
     */
    inline ClaimGameServerRequest& WithGameServerId(const char* value) { SetGameServerId(value); return *this;}


    /**
     * <p>A set of custom game server properties, formatted as a single string value,
     * to be passed to the claimed game server. </p>
     */
    inline const Aws::String& GetGameServerData() const{ return m_gameServerData; }

    /**
     * <p>A set of custom game server properties, formatted as a single string value,
     * to be passed to the claimed game server. </p>
     */
    inline bool GameServerDataHasBeenSet() const { return m_gameServerDataHasBeenSet; }

    /**
     * <p>A set of custom game server properties, formatted as a single string value,
     * to be passed to the claimed game server. </p>
     */
    inline void SetGameServerData(const Aws::String& value) { m_gameServerDataHasBeenSet = true; m_gameServerData = value; }

    /**
     * <p>A set of custom game server properties, formatted as a single string value,
     * to be passed to the claimed game server. </p>
     */
    inline void SetGameServerData(Aws::String&& value) { m_gameServerDataHasBeenSet = true; m_gameServerData = std::move(value); }

    /**
     * <p>A set of custom game server properties, formatted as a single string value,
     * to be passed to the claimed game server. </p>
     */
    inline void SetGameServerData(const char* value) { m_gameServerDataHasBeenSet = true; m_gameServerData.assign(value); }

    /**
     * <p>A set of custom game server properties, formatted as a single string value,
     * to be passed to the claimed game server. </p>
     */
    inline ClaimGameServerRequest& WithGameServerData(const Aws::String& value) { SetGameServerData(value); return *this;}

    /**
     * <p>A set of custom game server properties, formatted as a single string value,
     * to be passed to the claimed game server. </p>
     */
    inline ClaimGameServerRequest& WithGameServerData(Aws::String&& value) { SetGameServerData(std::move(value)); return *this;}

    /**
     * <p>A set of custom game server properties, formatted as a single string value,
     * to be passed to the claimed game server. </p>
     */
    inline ClaimGameServerRequest& WithGameServerData(const char* value) { SetGameServerData(value); return *this;}

  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet;

    Aws::String m_gameServerId;
    bool m_gameServerIdHasBeenSet;

    Aws::String m_gameServerData;
    bool m_gameServerDataHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
