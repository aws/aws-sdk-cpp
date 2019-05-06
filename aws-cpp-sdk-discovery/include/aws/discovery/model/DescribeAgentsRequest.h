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
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/ApplicationDiscoveryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/Filter.h>
#include <utility>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   */
  class AWS_APPLICATIONDISCOVERYSERVICE_API DescribeAgentsRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    DescribeAgentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAgents"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The agent or the Connector IDs for which you want information. If you specify
     * no IDs, the system returns information about all agents/Connectors associated
     * with your AWS user account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentIds() const{ return m_agentIds; }

    /**
     * <p>The agent or the Connector IDs for which you want information. If you specify
     * no IDs, the system returns information about all agents/Connectors associated
     * with your AWS user account.</p>
     */
    inline bool AgentIdsHasBeenSet() const { return m_agentIdsHasBeenSet; }

    /**
     * <p>The agent or the Connector IDs for which you want information. If you specify
     * no IDs, the system returns information about all agents/Connectors associated
     * with your AWS user account.</p>
     */
    inline void SetAgentIds(const Aws::Vector<Aws::String>& value) { m_agentIdsHasBeenSet = true; m_agentIds = value; }

    /**
     * <p>The agent or the Connector IDs for which you want information. If you specify
     * no IDs, the system returns information about all agents/Connectors associated
     * with your AWS user account.</p>
     */
    inline void SetAgentIds(Aws::Vector<Aws::String>&& value) { m_agentIdsHasBeenSet = true; m_agentIds = std::move(value); }

    /**
     * <p>The agent or the Connector IDs for which you want information. If you specify
     * no IDs, the system returns information about all agents/Connectors associated
     * with your AWS user account.</p>
     */
    inline DescribeAgentsRequest& WithAgentIds(const Aws::Vector<Aws::String>& value) { SetAgentIds(value); return *this;}

    /**
     * <p>The agent or the Connector IDs for which you want information. If you specify
     * no IDs, the system returns information about all agents/Connectors associated
     * with your AWS user account.</p>
     */
    inline DescribeAgentsRequest& WithAgentIds(Aws::Vector<Aws::String>&& value) { SetAgentIds(std::move(value)); return *this;}

    /**
     * <p>The agent or the Connector IDs for which you want information. If you specify
     * no IDs, the system returns information about all agents/Connectors associated
     * with your AWS user account.</p>
     */
    inline DescribeAgentsRequest& AddAgentIds(const Aws::String& value) { m_agentIdsHasBeenSet = true; m_agentIds.push_back(value); return *this; }

    /**
     * <p>The agent or the Connector IDs for which you want information. If you specify
     * no IDs, the system returns information about all agents/Connectors associated
     * with your AWS user account.</p>
     */
    inline DescribeAgentsRequest& AddAgentIds(Aws::String&& value) { m_agentIdsHasBeenSet = true; m_agentIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The agent or the Connector IDs for which you want information. If you specify
     * no IDs, the system returns information about all agents/Connectors associated
     * with your AWS user account.</p>
     */
    inline DescribeAgentsRequest& AddAgentIds(const char* value) { m_agentIdsHasBeenSet = true; m_agentIds.push_back(value); return *this; }


    /**
     * <p>You can filter the request using various logical operators and a
     * <i>key</i>-<i>value</i> format. For example: </p> <p> <code>{"key":
     * "collectionStatus", "value": "STARTED"}</code> </p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>You can filter the request using various logical operators and a
     * <i>key</i>-<i>value</i> format. For example: </p> <p> <code>{"key":
     * "collectionStatus", "value": "STARTED"}</code> </p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>You can filter the request using various logical operators and a
     * <i>key</i>-<i>value</i> format. For example: </p> <p> <code>{"key":
     * "collectionStatus", "value": "STARTED"}</code> </p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>You can filter the request using various logical operators and a
     * <i>key</i>-<i>value</i> format. For example: </p> <p> <code>{"key":
     * "collectionStatus", "value": "STARTED"}</code> </p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>You can filter the request using various logical operators and a
     * <i>key</i>-<i>value</i> format. For example: </p> <p> <code>{"key":
     * "collectionStatus", "value": "STARTED"}</code> </p>
     */
    inline DescribeAgentsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>You can filter the request using various logical operators and a
     * <i>key</i>-<i>value</i> format. For example: </p> <p> <code>{"key":
     * "collectionStatus", "value": "STARTED"}</code> </p>
     */
    inline DescribeAgentsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>You can filter the request using various logical operators and a
     * <i>key</i>-<i>value</i> format. For example: </p> <p> <code>{"key":
     * "collectionStatus", "value": "STARTED"}</code> </p>
     */
    inline DescribeAgentsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>You can filter the request using various logical operators and a
     * <i>key</i>-<i>value</i> format. For example: </p> <p> <code>{"key":
     * "collectionStatus", "value": "STARTED"}</code> </p>
     */
    inline DescribeAgentsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The total number of agents/Connectors to return in a single page of output.
     * The maximum value is 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The total number of agents/Connectors to return in a single page of output.
     * The maximum value is 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The total number of agents/Connectors to return in a single page of output.
     * The maximum value is 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The total number of agents/Connectors to return in a single page of output.
     * The maximum value is 100.</p>
     */
    inline DescribeAgentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Token to retrieve the next set of results. For example, if you previously
     * specified 100 IDs for <code>DescribeAgentsRequest$agentIds</code> but set
     * <code>DescribeAgentsRequest$maxResults</code> to 10, you received a set of 10
     * results along with a token. Use that token in this query to get the next set of
     * 10.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token to retrieve the next set of results. For example, if you previously
     * specified 100 IDs for <code>DescribeAgentsRequest$agentIds</code> but set
     * <code>DescribeAgentsRequest$maxResults</code> to 10, you received a set of 10
     * results along with a token. Use that token in this query to get the next set of
     * 10.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Token to retrieve the next set of results. For example, if you previously
     * specified 100 IDs for <code>DescribeAgentsRequest$agentIds</code> but set
     * <code>DescribeAgentsRequest$maxResults</code> to 10, you received a set of 10
     * results along with a token. Use that token in this query to get the next set of
     * 10.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token to retrieve the next set of results. For example, if you previously
     * specified 100 IDs for <code>DescribeAgentsRequest$agentIds</code> but set
     * <code>DescribeAgentsRequest$maxResults</code> to 10, you received a set of 10
     * results along with a token. Use that token in this query to get the next set of
     * 10.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Token to retrieve the next set of results. For example, if you previously
     * specified 100 IDs for <code>DescribeAgentsRequest$agentIds</code> but set
     * <code>DescribeAgentsRequest$maxResults</code> to 10, you received a set of 10
     * results along with a token. Use that token in this query to get the next set of
     * 10.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Token to retrieve the next set of results. For example, if you previously
     * specified 100 IDs for <code>DescribeAgentsRequest$agentIds</code> but set
     * <code>DescribeAgentsRequest$maxResults</code> to 10, you received a set of 10
     * results along with a token. Use that token in this query to get the next set of
     * 10.</p>
     */
    inline DescribeAgentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token to retrieve the next set of results. For example, if you previously
     * specified 100 IDs for <code>DescribeAgentsRequest$agentIds</code> but set
     * <code>DescribeAgentsRequest$maxResults</code> to 10, you received a set of 10
     * results along with a token. Use that token in this query to get the next set of
     * 10.</p>
     */
    inline DescribeAgentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token to retrieve the next set of results. For example, if you previously
     * specified 100 IDs for <code>DescribeAgentsRequest$agentIds</code> but set
     * <code>DescribeAgentsRequest$maxResults</code> to 10, you received a set of 10
     * results along with a token. Use that token in this query to get the next set of
     * 10.</p>
     */
    inline DescribeAgentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_agentIds;
    bool m_agentIdsHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
