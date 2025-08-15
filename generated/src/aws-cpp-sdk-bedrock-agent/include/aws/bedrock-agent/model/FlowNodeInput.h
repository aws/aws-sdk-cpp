/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/FlowNodeIODataType.h>
#include <aws/bedrock-agent/model/FlowNodeInputCategory.h>
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
   * <p>Contains configurations for an input in an Amazon Bedrock Flows
   * node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/FlowNodeInput">AWS
   * API Reference</a></p>
   */
  class FlowNodeInput
  {
  public:
    AWS_BEDROCKAGENT_API FlowNodeInput() = default;
    AWS_BEDROCKAGENT_API FlowNodeInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FlowNodeInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies a name for the input that you can reference.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    FlowNodeInput& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the data type of the input. If the input doesn't match this type at
     * runtime, a validation error will be thrown.</p>
     */
    inline FlowNodeIODataType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FlowNodeIODataType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FlowNodeInput& WithType(FlowNodeIODataType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An expression that formats the input for the node. For an explanation of how
     * to create expressions, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-expressions.html">Expressions
     * in Prompt flows in Amazon Bedrock</a>.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    FlowNodeInput& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how input data flows between iterations in a DoWhile loop.</p> <ul>
     * <li> <p> <code>LoopCondition</code> - Controls whether the loop continues by
     * evaluating condition expressions against the input data. Use this category to
     * define the condition that determines if the loop should continue. </p> </li>
     * <li> <p> <code>ReturnValueToLoopStart</code> - Defines data to pass back to the
     * start of the loop's next iteration. Use this category for variables that you
     * want to update for each loop iteration.</p> </li> <li> <p> <code>ExitLoop</code>
     * - Defines the value that's available once the loop ends. Use this category to
     * expose loop results to nodes outside the loop.</p> </li> </ul>
     */
    inline FlowNodeInputCategory GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(FlowNodeInputCategory value) { m_categoryHasBeenSet = true; m_category = value; }
    inline FlowNodeInput& WithCategory(FlowNodeInputCategory value) { SetCategory(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FlowNodeIODataType m_type{FlowNodeIODataType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    FlowNodeInputCategory m_category{FlowNodeInputCategory::NOT_SET};
    bool m_categoryHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
