/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/FlowNodeConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/FlowNodeType.h>
#include <aws/bedrock-agent/model/FlowNodeInput.h>
#include <aws/bedrock-agent/model/FlowNodeOutput.h>
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

  /**
   * <p>Contains configurations about a node in the flow.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/FlowNode">AWS
   * API Reference</a></p>
   */
  class FlowNode
  {
  public:
    AWS_BEDROCKAGENT_API FlowNode();
    AWS_BEDROCKAGENT_API FlowNode(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FlowNode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains configurations for the node.</p>
     */
    inline const FlowNodeConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const FlowNodeConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(FlowNodeConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline FlowNode& WithConfiguration(const FlowNodeConfiguration& value) { SetConfiguration(value); return *this;}
    inline FlowNode& WithConfiguration(FlowNodeConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects, each of which contains information about an input into
     * the node.</p>
     */
    inline const Aws::Vector<FlowNodeInput>& GetInputs() const{ return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    inline void SetInputs(const Aws::Vector<FlowNodeInput>& value) { m_inputsHasBeenSet = true; m_inputs = value; }
    inline void SetInputs(Aws::Vector<FlowNodeInput>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }
    inline FlowNode& WithInputs(const Aws::Vector<FlowNodeInput>& value) { SetInputs(value); return *this;}
    inline FlowNode& WithInputs(Aws::Vector<FlowNodeInput>&& value) { SetInputs(std::move(value)); return *this;}
    inline FlowNode& AddInputs(const FlowNodeInput& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    inline FlowNode& AddInputs(FlowNodeInput&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A name for the node.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FlowNode& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FlowNode& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FlowNode& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects, each of which contains information about an output from
     * the node.</p>
     */
    inline const Aws::Vector<FlowNodeOutput>& GetOutputs() const{ return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    inline void SetOutputs(const Aws::Vector<FlowNodeOutput>& value) { m_outputsHasBeenSet = true; m_outputs = value; }
    inline void SetOutputs(Aws::Vector<FlowNodeOutput>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }
    inline FlowNode& WithOutputs(const Aws::Vector<FlowNodeOutput>& value) { SetOutputs(value); return *this;}
    inline FlowNode& WithOutputs(Aws::Vector<FlowNodeOutput>&& value) { SetOutputs(std::move(value)); return *this;}
    inline FlowNode& AddOutputs(const FlowNodeOutput& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }
    inline FlowNode& AddOutputs(FlowNodeOutput&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of node. This value must match the name of the key that you provide
     * in the configuration you provide in the <code>FlowNodeConfiguration</code>
     * field.</p>
     */
    inline const FlowNodeType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const FlowNodeType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(FlowNodeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline FlowNode& WithType(const FlowNodeType& value) { SetType(value); return *this;}
    inline FlowNode& WithType(FlowNodeType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    FlowNodeConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Vector<FlowNodeInput> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<FlowNodeOutput> m_outputs;
    bool m_outputsHasBeenSet = false;

    FlowNodeType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
