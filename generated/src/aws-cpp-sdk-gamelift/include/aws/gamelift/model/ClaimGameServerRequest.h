/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/ClaimFilterOption.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class ClaimGameServerRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API ClaimGameServerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ClaimGameServer"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the game server group where the game server is
     * running. If you are not specifying a game server to claim, this value identifies
     * where you want Amazon GameLift FleetIQ to look for an available game server to
     * claim. </p>
     */
    inline const Aws::String& GetGameServerGroupName() const{ return m_gameServerGroupName; }

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running. If you are not specifying a game server to claim, this value identifies
     * where you want Amazon GameLift FleetIQ to look for an available game server to
     * claim. </p>
     */
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running. If you are not specifying a game server to claim, this value identifies
     * where you want Amazon GameLift FleetIQ to look for an available game server to
     * claim. </p>
     */
    inline void SetGameServerGroupName(const Aws::String& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = value; }

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running. If you are not specifying a game server to claim, this value identifies
     * where you want Amazon GameLift FleetIQ to look for an available game server to
     * claim. </p>
     */
    inline void SetGameServerGroupName(Aws::String&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::move(value); }

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running. If you are not specifying a game server to claim, this value identifies
     * where you want Amazon GameLift FleetIQ to look for an available game server to
     * claim. </p>
     */
    inline void SetGameServerGroupName(const char* value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName.assign(value); }

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running. If you are not specifying a game server to claim, this value identifies
     * where you want Amazon GameLift FleetIQ to look for an available game server to
     * claim. </p>
     */
    inline ClaimGameServerRequest& WithGameServerGroupName(const Aws::String& value) { SetGameServerGroupName(value); return *this;}

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running. If you are not specifying a game server to claim, this value identifies
     * where you want Amazon GameLift FleetIQ to look for an available game server to
     * claim. </p>
     */
    inline ClaimGameServerRequest& WithGameServerGroupName(Aws::String&& value) { SetGameServerGroupName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running. If you are not specifying a game server to claim, this value identifies
     * where you want Amazon GameLift FleetIQ to look for an available game server to
     * claim. </p>
     */
    inline ClaimGameServerRequest& WithGameServerGroupName(const char* value) { SetGameServerGroupName(value); return *this;}


    /**
     * <p>A custom string that uniquely identifies the game server to claim. If this
     * parameter is left empty, Amazon GameLift FleetIQ searches for an available game
     * server in the specified game server group.</p>
     */
    inline const Aws::String& GetGameServerId() const{ return m_gameServerId; }

    /**
     * <p>A custom string that uniquely identifies the game server to claim. If this
     * parameter is left empty, Amazon GameLift FleetIQ searches for an available game
     * server in the specified game server group.</p>
     */
    inline bool GameServerIdHasBeenSet() const { return m_gameServerIdHasBeenSet; }

    /**
     * <p>A custom string that uniquely identifies the game server to claim. If this
     * parameter is left empty, Amazon GameLift FleetIQ searches for an available game
     * server in the specified game server group.</p>
     */
    inline void SetGameServerId(const Aws::String& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = value; }

    /**
     * <p>A custom string that uniquely identifies the game server to claim. If this
     * parameter is left empty, Amazon GameLift FleetIQ searches for an available game
     * server in the specified game server group.</p>
     */
    inline void SetGameServerId(Aws::String&& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = std::move(value); }

    /**
     * <p>A custom string that uniquely identifies the game server to claim. If this
     * parameter is left empty, Amazon GameLift FleetIQ searches for an available game
     * server in the specified game server group.</p>
     */
    inline void SetGameServerId(const char* value) { m_gameServerIdHasBeenSet = true; m_gameServerId.assign(value); }

    /**
     * <p>A custom string that uniquely identifies the game server to claim. If this
     * parameter is left empty, Amazon GameLift FleetIQ searches for an available game
     * server in the specified game server group.</p>
     */
    inline ClaimGameServerRequest& WithGameServerId(const Aws::String& value) { SetGameServerId(value); return *this;}

    /**
     * <p>A custom string that uniquely identifies the game server to claim. If this
     * parameter is left empty, Amazon GameLift FleetIQ searches for an available game
     * server in the specified game server group.</p>
     */
    inline ClaimGameServerRequest& WithGameServerId(Aws::String&& value) { SetGameServerId(std::move(value)); return *this;}

    /**
     * <p>A custom string that uniquely identifies the game server to claim. If this
     * parameter is left empty, Amazon GameLift FleetIQ searches for an available game
     * server in the specified game server group.</p>
     */
    inline ClaimGameServerRequest& WithGameServerId(const char* value) { SetGameServerId(value); return *this;}


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
    inline ClaimGameServerRequest& WithGameServerData(const Aws::String& value) { SetGameServerData(value); return *this;}

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * game servers. </p>
     */
    inline ClaimGameServerRequest& WithGameServerData(Aws::String&& value) { SetGameServerData(std::move(value)); return *this;}

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * game servers. </p>
     */
    inline ClaimGameServerRequest& WithGameServerData(const char* value) { SetGameServerData(value); return *this;}


    /**
     * <p>Object that restricts how a claimed game server is chosen.</p>
     */
    inline const ClaimFilterOption& GetFilterOption() const{ return m_filterOption; }

    /**
     * <p>Object that restricts how a claimed game server is chosen.</p>
     */
    inline bool FilterOptionHasBeenSet() const { return m_filterOptionHasBeenSet; }

    /**
     * <p>Object that restricts how a claimed game server is chosen.</p>
     */
    inline void SetFilterOption(const ClaimFilterOption& value) { m_filterOptionHasBeenSet = true; m_filterOption = value; }

    /**
     * <p>Object that restricts how a claimed game server is chosen.</p>
     */
    inline void SetFilterOption(ClaimFilterOption&& value) { m_filterOptionHasBeenSet = true; m_filterOption = std::move(value); }

    /**
     * <p>Object that restricts how a claimed game server is chosen.</p>
     */
    inline ClaimGameServerRequest& WithFilterOption(const ClaimFilterOption& value) { SetFilterOption(value); return *this;}

    /**
     * <p>Object that restricts how a claimed game server is chosen.</p>
     */
    inline ClaimGameServerRequest& WithFilterOption(ClaimFilterOption&& value) { SetFilterOption(std::move(value)); return *this;}

  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet = false;

    Aws::String m_gameServerId;
    bool m_gameServerIdHasBeenSet = false;

    Aws::String m_gameServerData;
    bool m_gameServerDataHasBeenSet = false;

    ClaimFilterOption m_filterOption;
    bool m_filterOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
