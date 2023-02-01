/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/AgentStatusSummary.h>
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
  class ListAgentStatusesResult
  {
  public:
    AWS_CONNECT_API ListAgentStatusesResult();
    AWS_CONNECT_API ListAgentStatusesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListAgentStatusesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListAgentStatusesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListAgentStatusesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListAgentStatusesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A summary of agent statuses.</p>
     */
    inline const Aws::Vector<AgentStatusSummary>& GetAgentStatusSummaryList() const{ return m_agentStatusSummaryList; }

    /**
     * <p>A summary of agent statuses.</p>
     */
    inline void SetAgentStatusSummaryList(const Aws::Vector<AgentStatusSummary>& value) { m_agentStatusSummaryList = value; }

    /**
     * <p>A summary of agent statuses.</p>
     */
    inline void SetAgentStatusSummaryList(Aws::Vector<AgentStatusSummary>&& value) { m_agentStatusSummaryList = std::move(value); }

    /**
     * <p>A summary of agent statuses.</p>
     */
    inline ListAgentStatusesResult& WithAgentStatusSummaryList(const Aws::Vector<AgentStatusSummary>& value) { SetAgentStatusSummaryList(value); return *this;}

    /**
     * <p>A summary of agent statuses.</p>
     */
    inline ListAgentStatusesResult& WithAgentStatusSummaryList(Aws::Vector<AgentStatusSummary>&& value) { SetAgentStatusSummaryList(std::move(value)); return *this;}

    /**
     * <p>A summary of agent statuses.</p>
     */
    inline ListAgentStatusesResult& AddAgentStatusSummaryList(const AgentStatusSummary& value) { m_agentStatusSummaryList.push_back(value); return *this; }

    /**
     * <p>A summary of agent statuses.</p>
     */
    inline ListAgentStatusesResult& AddAgentStatusSummaryList(AgentStatusSummary&& value) { m_agentStatusSummaryList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<AgentStatusSummary> m_agentStatusSummaryList;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
