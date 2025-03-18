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
  class DescribePlayerSessionsRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API DescribePlayerSessionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePlayerSessions"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the game session to retrieve player sessions for.</p>
     */
    inline const Aws::String& GetGameSessionId() const { return m_gameSessionId; }
    inline bool GameSessionIdHasBeenSet() const { return m_gameSessionIdHasBeenSet; }
    template<typename GameSessionIdT = Aws::String>
    void SetGameSessionId(GameSessionIdT&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::forward<GameSessionIdT>(value); }
    template<typename GameSessionIdT = Aws::String>
    DescribePlayerSessionsRequest& WithGameSessionId(GameSessionIdT&& value) { SetGameSessionId(std::forward<GameSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for a player to retrieve player sessions for.</p>
     */
    inline const Aws::String& GetPlayerId() const { return m_playerId; }
    inline bool PlayerIdHasBeenSet() const { return m_playerIdHasBeenSet; }
    template<typename PlayerIdT = Aws::String>
    void SetPlayerId(PlayerIdT&& value) { m_playerIdHasBeenSet = true; m_playerId = std::forward<PlayerIdT>(value); }
    template<typename PlayerIdT = Aws::String>
    DescribePlayerSessionsRequest& WithPlayerId(PlayerIdT&& value) { SetPlayerId(std::forward<PlayerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for a player session to retrieve.</p>
     */
    inline const Aws::String& GetPlayerSessionId() const { return m_playerSessionId; }
    inline bool PlayerSessionIdHasBeenSet() const { return m_playerSessionIdHasBeenSet; }
    template<typename PlayerSessionIdT = Aws::String>
    void SetPlayerSessionId(PlayerSessionIdT&& value) { m_playerSessionIdHasBeenSet = true; m_playerSessionId = std::forward<PlayerSessionIdT>(value); }
    template<typename PlayerSessionIdT = Aws::String>
    DescribePlayerSessionsRequest& WithPlayerSessionId(PlayerSessionIdT&& value) { SetPlayerSessionId(std::forward<PlayerSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Player session status to filter results on. Note that when a PlayerSessionId
     * or PlayerId is provided in a DescribePlayerSessions request, then the
     * PlayerSessionStatusFilter has no effect on the response.</p> <p>Possible player
     * session statuses include the following:</p> <ul> <li> <p> <b>RESERVED</b> -- The
     * player session request has been received, but the player has not yet connected
     * to the server process and/or been validated. </p> </li> <li> <p> <b>ACTIVE</b>
     * -- The player has been validated by the server process and is currently
     * connected.</p> </li> <li> <p> <b>COMPLETED</b> -- The player connection has been
     * dropped.</p> </li> <li> <p> <b>TIMEDOUT</b> -- A player session request was
     * received, but the player did not connect and/or was not validated within the
     * timeout limit (60 seconds).</p> </li> </ul>
     */
    inline const Aws::String& GetPlayerSessionStatusFilter() const { return m_playerSessionStatusFilter; }
    inline bool PlayerSessionStatusFilterHasBeenSet() const { return m_playerSessionStatusFilterHasBeenSet; }
    template<typename PlayerSessionStatusFilterT = Aws::String>
    void SetPlayerSessionStatusFilter(PlayerSessionStatusFilterT&& value) { m_playerSessionStatusFilterHasBeenSet = true; m_playerSessionStatusFilter = std::forward<PlayerSessionStatusFilterT>(value); }
    template<typename PlayerSessionStatusFilterT = Aws::String>
    DescribePlayerSessionsRequest& WithPlayerSessionStatusFilter(PlayerSessionStatusFilterT&& value) { SetPlayerSessionStatusFilter(std::forward<PlayerSessionStatusFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages. If a player
     * session ID is specified, this parameter is ignored.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribePlayerSessionsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value. If a player session ID
     * is specified, this parameter is ignored.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribePlayerSessionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gameSessionId;
    bool m_gameSessionIdHasBeenSet = false;

    Aws::String m_playerId;
    bool m_playerIdHasBeenSet = false;

    Aws::String m_playerSessionId;
    bool m_playerSessionIdHasBeenSet = false;

    Aws::String m_playerSessionStatusFilter;
    bool m_playerSessionStatusFilterHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
