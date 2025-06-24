/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class CreatePlayerSessionsRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API CreatePlayerSessionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePlayerSessions"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the game session to add players to.</p>
     */
    inline const Aws::String& GetGameSessionId() const { return m_gameSessionId; }
    inline bool GameSessionIdHasBeenSet() const { return m_gameSessionIdHasBeenSet; }
    template<typename GameSessionIdT = Aws::String>
    void SetGameSessionId(GameSessionIdT&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::forward<GameSessionIdT>(value); }
    template<typename GameSessionIdT = Aws::String>
    CreatePlayerSessionsRequest& WithGameSessionId(GameSessionIdT&& value) { SetGameSessionId(std::forward<GameSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of unique identifiers for the players to be added.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPlayerIds() const { return m_playerIds; }
    inline bool PlayerIdsHasBeenSet() const { return m_playerIdsHasBeenSet; }
    template<typename PlayerIdsT = Aws::Vector<Aws::String>>
    void SetPlayerIds(PlayerIdsT&& value) { m_playerIdsHasBeenSet = true; m_playerIds = std::forward<PlayerIdsT>(value); }
    template<typename PlayerIdsT = Aws::Vector<Aws::String>>
    CreatePlayerSessionsRequest& WithPlayerIds(PlayerIdsT&& value) { SetPlayerIds(std::forward<PlayerIdsT>(value)); return *this;}
    template<typename PlayerIdsT = Aws::String>
    CreatePlayerSessionsRequest& AddPlayerIds(PlayerIdsT&& value) { m_playerIdsHasBeenSet = true; m_playerIds.emplace_back(std::forward<PlayerIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Map of string pairs, each specifying a player ID and a set of
     * developer-defined information related to the player. Amazon GameLift Servers
     * does not use this data, so it can be formatted as needed for use in the game.
     * Any player data strings for player IDs that are not included in the
     * <code>PlayerIds</code> parameter are ignored. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPlayerDataMap() const { return m_playerDataMap; }
    inline bool PlayerDataMapHasBeenSet() const { return m_playerDataMapHasBeenSet; }
    template<typename PlayerDataMapT = Aws::Map<Aws::String, Aws::String>>
    void SetPlayerDataMap(PlayerDataMapT&& value) { m_playerDataMapHasBeenSet = true; m_playerDataMap = std::forward<PlayerDataMapT>(value); }
    template<typename PlayerDataMapT = Aws::Map<Aws::String, Aws::String>>
    CreatePlayerSessionsRequest& WithPlayerDataMap(PlayerDataMapT&& value) { SetPlayerDataMap(std::forward<PlayerDataMapT>(value)); return *this;}
    template<typename PlayerDataMapKeyT = Aws::String, typename PlayerDataMapValueT = Aws::String>
    CreatePlayerSessionsRequest& AddPlayerDataMap(PlayerDataMapKeyT&& key, PlayerDataMapValueT&& value) {
      m_playerDataMapHasBeenSet = true; m_playerDataMap.emplace(std::forward<PlayerDataMapKeyT>(key), std::forward<PlayerDataMapValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_gameSessionId;
    bool m_gameSessionIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_playerIds;
    bool m_playerIdsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_playerDataMap;
    bool m_playerDataMapHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
