/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/AttributeMatchingModel.h>
#include <aws/entityresolution/model/Rule.h>
#include <aws/entityresolution/model/IdMappingWorkflowRuleDefinitionType.h>
#include <aws/entityresolution/model/RecordMatchingModel.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p> The rule-based properties of an ID namespace. These properties define how
   * the ID namespace can be used in an ID mapping workflow.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/NamespaceRuleBasedProperties">AWS
   * API Reference</a></p>
   */
  class NamespaceRuleBasedProperties
  {
  public:
    AWS_ENTITYRESOLUTION_API NamespaceRuleBasedProperties() = default;
    AWS_ENTITYRESOLUTION_API NamespaceRuleBasedProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API NamespaceRuleBasedProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The rules for the ID namespace.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<Rule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<Rule>>
    NamespaceRuleBasedProperties& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = Rule>
    NamespaceRuleBasedProperties& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The sets of rules you can use in an ID mapping workflow. The limitations
     * specified for the source and target must be compatible.</p>
     */
    inline const Aws::Vector<IdMappingWorkflowRuleDefinitionType>& GetRuleDefinitionTypes() const { return m_ruleDefinitionTypes; }
    inline bool RuleDefinitionTypesHasBeenSet() const { return m_ruleDefinitionTypesHasBeenSet; }
    template<typename RuleDefinitionTypesT = Aws::Vector<IdMappingWorkflowRuleDefinitionType>>
    void SetRuleDefinitionTypes(RuleDefinitionTypesT&& value) { m_ruleDefinitionTypesHasBeenSet = true; m_ruleDefinitionTypes = std::forward<RuleDefinitionTypesT>(value); }
    template<typename RuleDefinitionTypesT = Aws::Vector<IdMappingWorkflowRuleDefinitionType>>
    NamespaceRuleBasedProperties& WithRuleDefinitionTypes(RuleDefinitionTypesT&& value) { SetRuleDefinitionTypes(std::forward<RuleDefinitionTypesT>(value)); return *this;}
    inline NamespaceRuleBasedProperties& AddRuleDefinitionTypes(IdMappingWorkflowRuleDefinitionType value) { m_ruleDefinitionTypesHasBeenSet = true; m_ruleDefinitionTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The comparison type. You can either choose <code>ONE_TO_ONE</code> or
     * <code>MANY_TO_MANY</code> as the <code>attributeMatchingModel</code>. </p> <p>If
     * you choose <code>ONE_TO_ONE</code>, the system can only match attributes if the
     * sub-types are an exact match. For example, for the <code>Email</code> attribute
     * type, the system will only consider it a match if the value of the
     * <code>Email</code> field of Profile A matches the value of the
     * <code>Email</code> field of Profile B.</p> <p>If you choose
     * <code>MANY_TO_MANY</code>, the system can match attributes across the sub-types
     * of an attribute type. For example, if the value of the <code>Email</code> field
     * of Profile A matches the value of <code>BusinessEmail</code> field of Profile B,
     * the two profiles are matched on the <code>Email</code> attribute type. </p>
     */
    inline AttributeMatchingModel GetAttributeMatchingModel() const { return m_attributeMatchingModel; }
    inline bool AttributeMatchingModelHasBeenSet() const { return m_attributeMatchingModelHasBeenSet; }
    inline void SetAttributeMatchingModel(AttributeMatchingModel value) { m_attributeMatchingModelHasBeenSet = true; m_attributeMatchingModel = value; }
    inline NamespaceRuleBasedProperties& WithAttributeMatchingModel(AttributeMatchingModel value) { SetAttributeMatchingModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of matching record that is allowed to be used in an ID mapping
     * workflow. </p> <p>If the value is set to <code>ONE_SOURCE_TO_ONE_TARGET</code>,
     * only one record in the source is matched to one record in the target. </p> <p>If
     * the value is set to <code>MANY_SOURCE_TO_ONE_TARGET</code>, all matching records
     * in the source are matched to one record in the target.</p>
     */
    inline const Aws::Vector<RecordMatchingModel>& GetRecordMatchingModels() const { return m_recordMatchingModels; }
    inline bool RecordMatchingModelsHasBeenSet() const { return m_recordMatchingModelsHasBeenSet; }
    template<typename RecordMatchingModelsT = Aws::Vector<RecordMatchingModel>>
    void SetRecordMatchingModels(RecordMatchingModelsT&& value) { m_recordMatchingModelsHasBeenSet = true; m_recordMatchingModels = std::forward<RecordMatchingModelsT>(value); }
    template<typename RecordMatchingModelsT = Aws::Vector<RecordMatchingModel>>
    NamespaceRuleBasedProperties& WithRecordMatchingModels(RecordMatchingModelsT&& value) { SetRecordMatchingModels(std::forward<RecordMatchingModelsT>(value)); return *this;}
    inline NamespaceRuleBasedProperties& AddRecordMatchingModels(RecordMatchingModel value) { m_recordMatchingModelsHasBeenSet = true; m_recordMatchingModels.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;

    Aws::Vector<IdMappingWorkflowRuleDefinitionType> m_ruleDefinitionTypes;
    bool m_ruleDefinitionTypesHasBeenSet = false;

    AttributeMatchingModel m_attributeMatchingModel{AttributeMatchingModel::NOT_SET};
    bool m_attributeMatchingModelHasBeenSet = false;

    Aws::Vector<RecordMatchingModel> m_recordMatchingModels;
    bool m_recordMatchingModelsHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
