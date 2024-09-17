/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/GameServerUtilizationStatus.h>
#include <aws/gamelift/model/GameServerHealthCheck.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class UpdateGameServerRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API UpdateGameServerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGameServer"; }

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
    inline UpdateGameServerRequest& WithGameServerGroupName(const Aws::String& value) { SetGameServerGroupName(value); return *this;}
    inline UpdateGameServerRequest& WithGameServerGroupName(Aws::String&& value) { SetGameServerGroupName(std::move(value)); return *this;}
    inline UpdateGameServerRequest& WithGameServerGroupName(const char* value) { SetGameServerGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom string that uniquely identifies the game server to update.</p>
     */
    inline const Aws::String& GetGameServerId() const{ return m_gameServerId; }
    inline bool GameServerIdHasBeenSet() const { return m_gameServerIdHasBeenSet; }
    inline void SetGameServerId(const Aws::String& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = value; }
    inline void SetGameServerId(Aws::String&& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = std::move(value); }
    inline void SetGameServerId(const char* value) { m_gameServerIdHasBeenSet = true; m_gameServerId.assign(value); }
    inline UpdateGameServerRequest& WithGameServerId(const Aws::String& value) { SetGameServerId(value); return *this;}
    inline UpdateGameServerRequest& WithGameServerId(Aws::String&& value) { SetGameServerId(std::move(value)); return *this;}
    inline UpdateGameServerRequest& WithGameServerId(const char* value) { SetGameServerId(value); return *this;}
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
    inline UpdateGameServerRequest& WithGameServerData(const Aws::String& value) { SetGameServerData(value); return *this;}
    inline UpdateGameServerRequest& WithGameServerData(Aws::String&& value) { SetGameServerData(std::move(value)); return *this;}
    inline UpdateGameServerRequest& WithGameServerData(const char* value) { SetGameServerData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the game server is available or is currently hosting gameplay.
     * You can update a game server status from <code>AVAILABLE</code> to
     * <code>UTILIZED</code>, but you can't change a the status from
     * <code>UTILIZED</code> to <code>AVAILABLE</code>.</p>
     */
    inline const GameServerUtilizationStatus& GetUtilizationStatus() const{ return m_utilizationStatus; }
    inline bool UtilizationStatusHasBeenSet() const { return m_utilizationStatusHasBeenSet; }
    inline void SetUtilizationStatus(const GameServerUtilizationStatus& value) { m_utilizationStatusHasBeenSet = true; m_utilizationStatus = value; }
    inline void SetUtilizationStatus(GameServerUtilizationStatus&& value) { m_utilizationStatusHasBeenSet = true; m_utilizationStatus = std::move(value); }
    inline UpdateGameServerRequest& WithUtilizationStatus(const GameServerUtilizationStatus& value) { SetUtilizationStatus(value); return *this;}
    inline UpdateGameServerRequest& WithUtilizationStatus(GameServerUtilizationStatus&& value) { SetUtilizationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates health status of the game server. A request that includes this
     * parameter updates the game server's <i>LastHealthCheckTime</i> timestamp. </p>
     */
    inline const GameServerHealthCheck& GetHealthCheck() const{ return m_healthCheck; }
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }
    inline void SetHealthCheck(const GameServerHealthCheck& value) { m_healthCheckHasBeenSet = true; m_healthCheck = value; }
    inline void SetHealthCheck(GameServerHealthCheck&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::move(value); }
    inline UpdateGameServerRequest& WithHealthCheck(const GameServerHealthCheck& value) { SetHealthCheck(value); return *this;}
    inline UpdateGameServerRequest& WithHealthCheck(GameServerHealthCheck&& value) { SetHealthCheck(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet = false;

    Aws::String m_gameServerId;
    bool m_gameServerIdHasBeenSet = false;

    Aws::String m_gameServerData;
    bool m_gameServerDataHasBeenSet = false;

    GameServerUtilizationStatus m_utilizationStatus;
    bool m_utilizationStatusHasBeenSet = false;

    GameServerHealthCheck m_healthCheck;
    bool m_healthCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
