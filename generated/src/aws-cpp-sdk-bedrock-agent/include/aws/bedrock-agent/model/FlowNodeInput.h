/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/FlowNodeIODataType.h>
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
   * <p>Contains configurations for an input to a node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/FlowNodeInput">AWS
   * API Reference</a></p>
   */
  class FlowNodeInput
  {
  public:
    AWS_BEDROCKAGENT_API FlowNodeInput();
    AWS_BEDROCKAGENT_API FlowNodeInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FlowNodeInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An expression that formats the input for the node. For an explanation of how
     * to create expressions, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-expressions.html">Expressions
     * in Prompt flows in Amazon Bedrock</a>.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }
    inline FlowNodeInput& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}
    inline FlowNodeInput& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}
    inline FlowNodeInput& WithExpression(const char* value) { SetExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the input that you can reference.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FlowNodeInput& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FlowNodeInput& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FlowNodeInput& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the input. If the input doesn't match this type at runtime,
     * a validation error will be thrown.</p>
     */
    inline const FlowNodeIODataType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const FlowNodeIODataType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(FlowNodeIODataType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline FlowNodeInput& WithType(const FlowNodeIODataType& value) { SetType(value); return *this;}
    inline FlowNodeInput& WithType(FlowNodeIODataType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FlowNodeIODataType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
