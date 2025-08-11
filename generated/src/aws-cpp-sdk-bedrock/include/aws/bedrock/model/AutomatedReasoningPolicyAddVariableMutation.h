/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyDefinitionVariable.h>
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
   * <p>A mutation operation that adds a new variable to the policy definition during
   * the build process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyAddVariableMutation">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyAddVariableMutation
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyAddVariableMutation() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyAddVariableMutation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyAddVariableMutation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The variable definition that specifies the name, type, and description for
     * the new variable being added to the policy.</p>
     */
    inline const AutomatedReasoningPolicyDefinitionVariable& GetVariable() const { return m_variable; }
    inline bool VariableHasBeenSet() const { return m_variableHasBeenSet; }
    template<typename VariableT = AutomatedReasoningPolicyDefinitionVariable>
    void SetVariable(VariableT&& value) { m_variableHasBeenSet = true; m_variable = std::forward<VariableT>(value); }
    template<typename VariableT = AutomatedReasoningPolicyDefinitionVariable>
    AutomatedReasoningPolicyAddVariableMutation& WithVariable(VariableT&& value) { SetVariable(std::forward<VariableT>(value)); return *this;}
    ///@}
  private:

    AutomatedReasoningPolicyDefinitionVariable m_variable;
    bool m_variableHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
