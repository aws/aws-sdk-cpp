/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/FlowExecutionEvent.h>
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
  class ListFlowExecutionEventsResult
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ListFlowExecutionEventsResult() = default;
    AWS_BEDROCKAGENTRUNTIME_API ListFlowExecutionEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API ListFlowExecutionEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of events that occurred during the flow execution. Events can include
     * node inputs and outputs, flow inputs and outputs, condition results, and failure
     * events.</p>
     */
    inline const Aws::Vector<FlowExecutionEvent>& GetFlowExecutionEvents() const { return m_flowExecutionEvents; }
    template<typename FlowExecutionEventsT = Aws::Vector<FlowExecutionEvent>>
    void SetFlowExecutionEvents(FlowExecutionEventsT&& value) { m_flowExecutionEventsHasBeenSet = true; m_flowExecutionEvents = std::forward<FlowExecutionEventsT>(value); }
    template<typename FlowExecutionEventsT = Aws::Vector<FlowExecutionEvent>>
    ListFlowExecutionEventsResult& WithFlowExecutionEvents(FlowExecutionEventsT&& value) { SetFlowExecutionEvents(std::forward<FlowExecutionEventsT>(value)); return *this;}
    template<typename FlowExecutionEventsT = FlowExecutionEvent>
    ListFlowExecutionEventsResult& AddFlowExecutionEvents(FlowExecutionEventsT&& value) { m_flowExecutionEventsHasBeenSet = true; m_flowExecutionEvents.emplace_back(std::forward<FlowExecutionEventsT>(value)); return *this; }
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
    ListFlowExecutionEventsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFlowExecutionEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FlowExecutionEvent> m_flowExecutionEvents;
    bool m_flowExecutionEventsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
