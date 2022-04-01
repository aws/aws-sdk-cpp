﻿/**
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
   * <p>An Config rule represents an Lambda function that you create for a custom
   * rule or a predefined function for an Config managed rule. The function evaluates
   * configuration items to assess whether your Amazon Web Services resources comply
   * with your desired configurations. This function can run when Config detects a
   * configuration change to an Amazon Web Services resource and at a periodic
   * frequency that you choose (for example, every 24 hours).</p>  <p>You can
   * use the Amazon Web Services CLI and Amazon Web Services SDKs if you want to
   * create a rule that triggers evaluations for your resources when Config delivers
   * the configuration snapshot. For more information, see
   * <a>ConfigSnapshotDeliveryProperties</a>.</p>  <p>For more information
   * about developing and using Config rules, see <a
   * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config.html">Evaluating
   * Amazon Web Services resource Configurations with Config</a> in the <i>Config
   * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConfigRule">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API ConfigRule
  {
  public:
    ConfigRule();
    ConfigRule(Aws::Utils::Json::JsonView jsonValue);
    ConfigRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name that you assign to the Config rule. The name is required if you are
     * adding a new rule.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }

    /**
     * <p>The name that you assign to the Config rule. The name is required if you are
     * adding a new rule.</p>
     */
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }

    /**
     * <p>The name that you assign to the Config rule. The name is required if you are
     * adding a new rule.</p>
     */
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }

    /**
     * <p>The name that you assign to the Config rule. The name is required if you are
     * adding a new rule.</p>
     */
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }

    /**
     * <p>The name that you assign to the Config rule. The name is required if you are
     * adding a new rule.</p>
     */
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }

    /**
     * <p>The name that you assign to the Config rule. The name is required if you are
     * adding a new rule.</p>
     */
    inline ConfigRule& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}

    /**
     * <p>The name that you assign to the Config rule. The name is required if you are
     * adding a new rule.</p>
     */
    inline ConfigRule& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>The name that you assign to the Config rule. The name is required if you are
     * adding a new rule.</p>
     */
    inline ConfigRule& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleArn() const{ return m_configRuleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Config rule.</p>
     */
    inline bool ConfigRuleArnHasBeenSet() const { return m_configRuleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Config rule.</p>
     */
    inline void SetConfigRuleArn(const Aws::String& value) { m_configRuleArnHasBeenSet = true; m_configRuleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Config rule.</p>
     */
    inline void SetConfigRuleArn(Aws::String&& value) { m_configRuleArnHasBeenSet = true; m_configRuleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Config rule.</p>
     */
    inline void SetConfigRuleArn(const char* value) { m_configRuleArnHasBeenSet = true; m_configRuleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Config rule.</p>
     */
    inline ConfigRule& WithConfigRuleArn(const Aws::String& value) { SetConfigRuleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Config rule.</p>
     */
    inline ConfigRule& WithConfigRuleArn(Aws::String&& value) { SetConfigRuleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Config rule.</p>
     */
    inline ConfigRule& WithConfigRuleArn(const char* value) { SetConfigRuleArn(value); return *this;}


    /**
     * <p>The ID of the Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleId() const{ return m_configRuleId; }

    /**
     * <p>The ID of the Config rule.</p>
     */
    inline bool ConfigRuleIdHasBeenSet() const { return m_configRuleIdHasBeenSet; }

    /**
     * <p>The ID of the Config rule.</p>
     */
    inline void SetConfigRuleId(const Aws::String& value) { m_configRuleIdHasBeenSet = true; m_configRuleId = value; }

    /**
     * <p>The ID of the Config rule.</p>
     */
    inline void SetConfigRuleId(Aws::String&& value) { m_configRuleIdHasBeenSet = true; m_configRuleId = std::move(value); }

    /**
     * <p>The ID of the Config rule.</p>
     */
    inline void SetConfigRuleId(const char* value) { m_configRuleIdHasBeenSet = true; m_configRuleId.assign(value); }

    /**
     * <p>The ID of the Config rule.</p>
     */
    inline ConfigRule& WithConfigRuleId(const Aws::String& value) { SetConfigRuleId(value); return *this;}

    /**
     * <p>The ID of the Config rule.</p>
     */
    inline ConfigRule& WithConfigRuleId(Aws::String&& value) { SetConfigRuleId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Config rule.</p>
     */
    inline ConfigRule& WithConfigRuleId(const char* value) { SetConfigRuleId(value); return *this;}


    /**
     * <p>The description that you provide for the Config rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description that you provide for the Config rule.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description that you provide for the Config rule.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description that you provide for the Config rule.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description that you provide for the Config rule.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description that you provide for the Config rule.</p>
     */
    inline ConfigRule& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description that you provide for the Config rule.</p>
     */
    inline ConfigRule& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description that you provide for the Config rule.</p>
     */
    inline ConfigRule& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Defines which resources can trigger an evaluation for the rule. The scope can
     * include one or more resource types, a combination of one resource type and one
     * resource ID, or a combination of a tag key and value. Specify a scope to
     * constrain the resources that can trigger an evaluation for the rule. If you do
     * not specify a scope, evaluations are triggered when any resource in the
     * recording group changes.</p>  <p>The scope can be empty. </p> 
     */
    inline const Scope& GetScope() const{ return m_scope; }

    /**
     * <p>Defines which resources can trigger an evaluation for the rule. The scope can
     * include one or more resource types, a combination of one resource type and one
     * resource ID, or a combination of a tag key and value. Specify a scope to
     * constrain the resources that can trigger an evaluation for the rule. If you do
     * not specify a scope, evaluations are triggered when any resource in the
     * recording group changes.</p>  <p>The scope can be empty. </p> 
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>Defines which resources can trigger an evaluation for the rule. The scope can
     * include one or more resource types, a combination of one resource type and one
     * resource ID, or a combination of a tag key and value. Specify a scope to
     * constrain the resources that can trigger an evaluation for the rule. If you do
     * not specify a scope, evaluations are triggered when any resource in the
     * recording group changes.</p>  <p>The scope can be empty. </p> 
     */
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>Defines which resources can trigger an evaluation for the rule. The scope can
     * include one or more resource types, a combination of one resource type and one
     * resource ID, or a combination of a tag key and value. Specify a scope to
     * constrain the resources that can trigger an evaluation for the rule. If you do
     * not specify a scope, evaluations are triggered when any resource in the
     * recording group changes.</p>  <p>The scope can be empty. </p> 
     */
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>Defines which resources can trigger an evaluation for the rule. The scope can
     * include one or more resource types, a combination of one resource type and one
     * resource ID, or a combination of a tag key and value. Specify a scope to
     * constrain the resources that can trigger an evaluation for the rule. If you do
     * not specify a scope, evaluations are triggered when any resource in the
     * recording group changes.</p>  <p>The scope can be empty. </p> 
     */
    inline ConfigRule& WithScope(const Scope& value) { SetScope(value); return *this;}

    /**
     * <p>Defines which resources can trigger an evaluation for the rule. The scope can
     * include one or more resource types, a combination of one resource type and one
     * resource ID, or a combination of a tag key and value. Specify a scope to
     * constrain the resources that can trigger an evaluation for the rule. If you do
     * not specify a scope, evaluations are triggered when any resource in the
     * recording group changes.</p>  <p>The scope can be empty. </p> 
     */
    inline ConfigRule& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}


    /**
     * <p>Provides the rule owner (Amazon Web Services or customer), the rule
     * identifier, and the notifications that cause the function to evaluate your
     * Amazon Web Services resources.</p>
     */
    inline const Source& GetSource() const{ return m_source; }

    /**
     * <p>Provides the rule owner (Amazon Web Services or customer), the rule
     * identifier, and the notifications that cause the function to evaluate your
     * Amazon Web Services resources.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>Provides the rule owner (Amazon Web Services or customer), the rule
     * identifier, and the notifications that cause the function to evaluate your
     * Amazon Web Services resources.</p>
     */
    inline void SetSource(const Source& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>Provides the rule owner (Amazon Web Services or customer), the rule
     * identifier, and the notifications that cause the function to evaluate your
     * Amazon Web Services resources.</p>
     */
    inline void SetSource(Source&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>Provides the rule owner (Amazon Web Services or customer), the rule
     * identifier, and the notifications that cause the function to evaluate your
     * Amazon Web Services resources.</p>
     */
    inline ConfigRule& WithSource(const Source& value) { SetSource(value); return *this;}

    /**
     * <p>Provides the rule owner (Amazon Web Services or customer), the rule
     * identifier, and the notifications that cause the function to evaluate your
     * Amazon Web Services resources.</p>
     */
    inline ConfigRule& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>A string, in JSON format, that is passed to the Config rule Lambda
     * function.</p>
     */
    inline const Aws::String& GetInputParameters() const{ return m_inputParameters; }

    /**
     * <p>A string, in JSON format, that is passed to the Config rule Lambda
     * function.</p>
     */
    inline bool InputParametersHasBeenSet() const { return m_inputParametersHasBeenSet; }

    /**
     * <p>A string, in JSON format, that is passed to the Config rule Lambda
     * function.</p>
     */
    inline void SetInputParameters(const Aws::String& value) { m_inputParametersHasBeenSet = true; m_inputParameters = value; }

    /**
     * <p>A string, in JSON format, that is passed to the Config rule Lambda
     * function.</p>
     */
    inline void SetInputParameters(Aws::String&& value) { m_inputParametersHasBeenSet = true; m_inputParameters = std::move(value); }

    /**
     * <p>A string, in JSON format, that is passed to the Config rule Lambda
     * function.</p>
     */
    inline void SetInputParameters(const char* value) { m_inputParametersHasBeenSet = true; m_inputParameters.assign(value); }

    /**
     * <p>A string, in JSON format, that is passed to the Config rule Lambda
     * function.</p>
     */
    inline ConfigRule& WithInputParameters(const Aws::String& value) { SetInputParameters(value); return *this;}

    /**
     * <p>A string, in JSON format, that is passed to the Config rule Lambda
     * function.</p>
     */
    inline ConfigRule& WithInputParameters(Aws::String&& value) { SetInputParameters(std::move(value)); return *this;}

    /**
     * <p>A string, in JSON format, that is passed to the Config rule Lambda
     * function.</p>
     */
    inline ConfigRule& WithInputParameters(const char* value) { SetInputParameters(value); return *this;}


    /**
     * <p>The maximum frequency with which Config runs evaluations for a rule. You can
     * specify a value for <code>MaximumExecutionFrequency</code> when:</p> <ul> <li>
     * <p>You are using an Config managed rule that is triggered at a periodic
     * frequency.</p> </li> <li> <p>Your custom rule is triggered when Config delivers
     * the configuration snapshot. For more information, see
     * <a>ConfigSnapshotDeliveryProperties</a>.</p> </li> </ul>  <p>By default,
     * rules with a periodic trigger are evaluated every 24 hours. To change the
     * frequency, specify a valid value for the <code>MaximumExecutionFrequency</code>
     * parameter.</p> 
     */
    inline const MaximumExecutionFrequency& GetMaximumExecutionFrequency() const{ return m_maximumExecutionFrequency; }

    /**
     * <p>The maximum frequency with which Config runs evaluations for a rule. You can
     * specify a value for <code>MaximumExecutionFrequency</code> when:</p> <ul> <li>
     * <p>You are using an Config managed rule that is triggered at a periodic
     * frequency.</p> </li> <li> <p>Your custom rule is triggered when Config delivers
     * the configuration snapshot. For more information, see
     * <a>ConfigSnapshotDeliveryProperties</a>.</p> </li> </ul>  <p>By default,
     * rules with a periodic trigger are evaluated every 24 hours. To change the
     * frequency, specify a valid value for the <code>MaximumExecutionFrequency</code>
     * parameter.</p> 
     */
    inline bool MaximumExecutionFrequencyHasBeenSet() const { return m_maximumExecutionFrequencyHasBeenSet; }

    /**
     * <p>The maximum frequency with which Config runs evaluations for a rule. You can
     * specify a value for <code>MaximumExecutionFrequency</code> when:</p> <ul> <li>
     * <p>You are using an Config managed rule that is triggered at a periodic
     * frequency.</p> </li> <li> <p>Your custom rule is triggered when Config delivers
     * the configuration snapshot. For more information, see
     * <a>ConfigSnapshotDeliveryProperties</a>.</p> </li> </ul>  <p>By default,
     * rules with a periodic trigger are evaluated every 24 hours. To change the
     * frequency, specify a valid value for the <code>MaximumExecutionFrequency</code>
     * parameter.</p> 
     */
    inline void SetMaximumExecutionFrequency(const MaximumExecutionFrequency& value) { m_maximumExecutionFrequencyHasBeenSet = true; m_maximumExecutionFrequency = value; }

    /**
     * <p>The maximum frequency with which Config runs evaluations for a rule. You can
     * specify a value for <code>MaximumExecutionFrequency</code> when:</p> <ul> <li>
     * <p>You are using an Config managed rule that is triggered at a periodic
     * frequency.</p> </li> <li> <p>Your custom rule is triggered when Config delivers
     * the configuration snapshot. For more information, see
     * <a>ConfigSnapshotDeliveryProperties</a>.</p> </li> </ul>  <p>By default,
     * rules with a periodic trigger are evaluated every 24 hours. To change the
     * frequency, specify a valid value for the <code>MaximumExecutionFrequency</code>
     * parameter.</p> 
     */
    inline void SetMaximumExecutionFrequency(MaximumExecutionFrequency&& value) { m_maximumExecutionFrequencyHasBeenSet = true; m_maximumExecutionFrequency = std::move(value); }

    /**
     * <p>The maximum frequency with which Config runs evaluations for a rule. You can
     * specify a value for <code>MaximumExecutionFrequency</code> when:</p> <ul> <li>
     * <p>You are using an Config managed rule that is triggered at a periodic
     * frequency.</p> </li> <li> <p>Your custom rule is triggered when Config delivers
     * the configuration snapshot. For more information, see
     * <a>ConfigSnapshotDeliveryProperties</a>.</p> </li> </ul>  <p>By default,
     * rules with a periodic trigger are evaluated every 24 hours. To change the
     * frequency, specify a valid value for the <code>MaximumExecutionFrequency</code>
     * parameter.</p> 
     */
    inline ConfigRule& WithMaximumExecutionFrequency(const MaximumExecutionFrequency& value) { SetMaximumExecutionFrequency(value); return *this;}

    /**
     * <p>The maximum frequency with which Config runs evaluations for a rule. You can
     * specify a value for <code>MaximumExecutionFrequency</code> when:</p> <ul> <li>
     * <p>You are using an Config managed rule that is triggered at a periodic
     * frequency.</p> </li> <li> <p>Your custom rule is triggered when Config delivers
     * the configuration snapshot. For more information, see
     * <a>ConfigSnapshotDeliveryProperties</a>.</p> </li> </ul>  <p>By default,
     * rules with a periodic trigger are evaluated every 24 hours. To change the
     * frequency, specify a valid value for the <code>MaximumExecutionFrequency</code>
     * parameter.</p> 
     */
    inline ConfigRule& WithMaximumExecutionFrequency(MaximumExecutionFrequency&& value) { SetMaximumExecutionFrequency(std::move(value)); return *this;}


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
    inline const ConfigRuleState& GetConfigRuleState() const{ return m_configRuleState; }

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
    inline bool ConfigRuleStateHasBeenSet() const { return m_configRuleStateHasBeenSet; }

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
    inline void SetConfigRuleState(const ConfigRuleState& value) { m_configRuleStateHasBeenSet = true; m_configRuleState = value; }

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
    inline void SetConfigRuleState(ConfigRuleState&& value) { m_configRuleStateHasBeenSet = true; m_configRuleState = std::move(value); }

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
    inline ConfigRule& WithConfigRuleState(const ConfigRuleState& value) { SetConfigRuleState(value); return *this;}

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
    inline ConfigRule& WithConfigRuleState(ConfigRuleState&& value) { SetConfigRuleState(std::move(value)); return *this;}


    /**
     * <p>Service principal name of the service that created the rule.</p> 
     * <p>The field is populated only if the service linked rule is created by a
     * service. The field is empty if you create your own rule.</p> 
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>Service principal name of the service that created the rule.</p> 
     * <p>The field is populated only if the service linked rule is created by a
     * service. The field is empty if you create your own rule.</p> 
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>Service principal name of the service that created the rule.</p> 
     * <p>The field is populated only if the service linked rule is created by a
     * service. The field is empty if you create your own rule.</p> 
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>Service principal name of the service that created the rule.</p> 
     * <p>The field is populated only if the service linked rule is created by a
     * service. The field is empty if you create your own rule.</p> 
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>Service principal name of the service that created the rule.</p> 
     * <p>The field is populated only if the service linked rule is created by a
     * service. The field is empty if you create your own rule.</p> 
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>Service principal name of the service that created the rule.</p> 
     * <p>The field is populated only if the service linked rule is created by a
     * service. The field is empty if you create your own rule.</p> 
     */
    inline ConfigRule& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>Service principal name of the service that created the rule.</p> 
     * <p>The field is populated only if the service linked rule is created by a
     * service. The field is empty if you create your own rule.</p> 
     */
    inline ConfigRule& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>Service principal name of the service that created the rule.</p> 
     * <p>The field is populated only if the service linked rule is created by a
     * service. The field is empty if you create your own rule.</p> 
     */
    inline ConfigRule& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}

  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet;

    Aws::String m_configRuleArn;
    bool m_configRuleArnHasBeenSet;

    Aws::String m_configRuleId;
    bool m_configRuleIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Scope m_scope;
    bool m_scopeHasBeenSet;

    Source m_source;
    bool m_sourceHasBeenSet;

    Aws::String m_inputParameters;
    bool m_inputParametersHasBeenSet;

    MaximumExecutionFrequency m_maximumExecutionFrequency;
    bool m_maximumExecutionFrequencyHasBeenSet;

    ConfigRuleState m_configRuleState;
    bool m_configRuleStateHasBeenSet;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
