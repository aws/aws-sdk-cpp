/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyAddTypeMutation.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyUpdateTypeMutation.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyDeleteTypeMutation.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyAddVariableMutation.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyUpdateVariableMutation.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyDeleteVariableMutation.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyAddRuleMutation.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyUpdateRuleMutation.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyDeleteRuleMutation.h>
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
   * <p>A container for various mutation operations that can be applied to an
   * Automated Reasoning policy, including adding, updating, and deleting policy
   * elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyMutation">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyMutation
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyMutation() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyMutation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyMutation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A mutation to add a new custom type to the policy.</p>
     */
    inline const AutomatedReasoningPolicyAddTypeMutation& GetAddType() const { return m_addType; }
    inline bool AddTypeHasBeenSet() const { return m_addTypeHasBeenSet; }
    template<typename AddTypeT = AutomatedReasoningPolicyAddTypeMutation>
    void SetAddType(AddTypeT&& value) { m_addTypeHasBeenSet = true; m_addType = std::forward<AddTypeT>(value); }
    template<typename AddTypeT = AutomatedReasoningPolicyAddTypeMutation>
    AutomatedReasoningPolicyMutation& WithAddType(AddTypeT&& value) { SetAddType(std::forward<AddTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A mutation to modify an existing custom type in the policy.</p>
     */
    inline const AutomatedReasoningPolicyUpdateTypeMutation& GetUpdateType() const { return m_updateType; }
    inline bool UpdateTypeHasBeenSet() const { return m_updateTypeHasBeenSet; }
    template<typename UpdateTypeT = AutomatedReasoningPolicyUpdateTypeMutation>
    void SetUpdateType(UpdateTypeT&& value) { m_updateTypeHasBeenSet = true; m_updateType = std::forward<UpdateTypeT>(value); }
    template<typename UpdateTypeT = AutomatedReasoningPolicyUpdateTypeMutation>
    AutomatedReasoningPolicyMutation& WithUpdateType(UpdateTypeT&& value) { SetUpdateType(std::forward<UpdateTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A mutation to remove a custom type from the policy.</p>
     */
    inline const AutomatedReasoningPolicyDeleteTypeMutation& GetDeleteType() const { return m_deleteType; }
    inline bool DeleteTypeHasBeenSet() const { return m_deleteTypeHasBeenSet; }
    template<typename DeleteTypeT = AutomatedReasoningPolicyDeleteTypeMutation>
    void SetDeleteType(DeleteTypeT&& value) { m_deleteTypeHasBeenSet = true; m_deleteType = std::forward<DeleteTypeT>(value); }
    template<typename DeleteTypeT = AutomatedReasoningPolicyDeleteTypeMutation>
    AutomatedReasoningPolicyMutation& WithDeleteType(DeleteTypeT&& value) { SetDeleteType(std::forward<DeleteTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A mutation to add a new variable to the policy.</p>
     */
    inline const AutomatedReasoningPolicyAddVariableMutation& GetAddVariable() const { return m_addVariable; }
    inline bool AddVariableHasBeenSet() const { return m_addVariableHasBeenSet; }
    template<typename AddVariableT = AutomatedReasoningPolicyAddVariableMutation>
    void SetAddVariable(AddVariableT&& value) { m_addVariableHasBeenSet = true; m_addVariable = std::forward<AddVariableT>(value); }
    template<typename AddVariableT = AutomatedReasoningPolicyAddVariableMutation>
    AutomatedReasoningPolicyMutation& WithAddVariable(AddVariableT&& value) { SetAddVariable(std::forward<AddVariableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A mutation to modify an existing variable in the policy.</p>
     */
    inline const AutomatedReasoningPolicyUpdateVariableMutation& GetUpdateVariable() const { return m_updateVariable; }
    inline bool UpdateVariableHasBeenSet() const { return m_updateVariableHasBeenSet; }
    template<typename UpdateVariableT = AutomatedReasoningPolicyUpdateVariableMutation>
    void SetUpdateVariable(UpdateVariableT&& value) { m_updateVariableHasBeenSet = true; m_updateVariable = std::forward<UpdateVariableT>(value); }
    template<typename UpdateVariableT = AutomatedReasoningPolicyUpdateVariableMutation>
    AutomatedReasoningPolicyMutation& WithUpdateVariable(UpdateVariableT&& value) { SetUpdateVariable(std::forward<UpdateVariableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A mutation to remove a variable from the policy.</p>
     */
    inline const AutomatedReasoningPolicyDeleteVariableMutation& GetDeleteVariable() const { return m_deleteVariable; }
    inline bool DeleteVariableHasBeenSet() const { return m_deleteVariableHasBeenSet; }
    template<typename DeleteVariableT = AutomatedReasoningPolicyDeleteVariableMutation>
    void SetDeleteVariable(DeleteVariableT&& value) { m_deleteVariableHasBeenSet = true; m_deleteVariable = std::forward<DeleteVariableT>(value); }
    template<typename DeleteVariableT = AutomatedReasoningPolicyDeleteVariableMutation>
    AutomatedReasoningPolicyMutation& WithDeleteVariable(DeleteVariableT&& value) { SetDeleteVariable(std::forward<DeleteVariableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A mutation to add a new rule to the policy.</p>
     */
    inline const AutomatedReasoningPolicyAddRuleMutation& GetAddRule() const { return m_addRule; }
    inline bool AddRuleHasBeenSet() const { return m_addRuleHasBeenSet; }
    template<typename AddRuleT = AutomatedReasoningPolicyAddRuleMutation>
    void SetAddRule(AddRuleT&& value) { m_addRuleHasBeenSet = true; m_addRule = std::forward<AddRuleT>(value); }
    template<typename AddRuleT = AutomatedReasoningPolicyAddRuleMutation>
    AutomatedReasoningPolicyMutation& WithAddRule(AddRuleT&& value) { SetAddRule(std::forward<AddRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A mutation to modify an existing rule in the policy.</p>
     */
    inline const AutomatedReasoningPolicyUpdateRuleMutation& GetUpdateRule() const { return m_updateRule; }
    inline bool UpdateRuleHasBeenSet() const { return m_updateRuleHasBeenSet; }
    template<typename UpdateRuleT = AutomatedReasoningPolicyUpdateRuleMutation>
    void SetUpdateRule(UpdateRuleT&& value) { m_updateRuleHasBeenSet = true; m_updateRule = std::forward<UpdateRuleT>(value); }
    template<typename UpdateRuleT = AutomatedReasoningPolicyUpdateRuleMutation>
    AutomatedReasoningPolicyMutation& WithUpdateRule(UpdateRuleT&& value) { SetUpdateRule(std::forward<UpdateRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A mutation to remove a rule from the policy.</p>
     */
    inline const AutomatedReasoningPolicyDeleteRuleMutation& GetDeleteRule() const { return m_deleteRule; }
    inline bool DeleteRuleHasBeenSet() const { return m_deleteRuleHasBeenSet; }
    template<typename DeleteRuleT = AutomatedReasoningPolicyDeleteRuleMutation>
    void SetDeleteRule(DeleteRuleT&& value) { m_deleteRuleHasBeenSet = true; m_deleteRule = std::forward<DeleteRuleT>(value); }
    template<typename DeleteRuleT = AutomatedReasoningPolicyDeleteRuleMutation>
    AutomatedReasoningPolicyMutation& WithDeleteRule(DeleteRuleT&& value) { SetDeleteRule(std::forward<DeleteRuleT>(value)); return *this;}
    ///@}
  private:

    AutomatedReasoningPolicyAddTypeMutation m_addType;
    bool m_addTypeHasBeenSet = false;

    AutomatedReasoningPolicyUpdateTypeMutation m_updateType;
    bool m_updateTypeHasBeenSet = false;

    AutomatedReasoningPolicyDeleteTypeMutation m_deleteType;
    bool m_deleteTypeHasBeenSet = false;

    AutomatedReasoningPolicyAddVariableMutation m_addVariable;
    bool m_addVariableHasBeenSet = false;

    AutomatedReasoningPolicyUpdateVariableMutation m_updateVariable;
    bool m_updateVariableHasBeenSet = false;

    AutomatedReasoningPolicyDeleteVariableMutation m_deleteVariable;
    bool m_deleteVariableHasBeenSet = false;

    AutomatedReasoningPolicyAddRuleMutation m_addRule;
    bool m_addRuleHasBeenSet = false;

    AutomatedReasoningPolicyUpdateRuleMutation m_updateRule;
    bool m_updateRuleHasBeenSet = false;

    AutomatedReasoningPolicyDeleteRuleMutation m_deleteRule;
    bool m_deleteRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
