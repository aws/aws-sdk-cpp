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
    AWS_GAMELIFT_API MatchedPlayerSession() = default;
    AWS_GAMELIFT_API MatchedPlayerSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API MatchedPlayerSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for a player </p>
     */
    inline const Aws::String& GetPlayerId() const { return m_playerId; }
    inline bool PlayerIdHasBeenSet() const { return m_playerIdHasBeenSet; }
    template<typename PlayerIdT = Aws::String>
    void SetPlayerId(PlayerIdT&& value) { m_playerIdHasBeenSet = true; m_playerId = std::forward<PlayerIdT>(value); }
    template<typename PlayerIdT = Aws::String>
    MatchedPlayerSession& WithPlayerId(PlayerIdT&& value) { SetPlayerId(std::forward<PlayerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for a player session</p>
     */
    inline const Aws::String& GetPlayerSessionId() const { return m_playerSessionId; }
    inline bool PlayerSessionIdHasBeenSet() const { return m_playerSessionIdHasBeenSet; }
    template<typename PlayerSessionIdT = Aws::String>
    void SetPlayerSessionId(PlayerSessionIdT&& value) { m_playerSessionIdHasBeenSet = true; m_playerSessionId = std::forward<PlayerSessionIdT>(value); }
    template<typename PlayerSessionIdT = Aws::String>
    MatchedPlayerSession& WithPlayerSessionId(PlayerSessionIdT&& value) { SetPlayerSessionId(std::forward<PlayerSessionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_playerId;
    bool m_playerIdHasBeenSet = false;

    Aws::String m_playerSessionId;
    bool m_playerSessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
