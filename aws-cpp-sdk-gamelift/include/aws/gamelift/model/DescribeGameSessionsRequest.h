/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessionsInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DescribeGameSessionsRequest : public GameLiftRequest
  {
  public:
    DescribeGameSessionsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique identifier for a fleet to retrieve all game sessions for.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet to retrieve all game sessions for.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet to retrieve all game sessions for.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>Unique identifier for a fleet to retrieve all game sessions for.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for a fleet to retrieve all game sessions for.</p>
     */
    inline DescribeGameSessionsRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet to retrieve all game sessions for.</p>
     */
    inline DescribeGameSessionsRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a fleet to retrieve all game sessions for.</p>
     */
    inline DescribeGameSessionsRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for the game session to retrieve. You can use either a
     * <code>GameSessionId</code> or <code>GameSessionArn</code> value. </p>
     */
    inline const Aws::String& GetGameSessionId() const{ return m_gameSessionId; }

    /**
     * <p>Unique identifier for the game session to retrieve. You can use either a
     * <code>GameSessionId</code> or <code>GameSessionArn</code> value. </p>
     */
    inline void SetGameSessionId(const Aws::String& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }

    /**
     * <p>Unique identifier for the game session to retrieve. You can use either a
     * <code>GameSessionId</code> or <code>GameSessionArn</code> value. </p>
     */
    inline void SetGameSessionId(Aws::String&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::move(value); }

    /**
     * <p>Unique identifier for the game session to retrieve. You can use either a
     * <code>GameSessionId</code> or <code>GameSessionArn</code> value. </p>
     */
    inline void SetGameSessionId(const char* value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId.assign(value); }

    /**
     * <p>Unique identifier for the game session to retrieve. You can use either a
     * <code>GameSessionId</code> or <code>GameSessionArn</code> value. </p>
     */
    inline DescribeGameSessionsRequest& WithGameSessionId(const Aws::String& value) { SetGameSessionId(value); return *this;}

    /**
     * <p>Unique identifier for the game session to retrieve. You can use either a
     * <code>GameSessionId</code> or <code>GameSessionArn</code> value. </p>
     */
    inline DescribeGameSessionsRequest& WithGameSessionId(Aws::String&& value) { SetGameSessionId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the game session to retrieve. You can use either a
     * <code>GameSessionId</code> or <code>GameSessionArn</code> value. </p>
     */
    inline DescribeGameSessionsRequest& WithGameSessionId(const char* value) { SetGameSessionId(value); return *this;}

    /**
     * <p>Unique identifier for an alias associated with the fleet to retrieve all game
     * sessions for. </p>
     */
    inline const Aws::String& GetAliasId() const{ return m_aliasId; }

    /**
     * <p>Unique identifier for an alias associated with the fleet to retrieve all game
     * sessions for. </p>
     */
    inline void SetAliasId(const Aws::String& value) { m_aliasIdHasBeenSet = true; m_aliasId = value; }

    /**
     * <p>Unique identifier for an alias associated with the fleet to retrieve all game
     * sessions for. </p>
     */
    inline void SetAliasId(Aws::String&& value) { m_aliasIdHasBeenSet = true; m_aliasId = std::move(value); }

    /**
     * <p>Unique identifier for an alias associated with the fleet to retrieve all game
     * sessions for. </p>
     */
    inline void SetAliasId(const char* value) { m_aliasIdHasBeenSet = true; m_aliasId.assign(value); }

    /**
     * <p>Unique identifier for an alias associated with the fleet to retrieve all game
     * sessions for. </p>
     */
    inline DescribeGameSessionsRequest& WithAliasId(const Aws::String& value) { SetAliasId(value); return *this;}

    /**
     * <p>Unique identifier for an alias associated with the fleet to retrieve all game
     * sessions for. </p>
     */
    inline DescribeGameSessionsRequest& WithAliasId(Aws::String&& value) { SetAliasId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for an alias associated with the fleet to retrieve all game
     * sessions for. </p>
     */
    inline DescribeGameSessionsRequest& WithAliasId(const char* value) { SetAliasId(value); return *this;}

    /**
     * <p>Game session status to filter results on. Possible game session statuses
     * include <code>ACTIVE</code>, <code>TERMINATED</code>, <code>ACTIVATING</code>,
     * and <code>TERMINATING</code> (the last two are transitory). </p>
     */
    inline const Aws::String& GetStatusFilter() const{ return m_statusFilter; }

    /**
     * <p>Game session status to filter results on. Possible game session statuses
     * include <code>ACTIVE</code>, <code>TERMINATED</code>, <code>ACTIVATING</code>,
     * and <code>TERMINATING</code> (the last two are transitory). </p>
     */
    inline void SetStatusFilter(const Aws::String& value) { m_statusFilterHasBeenSet = true; m_statusFilter = value; }

    /**
     * <p>Game session status to filter results on. Possible game session statuses
     * include <code>ACTIVE</code>, <code>TERMINATED</code>, <code>ACTIVATING</code>,
     * and <code>TERMINATING</code> (the last two are transitory). </p>
     */
    inline void SetStatusFilter(Aws::String&& value) { m_statusFilterHasBeenSet = true; m_statusFilter = std::move(value); }

    /**
     * <p>Game session status to filter results on. Possible game session statuses
     * include <code>ACTIVE</code>, <code>TERMINATED</code>, <code>ACTIVATING</code>,
     * and <code>TERMINATING</code> (the last two are transitory). </p>
     */
    inline void SetStatusFilter(const char* value) { m_statusFilterHasBeenSet = true; m_statusFilter.assign(value); }

    /**
     * <p>Game session status to filter results on. Possible game session statuses
     * include <code>ACTIVE</code>, <code>TERMINATED</code>, <code>ACTIVATING</code>,
     * and <code>TERMINATING</code> (the last two are transitory). </p>
     */
    inline DescribeGameSessionsRequest& WithStatusFilter(const Aws::String& value) { SetStatusFilter(value); return *this;}

    /**
     * <p>Game session status to filter results on. Possible game session statuses
     * include <code>ACTIVE</code>, <code>TERMINATED</code>, <code>ACTIVATING</code>,
     * and <code>TERMINATING</code> (the last two are transitory). </p>
     */
    inline DescribeGameSessionsRequest& WithStatusFilter(Aws::String&& value) { SetStatusFilter(std::move(value)); return *this;}

    /**
     * <p>Game session status to filter results on. Possible game session statuses
     * include <code>ACTIVE</code>, <code>TERMINATED</code>, <code>ACTIVATING</code>,
     * and <code>TERMINATING</code> (the last two are transitory). </p>
     */
    inline DescribeGameSessionsRequest& WithStatusFilter(const char* value) { SetStatusFilter(value); return *this;}

    /**
     * <p>Maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>Maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline DescribeGameSessionsRequest& WithLimit(int value) { SetLimit(value); return *this;}

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To specify the
     * start of the result set, do not specify a value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To specify the
     * start of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To specify the
     * start of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To specify the
     * start of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To specify the
     * start of the result set, do not specify a value.</p>
     */
    inline DescribeGameSessionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To specify the
     * start of the result set, do not specify a value.</p>
     */
    inline DescribeGameSessionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To specify the
     * start of the result set, do not specify a value.</p>
     */
    inline DescribeGameSessionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;
    Aws::String m_gameSessionId;
    bool m_gameSessionIdHasBeenSet;
    Aws::String m_aliasId;
    bool m_aliasIdHasBeenSet;
    Aws::String m_statusFilter;
    bool m_statusFilterHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
