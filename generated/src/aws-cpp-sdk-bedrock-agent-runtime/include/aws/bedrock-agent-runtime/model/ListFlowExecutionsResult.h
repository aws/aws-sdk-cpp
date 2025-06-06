/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/FlowExecutionSummary.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{
  class ListFlowExecutionsResult
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ListFlowExecutionsResult() = default;
    AWS_BEDROCKAGENTRUNTIME_API ListFlowExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API ListFlowExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of flow execution summaries. Each summary includes the execution ARN,
     * flow identifier, flow alias identifier, flow version, status, and
     * timestamps.</p>
     */
    inline const Aws::Vector<FlowExecutionSummary>& GetFlowExecutionSummaries() const { return m_flowExecutionSummaries; }
    template<typename FlowExecutionSummariesT = Aws::Vector<FlowExecutionSummary>>
    void SetFlowExecutionSummaries(FlowExecutionSummariesT&& value) { m_flowExecutionSummariesHasBeenSet = true; m_flowExecutionSummaries = std::forward<FlowExecutionSummariesT>(value); }
    template<typename FlowExecutionSummariesT = Aws::Vector<FlowExecutionSummary>>
    ListFlowExecutionsResult& WithFlowExecutionSummaries(FlowExecutionSummariesT&& value) { SetFlowExecutionSummaries(std::forward<FlowExecutionSummariesT>(value)); return *this;}
    template<typename FlowExecutionSummariesT = FlowExecutionSummary>
    ListFlowExecutionsResult& AddFlowExecutionSummaries(FlowExecutionSummariesT&& value) { m_flowExecutionSummariesHasBeenSet = true; m_flowExecutionSummaries.emplace_back(std::forward<FlowExecutionSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to retrieve the next set of results. This value is returned if more
     * results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFlowExecutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFlowExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FlowExecutionSummary> m_flowExecutionSummaries;
    bool m_flowExecutionSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
