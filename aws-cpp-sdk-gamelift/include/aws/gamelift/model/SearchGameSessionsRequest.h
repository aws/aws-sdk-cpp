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
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/SearchGameSessionsInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API SearchGameSessionsRequest : public GameLiftRequest
  {
  public:
    SearchGameSessionsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique identifier for a fleet to search for active game sessions. Each
     * request must reference either a fleet ID or alias ID, but not both.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet to search for active game sessions. Each
     * request must reference either a fleet ID or alias ID, but not both.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet to search for active game sessions. Each
     * request must reference either a fleet ID or alias ID, but not both.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>Unique identifier for a fleet to search for active game sessions. Each
     * request must reference either a fleet ID or alias ID, but not both.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for a fleet to search for active game sessions. Each
     * request must reference either a fleet ID or alias ID, but not both.</p>
     */
    inline SearchGameSessionsRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet to search for active game sessions. Each
     * request must reference either a fleet ID or alias ID, but not both.</p>
     */
    inline SearchGameSessionsRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a fleet to search for active game sessions. Each
     * request must reference either a fleet ID or alias ID, but not both.</p>
     */
    inline SearchGameSessionsRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for an alias associated with the fleet to search for active
     * game sessions. Each request must reference either a fleet ID or alias ID, but
     * not both.</p>
     */
    inline const Aws::String& GetAliasId() const{ return m_aliasId; }

    /**
     * <p>Unique identifier for an alias associated with the fleet to search for active
     * game sessions. Each request must reference either a fleet ID or alias ID, but
     * not both.</p>
     */
    inline void SetAliasId(const Aws::String& value) { m_aliasIdHasBeenSet = true; m_aliasId = value; }

    /**
     * <p>Unique identifier for an alias associated with the fleet to search for active
     * game sessions. Each request must reference either a fleet ID or alias ID, but
     * not both.</p>
     */
    inline void SetAliasId(Aws::String&& value) { m_aliasIdHasBeenSet = true; m_aliasId = std::move(value); }

    /**
     * <p>Unique identifier for an alias associated with the fleet to search for active
     * game sessions. Each request must reference either a fleet ID or alias ID, but
     * not both.</p>
     */
    inline void SetAliasId(const char* value) { m_aliasIdHasBeenSet = true; m_aliasId.assign(value); }

    /**
     * <p>Unique identifier for an alias associated with the fleet to search for active
     * game sessions. Each request must reference either a fleet ID or alias ID, but
     * not both.</p>
     */
    inline SearchGameSessionsRequest& WithAliasId(const Aws::String& value) { SetAliasId(value); return *this;}

    /**
     * <p>Unique identifier for an alias associated with the fleet to search for active
     * game sessions. Each request must reference either a fleet ID or alias ID, but
     * not both.</p>
     */
    inline SearchGameSessionsRequest& WithAliasId(Aws::String&& value) { SetAliasId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for an alias associated with the fleet to search for active
     * game sessions. Each request must reference either a fleet ID or alias ID, but
     * not both.</p>
     */
    inline SearchGameSessionsRequest& WithAliasId(const char* value) { SetAliasId(value); return *this;}

    /**
     * <p>String containing the search criteria for the session search. If no filter
     * expression is included, the request returns results for all game sessions in the
     * fleet that are in <code>ACTIVE</code> status.</p> <p>A filter expression can
     * contain one or multiple conditions. Each condition consists of the
     * following:</p> <ul> <li> <p> <b>Operand</b> -- Name of a game session attribute.
     * Valid values are <code>gameSessionName</code>, <code>gameSessionId</code>,
     * <code>creationTimeMillis</code>, <code>playerSessionCount</code>,
     * <code>maximumSessions</code>, <code>hasAvailablePlayerSessions</code>.</p> </li>
     * <li> <p> <b>Comparator</b> -- Valid comparators are: <code>=</code>,
     * <code>&lt;&gt;</code>, <code>&lt;</code>, <code>&gt;</code>, <code>&lt;=</code>,
     * <code>&gt;=</code>. </p> </li> <li> <p> <b>Value</b> -- Value to be searched
     * for. Values can be numbers, boolean values (true/false) or strings. String
     * values are case sensitive, enclosed in single quotes. Special characters must be
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

    /**
     * <p>String containing the search criteria for the session search. If no filter
     * expression is included, the request returns results for all game sessions in the
     * fleet that are in <code>ACTIVE</code> status.</p> <p>A filter expression can
     * contain one or multiple conditions. Each condition consists of the
     * following:</p> <ul> <li> <p> <b>Operand</b> -- Name of a game session attribute.
     * Valid values are <code>gameSessionName</code>, <code>gameSessionId</code>,
     * <code>creationTimeMillis</code>, <code>playerSessionCount</code>,
     * <code>maximumSessions</code>, <code>hasAvailablePlayerSessions</code>.</p> </li>
     * <li> <p> <b>Comparator</b> -- Valid comparators are: <code>=</code>,
     * <code>&lt;&gt;</code>, <code>&lt;</code>, <code>&gt;</code>, <code>&lt;=</code>,
     * <code>&gt;=</code>. </p> </li> <li> <p> <b>Value</b> -- Value to be searched
     * for. Values can be numbers, boolean values (true/false) or strings. String
     * values are case sensitive, enclosed in single quotes. Special characters must be
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
    inline void SetFilterExpression(const Aws::String& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = value; }

    /**
     * <p>String containing the search criteria for the session search. If no filter
     * expression is included, the request returns results for all game sessions in the
     * fleet that are in <code>ACTIVE</code> status.</p> <p>A filter expression can
     * contain one or multiple conditions. Each condition consists of the
     * following:</p> <ul> <li> <p> <b>Operand</b> -- Name of a game session attribute.
     * Valid values are <code>gameSessionName</code>, <code>gameSessionId</code>,
     * <code>creationTimeMillis</code>, <code>playerSessionCount</code>,
     * <code>maximumSessions</code>, <code>hasAvailablePlayerSessions</code>.</p> </li>
     * <li> <p> <b>Comparator</b> -- Valid comparators are: <code>=</code>,
     * <code>&lt;&gt;</code>, <code>&lt;</code>, <code>&gt;</code>, <code>&lt;=</code>,
     * <code>&gt;=</code>. </p> </li> <li> <p> <b>Value</b> -- Value to be searched
     * for. Values can be numbers, boolean values (true/false) or strings. String
     * values are case sensitive, enclosed in single quotes. Special characters must be
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
    inline void SetFilterExpression(Aws::String&& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = std::move(value); }

    /**
     * <p>String containing the search criteria for the session search. If no filter
     * expression is included, the request returns results for all game sessions in the
     * fleet that are in <code>ACTIVE</code> status.</p> <p>A filter expression can
     * contain one or multiple conditions. Each condition consists of the
     * following:</p> <ul> <li> <p> <b>Operand</b> -- Name of a game session attribute.
     * Valid values are <code>gameSessionName</code>, <code>gameSessionId</code>,
     * <code>creationTimeMillis</code>, <code>playerSessionCount</code>,
     * <code>maximumSessions</code>, <code>hasAvailablePlayerSessions</code>.</p> </li>
     * <li> <p> <b>Comparator</b> -- Valid comparators are: <code>=</code>,
     * <code>&lt;&gt;</code>, <code>&lt;</code>, <code>&gt;</code>, <code>&lt;=</code>,
     * <code>&gt;=</code>. </p> </li> <li> <p> <b>Value</b> -- Value to be searched
     * for. Values can be numbers, boolean values (true/false) or strings. String
     * values are case sensitive, enclosed in single quotes. Special characters must be
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
    inline void SetFilterExpression(const char* value) { m_filterExpressionHasBeenSet = true; m_filterExpression.assign(value); }

    /**
     * <p>String containing the search criteria for the session search. If no filter
     * expression is included, the request returns results for all game sessions in the
     * fleet that are in <code>ACTIVE</code> status.</p> <p>A filter expression can
     * contain one or multiple conditions. Each condition consists of the
     * following:</p> <ul> <li> <p> <b>Operand</b> -- Name of a game session attribute.
     * Valid values are <code>gameSessionName</code>, <code>gameSessionId</code>,
     * <code>creationTimeMillis</code>, <code>playerSessionCount</code>,
     * <code>maximumSessions</code>, <code>hasAvailablePlayerSessions</code>.</p> </li>
     * <li> <p> <b>Comparator</b> -- Valid comparators are: <code>=</code>,
     * <code>&lt;&gt;</code>, <code>&lt;</code>, <code>&gt;</code>, <code>&lt;=</code>,
     * <code>&gt;=</code>. </p> </li> <li> <p> <b>Value</b> -- Value to be searched
     * for. Values can be numbers, boolean values (true/false) or strings. String
     * values are case sensitive, enclosed in single quotes. Special characters must be
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
    inline SearchGameSessionsRequest& WithFilterExpression(const Aws::String& value) { SetFilterExpression(value); return *this;}

    /**
     * <p>String containing the search criteria for the session search. If no filter
     * expression is included, the request returns results for all game sessions in the
     * fleet that are in <code>ACTIVE</code> status.</p> <p>A filter expression can
     * contain one or multiple conditions. Each condition consists of the
     * following:</p> <ul> <li> <p> <b>Operand</b> -- Name of a game session attribute.
     * Valid values are <code>gameSessionName</code>, <code>gameSessionId</code>,
     * <code>creationTimeMillis</code>, <code>playerSessionCount</code>,
     * <code>maximumSessions</code>, <code>hasAvailablePlayerSessions</code>.</p> </li>
     * <li> <p> <b>Comparator</b> -- Valid comparators are: <code>=</code>,
     * <code>&lt;&gt;</code>, <code>&lt;</code>, <code>&gt;</code>, <code>&lt;=</code>,
     * <code>&gt;=</code>. </p> </li> <li> <p> <b>Value</b> -- Value to be searched
     * for. Values can be numbers, boolean values (true/false) or strings. String
     * values are case sensitive, enclosed in single quotes. Special characters must be
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
    inline SearchGameSessionsRequest& WithFilterExpression(Aws::String&& value) { SetFilterExpression(std::move(value)); return *this;}

    /**
     * <p>String containing the search criteria for the session search. If no filter
     * expression is included, the request returns results for all game sessions in the
     * fleet that are in <code>ACTIVE</code> status.</p> <p>A filter expression can
     * contain one or multiple conditions. Each condition consists of the
     * following:</p> <ul> <li> <p> <b>Operand</b> -- Name of a game session attribute.
     * Valid values are <code>gameSessionName</code>, <code>gameSessionId</code>,
     * <code>creationTimeMillis</code>, <code>playerSessionCount</code>,
     * <code>maximumSessions</code>, <code>hasAvailablePlayerSessions</code>.</p> </li>
     * <li> <p> <b>Comparator</b> -- Valid comparators are: <code>=</code>,
     * <code>&lt;&gt;</code>, <code>&lt;</code>, <code>&gt;</code>, <code>&lt;=</code>,
     * <code>&gt;=</code>. </p> </li> <li> <p> <b>Value</b> -- Value to be searched
     * for. Values can be numbers, boolean values (true/false) or strings. String
     * values are case sensitive, enclosed in single quotes. Special characters must be
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
    inline SearchGameSessionsRequest& WithFilterExpression(const char* value) { SetFilterExpression(value); return *this;}

    /**
     * <p>Instructions on how to sort the search results. If no sort expression is
     * included, the request returns results in random order. A sort expression
     * consists of the following elements:</p> <ul> <li> <p> <b>Operand</b> -- Name of
     * a game session attribute. Valid values are <code>gameSessionName</code>,
     * <code>gameSessionId</code>, <code>creationTimeMillis</code>,
     * <code>playerSessionCount</code>, <code>maximumSessions</code>,
     * <code>hasAvailablePlayerSessions</code>.</p> </li> <li> <p> <b>Order</b> --
     * Valid sort orders are <code>ASC</code> (ascending) and <code>DESC</code>
     * (descending).</p> </li> </ul> <p>For example, this sort expression returns the
     * oldest active sessions first: <code>"SortExpression": "creationTimeMillis
     * ASC"</code>. Results with a null value for the sort operand are returned at the
     * end of the list.</p>
     */
    inline const Aws::String& GetSortExpression() const{ return m_sortExpression; }

    /**
     * <p>Instructions on how to sort the search results. If no sort expression is
     * included, the request returns results in random order. A sort expression
     * consists of the following elements:</p> <ul> <li> <p> <b>Operand</b> -- Name of
     * a game session attribute. Valid values are <code>gameSessionName</code>,
     * <code>gameSessionId</code>, <code>creationTimeMillis</code>,
     * <code>playerSessionCount</code>, <code>maximumSessions</code>,
     * <code>hasAvailablePlayerSessions</code>.</p> </li> <li> <p> <b>Order</b> --
     * Valid sort orders are <code>ASC</code> (ascending) and <code>DESC</code>
     * (descending).</p> </li> </ul> <p>For example, this sort expression returns the
     * oldest active sessions first: <code>"SortExpression": "creationTimeMillis
     * ASC"</code>. Results with a null value for the sort operand are returned at the
     * end of the list.</p>
     */
    inline void SetSortExpression(const Aws::String& value) { m_sortExpressionHasBeenSet = true; m_sortExpression = value; }

    /**
     * <p>Instructions on how to sort the search results. If no sort expression is
     * included, the request returns results in random order. A sort expression
     * consists of the following elements:</p> <ul> <li> <p> <b>Operand</b> -- Name of
     * a game session attribute. Valid values are <code>gameSessionName</code>,
     * <code>gameSessionId</code>, <code>creationTimeMillis</code>,
     * <code>playerSessionCount</code>, <code>maximumSessions</code>,
     * <code>hasAvailablePlayerSessions</code>.</p> </li> <li> <p> <b>Order</b> --
     * Valid sort orders are <code>ASC</code> (ascending) and <code>DESC</code>
     * (descending).</p> </li> </ul> <p>For example, this sort expression returns the
     * oldest active sessions first: <code>"SortExpression": "creationTimeMillis
     * ASC"</code>. Results with a null value for the sort operand are returned at the
     * end of the list.</p>
     */
    inline void SetSortExpression(Aws::String&& value) { m_sortExpressionHasBeenSet = true; m_sortExpression = std::move(value); }

    /**
     * <p>Instructions on how to sort the search results. If no sort expression is
     * included, the request returns results in random order. A sort expression
     * consists of the following elements:</p> <ul> <li> <p> <b>Operand</b> -- Name of
     * a game session attribute. Valid values are <code>gameSessionName</code>,
     * <code>gameSessionId</code>, <code>creationTimeMillis</code>,
     * <code>playerSessionCount</code>, <code>maximumSessions</code>,
     * <code>hasAvailablePlayerSessions</code>.</p> </li> <li> <p> <b>Order</b> --
     * Valid sort orders are <code>ASC</code> (ascending) and <code>DESC</code>
     * (descending).</p> </li> </ul> <p>For example, this sort expression returns the
     * oldest active sessions first: <code>"SortExpression": "creationTimeMillis
     * ASC"</code>. Results with a null value for the sort operand are returned at the
     * end of the list.</p>
     */
    inline void SetSortExpression(const char* value) { m_sortExpressionHasBeenSet = true; m_sortExpression.assign(value); }

    /**
     * <p>Instructions on how to sort the search results. If no sort expression is
     * included, the request returns results in random order. A sort expression
     * consists of the following elements:</p> <ul> <li> <p> <b>Operand</b> -- Name of
     * a game session attribute. Valid values are <code>gameSessionName</code>,
     * <code>gameSessionId</code>, <code>creationTimeMillis</code>,
     * <code>playerSessionCount</code>, <code>maximumSessions</code>,
     * <code>hasAvailablePlayerSessions</code>.</p> </li> <li> <p> <b>Order</b> --
     * Valid sort orders are <code>ASC</code> (ascending) and <code>DESC</code>
     * (descending).</p> </li> </ul> <p>For example, this sort expression returns the
     * oldest active sessions first: <code>"SortExpression": "creationTimeMillis
     * ASC"</code>. Results with a null value for the sort operand are returned at the
     * end of the list.</p>
     */
    inline SearchGameSessionsRequest& WithSortExpression(const Aws::String& value) { SetSortExpression(value); return *this;}

    /**
     * <p>Instructions on how to sort the search results. If no sort expression is
     * included, the request returns results in random order. A sort expression
     * consists of the following elements:</p> <ul> <li> <p> <b>Operand</b> -- Name of
     * a game session attribute. Valid values are <code>gameSessionName</code>,
     * <code>gameSessionId</code>, <code>creationTimeMillis</code>,
     * <code>playerSessionCount</code>, <code>maximumSessions</code>,
     * <code>hasAvailablePlayerSessions</code>.</p> </li> <li> <p> <b>Order</b> --
     * Valid sort orders are <code>ASC</code> (ascending) and <code>DESC</code>
     * (descending).</p> </li> </ul> <p>For example, this sort expression returns the
     * oldest active sessions first: <code>"SortExpression": "creationTimeMillis
     * ASC"</code>. Results with a null value for the sort operand are returned at the
     * end of the list.</p>
     */
    inline SearchGameSessionsRequest& WithSortExpression(Aws::String&& value) { SetSortExpression(std::move(value)); return *this;}

    /**
     * <p>Instructions on how to sort the search results. If no sort expression is
     * included, the request returns results in random order. A sort expression
     * consists of the following elements:</p> <ul> <li> <p> <b>Operand</b> -- Name of
     * a game session attribute. Valid values are <code>gameSessionName</code>,
     * <code>gameSessionId</code>, <code>creationTimeMillis</code>,
     * <code>playerSessionCount</code>, <code>maximumSessions</code>,
     * <code>hasAvailablePlayerSessions</code>.</p> </li> <li> <p> <b>Order</b> --
     * Valid sort orders are <code>ASC</code> (ascending) and <code>DESC</code>
     * (descending).</p> </li> </ul> <p>For example, this sort expression returns the
     * oldest active sessions first: <code>"SortExpression": "creationTimeMillis
     * ASC"</code>. Results with a null value for the sort operand are returned at the
     * end of the list.</p>
     */
    inline SearchGameSessionsRequest& WithSortExpression(const char* value) { SetSortExpression(value); return *this;}

    /**
     * <p>Maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages. The maximum
     * number of results returned is 20, even if this value is not set or is set higher
     * than 20. </p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>Maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages. The maximum
     * number of results returned is 20, even if this value is not set or is set higher
     * than 20. </p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages. The maximum
     * number of results returned is 20, even if this value is not set or is set higher
     * than 20. </p>
     */
    inline SearchGameSessionsRequest& WithLimit(int value) { SetLimit(value); return *this;}

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
    inline SearchGameSessionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To specify the
     * start of the result set, do not specify a value.</p>
     */
    inline SearchGameSessionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To specify the
     * start of the result set, do not specify a value.</p>
     */
    inline SearchGameSessionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;
    Aws::String m_aliasId;
    bool m_aliasIdHasBeenSet;
    Aws::String m_filterExpression;
    bool m_filterExpressionHasBeenSet;
    Aws::String m_sortExpression;
    bool m_sortExpressionHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
