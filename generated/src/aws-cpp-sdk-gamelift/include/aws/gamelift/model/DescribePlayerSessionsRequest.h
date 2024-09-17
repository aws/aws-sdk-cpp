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
    AWS_GAMELIFT_API DescribePlayerSessionsRequest();

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
    inline const Aws::String& GetGameSessionId() const{ return m_gameSessionId; }
    inline bool GameSessionIdHasBeenSet() const { return m_gameSessionIdHasBeenSet; }
    inline void SetGameSessionId(const Aws::String& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }
    inline void SetGameSessionId(Aws::String&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::move(value); }
    inline void SetGameSessionId(const char* value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId.assign(value); }
    inline DescribePlayerSessionsRequest& WithGameSessionId(const Aws::String& value) { SetGameSessionId(value); return *this;}
    inline DescribePlayerSessionsRequest& WithGameSessionId(Aws::String&& value) { SetGameSessionId(std::move(value)); return *this;}
    inline DescribePlayerSessionsRequest& WithGameSessionId(const char* value) { SetGameSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for a player to retrieve player sessions for.</p>
     */
    inline const Aws::String& GetPlayerId() const{ return m_playerId; }
    inline bool PlayerIdHasBeenSet() const { return m_playerIdHasBeenSet; }
    inline void SetPlayerId(const Aws::String& value) { m_playerIdHasBeenSet = true; m_playerId = value; }
    inline void SetPlayerId(Aws::String&& value) { m_playerIdHasBeenSet = true; m_playerId = std::move(value); }
    inline void SetPlayerId(const char* value) { m_playerIdHasBeenSet = true; m_playerId.assign(value); }
    inline DescribePlayerSessionsRequest& WithPlayerId(const Aws::String& value) { SetPlayerId(value); return *this;}
    inline DescribePlayerSessionsRequest& WithPlayerId(Aws::String&& value) { SetPlayerId(std::move(value)); return *this;}
    inline DescribePlayerSessionsRequest& WithPlayerId(const char* value) { SetPlayerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for a player session to retrieve.</p>
     */
    inline const Aws::String& GetPlayerSessionId() const{ return m_playerSessionId; }
    inline bool PlayerSessionIdHasBeenSet() const { return m_playerSessionIdHasBeenSet; }
    inline void SetPlayerSessionId(const Aws::String& value) { m_playerSessionIdHasBeenSet = true; m_playerSessionId = value; }
    inline void SetPlayerSessionId(Aws::String&& value) { m_playerSessionIdHasBeenSet = true; m_playerSessionId = std::move(value); }
    inline void SetPlayerSessionId(const char* value) { m_playerSessionIdHasBeenSet = true; m_playerSessionId.assign(value); }
    inline DescribePlayerSessionsRequest& WithPlayerSessionId(const Aws::String& value) { SetPlayerSessionId(value); return *this;}
    inline DescribePlayerSessionsRequest& WithPlayerSessionId(Aws::String&& value) { SetPlayerSessionId(std::move(value)); return *this;}
    inline DescribePlayerSessionsRequest& WithPlayerSessionId(const char* value) { SetPlayerSessionId(value); return *this;}
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
    inline const Aws::String& GetPlayerSessionStatusFilter() const{ return m_playerSessionStatusFilter; }
    inline bool PlayerSessionStatusFilterHasBeenSet() const { return m_playerSessionStatusFilterHasBeenSet; }
    inline void SetPlayerSessionStatusFilter(const Aws::String& value) { m_playerSessionStatusFilterHasBeenSet = true; m_playerSessionStatusFilter = value; }
    inline void SetPlayerSessionStatusFilter(Aws::String&& value) { m_playerSessionStatusFilterHasBeenSet = true; m_playerSessionStatusFilter = std::move(value); }
    inline void SetPlayerSessionStatusFilter(const char* value) { m_playerSessionStatusFilterHasBeenSet = true; m_playerSessionStatusFilter.assign(value); }
    inline DescribePlayerSessionsRequest& WithPlayerSessionStatusFilter(const Aws::String& value) { SetPlayerSessionStatusFilter(value); return *this;}
    inline DescribePlayerSessionsRequest& WithPlayerSessionStatusFilter(Aws::String&& value) { SetPlayerSessionStatusFilter(std::move(value)); return *this;}
    inline DescribePlayerSessionsRequest& WithPlayerSessionStatusFilter(const char* value) { SetPlayerSessionStatusFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages. If a player
     * session ID is specified, this parameter is ignored.</p>
     */
    inline int GetLimit() const{ return m_limit; }
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
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribePlayerSessionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribePlayerSessionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribePlayerSessionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
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

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
