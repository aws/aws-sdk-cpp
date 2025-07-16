/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/SchemaDefinition.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>A tool definition for a gateway target. This structure defines a tool that
   * the target exposes through the Model Context Protocol.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ToolDefinition">AWS
   * API Reference</a></p>
   */
  class ToolDefinition
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API ToolDefinition() = default;
    AWS_BEDROCKAGENTCORECONTROL_API ToolDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API ToolDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the tool. This name identifies the tool in the Model Context
     * Protocol.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ToolDefinition& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the tool. This description provides information about the
     * purpose and usage of the tool.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ToolDefinition& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input schema for the tool. This schema defines the structure of the input
     * that the tool accepts.</p>
     */
    inline const SchemaDefinition& GetInputSchema() const { return m_inputSchema; }
    inline bool InputSchemaHasBeenSet() const { return m_inputSchemaHasBeenSet; }
    template<typename InputSchemaT = SchemaDefinition>
    void SetInputSchema(InputSchemaT&& value) { m_inputSchemaHasBeenSet = true; m_inputSchema = std::forward<InputSchemaT>(value); }
    template<typename InputSchemaT = SchemaDefinition>
    ToolDefinition& WithInputSchema(InputSchemaT&& value) { SetInputSchema(std::forward<InputSchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output schema for the tool. This schema defines the structure of the
     * output that the tool produces.</p>
     */
    inline const SchemaDefinition& GetOutputSchema() const { return m_outputSchema; }
    inline bool OutputSchemaHasBeenSet() const { return m_outputSchemaHasBeenSet; }
    template<typename OutputSchemaT = SchemaDefinition>
    void SetOutputSchema(OutputSchemaT&& value) { m_outputSchemaHasBeenSet = true; m_outputSchema = std::forward<OutputSchemaT>(value); }
    template<typename OutputSchemaT = SchemaDefinition>
    ToolDefinition& WithOutputSchema(OutputSchemaT&& value) { SetOutputSchema(std::forward<OutputSchemaT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SchemaDefinition m_inputSchema;
    bool m_inputSchemaHasBeenSet = false;

    SchemaDefinition m_outputSchema;
    bool m_outputSchemaHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
