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
    AWS_BEDROCKAGENTRUNTIME_API InvokeFlowRequest();

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
    inline const InvokeFlowHandler& GetEventStreamHandler() const { return m_handler; }

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
     * <p>Specifies whether to return the trace for the flow or not. Traces track
     * inputs and outputs for nodes in the flow. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-trace.html">Track
     * each step in your prompt flow by viewing its trace in Amazon Bedrock</a>.</p>
     */
    inline bool GetEnableTrace() const{ return m_enableTrace; }
    inline bool EnableTraceHasBeenSet() const { return m_enableTraceHasBeenSet; }
    inline void SetEnableTrace(bool value) { m_enableTraceHasBeenSet = true; m_enableTrace = value; }
    inline InvokeFlowRequest& WithEnableTrace(bool value) { SetEnableTrace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the flow alias.</p>
     */
    inline const Aws::String& GetFlowAliasIdentifier() const{ return m_flowAliasIdentifier; }
    inline bool FlowAliasIdentifierHasBeenSet() const { return m_flowAliasIdentifierHasBeenSet; }
    inline void SetFlowAliasIdentifier(const Aws::String& value) { m_flowAliasIdentifierHasBeenSet = true; m_flowAliasIdentifier = value; }
    inline void SetFlowAliasIdentifier(Aws::String&& value) { m_flowAliasIdentifierHasBeenSet = true; m_flowAliasIdentifier = std::move(value); }
    inline void SetFlowAliasIdentifier(const char* value) { m_flowAliasIdentifierHasBeenSet = true; m_flowAliasIdentifier.assign(value); }
    inline InvokeFlowRequest& WithFlowAliasIdentifier(const Aws::String& value) { SetFlowAliasIdentifier(value); return *this;}
    inline InvokeFlowRequest& WithFlowAliasIdentifier(Aws::String&& value) { SetFlowAliasIdentifier(std::move(value)); return *this;}
    inline InvokeFlowRequest& WithFlowAliasIdentifier(const char* value) { SetFlowAliasIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the flow.</p>
     */
    inline const Aws::String& GetFlowIdentifier() const{ return m_flowIdentifier; }
    inline bool FlowIdentifierHasBeenSet() const { return m_flowIdentifierHasBeenSet; }
    inline void SetFlowIdentifier(const Aws::String& value) { m_flowIdentifierHasBeenSet = true; m_flowIdentifier = value; }
    inline void SetFlowIdentifier(Aws::String&& value) { m_flowIdentifierHasBeenSet = true; m_flowIdentifier = std::move(value); }
    inline void SetFlowIdentifier(const char* value) { m_flowIdentifierHasBeenSet = true; m_flowIdentifier.assign(value); }
    inline InvokeFlowRequest& WithFlowIdentifier(const Aws::String& value) { SetFlowIdentifier(value); return *this;}
    inline InvokeFlowRequest& WithFlowIdentifier(Aws::String&& value) { SetFlowIdentifier(std::move(value)); return *this;}
    inline InvokeFlowRequest& WithFlowIdentifier(const char* value) { SetFlowIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects, each containing information about an input into the
     * flow.</p>
     */
    inline const Aws::Vector<FlowInput>& GetInputs() const{ return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    inline void SetInputs(const Aws::Vector<FlowInput>& value) { m_inputsHasBeenSet = true; m_inputs = value; }
    inline void SetInputs(Aws::Vector<FlowInput>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }
    inline InvokeFlowRequest& WithInputs(const Aws::Vector<FlowInput>& value) { SetInputs(value); return *this;}
    inline InvokeFlowRequest& WithInputs(Aws::Vector<FlowInput>&& value) { SetInputs(std::move(value)); return *this;}
    inline InvokeFlowRequest& AddInputs(const FlowInput& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    inline InvokeFlowRequest& AddInputs(FlowInput&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Model performance settings for the request.</p>
     */
    inline const ModelPerformanceConfiguration& GetModelPerformanceConfiguration() const{ return m_modelPerformanceConfiguration; }
    inline bool ModelPerformanceConfigurationHasBeenSet() const { return m_modelPerformanceConfigurationHasBeenSet; }
    inline void SetModelPerformanceConfiguration(const ModelPerformanceConfiguration& value) { m_modelPerformanceConfigurationHasBeenSet = true; m_modelPerformanceConfiguration = value; }
    inline void SetModelPerformanceConfiguration(ModelPerformanceConfiguration&& value) { m_modelPerformanceConfigurationHasBeenSet = true; m_modelPerformanceConfiguration = std::move(value); }
    inline InvokeFlowRequest& WithModelPerformanceConfiguration(const ModelPerformanceConfiguration& value) { SetModelPerformanceConfiguration(value); return *this;}
    inline InvokeFlowRequest& WithModelPerformanceConfiguration(ModelPerformanceConfiguration&& value) { SetModelPerformanceConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    bool m_enableTrace;
    bool m_enableTraceHasBeenSet = false;

    Aws::String m_flowAliasIdentifier;
    bool m_flowAliasIdentifierHasBeenSet = false;

    Aws::String m_flowIdentifier;
    bool m_flowIdentifierHasBeenSet = false;

    Aws::Vector<FlowInput> m_inputs;
    bool m_inputsHasBeenSet = false;

    ModelPerformanceConfiguration m_modelPerformanceConfiguration;
    bool m_modelPerformanceConfigurationHasBeenSet = false;
    InvokeFlowHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder;

  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
