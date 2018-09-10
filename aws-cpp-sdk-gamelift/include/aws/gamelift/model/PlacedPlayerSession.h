﻿/*
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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Information about a player session that was created as part of a
   * <a>StartGameSessionPlacement</a> request. This object contains only the player
   * ID and player session ID. To retrieve full details on a player session, call
   * <a>DescribePlayerSessions</a> with the player session ID.</p>
   * <p>Player-session-related operations include:</p> <ul> <li> <p>
   * <a>CreatePlayerSession</a> </p> </li> <li> <p> <a>CreatePlayerSessions</a> </p>
   * </li> <li> <p> <a>DescribePlayerSessions</a> </p> </li> <li> <p>Game session
   * placements</p> <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li>
   * <p> <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
   * <a>StopGameSessionPlacement</a> </p> </li> </ul> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/PlacedPlayerSession">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API PlacedPlayerSession
  {
  public:
    PlacedPlayerSession();
    PlacedPlayerSession(Aws::Utils::Json::JsonView jsonValue);
    PlacedPlayerSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unique identifier for a player that is associated with this player
     * session.</p>
     */
    inline const Aws::String& GetPlayerId() const{ return m_playerId; }

    /**
     * <p>Unique identifier for a player that is associated with this player
     * session.</p>
     */
    inline void SetPlayerId(const Aws::String& value) { m_playerIdHasBeenSet = true; m_playerId = value; }

    /**
     * <p>Unique identifier for a player that is associated with this player
     * session.</p>
     */
    inline void SetPlayerId(Aws::String&& value) { m_playerIdHasBeenSet = true; m_playerId = std::move(value); }

    /**
     * <p>Unique identifier for a player that is associated with this player
     * session.</p>
     */
    inline void SetPlayerId(const char* value) { m_playerIdHasBeenSet = true; m_playerId.assign(value); }

    /**
     * <p>Unique identifier for a player that is associated with this player
     * session.</p>
     */
    inline PlacedPlayerSession& WithPlayerId(const Aws::String& value) { SetPlayerId(value); return *this;}

    /**
     * <p>Unique identifier for a player that is associated with this player
     * session.</p>
     */
    inline PlacedPlayerSession& WithPlayerId(Aws::String&& value) { SetPlayerId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a player that is associated with this player
     * session.</p>
     */
    inline PlacedPlayerSession& WithPlayerId(const char* value) { SetPlayerId(value); return *this;}


    /**
     * <p>Unique identifier for a player session.</p>
     */
    inline const Aws::String& GetPlayerSessionId() const{ return m_playerSessionId; }

    /**
     * <p>Unique identifier for a player session.</p>
     */
    inline void SetPlayerSessionId(const Aws::String& value) { m_playerSessionIdHasBeenSet = true; m_playerSessionId = value; }

    /**
     * <p>Unique identifier for a player session.</p>
     */
    inline void SetPlayerSessionId(Aws::String&& value) { m_playerSessionIdHasBeenSet = true; m_playerSessionId = std::move(value); }

    /**
     * <p>Unique identifier for a player session.</p>
     */
    inline void SetPlayerSessionId(const char* value) { m_playerSessionIdHasBeenSet = true; m_playerSessionId.assign(value); }

    /**
     * <p>Unique identifier for a player session.</p>
     */
    inline PlacedPlayerSession& WithPlayerSessionId(const Aws::String& value) { SetPlayerSessionId(value); return *this;}

    /**
     * <p>Unique identifier for a player session.</p>
     */
    inline PlacedPlayerSession& WithPlayerSessionId(Aws::String&& value) { SetPlayerSessionId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a player session.</p>
     */
    inline PlacedPlayerSession& WithPlayerSessionId(const char* value) { SetPlayerSessionId(value); return *this;}

  private:

    Aws::String m_playerId;
    bool m_playerIdHasBeenSet;

    Aws::String m_playerSessionId;
    bool m_playerSessionIdHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
