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
    AWS_GAMELIFT_API ClaimGameServerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ClaimGameServer"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the game server group where the game server is
     * running. If you are not specifying a game server to claim, this value identifies
     * where you want Amazon GameLift Servers FleetIQ to look for an available game
     * server to claim. </p>
     */
    inline const Aws::String& GetGameServerGroupName() const { return m_gameServerGroupName; }
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }
    template<typename GameServerGroupNameT = Aws::String>
    void SetGameServerGroupName(GameServerGroupNameT&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::forward<GameServerGroupNameT>(value); }
    template<typename GameServerGroupNameT = Aws::String>
    ClaimGameServerRequest& WithGameServerGroupName(GameServerGroupNameT&& value) { SetGameServerGroupName(std::forward<GameServerGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom string that uniquely identifies the game server to claim. If this
     * parameter is left empty, Amazon GameLift Servers FleetIQ searches for an
     * available game server in the specified game server group.</p>
     */
    inline const Aws::String& GetGameServerId() const { return m_gameServerId; }
    inline bool GameServerIdHasBeenSet() const { return m_gameServerIdHasBeenSet; }
    template<typename GameServerIdT = Aws::String>
    void SetGameServerId(GameServerIdT&& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = std::forward<GameServerIdT>(value); }
    template<typename GameServerIdT = Aws::String>
    ClaimGameServerRequest& WithGameServerId(GameServerIdT&& value) { SetGameServerId(std::forward<GameServerIdT>(value)); return *this;}
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
    ClaimGameServerRequest& WithGameServerData(GameServerDataT&& value) { SetGameServerData(std::forward<GameServerDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object that restricts how a claimed game server is chosen.</p>
     */
    inline const ClaimFilterOption& GetFilterOption() const { return m_filterOption; }
    inline bool FilterOptionHasBeenSet() const { return m_filterOptionHasBeenSet; }
    template<typename FilterOptionT = ClaimFilterOption>
    void SetFilterOption(FilterOptionT&& value) { m_filterOptionHasBeenSet = true; m_filterOption = std::forward<FilterOptionT>(value); }
    template<typename FilterOptionT = ClaimFilterOption>
    ClaimGameServerRequest& WithFilterOption(FilterOptionT&& value) { SetFilterOption(std::forward<FilterOptionT>(value)); return *this;}
    ///@}
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
