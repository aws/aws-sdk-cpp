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
#include <aws/gamelift/model/RoutingStrategyType.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListAliasesInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API ListAliasesRequest : public GameLiftRequest
  {
  public:
    ListAliasesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Type of routing to filter results on. Use this parameter to retrieve only
     * aliases of a certain type. To retrieve all aliases, leave this parameter
     * empty.</p> <p>Possible routing types include the following:</p> <ul> <li> <p>
     * <b>SIMPLE</b> – The alias resolves to one specific fleet. Use this type when
     * routing to active fleets.</p> </li> <li> <p> <b>TERMINAL</b> – The alias does
     * not resolve to a fleet but instead can be used to display a message to the user.
     * A terminal alias throws a TerminalRoutingStrategyException with the
     * <a>RoutingStrategy</a> message embedded.</p> </li> </ul>
     */
    inline const RoutingStrategyType& GetRoutingStrategyType() const{ return m_routingStrategyType; }

    /**
     * <p>Type of routing to filter results on. Use this parameter to retrieve only
     * aliases of a certain type. To retrieve all aliases, leave this parameter
     * empty.</p> <p>Possible routing types include the following:</p> <ul> <li> <p>
     * <b>SIMPLE</b> – The alias resolves to one specific fleet. Use this type when
     * routing to active fleets.</p> </li> <li> <p> <b>TERMINAL</b> – The alias does
     * not resolve to a fleet but instead can be used to display a message to the user.
     * A terminal alias throws a TerminalRoutingStrategyException with the
     * <a>RoutingStrategy</a> message embedded.</p> </li> </ul>
     */
    inline void SetRoutingStrategyType(const RoutingStrategyType& value) { m_routingStrategyTypeHasBeenSet = true; m_routingStrategyType = value; }

    /**
     * <p>Type of routing to filter results on. Use this parameter to retrieve only
     * aliases of a certain type. To retrieve all aliases, leave this parameter
     * empty.</p> <p>Possible routing types include the following:</p> <ul> <li> <p>
     * <b>SIMPLE</b> – The alias resolves to one specific fleet. Use this type when
     * routing to active fleets.</p> </li> <li> <p> <b>TERMINAL</b> – The alias does
     * not resolve to a fleet but instead can be used to display a message to the user.
     * A terminal alias throws a TerminalRoutingStrategyException with the
     * <a>RoutingStrategy</a> message embedded.</p> </li> </ul>
     */
    inline void SetRoutingStrategyType(RoutingStrategyType&& value) { m_routingStrategyTypeHasBeenSet = true; m_routingStrategyType = std::move(value); }

    /**
     * <p>Type of routing to filter results on. Use this parameter to retrieve only
     * aliases of a certain type. To retrieve all aliases, leave this parameter
     * empty.</p> <p>Possible routing types include the following:</p> <ul> <li> <p>
     * <b>SIMPLE</b> – The alias resolves to one specific fleet. Use this type when
     * routing to active fleets.</p> </li> <li> <p> <b>TERMINAL</b> – The alias does
     * not resolve to a fleet but instead can be used to display a message to the user.
     * A terminal alias throws a TerminalRoutingStrategyException with the
     * <a>RoutingStrategy</a> message embedded.</p> </li> </ul>
     */
    inline ListAliasesRequest& WithRoutingStrategyType(const RoutingStrategyType& value) { SetRoutingStrategyType(value); return *this;}

    /**
     * <p>Type of routing to filter results on. Use this parameter to retrieve only
     * aliases of a certain type. To retrieve all aliases, leave this parameter
     * empty.</p> <p>Possible routing types include the following:</p> <ul> <li> <p>
     * <b>SIMPLE</b> – The alias resolves to one specific fleet. Use this type when
     * routing to active fleets.</p> </li> <li> <p> <b>TERMINAL</b> – The alias does
     * not resolve to a fleet but instead can be used to display a message to the user.
     * A terminal alias throws a TerminalRoutingStrategyException with the
     * <a>RoutingStrategy</a> message embedded.</p> </li> </ul>
     */
    inline ListAliasesRequest& WithRoutingStrategyType(RoutingStrategyType&& value) { SetRoutingStrategyType(std::move(value)); return *this;}

    /**
     * <p>Descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline ListAliasesRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline ListAliasesRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline ListAliasesRequest& WithName(const char* value) { SetName(value); return *this;}

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
    inline ListAliasesRequest& WithLimit(int value) { SetLimit(value); return *this;}

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
    inline ListAliasesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To specify the
     * start of the result set, do not specify a value.</p>
     */
    inline ListAliasesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To specify the
     * start of the result set, do not specify a value.</p>
     */
    inline ListAliasesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    RoutingStrategyType m_routingStrategyType;
    bool m_routingStrategyTypeHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
