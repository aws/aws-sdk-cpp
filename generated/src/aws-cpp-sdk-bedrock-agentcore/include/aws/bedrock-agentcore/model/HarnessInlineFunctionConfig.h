/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Configuration for an inline function tool. When the agent calls this tool,
 * the tool call is returned to the caller for external execution.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessInlineFunctionConfig">AWS
 * API Reference</a></p>
 */
class HarnessInlineFunctionConfig {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessInlineFunctionConfig() = default;
  AWS_BEDROCKAGENTCORE_API HarnessInlineFunctionConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessInlineFunctionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Description of what the tool does, provided to the model.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  HarnessInlineFunctionConfig& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>JSON Schema describing the tool's input parameters.</p>
   */
  inline Aws::Utils::DocumentView GetInputSchema() const { return m_inputSchema; }
  inline bool InputSchemaHasBeenSet() const { return m_inputSchemaHasBeenSet; }
  template <typename InputSchemaT = Aws::Utils::Document>
  void SetInputSchema(InputSchemaT&& value) {
    m_inputSchemaHasBeenSet = true;
    m_inputSchema = std::forward<InputSchemaT>(value);
  }
  template <typename InputSchemaT = Aws::Utils::Document>
  HarnessInlineFunctionConfig& WithInputSchema(InputSchemaT&& value) {
    SetInputSchema(std::forward<InputSchemaT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_description;

  Aws::Utils::Document m_inputSchema;
  bool m_descriptionHasBeenSet = false;
  bool m_inputSchemaHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
