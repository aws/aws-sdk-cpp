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
   * <p>A mutation operation that modifies an existing variable in the policy
   * definition during the build process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyUpdateVariableMutation">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyUpdateVariableMutation
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyUpdateVariableMutation() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyUpdateVariableMutation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyUpdateVariableMutation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The updated variable definition containing the modified name, type, or
     * description for the existing variable.</p>
     */
    inline const AutomatedReasoningPolicyDefinitionVariable& GetVariable() const { return m_variable; }
    inline bool VariableHasBeenSet() const { return m_variableHasBeenSet; }
    template<typename VariableT = AutomatedReasoningPolicyDefinitionVariable>
    void SetVariable(VariableT&& value) { m_variableHasBeenSet = true; m_variable = std::forward<VariableT>(value); }
    template<typename VariableT = AutomatedReasoningPolicyDefinitionVariable>
    AutomatedReasoningPolicyUpdateVariableMutation& WithVariable(VariableT&& value) { SetVariable(std::forward<VariableT>(value)); return *this;}
    ///@}
  private:

    AutomatedReasoningPolicyDefinitionVariable m_variable;
    bool m_variableHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
