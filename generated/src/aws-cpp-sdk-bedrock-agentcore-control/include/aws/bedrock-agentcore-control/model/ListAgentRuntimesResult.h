/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/AgentRuntime.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{
  class ListAgentRuntimesResult
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API ListAgentRuntimesResult() = default;
    AWS_BEDROCKAGENTCORECONTROL_API ListAgentRuntimesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORECONTROL_API ListAgentRuntimesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of AgentCore Runtime resources.</p>
     */
    inline const Aws::Vector<AgentRuntime>& GetAgentRuntimes() const { return m_agentRuntimes; }
    template<typename AgentRuntimesT = Aws::Vector<AgentRuntime>>
    void SetAgentRuntimes(AgentRuntimesT&& value) { m_agentRuntimesHasBeenSet = true; m_agentRuntimes = std::forward<AgentRuntimesT>(value); }
    template<typename AgentRuntimesT = Aws::Vector<AgentRuntime>>
    ListAgentRuntimesResult& WithAgentRuntimes(AgentRuntimesT&& value) { SetAgentRuntimes(std::forward<AgentRuntimesT>(value)); return *this;}
    template<typename AgentRuntimesT = AgentRuntime>
    ListAgentRuntimesResult& AddAgentRuntimes(AgentRuntimesT&& value) { m_agentRuntimesHasBeenSet = true; m_agentRuntimes.emplace_back(std::forward<AgentRuntimesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAgentRuntimesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAgentRuntimesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AgentRuntime> m_agentRuntimes;
    bool m_agentRuntimesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
