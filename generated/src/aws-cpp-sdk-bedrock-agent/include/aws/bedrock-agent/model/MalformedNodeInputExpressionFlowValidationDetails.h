/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Details about a malformed input expression in a node.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/MalformedNodeInputExpressionFlowValidationDetails">AWS
   * API Reference</a></p>
   */
  class MalformedNodeInputExpressionFlowValidationDetails
  {
  public:
    AWS_BEDROCKAGENT_API MalformedNodeInputExpressionFlowValidationDetails();
    AWS_BEDROCKAGENT_API MalformedNodeInputExpressionFlowValidationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API MalformedNodeInputExpressionFlowValidationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error message describing why the input expression is malformed.</p>
     */
    inline const Aws::String& GetCause() const{ return m_cause; }
    inline bool CauseHasBeenSet() const { return m_causeHasBeenSet; }
    inline void SetCause(const Aws::String& value) { m_causeHasBeenSet = true; m_cause = value; }
    inline void SetCause(Aws::String&& value) { m_causeHasBeenSet = true; m_cause = std::move(value); }
    inline void SetCause(const char* value) { m_causeHasBeenSet = true; m_cause.assign(value); }
    inline MalformedNodeInputExpressionFlowValidationDetails& WithCause(const Aws::String& value) { SetCause(value); return *this;}
    inline MalformedNodeInputExpressionFlowValidationDetails& WithCause(Aws::String&& value) { SetCause(std::move(value)); return *this;}
    inline MalformedNodeInputExpressionFlowValidationDetails& WithCause(const char* value) { SetCause(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the input with the malformed expression.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }
    inline MalformedNodeInputExpressionFlowValidationDetails& WithInput(const Aws::String& value) { SetInput(value); return *this;}
    inline MalformedNodeInputExpressionFlowValidationDetails& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}
    inline MalformedNodeInputExpressionFlowValidationDetails& WithInput(const char* value) { SetInput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the node containing the malformed input expression.</p>
     */
    inline const Aws::String& GetNode() const{ return m_node; }
    inline bool NodeHasBeenSet() const { return m_nodeHasBeenSet; }
    inline void SetNode(const Aws::String& value) { m_nodeHasBeenSet = true; m_node = value; }
    inline void SetNode(Aws::String&& value) { m_nodeHasBeenSet = true; m_node = std::move(value); }
    inline void SetNode(const char* value) { m_nodeHasBeenSet = true; m_node.assign(value); }
    inline MalformedNodeInputExpressionFlowValidationDetails& WithNode(const Aws::String& value) { SetNode(value); return *this;}
    inline MalformedNodeInputExpressionFlowValidationDetails& WithNode(Aws::String&& value) { SetNode(std::move(value)); return *this;}
    inline MalformedNodeInputExpressionFlowValidationDetails& WithNode(const char* value) { SetNode(value); return *this;}
    ///@}
  private:

    Aws::String m_cause;
    bool m_causeHasBeenSet = false;

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    Aws::String m_node;
    bool m_nodeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
