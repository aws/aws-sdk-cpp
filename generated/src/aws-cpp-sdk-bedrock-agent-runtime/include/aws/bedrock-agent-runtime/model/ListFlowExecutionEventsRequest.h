/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/bedrock-agent-runtime/model/FlowExecutionEventType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   */
  class ListFlowExecutionEventsRequest : public BedrockAgentRuntimeRequest
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ListFlowExecutionEventsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFlowExecutionEvents"; }

    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;

    AWS_BEDROCKAGENTRUNTIME_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The type of events to retrieve. Specify <code>Node</code> for node-level
     * events or <code>Flow</code> for flow-level events.</p>
     */
    inline FlowExecutionEventType GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(FlowExecutionEventType value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline ListFlowExecutionEventsRequest& WithEventType(FlowExecutionEventType value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the flow execution.</p>
     */
    inline const Aws::String& GetExecutionIdentifier() const { return m_executionIdentifier; }
    inline bool ExecutionIdentifierHasBeenSet() const { return m_executionIdentifierHasBeenSet; }
    template<typename ExecutionIdentifierT = Aws::String>
    void SetExecutionIdentifier(ExecutionIdentifierT&& value) { m_executionIdentifierHasBeenSet = true; m_executionIdentifier = std::forward<ExecutionIdentifierT>(value); }
    template<typename ExecutionIdentifierT = Aws::String>
    ListFlowExecutionEventsRequest& WithExecutionIdentifier(ExecutionIdentifierT&& value) { SetExecutionIdentifier(std::forward<ExecutionIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the flow alias used for the execution.</p>
     */
    inline const Aws::String& GetFlowAliasIdentifier() const { return m_flowAliasIdentifier; }
    inline bool FlowAliasIdentifierHasBeenSet() const { return m_flowAliasIdentifierHasBeenSet; }
    template<typename FlowAliasIdentifierT = Aws::String>
    void SetFlowAliasIdentifier(FlowAliasIdentifierT&& value) { m_flowAliasIdentifierHasBeenSet = true; m_flowAliasIdentifier = std::forward<FlowAliasIdentifierT>(value); }
    template<typename FlowAliasIdentifierT = Aws::String>
    ListFlowExecutionEventsRequest& WithFlowAliasIdentifier(FlowAliasIdentifierT&& value) { SetFlowAliasIdentifier(std::forward<FlowAliasIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the flow.</p>
     */
    inline const Aws::String& GetFlowIdentifier() const { return m_flowIdentifier; }
    inline bool FlowIdentifierHasBeenSet() const { return m_flowIdentifierHasBeenSet; }
    template<typename FlowIdentifierT = Aws::String>
    void SetFlowIdentifier(FlowIdentifierT&& value) { m_flowIdentifierHasBeenSet = true; m_flowIdentifier = std::forward<FlowIdentifierT>(value); }
    template<typename FlowIdentifierT = Aws::String>
    ListFlowExecutionEventsRequest& WithFlowIdentifier(FlowIdentifierT&& value) { SetFlowIdentifier(std::forward<FlowIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of events to return in a single response. If more events
     * exist than the specified maxResults value, a token is included in the response
     * so that the remaining results can be retrieved.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListFlowExecutionEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token to retrieve the next set of results. This value is returned in the
     * response if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFlowExecutionEventsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    FlowExecutionEventType m_eventType{FlowExecutionEventType::NOT_SET};
    bool m_eventTypeHasBeenSet = false;

    Aws::String m_executionIdentifier;
    bool m_executionIdentifierHasBeenSet = false;

    Aws::String m_flowAliasIdentifier;
    bool m_flowAliasIdentifierHasBeenSet = false;

    Aws::String m_flowIdentifier;
    bool m_flowIdentifierHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
