/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/gamelift/model/ContainerSchedulingStrategy.h>
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
  class ListContainerGroupDefinitionsRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API ListContainerGroupDefinitionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListContainerGroupDefinitions"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The type of container group definitions to retrieve.</p> <ul> <li> <p>
     * <code>DAEMON</code> -- Daemon container groups run background processes and are
     * deployed once per fleet instance.</p> </li> <li> <p> <code>REPLICA</code> --
     * Replica container groups run your game server application and supporting
     * software. Replica groups might be deployed multiple times per fleet
     * instance.</p> </li> </ul>
     */
    inline const ContainerSchedulingStrategy& GetSchedulingStrategy() const{ return m_schedulingStrategy; }

    /**
     * <p>The type of container group definitions to retrieve.</p> <ul> <li> <p>
     * <code>DAEMON</code> -- Daemon container groups run background processes and are
     * deployed once per fleet instance.</p> </li> <li> <p> <code>REPLICA</code> --
     * Replica container groups run your game server application and supporting
     * software. Replica groups might be deployed multiple times per fleet
     * instance.</p> </li> </ul>
     */
    inline bool SchedulingStrategyHasBeenSet() const { return m_schedulingStrategyHasBeenSet; }

    /**
     * <p>The type of container group definitions to retrieve.</p> <ul> <li> <p>
     * <code>DAEMON</code> -- Daemon container groups run background processes and are
     * deployed once per fleet instance.</p> </li> <li> <p> <code>REPLICA</code> --
     * Replica container groups run your game server application and supporting
     * software. Replica groups might be deployed multiple times per fleet
     * instance.</p> </li> </ul>
     */
    inline void SetSchedulingStrategy(const ContainerSchedulingStrategy& value) { m_schedulingStrategyHasBeenSet = true; m_schedulingStrategy = value; }

    /**
     * <p>The type of container group definitions to retrieve.</p> <ul> <li> <p>
     * <code>DAEMON</code> -- Daemon container groups run background processes and are
     * deployed once per fleet instance.</p> </li> <li> <p> <code>REPLICA</code> --
     * Replica container groups run your game server application and supporting
     * software. Replica groups might be deployed multiple times per fleet
     * instance.</p> </li> </ul>
     */
    inline void SetSchedulingStrategy(ContainerSchedulingStrategy&& value) { m_schedulingStrategyHasBeenSet = true; m_schedulingStrategy = std::move(value); }

    /**
     * <p>The type of container group definitions to retrieve.</p> <ul> <li> <p>
     * <code>DAEMON</code> -- Daemon container groups run background processes and are
     * deployed once per fleet instance.</p> </li> <li> <p> <code>REPLICA</code> --
     * Replica container groups run your game server application and supporting
     * software. Replica groups might be deployed multiple times per fleet
     * instance.</p> </li> </ul>
     */
    inline ListContainerGroupDefinitionsRequest& WithSchedulingStrategy(const ContainerSchedulingStrategy& value) { SetSchedulingStrategy(value); return *this;}

    /**
     * <p>The type of container group definitions to retrieve.</p> <ul> <li> <p>
     * <code>DAEMON</code> -- Daemon container groups run background processes and are
     * deployed once per fleet instance.</p> </li> <li> <p> <code>REPLICA</code> --
     * Replica container groups run your game server application and supporting
     * software. Replica groups might be deployed multiple times per fleet
     * instance.</p> </li> </ul>
     */
    inline ListContainerGroupDefinitionsRequest& WithSchedulingStrategy(ContainerSchedulingStrategy&& value) { SetSchedulingStrategy(std::move(value)); return *this;}


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
    inline ListContainerGroupDefinitionsRequest& WithLimit(int value) { SetLimit(value); return *this;}


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
    inline ListContainerGroupDefinitionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline ListContainerGroupDefinitionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline ListContainerGroupDefinitionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    ContainerSchedulingStrategy m_schedulingStrategy;
    bool m_schedulingStrategyHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
