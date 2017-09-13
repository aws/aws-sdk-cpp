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
  class AWS_APPLICATIONDISCOVERYSERVICE_API DescribeAgentsResult
  {
  public:
    DescribeAgentsResult();
    DescribeAgentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAgentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists agents or the Connector by ID or lists all agents/Connectors associated
     * with your user account if you did not specify an agent/Connector ID. The output
     * includes agent/Connector IDs, IP addresses, media access control (MAC)
     * addresses, agent/Connector health, host name where the agent/Connector resides,
     * and the version number of each agent/Connector.</p>
     */
    inline const Aws::Vector<AgentInfo>& GetAgentsInfo() const{ return m_agentsInfo; }

    /**
     * <p>Lists agents or the Connector by ID or lists all agents/Connectors associated
     * with your user account if you did not specify an agent/Connector ID. The output
     * includes agent/Connector IDs, IP addresses, media access control (MAC)
     * addresses, agent/Connector health, host name where the agent/Connector resides,
     * and the version number of each agent/Connector.</p>
     */
    inline void SetAgentsInfo(const Aws::Vector<AgentInfo>& value) { m_agentsInfo = value; }

    /**
     * <p>Lists agents or the Connector by ID or lists all agents/Connectors associated
     * with your user account if you did not specify an agent/Connector ID. The output
     * includes agent/Connector IDs, IP addresses, media access control (MAC)
     * addresses, agent/Connector health, host name where the agent/Connector resides,
     * and the version number of each agent/Connector.</p>
     */
    inline void SetAgentsInfo(Aws::Vector<AgentInfo>&& value) { m_agentsInfo = std::move(value); }

    /**
     * <p>Lists agents or the Connector by ID or lists all agents/Connectors associated
     * with your user account if you did not specify an agent/Connector ID. The output
     * includes agent/Connector IDs, IP addresses, media access control (MAC)
     * addresses, agent/Connector health, host name where the agent/Connector resides,
     * and the version number of each agent/Connector.</p>
     */
    inline DescribeAgentsResult& WithAgentsInfo(const Aws::Vector<AgentInfo>& value) { SetAgentsInfo(value); return *this;}

    /**
     * <p>Lists agents or the Connector by ID or lists all agents/Connectors associated
     * with your user account if you did not specify an agent/Connector ID. The output
     * includes agent/Connector IDs, IP addresses, media access control (MAC)
     * addresses, agent/Connector health, host name where the agent/Connector resides,
     * and the version number of each agent/Connector.</p>
     */
    inline DescribeAgentsResult& WithAgentsInfo(Aws::Vector<AgentInfo>&& value) { SetAgentsInfo(std::move(value)); return *this;}

    /**
     * <p>Lists agents or the Connector by ID or lists all agents/Connectors associated
     * with your user account if you did not specify an agent/Connector ID. The output
     * includes agent/Connector IDs, IP addresses, media access control (MAC)
     * addresses, agent/Connector health, host name where the agent/Connector resides,
     * and the version number of each agent/Connector.</p>
     */
    inline DescribeAgentsResult& AddAgentsInfo(const AgentInfo& value) { m_agentsInfo.push_back(value); return *this; }

    /**
     * <p>Lists agents or the Connector by ID or lists all agents/Connectors associated
     * with your user account if you did not specify an agent/Connector ID. The output
     * includes agent/Connector IDs, IP addresses, media access control (MAC)
     * addresses, agent/Connector health, host name where the agent/Connector resides,
     * and the version number of each agent/Connector.</p>
     */
    inline DescribeAgentsResult& AddAgentsInfo(AgentInfo&& value) { m_agentsInfo.push_back(std::move(value)); return *this; }


    /**
     * <p>Token to retrieve the next set of results. For example, if you specified 100
     * IDs for <code>DescribeAgentsRequest$agentIds</code> but set
     * <code>DescribeAgentsRequest$maxResults</code> to 10, you received a set of 10
     * results along with this token. Use this token in the next query to retrieve the
     * next set of 10.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token to retrieve the next set of results. For example, if you specified 100
     * IDs for <code>DescribeAgentsRequest$agentIds</code> but set
     * <code>DescribeAgentsRequest$maxResults</code> to 10, you received a set of 10
     * results along with this token. Use this token in the next query to retrieve the
     * next set of 10.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token to retrieve the next set of results. For example, if you specified 100
     * IDs for <code>DescribeAgentsRequest$agentIds</code> but set
     * <code>DescribeAgentsRequest$maxResults</code> to 10, you received a set of 10
     * results along with this token. Use this token in the next query to retrieve the
     * next set of 10.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token to retrieve the next set of results. For example, if you specified 100
     * IDs for <code>DescribeAgentsRequest$agentIds</code> but set
     * <code>DescribeAgentsRequest$maxResults</code> to 10, you received a set of 10
     * results along with this token. Use this token in the next query to retrieve the
     * next set of 10.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token to retrieve the next set of results. For example, if you specified 100
     * IDs for <code>DescribeAgentsRequest$agentIds</code> but set
     * <code>DescribeAgentsRequest$maxResults</code> to 10, you received a set of 10
     * results along with this token. Use this token in the next query to retrieve the
     * next set of 10.</p>
     */
    inline DescribeAgentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token to retrieve the next set of results. For example, if you specified 100
     * IDs for <code>DescribeAgentsRequest$agentIds</code> but set
     * <code>DescribeAgentsRequest$maxResults</code> to 10, you received a set of 10
     * results along with this token. Use this token in the next query to retrieve the
     * next set of 10.</p>
     */
    inline DescribeAgentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token to retrieve the next set of results. For example, if you specified 100
     * IDs for <code>DescribeAgentsRequest$agentIds</code> but set
     * <code>DescribeAgentsRequest$maxResults</code> to 10, you received a set of 10
     * results along with this token. Use this token in the next query to retrieve the
     * next set of 10.</p>
     */
    inline DescribeAgentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AgentInfo> m_agentsInfo;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
