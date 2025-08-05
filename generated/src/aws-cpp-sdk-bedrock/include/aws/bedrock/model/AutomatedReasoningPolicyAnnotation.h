/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyAddTypeAnnotation.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyUpdateTypeAnnotation.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyDeleteTypeAnnotation.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyAddVariableAnnotation.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyUpdateVariableAnnotation.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyDeleteVariableAnnotation.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyAddRuleAnnotation.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyUpdateRuleAnnotation.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyDeleteRuleAnnotation.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyAddRuleFromNaturalLanguageAnnotation.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyUpdateFromRuleFeedbackAnnotation.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyUpdateFromScenarioFeedbackAnnotation.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyIngestContentAnnotation.h>
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
   * <p>Contains the various operations that can be performed on an Automated
   * Reasoning policy, including adding, updating, and deleting rules, variables, and
   * types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyAnnotation">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyAnnotation
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyAnnotation() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyAnnotation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyAnnotation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An operation to add a new custom type to the policy, defining a set of
     * possible values for policy variables.</p>
     */
    inline const AutomatedReasoningPolicyAddTypeAnnotation& GetAddType() const { return m_addType; }
    inline bool AddTypeHasBeenSet() const { return m_addTypeHasBeenSet; }
    template<typename AddTypeT = AutomatedReasoningPolicyAddTypeAnnotation>
    void SetAddType(AddTypeT&& value) { m_addTypeHasBeenSet = true; m_addType = std::forward<AddTypeT>(value); }
    template<typename AddTypeT = AutomatedReasoningPolicyAddTypeAnnotation>
    AutomatedReasoningPolicyAnnotation& WithAddType(AddTypeT&& value) { SetAddType(std::forward<AddTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An operation to modify an existing custom type in the policy, such as
     * changing its name, description, or allowed values.</p>
     */
    inline const AutomatedReasoningPolicyUpdateTypeAnnotation& GetUpdateType() const { return m_updateType; }
    inline bool UpdateTypeHasBeenSet() const { return m_updateTypeHasBeenSet; }
    template<typename UpdateTypeT = AutomatedReasoningPolicyUpdateTypeAnnotation>
    void SetUpdateType(UpdateTypeT&& value) { m_updateTypeHasBeenSet = true; m_updateType = std::forward<UpdateTypeT>(value); }
    template<typename UpdateTypeT = AutomatedReasoningPolicyUpdateTypeAnnotation>
    AutomatedReasoningPolicyAnnotation& WithUpdateType(UpdateTypeT&& value) { SetUpdateType(std::forward<UpdateTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An operation to remove a custom type from the policy. The type must not be
     * referenced by any variables or rules.</p>
     */
    inline const AutomatedReasoningPolicyDeleteTypeAnnotation& GetDeleteType() const { return m_deleteType; }
    inline bool DeleteTypeHasBeenSet() const { return m_deleteTypeHasBeenSet; }
    template<typename DeleteTypeT = AutomatedReasoningPolicyDeleteTypeAnnotation>
    void SetDeleteType(DeleteTypeT&& value) { m_deleteTypeHasBeenSet = true; m_deleteType = std::forward<DeleteTypeT>(value); }
    template<typename DeleteTypeT = AutomatedReasoningPolicyDeleteTypeAnnotation>
    AutomatedReasoningPolicyAnnotation& WithDeleteType(DeleteTypeT&& value) { SetDeleteType(std::forward<DeleteTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An operation to add a new variable to the policy, which can be used in rule
     * expressions to represent dynamic values.</p>
     */
    inline const AutomatedReasoningPolicyAddVariableAnnotation& GetAddVariable() const { return m_addVariable; }
    inline bool AddVariableHasBeenSet() const { return m_addVariableHasBeenSet; }
    template<typename AddVariableT = AutomatedReasoningPolicyAddVariableAnnotation>
    void SetAddVariable(AddVariableT&& value) { m_addVariableHasBeenSet = true; m_addVariable = std::forward<AddVariableT>(value); }
    template<typename AddVariableT = AutomatedReasoningPolicyAddVariableAnnotation>
    AutomatedReasoningPolicyAnnotation& WithAddVariable(AddVariableT&& value) { SetAddVariable(std::forward<AddVariableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An operation to modify an existing variable in the policy, such as changing
     * its name, type, or description.</p>
     */
    inline const AutomatedReasoningPolicyUpdateVariableAnnotation& GetUpdateVariable() const { return m_updateVariable; }
    inline bool UpdateVariableHasBeenSet() const { return m_updateVariableHasBeenSet; }
    template<typename UpdateVariableT = AutomatedReasoningPolicyUpdateVariableAnnotation>
    void SetUpdateVariable(UpdateVariableT&& value) { m_updateVariableHasBeenSet = true; m_updateVariable = std::forward<UpdateVariableT>(value); }
    template<typename UpdateVariableT = AutomatedReasoningPolicyUpdateVariableAnnotation>
    AutomatedReasoningPolicyAnnotation& WithUpdateVariable(UpdateVariableT&& value) { SetUpdateVariable(std::forward<UpdateVariableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An operation to remove a variable from the policy. The variable must not be
     * referenced by any rules.</p>
     */
    inline const AutomatedReasoningPolicyDeleteVariableAnnotation& GetDeleteVariable() const { return m_deleteVariable; }
    inline bool DeleteVariableHasBeenSet() const { return m_deleteVariableHasBeenSet; }
    template<typename DeleteVariableT = AutomatedReasoningPolicyDeleteVariableAnnotation>
    void SetDeleteVariable(DeleteVariableT&& value) { m_deleteVariableHasBeenSet = true; m_deleteVariable = std::forward<DeleteVariableT>(value); }
    template<typename DeleteVariableT = AutomatedReasoningPolicyDeleteVariableAnnotation>
    AutomatedReasoningPolicyAnnotation& WithDeleteVariable(DeleteVariableT&& value) { SetDeleteVariable(std::forward<DeleteVariableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An operation to add a new logical rule to the policy using formal
     * mathematical expressions.</p>
     */
    inline const AutomatedReasoningPolicyAddRuleAnnotation& GetAddRule() const { return m_addRule; }
    inline bool AddRuleHasBeenSet() const { return m_addRuleHasBeenSet; }
    template<typename AddRuleT = AutomatedReasoningPolicyAddRuleAnnotation>
    void SetAddRule(AddRuleT&& value) { m_addRuleHasBeenSet = true; m_addRule = std::forward<AddRuleT>(value); }
    template<typename AddRuleT = AutomatedReasoningPolicyAddRuleAnnotation>
    AutomatedReasoningPolicyAnnotation& WithAddRule(AddRuleT&& value) { SetAddRule(std::forward<AddRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An operation to modify an existing rule in the policy, such as changing its
     * logical expression or conditions.</p>
     */
    inline const AutomatedReasoningPolicyUpdateRuleAnnotation& GetUpdateRule() const { return m_updateRule; }
    inline bool UpdateRuleHasBeenSet() const { return m_updateRuleHasBeenSet; }
    template<typename UpdateRuleT = AutomatedReasoningPolicyUpdateRuleAnnotation>
    void SetUpdateRule(UpdateRuleT&& value) { m_updateRuleHasBeenSet = true; m_updateRule = std::forward<UpdateRuleT>(value); }
    template<typename UpdateRuleT = AutomatedReasoningPolicyUpdateRuleAnnotation>
    AutomatedReasoningPolicyAnnotation& WithUpdateRule(UpdateRuleT&& value) { SetUpdateRule(std::forward<UpdateRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An operation to remove a rule from the policy.</p>
     */
    inline const AutomatedReasoningPolicyDeleteRuleAnnotation& GetDeleteRule() const { return m_deleteRule; }
    inline bool DeleteRuleHasBeenSet() const { return m_deleteRuleHasBeenSet; }
    template<typename DeleteRuleT = AutomatedReasoningPolicyDeleteRuleAnnotation>
    void SetDeleteRule(DeleteRuleT&& value) { m_deleteRuleHasBeenSet = true; m_deleteRule = std::forward<DeleteRuleT>(value); }
    template<typename DeleteRuleT = AutomatedReasoningPolicyDeleteRuleAnnotation>
    AutomatedReasoningPolicyAnnotation& WithDeleteRule(DeleteRuleT&& value) { SetDeleteRule(std::forward<DeleteRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An operation to add a new rule by converting natural language descriptions
     * into formal logical expressions.</p>
     */
    inline const AutomatedReasoningPolicyAddRuleFromNaturalLanguageAnnotation& GetAddRuleFromNaturalLanguage() const { return m_addRuleFromNaturalLanguage; }
    inline bool AddRuleFromNaturalLanguageHasBeenSet() const { return m_addRuleFromNaturalLanguageHasBeenSet; }
    template<typename AddRuleFromNaturalLanguageT = AutomatedReasoningPolicyAddRuleFromNaturalLanguageAnnotation>
    void SetAddRuleFromNaturalLanguage(AddRuleFromNaturalLanguageT&& value) { m_addRuleFromNaturalLanguageHasBeenSet = true; m_addRuleFromNaturalLanguage = std::forward<AddRuleFromNaturalLanguageT>(value); }
    template<typename AddRuleFromNaturalLanguageT = AutomatedReasoningPolicyAddRuleFromNaturalLanguageAnnotation>
    AutomatedReasoningPolicyAnnotation& WithAddRuleFromNaturalLanguage(AddRuleFromNaturalLanguageT&& value) { SetAddRuleFromNaturalLanguage(std::forward<AddRuleFromNaturalLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An operation to update the policy based on feedback about how specific rules
     * performed during testing or validation.</p>
     */
    inline const AutomatedReasoningPolicyUpdateFromRuleFeedbackAnnotation& GetUpdateFromRulesFeedback() const { return m_updateFromRulesFeedback; }
    inline bool UpdateFromRulesFeedbackHasBeenSet() const { return m_updateFromRulesFeedbackHasBeenSet; }
    template<typename UpdateFromRulesFeedbackT = AutomatedReasoningPolicyUpdateFromRuleFeedbackAnnotation>
    void SetUpdateFromRulesFeedback(UpdateFromRulesFeedbackT&& value) { m_updateFromRulesFeedbackHasBeenSet = true; m_updateFromRulesFeedback = std::forward<UpdateFromRulesFeedbackT>(value); }
    template<typename UpdateFromRulesFeedbackT = AutomatedReasoningPolicyUpdateFromRuleFeedbackAnnotation>
    AutomatedReasoningPolicyAnnotation& WithUpdateFromRulesFeedback(UpdateFromRulesFeedbackT&& value) { SetUpdateFromRulesFeedback(std::forward<UpdateFromRulesFeedbackT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An operation to update the policy based on feedback about how it performed on
     * specific test scenarios.</p>
     */
    inline const AutomatedReasoningPolicyUpdateFromScenarioFeedbackAnnotation& GetUpdateFromScenarioFeedback() const { return m_updateFromScenarioFeedback; }
    inline bool UpdateFromScenarioFeedbackHasBeenSet() const { return m_updateFromScenarioFeedbackHasBeenSet; }
    template<typename UpdateFromScenarioFeedbackT = AutomatedReasoningPolicyUpdateFromScenarioFeedbackAnnotation>
    void SetUpdateFromScenarioFeedback(UpdateFromScenarioFeedbackT&& value) { m_updateFromScenarioFeedbackHasBeenSet = true; m_updateFromScenarioFeedback = std::forward<UpdateFromScenarioFeedbackT>(value); }
    template<typename UpdateFromScenarioFeedbackT = AutomatedReasoningPolicyUpdateFromScenarioFeedbackAnnotation>
    AutomatedReasoningPolicyAnnotation& WithUpdateFromScenarioFeedback(UpdateFromScenarioFeedbackT&& value) { SetUpdateFromScenarioFeedback(std::forward<UpdateFromScenarioFeedbackT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An operation to process and incorporate new content into the policy,
     * extracting additional rules and concepts.</p>
     */
    inline const AutomatedReasoningPolicyIngestContentAnnotation& GetIngestContent() const { return m_ingestContent; }
    inline bool IngestContentHasBeenSet() const { return m_ingestContentHasBeenSet; }
    template<typename IngestContentT = AutomatedReasoningPolicyIngestContentAnnotation>
    void SetIngestContent(IngestContentT&& value) { m_ingestContentHasBeenSet = true; m_ingestContent = std::forward<IngestContentT>(value); }
    template<typename IngestContentT = AutomatedReasoningPolicyIngestContentAnnotation>
    AutomatedReasoningPolicyAnnotation& WithIngestContent(IngestContentT&& value) { SetIngestContent(std::forward<IngestContentT>(value)); return *this;}
    ///@}
  private:

    AutomatedReasoningPolicyAddTypeAnnotation m_addType;
    bool m_addTypeHasBeenSet = false;

    AutomatedReasoningPolicyUpdateTypeAnnotation m_updateType;
    bool m_updateTypeHasBeenSet = false;

    AutomatedReasoningPolicyDeleteTypeAnnotation m_deleteType;
    bool m_deleteTypeHasBeenSet = false;

    AutomatedReasoningPolicyAddVariableAnnotation m_addVariable;
    bool m_addVariableHasBeenSet = false;

    AutomatedReasoningPolicyUpdateVariableAnnotation m_updateVariable;
    bool m_updateVariableHasBeenSet = false;

    AutomatedReasoningPolicyDeleteVariableAnnotation m_deleteVariable;
    bool m_deleteVariableHasBeenSet = false;

    AutomatedReasoningPolicyAddRuleAnnotation m_addRule;
    bool m_addRuleHasBeenSet = false;

    AutomatedReasoningPolicyUpdateRuleAnnotation m_updateRule;
    bool m_updateRuleHasBeenSet = false;

    AutomatedReasoningPolicyDeleteRuleAnnotation m_deleteRule;
    bool m_deleteRuleHasBeenSet = false;

    AutomatedReasoningPolicyAddRuleFromNaturalLanguageAnnotation m_addRuleFromNaturalLanguage;
    bool m_addRuleFromNaturalLanguageHasBeenSet = false;

    AutomatedReasoningPolicyUpdateFromRuleFeedbackAnnotation m_updateFromRulesFeedback;
    bool m_updateFromRulesFeedbackHasBeenSet = false;

    AutomatedReasoningPolicyUpdateFromScenarioFeedbackAnnotation m_updateFromScenarioFeedback;
    bool m_updateFromScenarioFeedbackHasBeenSet = false;

    AutomatedReasoningPolicyIngestContentAnnotation m_ingestContent;
    bool m_ingestContentHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
