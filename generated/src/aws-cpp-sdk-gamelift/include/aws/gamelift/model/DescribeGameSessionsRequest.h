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
  class DescribeGameSessionsRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API DescribeGameSessionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeGameSessions"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the fleet to retrieve game sessions for. You can use
     * either the fleet ID or ARN value. </p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet to retrieve game sessions for. You can use
     * either the fleet ID or ARN value. </p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet to retrieve game sessions for. You can use
     * either the fleet ID or ARN value. </p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet to retrieve game sessions for. You can use
     * either the fleet ID or ARN value. </p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet to retrieve game sessions for. You can use
     * either the fleet ID or ARN value. </p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet to retrieve game sessions for. You can use
     * either the fleet ID or ARN value. </p>
     */
    inline DescribeGameSessionsRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet to retrieve game sessions for. You can use
     * either the fleet ID or ARN value. </p>
     */
    inline DescribeGameSessionsRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet to retrieve game sessions for. You can use
     * either the fleet ID or ARN value. </p>
     */
    inline DescribeGameSessionsRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>A unique identifier for the game session to retrieve. </p>
     */
    inline const Aws::String& GetGameSessionId() const{ return m_gameSessionId; }

    /**
     * <p>A unique identifier for the game session to retrieve. </p>
     */
    inline bool GameSessionIdHasBeenSet() const { return m_gameSessionIdHasBeenSet; }

    /**
     * <p>A unique identifier for the game session to retrieve. </p>
     */
    inline void SetGameSessionId(const Aws::String& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }

    /**
     * <p>A unique identifier for the game session to retrieve. </p>
     */
    inline void SetGameSessionId(Aws::String&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::move(value); }

    /**
     * <p>A unique identifier for the game session to retrieve. </p>
     */
    inline void SetGameSessionId(const char* value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId.assign(value); }

    /**
     * <p>A unique identifier for the game session to retrieve. </p>
     */
    inline DescribeGameSessionsRequest& WithGameSessionId(const Aws::String& value) { SetGameSessionId(value); return *this;}

    /**
     * <p>A unique identifier for the game session to retrieve. </p>
     */
    inline DescribeGameSessionsRequest& WithGameSessionId(Aws::String&& value) { SetGameSessionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the game session to retrieve. </p>
     */
    inline DescribeGameSessionsRequest& WithGameSessionId(const char* value) { SetGameSessionId(value); return *this;}


    /**
     * <p>A unique identifier for the alias associated with the fleet to retrieve game
     * sessions for. You can use either the alias ID or ARN value.</p>
     */
    inline const Aws::String& GetAliasId() const{ return m_aliasId; }

    /**
     * <p>A unique identifier for the alias associated with the fleet to retrieve game
     * sessions for. You can use either the alias ID or ARN value.</p>
     */
    inline bool AliasIdHasBeenSet() const { return m_aliasIdHasBeenSet; }

    /**
     * <p>A unique identifier for the alias associated with the fleet to retrieve game
     * sessions for. You can use either the alias ID or ARN value.</p>
     */
    inline void SetAliasId(const Aws::String& value) { m_aliasIdHasBeenSet = true; m_aliasId = value; }

    /**
     * <p>A unique identifier for the alias associated with the fleet to retrieve game
     * sessions for. You can use either the alias ID or ARN value.</p>
     */
    inline void SetAliasId(Aws::String&& value) { m_aliasIdHasBeenSet = true; m_aliasId = std::move(value); }

    /**
     * <p>A unique identifier for the alias associated with the fleet to retrieve game
     * sessions for. You can use either the alias ID or ARN value.</p>
     */
    inline void SetAliasId(const char* value) { m_aliasIdHasBeenSet = true; m_aliasId.assign(value); }

    /**
     * <p>A unique identifier for the alias associated with the fleet to retrieve game
     * sessions for. You can use either the alias ID or ARN value.</p>
     */
    inline DescribeGameSessionsRequest& WithAliasId(const Aws::String& value) { SetAliasId(value); return *this;}

    /**
     * <p>A unique identifier for the alias associated with the fleet to retrieve game
     * sessions for. You can use either the alias ID or ARN value.</p>
     */
    inline DescribeGameSessionsRequest& WithAliasId(Aws::String&& value) { SetAliasId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the alias associated with the fleet to retrieve game
     * sessions for. You can use either the alias ID or ARN value.</p>
     */
    inline DescribeGameSessionsRequest& WithAliasId(const char* value) { SetAliasId(value); return *this;}


    /**
     * <p>A fleet location to get game sessions for. You can specify a fleet's home
     * Region or a remote location. Use the Amazon Web Services Region code format,
     * such as <code>us-west-2</code>. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>A fleet location to get game sessions for. You can specify a fleet's home
     * Region or a remote location. Use the Amazon Web Services Region code format,
     * such as <code>us-west-2</code>. </p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>A fleet location to get game sessions for. You can specify a fleet's home
     * Region or a remote location. Use the Amazon Web Services Region code format,
     * such as <code>us-west-2</code>. </p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>A fleet location to get game sessions for. You can specify a fleet's home
     * Region or a remote location. Use the Amazon Web Services Region code format,
     * such as <code>us-west-2</code>. </p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>A fleet location to get game sessions for. You can specify a fleet's home
     * Region or a remote location. Use the Amazon Web Services Region code format,
     * such as <code>us-west-2</code>. </p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>A fleet location to get game sessions for. You can specify a fleet's home
     * Region or a remote location. Use the Amazon Web Services Region code format,
     * such as <code>us-west-2</code>. </p>
     */
    inline DescribeGameSessionsRequest& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>A fleet location to get game sessions for. You can specify a fleet's home
     * Region or a remote location. Use the Amazon Web Services Region code format,
     * such as <code>us-west-2</code>. </p>
     */
    inline DescribeGameSessionsRequest& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>A fleet location to get game sessions for. You can specify a fleet's home
     * Region or a remote location. Use the Amazon Web Services Region code format,
     * such as <code>us-west-2</code>. </p>
     */
    inline DescribeGameSessionsRequest& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>Game session status to filter results on. You can filter on the following
     * states: <code>ACTIVE</code>, <code>TERMINATED</code>, <code>ACTIVATING</code>,
     * and <code>TERMINATING</code>. The last two are transitory and used for only very
     * brief periods of time. </p>
     */
    inline const Aws::String& GetStatusFilter() const{ return m_statusFilter; }

    /**
     * <p>Game session status to filter results on. You can filter on the following
     * states: <code>ACTIVE</code>, <code>TERMINATED</code>, <code>ACTIVATING</code>,
     * and <code>TERMINATING</code>. The last two are transitory and used for only very
     * brief periods of time. </p>
     */
    inline bool StatusFilterHasBeenSet() const { return m_statusFilterHasBeenSet; }

    /**
     * <p>Game session status to filter results on. You can filter on the following
     * states: <code>ACTIVE</code>, <code>TERMINATED</code>, <code>ACTIVATING</code>,
     * and <code>TERMINATING</code>. The last two are transitory and used for only very
     * brief periods of time. </p>
     */
    inline void SetStatusFilter(const Aws::String& value) { m_statusFilterHasBeenSet = true; m_statusFilter = value; }

    /**
     * <p>Game session status to filter results on. You can filter on the following
     * states: <code>ACTIVE</code>, <code>TERMINATED</code>, <code>ACTIVATING</code>,
     * and <code>TERMINATING</code>. The last two are transitory and used for only very
     * brief periods of time. </p>
     */
    inline void SetStatusFilter(Aws::String&& value) { m_statusFilterHasBeenSet = true; m_statusFilter = std::move(value); }

    /**
     * <p>Game session status to filter results on. You can filter on the following
     * states: <code>ACTIVE</code>, <code>TERMINATED</code>, <code>ACTIVATING</code>,
     * and <code>TERMINATING</code>. The last two are transitory and used for only very
     * brief periods of time. </p>
     */
    inline void SetStatusFilter(const char* value) { m_statusFilterHasBeenSet = true; m_statusFilter.assign(value); }

    /**
     * <p>Game session status to filter results on. You can filter on the following
     * states: <code>ACTIVE</code>, <code>TERMINATED</code>, <code>ACTIVATING</code>,
     * and <code>TERMINATING</code>. The last two are transitory and used for only very
     * brief periods of time. </p>
     */
    inline DescribeGameSessionsRequest& WithStatusFilter(const Aws::String& value) { SetStatusFilter(value); return *this;}

    /**
     * <p>Game session status to filter results on. You can filter on the following
     * states: <code>ACTIVE</code>, <code>TERMINATED</code>, <code>ACTIVATING</code>,
     * and <code>TERMINATING</code>. The last two are transitory and used for only very
     * brief periods of time. </p>
     */
    inline DescribeGameSessionsRequest& WithStatusFilter(Aws::String&& value) { SetStatusFilter(std::move(value)); return *this;}

    /**
     * <p>Game session status to filter results on. You can filter on the following
     * states: <code>ACTIVE</code>, <code>TERMINATED</code>, <code>ACTIVATING</code>,
     * and <code>TERMINATING</code>. The last two are transitory and used for only very
     * brief periods of time. </p>
     */
    inline DescribeGameSessionsRequest& WithStatusFilter(const char* value) { SetStatusFilter(value); return *this;}


    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline DescribeGameSessionsRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline DescribeGameSessionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline DescribeGameSessionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline DescribeGameSessionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_gameSessionId;
    bool m_gameSessionIdHasBeenSet = false;

    Aws::String m_aliasId;
    bool m_aliasIdHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_statusFilter;
    bool m_statusFilterHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
