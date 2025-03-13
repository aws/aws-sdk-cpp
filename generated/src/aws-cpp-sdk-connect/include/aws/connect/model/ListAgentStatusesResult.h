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
    AWS_CONNECT_API ListAgentStatusesResult() = default;
    AWS_CONNECT_API ListAgentStatusesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListAgentStatusesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAgentStatusesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of agent statuses.</p>
     */
    inline const Aws::Vector<AgentStatusSummary>& GetAgentStatusSummaryList() const { return m_agentStatusSummaryList; }
    template<typename AgentStatusSummaryListT = Aws::Vector<AgentStatusSummary>>
    void SetAgentStatusSummaryList(AgentStatusSummaryListT&& value) { m_agentStatusSummaryListHasBeenSet = true; m_agentStatusSummaryList = std::forward<AgentStatusSummaryListT>(value); }
    template<typename AgentStatusSummaryListT = Aws::Vector<AgentStatusSummary>>
    ListAgentStatusesResult& WithAgentStatusSummaryList(AgentStatusSummaryListT&& value) { SetAgentStatusSummaryList(std::forward<AgentStatusSummaryListT>(value)); return *this;}
    template<typename AgentStatusSummaryListT = AgentStatusSummary>
    ListAgentStatusesResult& AddAgentStatusSummaryList(AgentStatusSummaryListT&& value) { m_agentStatusSummaryListHasBeenSet = true; m_agentStatusSummaryList.emplace_back(std::forward<AgentStatusSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAgentStatusesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<AgentStatusSummary> m_agentStatusSummaryList;
    bool m_agentStatusSummaryListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
