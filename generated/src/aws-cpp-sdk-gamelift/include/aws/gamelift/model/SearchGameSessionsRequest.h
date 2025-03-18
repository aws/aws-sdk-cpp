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
    AWS_GAMELIFT_API SearchGameSessionsRequest() = default;

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
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    SearchGameSessionsRequest& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the alias associated with the fleet to search for
     * active game sessions. You can use either the alias ID or ARN value. Each request
     * must reference either a fleet ID or alias ID, but not both.</p>
     */
    inline const Aws::String& GetAliasId() const { return m_aliasId; }
    inline bool AliasIdHasBeenSet() const { return m_aliasIdHasBeenSet; }
    template<typename AliasIdT = Aws::String>
    void SetAliasId(AliasIdT&& value) { m_aliasIdHasBeenSet = true; m_aliasId = std::forward<AliasIdT>(value); }
    template<typename AliasIdT = Aws::String>
    SearchGameSessionsRequest& WithAliasId(AliasIdT&& value) { SetAliasId(std::forward<AliasIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A fleet location to search for game sessions. You can specify a fleet's home
     * Region or a remote location. Use the Amazon Web Services Region code format,
     * such as <code>us-west-2</code>. </p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    SearchGameSessionsRequest& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
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
    inline const Aws::String& GetFilterExpression() const { return m_filterExpression; }
    inline bool FilterExpressionHasBeenSet() const { return m_filterExpressionHasBeenSet; }
    template<typename FilterExpressionT = Aws::String>
    void SetFilterExpression(FilterExpressionT&& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = std::forward<FilterExpressionT>(value); }
    template<typename FilterExpressionT = Aws::String>
    SearchGameSessionsRequest& WithFilterExpression(FilterExpressionT&& value) { SetFilterExpression(std::forward<FilterExpressionT>(value)); return *this;}
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
    inline const Aws::String& GetSortExpression() const { return m_sortExpression; }
    inline bool SortExpressionHasBeenSet() const { return m_sortExpressionHasBeenSet; }
    template<typename SortExpressionT = Aws::String>
    void SetSortExpression(SortExpressionT&& value) { m_sortExpressionHasBeenSet = true; m_sortExpression = std::forward<SortExpressionT>(value); }
    template<typename SortExpressionT = Aws::String>
    SearchGameSessionsRequest& WithSortExpression(SortExpressionT&& value) { SetSortExpression(std::forward<SortExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages. The maximum
     * number of results returned is 20, even if this value is not set or is set higher
     * than 20. </p>
     */
    inline int GetLimit() const { return m_limit; }
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
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchGameSessionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
