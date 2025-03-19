/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/AgentInfo.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ApplicationDiscoveryService
{
namespace Model
{
  class DescribeAgentsResult
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API DescribeAgentsResult() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API DescribeAgentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API DescribeAgentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists agents or the collector by ID or lists all agents/collectors associated
     * with your user, if you did not specify an agent/collector ID. The output
     * includes agent/collector IDs, IP addresses, media access control (MAC)
     * addresses, agent/collector health, host name where the agent/collector resides,
     * and the version number of each agent/collector.</p>
     */
    inline const Aws::Vector<AgentInfo>& GetAgentsInfo() const { return m_agentsInfo; }
    template<typename AgentsInfoT = Aws::Vector<AgentInfo>>
    void SetAgentsInfo(AgentsInfoT&& value) { m_agentsInfoHasBeenSet = true; m_agentsInfo = std::forward<AgentsInfoT>(value); }
    template<typename AgentsInfoT = Aws::Vector<AgentInfo>>
    DescribeAgentsResult& WithAgentsInfo(AgentsInfoT&& value) { SetAgentsInfo(std::forward<AgentsInfoT>(value)); return *this;}
    template<typename AgentsInfoT = AgentInfo>
    DescribeAgentsResult& AddAgentsInfo(AgentsInfoT&& value) { m_agentsInfoHasBeenSet = true; m_agentsInfo.emplace_back(std::forward<AgentsInfoT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token to retrieve the next set of results. For example, if you specified 100
     * IDs for <code>DescribeAgentsRequest$agentIds</code> but set
     * <code>DescribeAgentsRequest$maxResults</code> to 10, you received a set of 10
     * results along with this token. Use this token in the next query to retrieve the
     * next set of 10.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAgentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAgentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AgentInfo> m_agentsInfo;
    bool m_agentsInfoHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
