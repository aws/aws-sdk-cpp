/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/AgentRuntimeEndpoint.h>
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
  class ListAgentRuntimeEndpointsResult
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API ListAgentRuntimeEndpointsResult() = default;
    AWS_BEDROCKAGENTCORECONTROL_API ListAgentRuntimeEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORECONTROL_API ListAgentRuntimeEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of AgentCore Runtime endpoints.</p>
     */
    inline const Aws::Vector<AgentRuntimeEndpoint>& GetRuntimeEndpoints() const { return m_runtimeEndpoints; }
    template<typename RuntimeEndpointsT = Aws::Vector<AgentRuntimeEndpoint>>
    void SetRuntimeEndpoints(RuntimeEndpointsT&& value) { m_runtimeEndpointsHasBeenSet = true; m_runtimeEndpoints = std::forward<RuntimeEndpointsT>(value); }
    template<typename RuntimeEndpointsT = Aws::Vector<AgentRuntimeEndpoint>>
    ListAgentRuntimeEndpointsResult& WithRuntimeEndpoints(RuntimeEndpointsT&& value) { SetRuntimeEndpoints(std::forward<RuntimeEndpointsT>(value)); return *this;}
    template<typename RuntimeEndpointsT = AgentRuntimeEndpoint>
    ListAgentRuntimeEndpointsResult& AddRuntimeEndpoints(RuntimeEndpointsT&& value) { m_runtimeEndpointsHasBeenSet = true; m_runtimeEndpoints.emplace_back(std::forward<RuntimeEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAgentRuntimeEndpointsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAgentRuntimeEndpointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AgentRuntimeEndpoint> m_runtimeEndpoints;
    bool m_runtimeEndpointsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
