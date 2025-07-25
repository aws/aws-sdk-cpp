/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/Scope.h>
#include <aws/config/model/Source.h>
#include <aws/config/model/MaximumExecutionFrequency.h>
#include <aws/config/model/ConfigRuleState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/EvaluationModeConfiguration.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Config rules evaluate the configuration settings of your Amazon Web Services
   * resources. A rule can run when Config detects a configuration change to an
   * Amazon Web Services resource or at a periodic frequency that you choose (for
   * example, every 24 hours). There are two types of rules: <i>Config Managed
   * Rules</i> and <i>Config Custom Rules</i>.</p> <p>Config Managed Rules are
   * predefined, customizable rules created by Config. For a list of managed rules,
   * see <a
   * href="https://docs.aws.amazon.com/config/latest/developerguide/managed-rules-by-aws-config.html">List
   * of Config Managed Rules</a>.</p> <p>Config Custom Rules are rules that you
   * create from scratch. There are two ways to create Config custom rules: with
   * Lambda functions (<a
   * href="https://docs.aws.amazon.com/config/latest/developerguide/gettingstarted-concepts.html#gettingstarted-concepts-function">
   * Lambda Developer Guide</a>) and with Guard (<a
   * href="https://github.com/aws-cloudformation/cloudformation-guard">Guard GitHub
   * Repository</a>), a policy-as-code language. Config custom rules created with
   * Lambda are called <i>Config Custom Lambda Rules</i> and Config custom rules
   * created with Guard are called <i>Config Custom Policy Rules</i>.</p> <p>For more
   * information about developing and using Config rules, see <a
   * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config.html">Evaluating
   * Resource with Config Rules</a> in the <i>Config Developer Guide</i>.</p> 
   * <p>You can use the Amazon Web Services CLI and Amazon Web Services SDKs if you
   * want to create a rule that triggers evaluations for your resources when Config
   * delivers the configuration snapshot. For more information, see
   * <a>ConfigSnapshotDeliveryProperties</a>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConfigRule">AWS
   * API Reference</a></p>
   */
  class ConfigRule
  {
  public:
    AWS_CONFIGSERVICE_API ConfigRule() = default;
    AWS_CONFIGSERVICE_API ConfigRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConfigRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name that you assign to the Config rule. The name is required if you are
     * adding a new rule.</p>
     */
    inline const Aws::String& GetConfigRuleName() const { return m_configRuleName; }
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }
    template<typename ConfigRuleNameT = Aws::String>
    void SetConfigRuleName(ConfigRuleNameT&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::forward<ConfigRuleNameT>(value); }
    template<typename ConfigRuleNameT = Aws::String>
    ConfigRule& WithConfigRuleName(ConfigRuleNameT&& value) { SetConfigRuleName(std::forward<ConfigRuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleArn() const { return m_configRuleArn; }
    inline bool ConfigRuleArnHasBeenSet() const { return m_configRuleArnHasBeenSet; }
    template<typename ConfigRuleArnT = Aws::String>
    void SetConfigRuleArn(ConfigRuleArnT&& value) { m_configRuleArnHasBeenSet = true; m_configRuleArn = std::forward<ConfigRuleArnT>(value); }
    template<typename ConfigRuleArnT = Aws::String>
    ConfigRule& WithConfigRuleArn(ConfigRuleArnT&& value) { SetConfigRuleArn(std::forward<ConfigRuleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleId() const { return m_configRuleId; }
    inline bool ConfigRuleIdHasBeenSet() const { return m_configRuleIdHasBeenSet; }
    template<typename ConfigRuleIdT = Aws::String>
    void SetConfigRuleId(ConfigRuleIdT&& value) { m_configRuleIdHasBeenSet = true; m_configRuleId = std::forward<ConfigRuleIdT>(value); }
    template<typename ConfigRuleIdT = Aws::String>
    ConfigRule& WithConfigRuleId(ConfigRuleIdT&& value) { SetConfigRuleId(std::forward<ConfigRuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description that you provide for the Config rule.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ConfigRule& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines which resources can trigger an evaluation for the rule. The scope can
     * include one or more resource types, a combination of one resource type and one
     * resource ID, or a combination of a tag key and value. Specify a scope to
     * constrain the resources that can trigger an evaluation for the rule. If you do
     * not specify a scope, evaluations are triggered when any resource in the
     * recording group changes.</p>
     */
    inline const Scope& GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    template<typename ScopeT = Scope>
    void SetScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope = std::forward<ScopeT>(value); }
    template<typename ScopeT = Scope>
    ConfigRule& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the rule owner (<code>Amazon Web Services</code> for managed rules,
     * <code>CUSTOM_POLICY</code> for Custom Policy rules, and
     * <code>CUSTOM_LAMBDA</code> for Custom Lambda rules), the rule identifier, and
     * the notifications that cause the function to evaluate your Amazon Web Services
     * resources.</p>
     */
    inline const Source& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Source>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Source>
    ConfigRule& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string, in JSON format, that is passed to the Config rule Lambda
     * function.</p>
     */
    inline const Aws::String& GetInputParameters() const { return m_inputParameters; }
    inline bool InputParametersHasBeenSet() const { return m_inputParametersHasBeenSet; }
    template<typename InputParametersT = Aws::String>
    void SetInputParameters(InputParametersT&& value) { m_inputParametersHasBeenSet = true; m_inputParameters = std::forward<InputParametersT>(value); }
    template<typename InputParametersT = Aws::String>
    ConfigRule& WithInputParameters(InputParametersT&& value) { SetInputParameters(std::forward<InputParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum frequency with which Config runs evaluations for a rule. You can
     * specify a value for <code>MaximumExecutionFrequency</code> when:</p> <ul> <li>
     * <p>This is for an Config managed rule that is triggered at a periodic
     * frequency.</p> </li> <li> <p>Your custom rule is triggered when Config delivers
     * the configuration snapshot. For more information, see
     * <a>ConfigSnapshotDeliveryProperties</a>.</p> </li> </ul>  <p>By default,
     * rules with a periodic trigger are evaluated every 24 hours. To change the
     * frequency, specify a valid value for the <code>MaximumExecutionFrequency</code>
     * parameter.</p> 
     */
    inline MaximumExecutionFrequency GetMaximumExecutionFrequency() const { return m_maximumExecutionFrequency; }
    inline bool MaximumExecutionFrequencyHasBeenSet() const { return m_maximumExecutionFrequencyHasBeenSet; }
    inline void SetMaximumExecutionFrequency(MaximumExecutionFrequency value) { m_maximumExecutionFrequencyHasBeenSet = true; m_maximumExecutionFrequency = value; }
    inline ConfigRule& WithMaximumExecutionFrequency(MaximumExecutionFrequency value) { SetMaximumExecutionFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the Config rule is active or is currently being deleted by
     * Config. It can also indicate the evaluation status for the Config rule.</p>
     * <p>Config sets the state of the rule to <code>EVALUATING</code> temporarily
     * after you use the <code>StartConfigRulesEvaluation</code> request to evaluate
     * your resources against the Config rule.</p> <p>Config sets the state of the rule
     * to <code>DELETING_RESULTS</code> temporarily after you use the
     * <code>DeleteEvaluationResults</code> request to delete the current evaluation
     * results for the Config rule.</p> <p>Config temporarily sets the state of a rule
     * to <code>DELETING</code> after you use the <code>DeleteConfigRule</code> request
     * to delete the rule. After Config deletes the rule, the rule and all of its
     * evaluations are erased and are no longer available.</p>
     */
    inline ConfigRuleState GetConfigRuleState() const { return m_configRuleState; }
    inline bool ConfigRuleStateHasBeenSet() const { return m_configRuleStateHasBeenSet; }
    inline void SetConfigRuleState(ConfigRuleState value) { m_configRuleStateHasBeenSet = true; m_configRuleState = value; }
    inline ConfigRule& WithConfigRuleState(ConfigRuleState value) { SetConfigRuleState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Service principal name of the service that created the rule.</p> 
     * <p>The field is populated only if the service-linked rule is created by a
     * service. The field is empty if you create your own rule.</p> 
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    ConfigRule& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The modes the Config rule can be evaluated in. The valid values are distinct
     * objects. By default, the value is Detective evaluation mode only.</p>
     */
    inline const Aws::Vector<EvaluationModeConfiguration>& GetEvaluationModes() const { return m_evaluationModes; }
    inline bool EvaluationModesHasBeenSet() const { return m_evaluationModesHasBeenSet; }
    template<typename EvaluationModesT = Aws::Vector<EvaluationModeConfiguration>>
    void SetEvaluationModes(EvaluationModesT&& value) { m_evaluationModesHasBeenSet = true; m_evaluationModes = std::forward<EvaluationModesT>(value); }
    template<typename EvaluationModesT = Aws::Vector<EvaluationModeConfiguration>>
    ConfigRule& WithEvaluationModes(EvaluationModesT&& value) { SetEvaluationModes(std::forward<EvaluationModesT>(value)); return *this;}
    template<typename EvaluationModesT = EvaluationModeConfiguration>
    ConfigRule& AddEvaluationModes(EvaluationModesT&& value) { m_evaluationModesHasBeenSet = true; m_evaluationModes.emplace_back(std::forward<EvaluationModesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet = false;

    Aws::String m_configRuleArn;
    bool m_configRuleArnHasBeenSet = false;

    Aws::String m_configRuleId;
    bool m_configRuleIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    Source m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_inputParameters;
    bool m_inputParametersHasBeenSet = false;

    MaximumExecutionFrequency m_maximumExecutionFrequency{MaximumExecutionFrequency::NOT_SET};
    bool m_maximumExecutionFrequencyHasBeenSet = false;

    ConfigRuleState m_configRuleState{ConfigRuleState::NOT_SET};
    bool m_configRuleStateHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Vector<EvaluationModeConfiguration> m_evaluationModes;
    bool m_evaluationModesHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
