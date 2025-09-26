/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/bedrock-agent-runtime/model/InvokeFlowHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/ModelPerformanceConfiguration.h>
#include <aws/bedrock-agent-runtime/model/FlowInput.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   */
  class InvokeFlowRequest : public BedrockAgentRuntimeRequest
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API InvokeFlowRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeFlow"; }

    inline virtual bool HasEventStreamResponse() const override { return true; }
    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;

    /**
     * Underlying Event Stream Decoder.
     */
    inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline InvokeFlowHandler& GetEventStreamHandler() { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const InvokeFlowHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline InvokeFlowRequest& WithEventStreamHandler(const InvokeFlowHandler& value) { SetEventStreamHandler(value); return *this; }


    ///@{
    /**
     * <p>The unique identifier of the flow.</p>
     */
    inline const Aws::String& GetFlowIdentifier() const { return m_flowIdentifier; }
    inline bool FlowIdentifierHasBeenSet() const { return m_flowIdentifierHasBeenSet; }
    template<typename FlowIdentifierT = Aws::String>
    void SetFlowIdentifier(FlowIdentifierT&& value) { m_flowIdentifierHasBeenSet = true; m_flowIdentifier = std::forward<FlowIdentifierT>(value); }
    template<typename FlowIdentifierT = Aws::String>
    InvokeFlowRequest& WithFlowIdentifier(FlowIdentifierT&& value) { SetFlowIdentifier(std::forward<FlowIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the flow alias.</p>
     */
    inline const Aws::String& GetFlowAliasIdentifier() const { return m_flowAliasIdentifier; }
    inline bool FlowAliasIdentifierHasBeenSet() const { return m_flowAliasIdentifierHasBeenSet; }
    template<typename FlowAliasIdentifierT = Aws::String>
    void SetFlowAliasIdentifier(FlowAliasIdentifierT&& value) { m_flowAliasIdentifierHasBeenSet = true; m_flowAliasIdentifier = std::forward<FlowAliasIdentifierT>(value); }
    template<typename FlowAliasIdentifierT = Aws::String>
    InvokeFlowRequest& WithFlowAliasIdentifier(FlowAliasIdentifierT&& value) { SetFlowAliasIdentifier(std::forward<FlowAliasIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects, each containing information about an input into the
     * flow.</p>
     */
    inline const Aws::Vector<FlowInput>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<FlowInput>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<FlowInput>>
    InvokeFlowRequest& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = FlowInput>
    InvokeFlowRequest& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether to return the trace for the flow or not. Traces track
     * inputs and outputs for nodes in the flow. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-trace.html">Track
     * each step in your prompt flow by viewing its trace in Amazon Bedrock</a>.</p>
     */
    inline bool GetEnableTrace() const { return m_enableTrace; }
    inline bool EnableTraceHasBeenSet() const { return m_enableTraceHasBeenSet; }
    inline void SetEnableTrace(bool value) { m_enableTraceHasBeenSet = true; m_enableTrace = value; }
    inline InvokeFlowRequest& WithEnableTrace(bool value) { SetEnableTrace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Model performance settings for the request.</p>
     */
    inline const ModelPerformanceConfiguration& GetModelPerformanceConfiguration() const { return m_modelPerformanceConfiguration; }
    inline bool ModelPerformanceConfigurationHasBeenSet() const { return m_modelPerformanceConfigurationHasBeenSet; }
    template<typename ModelPerformanceConfigurationT = ModelPerformanceConfiguration>
    void SetModelPerformanceConfiguration(ModelPerformanceConfigurationT&& value) { m_modelPerformanceConfigurationHasBeenSet = true; m_modelPerformanceConfiguration = std::forward<ModelPerformanceConfigurationT>(value); }
    template<typename ModelPerformanceConfigurationT = ModelPerformanceConfiguration>
    InvokeFlowRequest& WithModelPerformanceConfiguration(ModelPerformanceConfigurationT&& value) { SetModelPerformanceConfiguration(std::forward<ModelPerformanceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the current flow execution. If you don't provide a
     * value, Amazon Bedrock creates the identifier for you. </p>
     */
    inline const Aws::String& GetExecutionId() const { return m_executionId; }
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
    template<typename ExecutionIdT = Aws::String>
    void SetExecutionId(ExecutionIdT&& value) { m_executionIdHasBeenSet = true; m_executionId = std::forward<ExecutionIdT>(value); }
    template<typename ExecutionIdT = Aws::String>
    InvokeFlowRequest& WithExecutionId(ExecutionIdT&& value) { SetExecutionId(std::forward<ExecutionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowIdentifier;
    bool m_flowIdentifierHasBeenSet = false;

    Aws::String m_flowAliasIdentifier;
    bool m_flowAliasIdentifierHasBeenSet = false;

    Aws::Vector<FlowInput> m_inputs;
    bool m_inputsHasBeenSet = false;

    bool m_enableTrace{false};
    bool m_enableTraceHasBeenSet = false;

    ModelPerformanceConfiguration m_modelPerformanceConfiguration;
    bool m_modelPerformanceConfigurationHasBeenSet = false;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;
    InvokeFlowHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};

  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
