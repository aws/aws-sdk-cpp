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
  class CreatePlayerSessionRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API CreatePlayerSessionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePlayerSession"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the game session to add a player to.</p>
     */
    inline const Aws::String& GetGameSessionId() const { return m_gameSessionId; }
    inline bool GameSessionIdHasBeenSet() const { return m_gameSessionIdHasBeenSet; }
    template<typename GameSessionIdT = Aws::String>
    void SetGameSessionId(GameSessionIdT&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::forward<GameSessionIdT>(value); }
    template<typename GameSessionIdT = Aws::String>
    CreatePlayerSessionRequest& WithGameSessionId(GameSessionIdT&& value) { SetGameSessionId(std::forward<GameSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for a player. Player IDs are developer-defined.</p>
     */
    inline const Aws::String& GetPlayerId() const { return m_playerId; }
    inline bool PlayerIdHasBeenSet() const { return m_playerIdHasBeenSet; }
    template<typename PlayerIdT = Aws::String>
    void SetPlayerId(PlayerIdT&& value) { m_playerIdHasBeenSet = true; m_playerId = std::forward<PlayerIdT>(value); }
    template<typename PlayerIdT = Aws::String>
    CreatePlayerSessionRequest& WithPlayerId(PlayerIdT&& value) { SetPlayerId(std::forward<PlayerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Developer-defined information related to a player. Amazon GameLift Servers
     * does not use this data, so it can be formatted as needed for use in the
     * game.</p>
     */
    inline const Aws::String& GetPlayerData() const { return m_playerData; }
    inline bool PlayerDataHasBeenSet() const { return m_playerDataHasBeenSet; }
    template<typename PlayerDataT = Aws::String>
    void SetPlayerData(PlayerDataT&& value) { m_playerDataHasBeenSet = true; m_playerData = std::forward<PlayerDataT>(value); }
    template<typename PlayerDataT = Aws::String>
    CreatePlayerSessionRequest& WithPlayerData(PlayerDataT&& value) { SetPlayerData(std::forward<PlayerDataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gameSessionId;
    bool m_gameSessionIdHasBeenSet = false;

    Aws::String m_playerId;
    bool m_playerIdHasBeenSet = false;

    Aws::String m_playerData;
    bool m_playerDataHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
