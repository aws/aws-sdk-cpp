/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Information about a player session. This object contains only the player ID
   * and player session ID. To retrieve full details on a player session, call <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribePlayerSessions.html">DescribePlayerSessions</a>
   * with the player session ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/PlacedPlayerSession">AWS
   * API Reference</a></p>
   */
  class PlacedPlayerSession
  {
  public:
    AWS_GAMELIFT_API PlacedPlayerSession();
    AWS_GAMELIFT_API PlacedPlayerSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API PlacedPlayerSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for a player that is associated with this player
     * session.</p>
     */
    inline const Aws::String& GetPlayerId() const{ return m_playerId; }

    /**
     * <p>A unique identifier for a player that is associated with this player
     * session.</p>
     */
    inline bool PlayerIdHasBeenSet() const { return m_playerIdHasBeenSet; }

    /**
     * <p>A unique identifier for a player that is associated with this player
     * session.</p>
     */
    inline void SetPlayerId(const Aws::String& value) { m_playerIdHasBeenSet = true; m_playerId = value; }

    /**
     * <p>A unique identifier for a player that is associated with this player
     * session.</p>
     */
    inline void SetPlayerId(Aws::String&& value) { m_playerIdHasBeenSet = true; m_playerId = std::move(value); }

    /**
     * <p>A unique identifier for a player that is associated with this player
     * session.</p>
     */
    inline void SetPlayerId(const char* value) { m_playerIdHasBeenSet = true; m_playerId.assign(value); }

    /**
     * <p>A unique identifier for a player that is associated with this player
     * session.</p>
     */
    inline PlacedPlayerSession& WithPlayerId(const Aws::String& value) { SetPlayerId(value); return *this;}

    /**
     * <p>A unique identifier for a player that is associated with this player
     * session.</p>
     */
    inline PlacedPlayerSession& WithPlayerId(Aws::String&& value) { SetPlayerId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a player that is associated with this player
     * session.</p>
     */
    inline PlacedPlayerSession& WithPlayerId(const char* value) { SetPlayerId(value); return *this;}


    /**
     * <p>A unique identifier for a player session.</p>
     */
    inline const Aws::String& GetPlayerSessionId() const{ return m_playerSessionId; }

    /**
     * <p>A unique identifier for a player session.</p>
     */
    inline bool PlayerSessionIdHasBeenSet() const { return m_playerSessionIdHasBeenSet; }

    /**
     * <p>A unique identifier for a player session.</p>
     */
    inline void SetPlayerSessionId(const Aws::String& value) { m_playerSessionIdHasBeenSet = true; m_playerSessionId = value; }

    /**
     * <p>A unique identifier for a player session.</p>
     */
    inline void SetPlayerSessionId(Aws::String&& value) { m_playerSessionIdHasBeenSet = true; m_playerSessionId = std::move(value); }

    /**
     * <p>A unique identifier for a player session.</p>
     */
    inline void SetPlayerSessionId(const char* value) { m_playerSessionIdHasBeenSet = true; m_playerSessionId.assign(value); }

    /**
     * <p>A unique identifier for a player session.</p>
     */
    inline PlacedPlayerSession& WithPlayerSessionId(const Aws::String& value) { SetPlayerSessionId(value); return *this;}

    /**
     * <p>A unique identifier for a player session.</p>
     */
    inline PlacedPlayerSession& WithPlayerSessionId(Aws::String&& value) { SetPlayerSessionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a player session.</p>
     */
    inline PlacedPlayerSession& WithPlayerSessionId(const char* value) { SetPlayerSessionId(value); return *this;}

  private:

    Aws::String m_playerId;
    bool m_playerIdHasBeenSet = false;

    Aws::String m_playerSessionId;
    bool m_playerSessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
