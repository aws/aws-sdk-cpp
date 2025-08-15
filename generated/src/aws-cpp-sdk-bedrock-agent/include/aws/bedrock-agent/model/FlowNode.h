/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/FlowNodeType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/FlowNodeInput.h>
#include <aws/bedrock-agent/model/FlowNodeOutput.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgent
{
namespace Model
{
  class FlowNodeConfiguration;

  /**
   * <p>Contains configurations about a node in the flow.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/FlowNode">AWS
   * API Reference</a></p>
   */
  class FlowNode
  {
  public:
    AWS_BEDROCKAGENT_API FlowNode() = default;
    AWS_BEDROCKAGENT_API FlowNode(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FlowNode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A name for the node.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    FlowNode& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of node. This value must match the name of the key that you provide
     * in the configuration you provide in the <code>FlowNodeConfiguration</code>
     * field.</p>
     */
    inline FlowNodeType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FlowNodeType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FlowNode& WithType(FlowNodeType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for the node.</p>
     */
    inline const FlowNodeConfiguration& GetConfiguration() const{
      return *m_configuration;
    }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = FlowNodeConfiguration>
    void SetConfiguration(ConfigurationT&& value) {
      m_configurationHasBeenSet = true; 
      m_configuration = Aws::MakeShared<FlowNodeConfiguration>("FlowNode", std::forward<ConfigurationT>(value));
    }
    template<typename ConfigurationT = FlowNodeConfiguration>
    FlowNode& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects, each of which contains information about an input into
     * the node.</p>
     */
    inline const Aws::Vector<FlowNodeInput>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<FlowNodeInput>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<FlowNodeInput>>
    FlowNode& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = FlowNodeInput>
    FlowNode& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of objects, each of which contains information about an output from
     * the node.</p>
     */
    inline const Aws::Vector<FlowNodeOutput>& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::Vector<FlowNodeOutput>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Vector<FlowNodeOutput>>
    FlowNode& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = FlowNodeOutput>
    FlowNode& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FlowNodeType m_type{FlowNodeType::NOT_SET};
    bool m_typeHasBeenSet = false;

    std::shared_ptr<FlowNodeConfiguration> m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Vector<FlowNodeInput> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::Vector<FlowNodeOutput> m_outputs;
    bool m_outputsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
