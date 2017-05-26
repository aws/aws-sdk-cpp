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
   * <p>Represents the input for a request action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreatePlayerSessionsInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API CreatePlayerSessionsRequest : public GameLiftRequest
  {
  public:
    CreatePlayerSessionsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Unique identifier for the game session to add players to.</p>
     */
    inline const Aws::String& GetGameSessionId() const{ return m_gameSessionId; }

    /**
     * <p>Unique identifier for the game session to add players to.</p>
     */
    inline void SetGameSessionId(const Aws::String& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }

    /**
     * <p>Unique identifier for the game session to add players to.</p>
     */
    inline void SetGameSessionId(Aws::String&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::move(value); }

    /**
     * <p>Unique identifier for the game session to add players to.</p>
     */
    inline void SetGameSessionId(const char* value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId.assign(value); }

    /**
     * <p>Unique identifier for the game session to add players to.</p>
     */
    inline CreatePlayerSessionsRequest& WithGameSessionId(const Aws::String& value) { SetGameSessionId(value); return *this;}

    /**
     * <p>Unique identifier for the game session to add players to.</p>
     */
    inline CreatePlayerSessionsRequest& WithGameSessionId(Aws::String&& value) { SetGameSessionId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the game session to add players to.</p>
     */
    inline CreatePlayerSessionsRequest& WithGameSessionId(const char* value) { SetGameSessionId(value); return *this;}

    /**
     * <p>List of unique identifiers for the players to be added.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPlayerIds() const{ return m_playerIds; }

    /**
     * <p>List of unique identifiers for the players to be added.</p>
     */
    inline void SetPlayerIds(const Aws::Vector<Aws::String>& value) { m_playerIdsHasBeenSet = true; m_playerIds = value; }

    /**
     * <p>List of unique identifiers for the players to be added.</p>
     */
    inline void SetPlayerIds(Aws::Vector<Aws::String>&& value) { m_playerIdsHasBeenSet = true; m_playerIds = std::move(value); }

    /**
     * <p>List of unique identifiers for the players to be added.</p>
     */
    inline CreatePlayerSessionsRequest& WithPlayerIds(const Aws::Vector<Aws::String>& value) { SetPlayerIds(value); return *this;}

    /**
     * <p>List of unique identifiers for the players to be added.</p>
     */
    inline CreatePlayerSessionsRequest& WithPlayerIds(Aws::Vector<Aws::String>&& value) { SetPlayerIds(std::move(value)); return *this;}

    /**
     * <p>List of unique identifiers for the players to be added.</p>
     */
    inline CreatePlayerSessionsRequest& AddPlayerIds(const Aws::String& value) { m_playerIdsHasBeenSet = true; m_playerIds.push_back(value); return *this; }

    /**
     * <p>List of unique identifiers for the players to be added.</p>
     */
    inline CreatePlayerSessionsRequest& AddPlayerIds(Aws::String&& value) { m_playerIdsHasBeenSet = true; m_playerIds.push_back(std::move(value)); return *this; }

    /**
     * <p>List of unique identifiers for the players to be added.</p>
     */
    inline CreatePlayerSessionsRequest& AddPlayerIds(const char* value) { m_playerIdsHasBeenSet = true; m_playerIds.push_back(value); return *this; }

    /**
     * <p>Map of string pairs, each specifying a player ID and a set of
     * developer-defined information related to the player. Amazon GameLift does not
     * use this data, so it can be formatted as needed for use in the game. Player data
     * strings for player IDs not included in the <code>PlayerIds</code> parameter are
     * ignored. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPlayerDataMap() const{ return m_playerDataMap; }

    /**
     * <p>Map of string pairs, each specifying a player ID and a set of
     * developer-defined information related to the player. Amazon GameLift does not
     * use this data, so it can be formatted as needed for use in the game. Player data
     * strings for player IDs not included in the <code>PlayerIds</code> parameter are
     * ignored. </p>
     */
    inline void SetPlayerDataMap(const Aws::Map<Aws::String, Aws::String>& value) { m_playerDataMapHasBeenSet = true; m_playerDataMap = value; }

    /**
     * <p>Map of string pairs, each specifying a player ID and a set of
     * developer-defined information related to the player. Amazon GameLift does not
     * use this data, so it can be formatted as needed for use in the game. Player data
     * strings for player IDs not included in the <code>PlayerIds</code> parameter are
     * ignored. </p>
     */
    inline void SetPlayerDataMap(Aws::Map<Aws::String, Aws::String>&& value) { m_playerDataMapHasBeenSet = true; m_playerDataMap = std::move(value); }

    /**
     * <p>Map of string pairs, each specifying a player ID and a set of
     * developer-defined information related to the player. Amazon GameLift does not
     * use this data, so it can be formatted as needed for use in the game. Player data
     * strings for player IDs not included in the <code>PlayerIds</code> parameter are
     * ignored. </p>
     */
    inline CreatePlayerSessionsRequest& WithPlayerDataMap(const Aws::Map<Aws::String, Aws::String>& value) { SetPlayerDataMap(value); return *this;}

    /**
     * <p>Map of string pairs, each specifying a player ID and a set of
     * developer-defined information related to the player. Amazon GameLift does not
     * use this data, so it can be formatted as needed for use in the game. Player data
     * strings for player IDs not included in the <code>PlayerIds</code> parameter are
     * ignored. </p>
     */
    inline CreatePlayerSessionsRequest& WithPlayerDataMap(Aws::Map<Aws::String, Aws::String>&& value) { SetPlayerDataMap(std::move(value)); return *this;}

    /**
     * <p>Map of string pairs, each specifying a player ID and a set of
     * developer-defined information related to the player. Amazon GameLift does not
     * use this data, so it can be formatted as needed for use in the game. Player data
     * strings for player IDs not included in the <code>PlayerIds</code> parameter are
     * ignored. </p>
     */
    inline CreatePlayerSessionsRequest& AddPlayerDataMap(const Aws::String& key, const Aws::String& value) { m_playerDataMapHasBeenSet = true; m_playerDataMap.emplace(key, value); return *this; }

    /**
     * <p>Map of string pairs, each specifying a player ID and a set of
     * developer-defined information related to the player. Amazon GameLift does not
     * use this data, so it can be formatted as needed for use in the game. Player data
     * strings for player IDs not included in the <code>PlayerIds</code> parameter are
     * ignored. </p>
     */
    inline CreatePlayerSessionsRequest& AddPlayerDataMap(Aws::String&& key, const Aws::String& value) { m_playerDataMapHasBeenSet = true; m_playerDataMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of string pairs, each specifying a player ID and a set of
     * developer-defined information related to the player. Amazon GameLift does not
     * use this data, so it can be formatted as needed for use in the game. Player data
     * strings for player IDs not included in the <code>PlayerIds</code> parameter are
     * ignored. </p>
     */
    inline CreatePlayerSessionsRequest& AddPlayerDataMap(const Aws::String& key, Aws::String&& value) { m_playerDataMapHasBeenSet = true; m_playerDataMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of string pairs, each specifying a player ID and a set of
     * developer-defined information related to the player. Amazon GameLift does not
     * use this data, so it can be formatted as needed for use in the game. Player data
     * strings for player IDs not included in the <code>PlayerIds</code> parameter are
     * ignored. </p>
     */
    inline CreatePlayerSessionsRequest& AddPlayerDataMap(Aws::String&& key, Aws::String&& value) { m_playerDataMapHasBeenSet = true; m_playerDataMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Map of string pairs, each specifying a player ID and a set of
     * developer-defined information related to the player. Amazon GameLift does not
     * use this data, so it can be formatted as needed for use in the game. Player data
     * strings for player IDs not included in the <code>PlayerIds</code> parameter are
     * ignored. </p>
     */
    inline CreatePlayerSessionsRequest& AddPlayerDataMap(const char* key, Aws::String&& value) { m_playerDataMapHasBeenSet = true; m_playerDataMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of string pairs, each specifying a player ID and a set of
     * developer-defined information related to the player. Amazon GameLift does not
     * use this data, so it can be formatted as needed for use in the game. Player data
     * strings for player IDs not included in the <code>PlayerIds</code> parameter are
     * ignored. </p>
     */
    inline CreatePlayerSessionsRequest& AddPlayerDataMap(Aws::String&& key, const char* value) { m_playerDataMapHasBeenSet = true; m_playerDataMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of string pairs, each specifying a player ID and a set of
     * developer-defined information related to the player. Amazon GameLift does not
     * use this data, so it can be formatted as needed for use in the game. Player data
     * strings for player IDs not included in the <code>PlayerIds</code> parameter are
     * ignored. </p>
     */
    inline CreatePlayerSessionsRequest& AddPlayerDataMap(const char* key, const char* value) { m_playerDataMapHasBeenSet = true; m_playerDataMap.emplace(key, value); return *this; }

  private:
    Aws::String m_gameSessionId;
    bool m_gameSessionIdHasBeenSet;
    Aws::Vector<Aws::String> m_playerIds;
    bool m_playerIdsHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_playerDataMap;
    bool m_playerDataMapHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
