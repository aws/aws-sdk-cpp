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
   * <p>Represents a new player session that is created as a result of a successful
   * FlexMatch match. A successful match automatically creates new player sessions
   * for every player ID in the original matchmaking request. </p> <p>When players
   * connect to the match's game session, they must include both player ID and player
   * session ID in order to claim their assigned player slot.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/MatchedPlayerSession">AWS
   * API Reference</a></p>
   */
  class MatchedPlayerSession
  {
  public:
    AWS_GAMELIFT_API MatchedPlayerSession();
    AWS_GAMELIFT_API MatchedPlayerSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API MatchedPlayerSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for a player </p>
     */
    inline const Aws::String& GetPlayerId() const{ return m_playerId; }

    /**
     * <p>A unique identifier for a player </p>
     */
    inline bool PlayerIdHasBeenSet() const { return m_playerIdHasBeenSet; }

    /**
     * <p>A unique identifier for a player </p>
     */
    inline void SetPlayerId(const Aws::String& value) { m_playerIdHasBeenSet = true; m_playerId = value; }

    /**
     * <p>A unique identifier for a player </p>
     */
    inline void SetPlayerId(Aws::String&& value) { m_playerIdHasBeenSet = true; m_playerId = std::move(value); }

    /**
     * <p>A unique identifier for a player </p>
     */
    inline void SetPlayerId(const char* value) { m_playerIdHasBeenSet = true; m_playerId.assign(value); }

    /**
     * <p>A unique identifier for a player </p>
     */
    inline MatchedPlayerSession& WithPlayerId(const Aws::String& value) { SetPlayerId(value); return *this;}

    /**
     * <p>A unique identifier for a player </p>
     */
    inline MatchedPlayerSession& WithPlayerId(Aws::String&& value) { SetPlayerId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a player </p>
     */
    inline MatchedPlayerSession& WithPlayerId(const char* value) { SetPlayerId(value); return *this;}


    /**
     * <p>A unique identifier for a player session</p>
     */
    inline const Aws::String& GetPlayerSessionId() const{ return m_playerSessionId; }

    /**
     * <p>A unique identifier for a player session</p>
     */
    inline bool PlayerSessionIdHasBeenSet() const { return m_playerSessionIdHasBeenSet; }

    /**
     * <p>A unique identifier for a player session</p>
     */
    inline void SetPlayerSessionId(const Aws::String& value) { m_playerSessionIdHasBeenSet = true; m_playerSessionId = value; }

    /**
     * <p>A unique identifier for a player session</p>
     */
    inline void SetPlayerSessionId(Aws::String&& value) { m_playerSessionIdHasBeenSet = true; m_playerSessionId = std::move(value); }

    /**
     * <p>A unique identifier for a player session</p>
     */
    inline void SetPlayerSessionId(const char* value) { m_playerSessionIdHasBeenSet = true; m_playerSessionId.assign(value); }

    /**
     * <p>A unique identifier for a player session</p>
     */
    inline MatchedPlayerSession& WithPlayerSessionId(const Aws::String& value) { SetPlayerSessionId(value); return *this;}

    /**
     * <p>A unique identifier for a player session</p>
     */
    inline MatchedPlayerSession& WithPlayerSessionId(Aws::String&& value) { SetPlayerSessionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a player session</p>
     */
    inline MatchedPlayerSession& WithPlayerSessionId(const char* value) { SetPlayerSessionId(value); return *this;}

  private:

    Aws::String m_playerId;
    bool m_playerIdHasBeenSet = false;

    Aws::String m_playerSessionId;
    bool m_playerSessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
