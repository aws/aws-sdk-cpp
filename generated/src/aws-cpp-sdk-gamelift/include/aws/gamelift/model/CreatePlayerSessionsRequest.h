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
    AWS_GAMELIFT_API CreatePlayerSessionsRequest();

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
    inline const Aws::String& GetGameSessionId() const{ return m_gameSessionId; }
    inline bool GameSessionIdHasBeenSet() const { return m_gameSessionIdHasBeenSet; }
    inline void SetGameSessionId(const Aws::String& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }
    inline void SetGameSessionId(Aws::String&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::move(value); }
    inline void SetGameSessionId(const char* value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId.assign(value); }
    inline CreatePlayerSessionsRequest& WithGameSessionId(const Aws::String& value) { SetGameSessionId(value); return *this;}
    inline CreatePlayerSessionsRequest& WithGameSessionId(Aws::String&& value) { SetGameSessionId(std::move(value)); return *this;}
    inline CreatePlayerSessionsRequest& WithGameSessionId(const char* value) { SetGameSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of unique identifiers for the players to be added.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPlayerIds() const{ return m_playerIds; }
    inline bool PlayerIdsHasBeenSet() const { return m_playerIdsHasBeenSet; }
    inline void SetPlayerIds(const Aws::Vector<Aws::String>& value) { m_playerIdsHasBeenSet = true; m_playerIds = value; }
    inline void SetPlayerIds(Aws::Vector<Aws::String>&& value) { m_playerIdsHasBeenSet = true; m_playerIds = std::move(value); }
    inline CreatePlayerSessionsRequest& WithPlayerIds(const Aws::Vector<Aws::String>& value) { SetPlayerIds(value); return *this;}
    inline CreatePlayerSessionsRequest& WithPlayerIds(Aws::Vector<Aws::String>&& value) { SetPlayerIds(std::move(value)); return *this;}
    inline CreatePlayerSessionsRequest& AddPlayerIds(const Aws::String& value) { m_playerIdsHasBeenSet = true; m_playerIds.push_back(value); return *this; }
    inline CreatePlayerSessionsRequest& AddPlayerIds(Aws::String&& value) { m_playerIdsHasBeenSet = true; m_playerIds.push_back(std::move(value)); return *this; }
    inline CreatePlayerSessionsRequest& AddPlayerIds(const char* value) { m_playerIdsHasBeenSet = true; m_playerIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Map of string pairs, each specifying a player ID and a set of
     * developer-defined information related to the player. Amazon GameLift does not
     * use this data, so it can be formatted as needed for use in the game. Any player
     * data strings for player IDs that are not included in the <code>PlayerIds</code>
     * parameter are ignored. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPlayerDataMap() const{ return m_playerDataMap; }
    inline bool PlayerDataMapHasBeenSet() const { return m_playerDataMapHasBeenSet; }
    inline void SetPlayerDataMap(const Aws::Map<Aws::String, Aws::String>& value) { m_playerDataMapHasBeenSet = true; m_playerDataMap = value; }
    inline void SetPlayerDataMap(Aws::Map<Aws::String, Aws::String>&& value) { m_playerDataMapHasBeenSet = true; m_playerDataMap = std::move(value); }
    inline CreatePlayerSessionsRequest& WithPlayerDataMap(const Aws::Map<Aws::String, Aws::String>& value) { SetPlayerDataMap(value); return *this;}
    inline CreatePlayerSessionsRequest& WithPlayerDataMap(Aws::Map<Aws::String, Aws::String>&& value) { SetPlayerDataMap(std::move(value)); return *this;}
    inline CreatePlayerSessionsRequest& AddPlayerDataMap(const Aws::String& key, const Aws::String& value) { m_playerDataMapHasBeenSet = true; m_playerDataMap.emplace(key, value); return *this; }
    inline CreatePlayerSessionsRequest& AddPlayerDataMap(Aws::String&& key, const Aws::String& value) { m_playerDataMapHasBeenSet = true; m_playerDataMap.emplace(std::move(key), value); return *this; }
    inline CreatePlayerSessionsRequest& AddPlayerDataMap(const Aws::String& key, Aws::String&& value) { m_playerDataMapHasBeenSet = true; m_playerDataMap.emplace(key, std::move(value)); return *this; }
    inline CreatePlayerSessionsRequest& AddPlayerDataMap(Aws::String&& key, Aws::String&& value) { m_playerDataMapHasBeenSet = true; m_playerDataMap.emplace(std::move(key), std::move(value)); return *this; }
    inline CreatePlayerSessionsRequest& AddPlayerDataMap(const char* key, Aws::String&& value) { m_playerDataMapHasBeenSet = true; m_playerDataMap.emplace(key, std::move(value)); return *this; }
    inline CreatePlayerSessionsRequest& AddPlayerDataMap(Aws::String&& key, const char* value) { m_playerDataMapHasBeenSet = true; m_playerDataMap.emplace(std::move(key), value); return *this; }
    inline CreatePlayerSessionsRequest& AddPlayerDataMap(const char* key, const char* value) { m_playerDataMapHasBeenSet = true; m_playerDataMap.emplace(key, value); return *this; }
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
