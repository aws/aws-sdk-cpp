/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/AgentListEntry.h>
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
namespace DataSync
{
namespace Model
{
  /**
   * <p>ListAgentsResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListAgentsResponse">AWS
   * API Reference</a></p>
   */
  class ListAgentsResult
  {
  public:
    AWS_DATASYNC_API ListAgentsResult() = default;
    AWS_DATASYNC_API ListAgentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API ListAgentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of DataSync agents in your Amazon Web Services account in the Amazon
     * Web Services Region specified in the request. The list is ordered by the agents'
     * Amazon Resource Names (ARNs).</p>
     */
    inline const Aws::Vector<AgentListEntry>& GetAgents() const { return m_agents; }
    template<typename AgentsT = Aws::Vector<AgentListEntry>>
    void SetAgents(AgentsT&& value) { m_agentsHasBeenSet = true; m_agents = std::forward<AgentsT>(value); }
    template<typename AgentsT = Aws::Vector<AgentListEntry>>
    ListAgentsResult& WithAgents(AgentsT&& value) { SetAgents(std::forward<AgentsT>(value)); return *this;}
    template<typename AgentsT = AgentListEntry>
    ListAgentsResult& AddAgents(AgentsT&& value) { m_agentsHasBeenSet = true; m_agents.emplace_back(std::forward<AgentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAgentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAgentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AgentListEntry> m_agents;
    bool m_agentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
