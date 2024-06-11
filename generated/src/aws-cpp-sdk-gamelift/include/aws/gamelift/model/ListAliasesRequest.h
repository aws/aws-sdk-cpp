/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   */
  class ListAliasesRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API ListAliasesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAliases"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The routing type to filter results on. Use this parameter to retrieve only
     * aliases with a certain routing type. To retrieve all aliases, leave this
     * parameter empty.</p> <p>Possible routing types include the following:</p> <ul>
     * <li> <p> <b>SIMPLE</b> -- The alias resolves to one specific fleet. Use this
     * type when routing to active fleets.</p> </li> <li> <p> <b>TERMINAL</b> -- The
     * alias does not resolve to a fleet but instead can be used to display a message
     * to the user. A terminal alias throws a TerminalRoutingStrategyException with the
     * <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_RoutingStrategy.html">RoutingStrategy</a>
     * message embedded.</p> </li> </ul>
     */
    inline const RoutingStrategyType& GetRoutingStrategyType() const{ return m_routingStrategyType; }
    inline bool RoutingStrategyTypeHasBeenSet() const { return m_routingStrategyTypeHasBeenSet; }
    inline void SetRoutingStrategyType(const RoutingStrategyType& value) { m_routingStrategyTypeHasBeenSet = true; m_routingStrategyType = value; }
    inline void SetRoutingStrategyType(RoutingStrategyType&& value) { m_routingStrategyTypeHasBeenSet = true; m_routingStrategyType = std::move(value); }
    inline ListAliasesRequest& WithRoutingStrategyType(const RoutingStrategyType& value) { SetRoutingStrategyType(value); return *this;}
    inline ListAliasesRequest& WithRoutingStrategyType(RoutingStrategyType&& value) { SetRoutingStrategyType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ListAliasesRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ListAliasesRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ListAliasesRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListAliasesRequest& WithLimit(int value) { SetLimit(value); return *this;}
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
    inline ListAliasesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAliasesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAliasesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    RoutingStrategyType m_routingStrategyType;
    bool m_routingStrategyTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
