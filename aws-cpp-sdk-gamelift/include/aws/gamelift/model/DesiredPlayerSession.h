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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Player information for use when creating player sessions using a game session
   * placement request with <a>StartGameSessionPlacement</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DesiredPlayerSession">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DesiredPlayerSession
  {
  public:
    DesiredPlayerSession();
    DesiredPlayerSession(const Aws::Utils::Json::JsonValue& jsonValue);
    DesiredPlayerSession& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Unique identifier for a player to associate with the player session.</p>
     */
    inline const Aws::String& GetPlayerId() const{ return m_playerId; }

    /**
     * <p>Unique identifier for a player to associate with the player session.</p>
     */
    inline void SetPlayerId(const Aws::String& value) { m_playerIdHasBeenSet = true; m_playerId = value; }

    /**
     * <p>Unique identifier for a player to associate with the player session.</p>
     */
    inline void SetPlayerId(Aws::String&& value) { m_playerIdHasBeenSet = true; m_playerId = std::move(value); }

    /**
     * <p>Unique identifier for a player to associate with the player session.</p>
     */
    inline void SetPlayerId(const char* value) { m_playerIdHasBeenSet = true; m_playerId.assign(value); }

    /**
     * <p>Unique identifier for a player to associate with the player session.</p>
     */
    inline DesiredPlayerSession& WithPlayerId(const Aws::String& value) { SetPlayerId(value); return *this;}

    /**
     * <p>Unique identifier for a player to associate with the player session.</p>
     */
    inline DesiredPlayerSession& WithPlayerId(Aws::String&& value) { SetPlayerId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a player to associate with the player session.</p>
     */
    inline DesiredPlayerSession& WithPlayerId(const char* value) { SetPlayerId(value); return *this;}

    /**
     * <p>Developer-defined information related to a player. Amazon GameLift does not
     * use this data, so it can be formatted as needed for use in the game.</p>
     */
    inline const Aws::String& GetPlayerData() const{ return m_playerData; }

    /**
     * <p>Developer-defined information related to a player. Amazon GameLift does not
     * use this data, so it can be formatted as needed for use in the game.</p>
     */
    inline void SetPlayerData(const Aws::String& value) { m_playerDataHasBeenSet = true; m_playerData = value; }

    /**
     * <p>Developer-defined information related to a player. Amazon GameLift does not
     * use this data, so it can be formatted as needed for use in the game.</p>
     */
    inline void SetPlayerData(Aws::String&& value) { m_playerDataHasBeenSet = true; m_playerData = std::move(value); }

    /**
     * <p>Developer-defined information related to a player. Amazon GameLift does not
     * use this data, so it can be formatted as needed for use in the game.</p>
     */
    inline void SetPlayerData(const char* value) { m_playerDataHasBeenSet = true; m_playerData.assign(value); }

    /**
     * <p>Developer-defined information related to a player. Amazon GameLift does not
     * use this data, so it can be formatted as needed for use in the game.</p>
     */
    inline DesiredPlayerSession& WithPlayerData(const Aws::String& value) { SetPlayerData(value); return *this;}

    /**
     * <p>Developer-defined information related to a player. Amazon GameLift does not
     * use this data, so it can be formatted as needed for use in the game.</p>
     */
    inline DesiredPlayerSession& WithPlayerData(Aws::String&& value) { SetPlayerData(std::move(value)); return *this;}

    /**
     * <p>Developer-defined information related to a player. Amazon GameLift does not
     * use this data, so it can be formatted as needed for use in the game.</p>
     */
    inline DesiredPlayerSession& WithPlayerData(const char* value) { SetPlayerData(value); return *this;}

  private:
    Aws::String m_playerId;
    bool m_playerIdHasBeenSet;
    Aws::String m_playerData;
    bool m_playerDataHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
