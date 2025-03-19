/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Contains <code>SageMakerFlowDefinition</code> object. The object is used to
   * specify the prompt dataset, task type, rating method and metric
   * names.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/HumanWorkflowConfig">AWS
   * API Reference</a></p>
   */
  class HumanWorkflowConfig
  {
  public:
    AWS_BEDROCK_API HumanWorkflowConfig() = default;
    AWS_BEDROCK_API HumanWorkflowConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API HumanWorkflowConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) for the flow definition</p>
     */
    inline const Aws::String& GetFlowDefinitionArn() const { return m_flowDefinitionArn; }
    inline bool FlowDefinitionArnHasBeenSet() const { return m_flowDefinitionArnHasBeenSet; }
    template<typename FlowDefinitionArnT = Aws::String>
    void SetFlowDefinitionArn(FlowDefinitionArnT&& value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn = std::forward<FlowDefinitionArnT>(value); }
    template<typename FlowDefinitionArnT = Aws::String>
    HumanWorkflowConfig& WithFlowDefinitionArn(FlowDefinitionArnT&& value) { SetFlowDefinitionArn(std::forward<FlowDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Instructions for the flow definition</p>
     */
    inline const Aws::String& GetInstructions() const { return m_instructions; }
    inline bool InstructionsHasBeenSet() const { return m_instructionsHasBeenSet; }
    template<typename InstructionsT = Aws::String>
    void SetInstructions(InstructionsT&& value) { m_instructionsHasBeenSet = true; m_instructions = std::forward<InstructionsT>(value); }
    template<typename InstructionsT = Aws::String>
    HumanWorkflowConfig& WithInstructions(InstructionsT&& value) { SetInstructions(std::forward<InstructionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowDefinitionArn;
    bool m_flowDefinitionArnHasBeenSet = false;

    Aws::String m_instructions;
    bool m_instructionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
