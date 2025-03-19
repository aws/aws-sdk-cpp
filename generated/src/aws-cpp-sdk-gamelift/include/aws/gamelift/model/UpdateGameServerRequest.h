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
    AWS_GAMELIFT_API UpdateGameServerRequest() = default;

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
    inline const Aws::String& GetGameServerGroupName() const { return m_gameServerGroupName; }
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }
    template<typename GameServerGroupNameT = Aws::String>
    void SetGameServerGroupName(GameServerGroupNameT&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::forward<GameServerGroupNameT>(value); }
    template<typename GameServerGroupNameT = Aws::String>
    UpdateGameServerRequest& WithGameServerGroupName(GameServerGroupNameT&& value) { SetGameServerGroupName(std::forward<GameServerGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom string that uniquely identifies the game server to update.</p>
     */
    inline const Aws::String& GetGameServerId() const { return m_gameServerId; }
    inline bool GameServerIdHasBeenSet() const { return m_gameServerIdHasBeenSet; }
    template<typename GameServerIdT = Aws::String>
    void SetGameServerId(GameServerIdT&& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = std::forward<GameServerIdT>(value); }
    template<typename GameServerIdT = Aws::String>
    UpdateGameServerRequest& WithGameServerId(GameServerIdT&& value) { SetGameServerId(std::forward<GameServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * game servers. </p>
     */
    inline const Aws::String& GetGameServerData() const { return m_gameServerData; }
    inline bool GameServerDataHasBeenSet() const { return m_gameServerDataHasBeenSet; }
    template<typename GameServerDataT = Aws::String>
    void SetGameServerData(GameServerDataT&& value) { m_gameServerDataHasBeenSet = true; m_gameServerData = std::forward<GameServerDataT>(value); }
    template<typename GameServerDataT = Aws::String>
    UpdateGameServerRequest& WithGameServerData(GameServerDataT&& value) { SetGameServerData(std::forward<GameServerDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the game server is available or is currently hosting gameplay.
     * You can update a game server status from <code>AVAILABLE</code> to
     * <code>UTILIZED</code>, but you can't change a the status from
     * <code>UTILIZED</code> to <code>AVAILABLE</code>.</p>
     */
    inline GameServerUtilizationStatus GetUtilizationStatus() const { return m_utilizationStatus; }
    inline bool UtilizationStatusHasBeenSet() const { return m_utilizationStatusHasBeenSet; }
    inline void SetUtilizationStatus(GameServerUtilizationStatus value) { m_utilizationStatusHasBeenSet = true; m_utilizationStatus = value; }
    inline UpdateGameServerRequest& WithUtilizationStatus(GameServerUtilizationStatus value) { SetUtilizationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates health status of the game server. A request that includes this
     * parameter updates the game server's <i>LastHealthCheckTime</i> timestamp. </p>
     */
    inline GameServerHealthCheck GetHealthCheck() const { return m_healthCheck; }
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }
    inline void SetHealthCheck(GameServerHealthCheck value) { m_healthCheckHasBeenSet = true; m_healthCheck = value; }
    inline UpdateGameServerRequest& WithHealthCheck(GameServerHealthCheck value) { SetHealthCheck(value); return *this;}
    ///@}
  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet = false;

    Aws::String m_gameServerId;
    bool m_gameServerIdHasBeenSet = false;

    Aws::String m_gameServerData;
    bool m_gameServerDataHasBeenSet = false;

    GameServerUtilizationStatus m_utilizationStatus{GameServerUtilizationStatus::NOT_SET};
    bool m_utilizationStatusHasBeenSet = false;

    GameServerHealthCheck m_healthCheck{GameServerHealthCheck::NOT_SET};
    bool m_healthCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
