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
    AWS_BEDROCK_API HumanWorkflowConfig();
    AWS_BEDROCK_API HumanWorkflowConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API HumanWorkflowConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Number (ARN) for the flow definition</p>
     */
    inline const Aws::String& GetFlowDefinitionArn() const{ return m_flowDefinitionArn; }

    /**
     * <p>The Amazon Resource Number (ARN) for the flow definition</p>
     */
    inline bool FlowDefinitionArnHasBeenSet() const { return m_flowDefinitionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) for the flow definition</p>
     */
    inline void SetFlowDefinitionArn(const Aws::String& value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) for the flow definition</p>
     */
    inline void SetFlowDefinitionArn(Aws::String&& value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) for the flow definition</p>
     */
    inline void SetFlowDefinitionArn(const char* value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) for the flow definition</p>
     */
    inline HumanWorkflowConfig& WithFlowDefinitionArn(const Aws::String& value) { SetFlowDefinitionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) for the flow definition</p>
     */
    inline HumanWorkflowConfig& WithFlowDefinitionArn(Aws::String&& value) { SetFlowDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) for the flow definition</p>
     */
    inline HumanWorkflowConfig& WithFlowDefinitionArn(const char* value) { SetFlowDefinitionArn(value); return *this;}


    /**
     * <p>Instructions for the flow definition</p>
     */
    inline const Aws::String& GetInstructions() const{ return m_instructions; }

    /**
     * <p>Instructions for the flow definition</p>
     */
    inline bool InstructionsHasBeenSet() const { return m_instructionsHasBeenSet; }

    /**
     * <p>Instructions for the flow definition</p>
     */
    inline void SetInstructions(const Aws::String& value) { m_instructionsHasBeenSet = true; m_instructions = value; }

    /**
     * <p>Instructions for the flow definition</p>
     */
    inline void SetInstructions(Aws::String&& value) { m_instructionsHasBeenSet = true; m_instructions = std::move(value); }

    /**
     * <p>Instructions for the flow definition</p>
     */
    inline void SetInstructions(const char* value) { m_instructionsHasBeenSet = true; m_instructions.assign(value); }

    /**
     * <p>Instructions for the flow definition</p>
     */
    inline HumanWorkflowConfig& WithInstructions(const Aws::String& value) { SetInstructions(value); return *this;}

    /**
     * <p>Instructions for the flow definition</p>
     */
    inline HumanWorkflowConfig& WithInstructions(Aws::String&& value) { SetInstructions(std::move(value)); return *this;}

    /**
     * <p>Instructions for the flow definition</p>
     */
    inline HumanWorkflowConfig& WithInstructions(const char* value) { SetInstructions(value); return *this;}

  private:

    Aws::String m_flowDefinitionArn;
    bool m_flowDefinitionArnHasBeenSet = false;

    Aws::String m_instructions;
    bool m_instructionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
