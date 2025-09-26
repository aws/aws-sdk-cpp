/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
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
  class StartFlowExecutionRequest : public BedrockAgentRuntimeRequest
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API StartFlowExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartFlowExecution"; }

    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the flow to execute.</p>
     */
    inline const Aws::String& GetFlowIdentifier() const { return m_flowIdentifier; }
    inline bool FlowIdentifierHasBeenSet() const { return m_flowIdentifierHasBeenSet; }
    template<typename FlowIdentifierT = Aws::String>
    void SetFlowIdentifier(FlowIdentifierT&& value) { m_flowIdentifierHasBeenSet = true; m_flowIdentifier = std::forward<FlowIdentifierT>(value); }
    template<typename FlowIdentifierT = Aws::String>
    StartFlowExecutionRequest& WithFlowIdentifier(FlowIdentifierT&& value) { SetFlowIdentifier(std::forward<FlowIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the flow alias to use for the flow execution.</p>
     */
    inline const Aws::String& GetFlowAliasIdentifier() const { return m_flowAliasIdentifier; }
    inline bool FlowAliasIdentifierHasBeenSet() const { return m_flowAliasIdentifierHasBeenSet; }
    template<typename FlowAliasIdentifierT = Aws::String>
    void SetFlowAliasIdentifier(FlowAliasIdentifierT&& value) { m_flowAliasIdentifierHasBeenSet = true; m_flowAliasIdentifier = std::forward<FlowAliasIdentifierT>(value); }
    template<typename FlowAliasIdentifierT = Aws::String>
    StartFlowExecutionRequest& WithFlowAliasIdentifier(FlowAliasIdentifierT&& value) { SetFlowAliasIdentifier(std::forward<FlowAliasIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name for the flow execution. If you don't provide one, a
     * system-generated name is used.</p>
     */
    inline const Aws::String& GetFlowExecutionName() const { return m_flowExecutionName; }
    inline bool FlowExecutionNameHasBeenSet() const { return m_flowExecutionNameHasBeenSet; }
    template<typename FlowExecutionNameT = Aws::String>
    void SetFlowExecutionName(FlowExecutionNameT&& value) { m_flowExecutionNameHasBeenSet = true; m_flowExecutionName = std::forward<FlowExecutionNameT>(value); }
    template<typename FlowExecutionNameT = Aws::String>
    StartFlowExecutionRequest& WithFlowExecutionName(FlowExecutionNameT&& value) { SetFlowExecutionName(std::forward<FlowExecutionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input data required for the flow execution. This must match the input
     * schema defined in the flow.</p>
     */
    inline const Aws::Vector<FlowInput>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<FlowInput>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<FlowInput>>
    StartFlowExecutionRequest& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = FlowInput>
    StartFlowExecutionRequest& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The performance settings for the foundation model used in the flow
     * execution.</p>
     */
    inline const ModelPerformanceConfiguration& GetModelPerformanceConfiguration() const { return m_modelPerformanceConfiguration; }
    inline bool ModelPerformanceConfigurationHasBeenSet() const { return m_modelPerformanceConfigurationHasBeenSet; }
    template<typename ModelPerformanceConfigurationT = ModelPerformanceConfiguration>
    void SetModelPerformanceConfiguration(ModelPerformanceConfigurationT&& value) { m_modelPerformanceConfigurationHasBeenSet = true; m_modelPerformanceConfiguration = std::forward<ModelPerformanceConfigurationT>(value); }
    template<typename ModelPerformanceConfigurationT = ModelPerformanceConfiguration>
    StartFlowExecutionRequest& WithModelPerformanceConfiguration(ModelPerformanceConfigurationT&& value) { SetModelPerformanceConfiguration(std::forward<ModelPerformanceConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowIdentifier;
    bool m_flowIdentifierHasBeenSet = false;

    Aws::String m_flowAliasIdentifier;
    bool m_flowAliasIdentifierHasBeenSet = false;

    Aws::String m_flowExecutionName;
    bool m_flowExecutionNameHasBeenSet = false;

    Aws::Vector<FlowInput> m_inputs;
    bool m_inputsHasBeenSet = false;

    ModelPerformanceConfiguration m_modelPerformanceConfiguration;
    bool m_modelPerformanceConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
