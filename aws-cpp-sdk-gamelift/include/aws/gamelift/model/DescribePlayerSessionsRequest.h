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
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribePlayerSessionsInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DescribePlayerSessionsRequest : public GameLiftRequest
  {
  public:
    DescribePlayerSessionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePlayerSessions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique identifier for the game session to retrieve player sessions for.</p>
     */
    inline const Aws::String& GetGameSessionId() const{ return m_gameSessionId; }

    /**
     * <p>Unique identifier for the game session to retrieve player sessions for.</p>
     */
    inline bool GameSessionIdHasBeenSet() const { return m_gameSessionIdHasBeenSet; }

    /**
     * <p>Unique identifier for the game session to retrieve player sessions for.</p>
     */
    inline void SetGameSessionId(const Aws::String& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }

    /**
     * <p>Unique identifier for the game session to retrieve player sessions for.</p>
     */
    inline void SetGameSessionId(Aws::String&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::move(value); }

    /**
     * <p>Unique identifier for the game session to retrieve player sessions for.</p>
     */
    inline void SetGameSessionId(const char* value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId.assign(value); }

    /**
     * <p>Unique identifier for the game session to retrieve player sessions for.</p>
     */
    inline DescribePlayerSessionsRequest& WithGameSessionId(const Aws::String& value) { SetGameSessionId(value); return *this;}

    /**
     * <p>Unique identifier for the game session to retrieve player sessions for.</p>
     */
    inline DescribePlayerSessionsRequest& WithGameSessionId(Aws::String&& value) { SetGameSessionId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the game session to retrieve player sessions for.</p>
     */
    inline DescribePlayerSessionsRequest& WithGameSessionId(const char* value) { SetGameSessionId(value); return *this;}


    /**
     * <p>Unique identifier for a player to retrieve player sessions for.</p>
     */
    inline const Aws::String& GetPlayerId() const{ return m_playerId; }

    /**
     * <p>Unique identifier for a player to retrieve player sessions for.</p>
     */
    inline bool PlayerIdHasBeenSet() const { return m_playerIdHasBeenSet; }

    /**
     * <p>Unique identifier for a player to retrieve player sessions for.</p>
     */
    inline void SetPlayerId(const Aws::String& value) { m_playerIdHasBeenSet = true; m_playerId = value; }

    /**
     * <p>Unique identifier for a player to retrieve player sessions for.</p>
     */
    inline void SetPlayerId(Aws::String&& value) { m_playerIdHasBeenSet = true; m_playerId = std::move(value); }

    /**
     * <p>Unique identifier for a player to retrieve player sessions for.</p>
     */
    inline void SetPlayerId(const char* value) { m_playerIdHasBeenSet = true; m_playerId.assign(value); }

    /**
     * <p>Unique identifier for a player to retrieve player sessions for.</p>
     */
    inline DescribePlayerSessionsRequest& WithPlayerId(const Aws::String& value) { SetPlayerId(value); return *this;}

    /**
     * <p>Unique identifier for a player to retrieve player sessions for.</p>
     */
    inline DescribePlayerSessionsRequest& WithPlayerId(Aws::String&& value) { SetPlayerId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a player to retrieve player sessions for.</p>
     */
    inline DescribePlayerSessionsRequest& WithPlayerId(const char* value) { SetPlayerId(value); return *this;}


    /**
     * <p>Unique identifier for a player session to retrieve.</p>
     */
    inline const Aws::String& GetPlayerSessionId() const{ return m_playerSessionId; }

    /**
     * <p>Unique identifier for a player session to retrieve.</p>
     */
    inline bool PlayerSessionIdHasBeenSet() const { return m_playerSessionIdHasBeenSet; }

    /**
     * <p>Unique identifier for a player session to retrieve.</p>
     */
    inline void SetPlayerSessionId(const Aws::String& value) { m_playerSessionIdHasBeenSet = true; m_playerSessionId = value; }

    /**
     * <p>Unique identifier for a player session to retrieve.</p>
     */
    inline void SetPlayerSessionId(Aws::String&& value) { m_playerSessionIdHasBeenSet = true; m_playerSessionId = std::move(value); }

    /**
     * <p>Unique identifier for a player session to retrieve.</p>
     */
    inline void SetPlayerSessionId(const char* value) { m_playerSessionIdHasBeenSet = true; m_playerSessionId.assign(value); }

    /**
     * <p>Unique identifier for a player session to retrieve.</p>
     */
    inline DescribePlayerSessionsRequest& WithPlayerSessionId(const Aws::String& value) { SetPlayerSessionId(value); return *this;}

    /**
     * <p>Unique identifier for a player session to retrieve.</p>
     */
    inline DescribePlayerSessionsRequest& WithPlayerSessionId(Aws::String&& value) { SetPlayerSessionId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a player session to retrieve.</p>
     */
    inline DescribePlayerSessionsRequest& WithPlayerSessionId(const char* value) { SetPlayerSessionId(value); return *this;}


    /**
     * <p>Player session status to filter results on.</p> <p>Possible player session
     * statuses include the following:</p> <ul> <li> <p> <b>RESERVED</b> -- The player
     * session request has been received, but the player has not yet connected to the
     * server process and/or been validated. </p> </li> <li> <p> <b>ACTIVE</b> -- The
     * player has been validated by the server process and is currently connected.</p>
     * </li> <li> <p> <b>COMPLETED</b> -- The player connection has been dropped.</p>
     * </li> <li> <p> <b>TIMEDOUT</b> -- A player session request was received, but the
     * player did not connect and/or was not validated within the timeout limit (60
     * seconds).</p> </li> </ul>
     */
    inline const Aws::String& GetPlayerSessionStatusFilter() const{ return m_playerSessionStatusFilter; }

    /**
     * <p>Player session status to filter results on.</p> <p>Possible player session
     * statuses include the following:</p> <ul> <li> <p> <b>RESERVED</b> -- The player
     * session request has been received, but the player has not yet connected to the
     * server process and/or been validated. </p> </li> <li> <p> <b>ACTIVE</b> -- The
     * player has been validated by the server process and is currently connected.</p>
     * </li> <li> <p> <b>COMPLETED</b> -- The player connection has been dropped.</p>
     * </li> <li> <p> <b>TIMEDOUT</b> -- A player session request was received, but the
     * player did not connect and/or was not validated within the timeout limit (60
     * seconds).</p> </li> </ul>
     */
    inline bool PlayerSessionStatusFilterHasBeenSet() const { return m_playerSessionStatusFilterHasBeenSet; }

    /**
     * <p>Player session status to filter results on.</p> <p>Possible player session
     * statuses include the following:</p> <ul> <li> <p> <b>RESERVED</b> -- The player
     * session request has been received, but the player has not yet connected to the
     * server process and/or been validated. </p> </li> <li> <p> <b>ACTIVE</b> -- The
     * player has been validated by the server process and is currently connected.</p>
     * </li> <li> <p> <b>COMPLETED</b> -- The player connection has been dropped.</p>
     * </li> <li> <p> <b>TIMEDOUT</b> -- A player session request was received, but the
     * player did not connect and/or was not validated within the timeout limit (60
     * seconds).</p> </li> </ul>
     */
    inline void SetPlayerSessionStatusFilter(const Aws::String& value) { m_playerSessionStatusFilterHasBeenSet = true; m_playerSessionStatusFilter = value; }

    /**
     * <p>Player session status to filter results on.</p> <p>Possible player session
     * statuses include the following:</p> <ul> <li> <p> <b>RESERVED</b> -- The player
     * session request has been received, but the player has not yet connected to the
     * server process and/or been validated. </p> </li> <li> <p> <b>ACTIVE</b> -- The
     * player has been validated by the server process and is currently connected.</p>
     * </li> <li> <p> <b>COMPLETED</b> -- The player connection has been dropped.</p>
     * </li> <li> <p> <b>TIMEDOUT</b> -- A player session request was received, but the
     * player did not connect and/or was not validated within the timeout limit (60
     * seconds).</p> </li> </ul>
     */
    inline void SetPlayerSessionStatusFilter(Aws::String&& value) { m_playerSessionStatusFilterHasBeenSet = true; m_playerSessionStatusFilter = std::move(value); }

    /**
     * <p>Player session status to filter results on.</p> <p>Possible player session
     * statuses include the following:</p> <ul> <li> <p> <b>RESERVED</b> -- The player
     * session request has been received, but the player has not yet connected to the
     * server process and/or been validated. </p> </li> <li> <p> <b>ACTIVE</b> -- The
     * player has been validated by the server process and is currently connected.</p>
     * </li> <li> <p> <b>COMPLETED</b> -- The player connection has been dropped.</p>
     * </li> <li> <p> <b>TIMEDOUT</b> -- A player session request was received, but the
     * player did not connect and/or was not validated within the timeout limit (60
     * seconds).</p> </li> </ul>
     */
    inline void SetPlayerSessionStatusFilter(const char* value) { m_playerSessionStatusFilterHasBeenSet = true; m_playerSessionStatusFilter.assign(value); }

    /**
     * <p>Player session status to filter results on.</p> <p>Possible player session
     * statuses include the following:</p> <ul> <li> <p> <b>RESERVED</b> -- The player
     * session request has been received, but the player has not yet connected to the
     * server process and/or been validated. </p> </li> <li> <p> <b>ACTIVE</b> -- The
     * player has been validated by the server process and is currently connected.</p>
     * </li> <li> <p> <b>COMPLETED</b> -- The player connection has been dropped.</p>
     * </li> <li> <p> <b>TIMEDOUT</b> -- A player session request was received, but the
     * player did not connect and/or was not validated within the timeout limit (60
     * seconds).</p> </li> </ul>
     */
    inline DescribePlayerSessionsRequest& WithPlayerSessionStatusFilter(const Aws::String& value) { SetPlayerSessionStatusFilter(value); return *this;}

    /**
     * <p>Player session status to filter results on.</p> <p>Possible player session
     * statuses include the following:</p> <ul> <li> <p> <b>RESERVED</b> -- The player
     * session request has been received, but the player has not yet connected to the
     * server process and/or been validated. </p> </li> <li> <p> <b>ACTIVE</b> -- The
     * player has been validated by the server process and is currently connected.</p>
     * </li> <li> <p> <b>COMPLETED</b> -- The player connection has been dropped.</p>
     * </li> <li> <p> <b>TIMEDOUT</b> -- A player session request was received, but the
     * player did not connect and/or was not validated within the timeout limit (60
     * seconds).</p> </li> </ul>
     */
    inline DescribePlayerSessionsRequest& WithPlayerSessionStatusFilter(Aws::String&& value) { SetPlayerSessionStatusFilter(std::move(value)); return *this;}

    /**
     * <p>Player session status to filter results on.</p> <p>Possible player session
     * statuses include the following:</p> <ul> <li> <p> <b>RESERVED</b> -- The player
     * session request has been received, but the player has not yet connected to the
     * server process and/or been validated. </p> </li> <li> <p> <b>ACTIVE</b> -- The
     * player has been validated by the server process and is currently connected.</p>
     * </li> <li> <p> <b>COMPLETED</b> -- The player connection has been dropped.</p>
     * </li> <li> <p> <b>TIMEDOUT</b> -- A player session request was received, but the
     * player did not connect and/or was not validated within the timeout limit (60
     * seconds).</p> </li> </ul>
     */
    inline DescribePlayerSessionsRequest& WithPlayerSessionStatusFilter(const char* value) { SetPlayerSessionStatusFilter(value); return *this;}


    /**
     * <p>Maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages. If a player
     * session ID is specified, this parameter is ignored.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>Maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages. If a player
     * session ID is specified, this parameter is ignored.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>Maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages. If a player
     * session ID is specified, this parameter is ignored.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages. If a player
     * session ID is specified, this parameter is ignored.</p>
     */
    inline DescribePlayerSessionsRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To start at the
     * beginning of the result set, do not specify a value. If a player session ID is
     * specified, this parameter is ignored.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To start at the
     * beginning of the result set, do not specify a value. If a player session ID is
     * specified, this parameter is ignored.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To start at the
     * beginning of the result set, do not specify a value. If a player session ID is
     * specified, this parameter is ignored.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To start at the
     * beginning of the result set, do not specify a value. If a player session ID is
     * specified, this parameter is ignored.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To start at the
     * beginning of the result set, do not specify a value. If a player session ID is
     * specified, this parameter is ignored.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To start at the
     * beginning of the result set, do not specify a value. If a player session ID is
     * specified, this parameter is ignored.</p>
     */
    inline DescribePlayerSessionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To start at the
     * beginning of the result set, do not specify a value. If a player session ID is
     * specified, this parameter is ignored.</p>
     */
    inline DescribePlayerSessionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To start at the
     * beginning of the result set, do not specify a value. If a player session ID is
     * specified, this parameter is ignored.</p>
     */
    inline DescribePlayerSessionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_gameSessionId;
    bool m_gameSessionIdHasBeenSet;

    Aws::String m_playerId;
    bool m_playerIdHasBeenSet;

    Aws::String m_playerSessionId;
    bool m_playerSessionIdHasBeenSet;

    Aws::String m_playerSessionStatusFilter;
    bool m_playerSessionStatusFilterHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
