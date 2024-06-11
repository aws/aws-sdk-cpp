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
  class SearchGameSessionsRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API SearchGameSessionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchGameSessions"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the fleet to search for active game sessions. You can
     * use either the fleet ID or ARN value. Each request must reference either a fleet
     * ID or alias ID, but not both.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }
    inline SearchGameSessionsRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline SearchGameSessionsRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline SearchGameSessionsRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the alias associated with the fleet to search for
     * active game sessions. You can use either the alias ID or ARN value. Each request
     * must reference either a fleet ID or alias ID, but not both.</p>
     */
    inline const Aws::String& GetAliasId() const{ return m_aliasId; }
    inline bool AliasIdHasBeenSet() const { return m_aliasIdHasBeenSet; }
    inline void SetAliasId(const Aws::String& value) { m_aliasIdHasBeenSet = true; m_aliasId = value; }
    inline void SetAliasId(Aws::String&& value) { m_aliasIdHasBeenSet = true; m_aliasId = std::move(value); }
    inline void SetAliasId(const char* value) { m_aliasIdHasBeenSet = true; m_aliasId.assign(value); }
    inline SearchGameSessionsRequest& WithAliasId(const Aws::String& value) { SetAliasId(value); return *this;}
    inline SearchGameSessionsRequest& WithAliasId(Aws::String&& value) { SetAliasId(std::move(value)); return *this;}
    inline SearchGameSessionsRequest& WithAliasId(const char* value) { SetAliasId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A fleet location to search for game sessions. You can specify a fleet's home
     * Region or a remote location. Use the Amazon Web Services Region code format,
     * such as <code>us-west-2</code>. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline SearchGameSessionsRequest& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline SearchGameSessionsRequest& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline SearchGameSessionsRequest& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>String containing the search criteria for the session search. If no filter
     * expression is included, the request returns results for all game sessions in the
     * fleet that are in <code>ACTIVE</code> status.</p> <p>A filter expression can
     * contain one or multiple conditions. Each condition consists of the
     * following:</p> <ul> <li> <p> <b>Operand</b> -- Name of a game session attribute.
     * Valid values are <code>gameSessionName</code>, <code>gameSessionId</code>,
     * <code>gameSessionProperties</code>, <code>maximumSessions</code>,
     * <code>creationTimeMillis</code>, <code>playerSessionCount</code>,
     * <code>hasAvailablePlayerSessions</code>.</p> </li> <li> <p> <b>Comparator</b> --
     * Valid comparators are: <code>=</code>, <code>&lt;&gt;</code>, <code>&lt;</code>,
     * <code>&gt;</code>, <code>&lt;=</code>, <code>&gt;=</code>. </p> </li> <li> <p>
     * <b>Value</b> -- Value to be searched for. Values may be numbers, boolean values
     * (true/false) or strings depending on the operand. String values are case
     * sensitive and must be enclosed in single quotes. Special characters must be
     * escaped. Boolean and string values can only be used with the comparators
     * <code>=</code> and <code>&lt;&gt;</code>. For example, the following filter
     * expression searches on <code>gameSessionName</code>: "<code>FilterExpression":
     * "gameSessionName = 'Matt\\'s Awesome Game 1'"</code>. </p> </li> </ul> <p>To
     * chain multiple conditions in a single expression, use the logical keywords
     * <code>AND</code>, <code>OR</code>, and <code>NOT</code> and parentheses as
     * needed. For example: <code>x AND y AND NOT z</code>, <code>NOT (x OR
     * y)</code>.</p> <p>Session search evaluates conditions from left to right using
     * the following precedence rules:</p> <ol> <li> <p> <code>=</code>,
     * <code>&lt;&gt;</code>, <code>&lt;</code>, <code>&gt;</code>, <code>&lt;=</code>,
     * <code>&gt;=</code> </p> </li> <li> <p>Parentheses</p> </li> <li> <p>NOT</p>
     * </li> <li> <p>AND</p> </li> <li> <p>OR</p> </li> </ol> <p>For example, this
     * filter expression retrieves game sessions hosting at least ten players that have
     * an open player slot: <code>"maximumSessions&gt;=10 AND
     * hasAvailablePlayerSessions=true"</code>. </p>
     */
    inline const Aws::String& GetFilterExpression() const{ return m_filterExpression; }
    inline bool FilterExpressionHasBeenSet() const { return m_filterExpressionHasBeenSet; }
    inline void SetFilterExpression(const Aws::String& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = value; }
    inline void SetFilterExpression(Aws::String&& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = std::move(value); }
    inline void SetFilterExpression(const char* value) { m_filterExpressionHasBeenSet = true; m_filterExpression.assign(value); }
    inline SearchGameSessionsRequest& WithFilterExpression(const Aws::String& value) { SetFilterExpression(value); return *this;}
    inline SearchGameSessionsRequest& WithFilterExpression(Aws::String&& value) { SetFilterExpression(std::move(value)); return *this;}
    inline SearchGameSessionsRequest& WithFilterExpression(const char* value) { SetFilterExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Instructions on how to sort the search results. If no sort expression is
     * included, the request returns results in random order. A sort expression
     * consists of the following elements:</p> <ul> <li> <p> <b>Operand</b> -- Name of
     * a game session attribute. Valid values are <code>gameSessionName</code>,
     * <code>gameSessionId</code>, <code>gameSessionProperties</code>,
     * <code>maximumSessions</code>, <code>creationTimeMillis</code>,
     * <code>playerSessionCount</code>, <code>hasAvailablePlayerSessions</code>.</p>
     * </li> <li> <p> <b>Order</b> -- Valid sort orders are <code>ASC</code>
     * (ascending) and <code>DESC</code> (descending).</p> </li> </ul> <p>For example,
     * this sort expression returns the oldest active sessions first:
     * <code>"SortExpression": "creationTimeMillis ASC"</code>. Results with a null
     * value for the sort operand are returned at the end of the list.</p>
     */
    inline const Aws::String& GetSortExpression() const{ return m_sortExpression; }
    inline bool SortExpressionHasBeenSet() const { return m_sortExpressionHasBeenSet; }
    inline void SetSortExpression(const Aws::String& value) { m_sortExpressionHasBeenSet = true; m_sortExpression = value; }
    inline void SetSortExpression(Aws::String&& value) { m_sortExpressionHasBeenSet = true; m_sortExpression = std::move(value); }
    inline void SetSortExpression(const char* value) { m_sortExpressionHasBeenSet = true; m_sortExpression.assign(value); }
    inline SearchGameSessionsRequest& WithSortExpression(const Aws::String& value) { SetSortExpression(value); return *this;}
    inline SearchGameSessionsRequest& WithSortExpression(Aws::String&& value) { SetSortExpression(std::move(value)); return *this;}
    inline SearchGameSessionsRequest& WithSortExpression(const char* value) { SetSortExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages. The maximum
     * number of results returned is 20, even if this value is not set or is set higher
     * than 20. </p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline SearchGameSessionsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline SearchGameSessionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchGameSessionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchGameSessionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_aliasId;
    bool m_aliasIdHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_filterExpression;
    bool m_filterExpressionHasBeenSet = false;

    Aws::String m_sortExpression;
    bool m_sortExpressionHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
