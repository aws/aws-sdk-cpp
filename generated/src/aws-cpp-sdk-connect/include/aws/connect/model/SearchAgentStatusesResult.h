/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/AgentStatus.h>
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
namespace Connect
{
namespace Model
{
  class SearchAgentStatusesResult
  {
  public:
    AWS_CONNECT_API SearchAgentStatusesResult();
    AWS_CONNECT_API SearchAgentStatusesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchAgentStatusesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The search criteria to be used to return agent statuses.</p>
     */
    inline const Aws::Vector<AgentStatus>& GetAgentStatuses() const{ return m_agentStatuses; }
    inline void SetAgentStatuses(const Aws::Vector<AgentStatus>& value) { m_agentStatuses = value; }
    inline void SetAgentStatuses(Aws::Vector<AgentStatus>&& value) { m_agentStatuses = std::move(value); }
    inline SearchAgentStatusesResult& WithAgentStatuses(const Aws::Vector<AgentStatus>& value) { SetAgentStatuses(value); return *this;}
    inline SearchAgentStatusesResult& WithAgentStatuses(Aws::Vector<AgentStatus>&& value) { SetAgentStatuses(std::move(value)); return *this;}
    inline SearchAgentStatusesResult& AddAgentStatuses(const AgentStatus& value) { m_agentStatuses.push_back(value); return *this; }
    inline SearchAgentStatusesResult& AddAgentStatuses(AgentStatus&& value) { m_agentStatuses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline SearchAgentStatusesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchAgentStatusesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchAgentStatusesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of agent statuses which matched your search query.</p>
     */
    inline long long GetApproximateTotalCount() const{ return m_approximateTotalCount; }
    inline void SetApproximateTotalCount(long long value) { m_approximateTotalCount = value; }
    inline SearchAgentStatusesResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchAgentStatusesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchAgentStatusesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchAgentStatusesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AgentStatus> m_agentStatuses;

    Aws::String m_nextToken;

    long long m_approximateTotalCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
