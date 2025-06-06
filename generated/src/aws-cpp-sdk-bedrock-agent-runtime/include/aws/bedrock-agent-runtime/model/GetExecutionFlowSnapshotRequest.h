/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   */
  class GetExecutionFlowSnapshotRequest : public BedrockAgentRuntimeRequest
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GetExecutionFlowSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetExecutionFlowSnapshot"; }

    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the flow execution.</p>
     */
    inline const Aws::String& GetExecutionIdentifier() const { return m_executionIdentifier; }
    inline bool ExecutionIdentifierHasBeenSet() const { return m_executionIdentifierHasBeenSet; }
    template<typename ExecutionIdentifierT = Aws::String>
    void SetExecutionIdentifier(ExecutionIdentifierT&& value) { m_executionIdentifierHasBeenSet = true; m_executionIdentifier = std::forward<ExecutionIdentifierT>(value); }
    template<typename ExecutionIdentifierT = Aws::String>
    GetExecutionFlowSnapshotRequest& WithExecutionIdentifier(ExecutionIdentifierT&& value) { SetExecutionIdentifier(std::forward<ExecutionIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the flow alias used for the flow execution.</p>
     */
    inline const Aws::String& GetFlowAliasIdentifier() const { return m_flowAliasIdentifier; }
    inline bool FlowAliasIdentifierHasBeenSet() const { return m_flowAliasIdentifierHasBeenSet; }
    template<typename FlowAliasIdentifierT = Aws::String>
    void SetFlowAliasIdentifier(FlowAliasIdentifierT&& value) { m_flowAliasIdentifierHasBeenSet = true; m_flowAliasIdentifier = std::forward<FlowAliasIdentifierT>(value); }
    template<typename FlowAliasIdentifierT = Aws::String>
    GetExecutionFlowSnapshotRequest& WithFlowAliasIdentifier(FlowAliasIdentifierT&& value) { SetFlowAliasIdentifier(std::forward<FlowAliasIdentifierT>(value)); return *this;}
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
    GetExecutionFlowSnapshotRequest& WithFlowIdentifier(FlowIdentifierT&& value) { SetFlowIdentifier(std::forward<FlowIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionIdentifier;
    bool m_executionIdentifierHasBeenSet = false;

    Aws::String m_flowAliasIdentifier;
    bool m_flowAliasIdentifierHasBeenSet = false;

    Aws::String m_flowIdentifier;
    bool m_flowIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
