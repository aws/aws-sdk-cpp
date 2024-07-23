/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/model/AttributeMatchingModel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/RecordMatchingModel.h>
#include <aws/entityresolution/model/IdMappingWorkflowRuleDefinitionType.h>
#include <aws/entityresolution/model/Rule.h>
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
    AWS_ENTITYRESOLUTION_API NamespaceRuleBasedProperties();
    AWS_ENTITYRESOLUTION_API NamespaceRuleBasedProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API NamespaceRuleBasedProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The comparison type. You can either choose <code>ONE_TO_ONE</code> or
     * <code>MANY_TO_MANY</code> as the <code>attributeMatchingModel</code>. </p> <p>If
     * you choose <code>MANY_TO_MANY</code>, the system can match attributes across the
     * sub-types of an attribute type. For example, if the value of the
     * <code>Email</code> field of Profile A matches the value of
     * <code>BusinessEmail</code> field of Profile B, the two profiles are matched on
     * the <code>Email</code> attribute type. </p> <p>If you choose
     * <code>ONE_TO_ONE</code>, the system can only match attributes if the sub-types
     * are an exact match. For example, for the <code>Email</code> attribute type, the
     * system will only consider it a match if the value of the <code>Email</code>
     * field of Profile A matches the value of the <code>Email</code> field of Profile
     * B.</p>
     */
    inline const AttributeMatchingModel& GetAttributeMatchingModel() const{ return m_attributeMatchingModel; }
    inline bool AttributeMatchingModelHasBeenSet() const { return m_attributeMatchingModelHasBeenSet; }
    inline void SetAttributeMatchingModel(const AttributeMatchingModel& value) { m_attributeMatchingModelHasBeenSet = true; m_attributeMatchingModel = value; }
    inline void SetAttributeMatchingModel(AttributeMatchingModel&& value) { m_attributeMatchingModelHasBeenSet = true; m_attributeMatchingModel = std::move(value); }
    inline NamespaceRuleBasedProperties& WithAttributeMatchingModel(const AttributeMatchingModel& value) { SetAttributeMatchingModel(value); return *this;}
    inline NamespaceRuleBasedProperties& WithAttributeMatchingModel(AttributeMatchingModel&& value) { SetAttributeMatchingModel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of matching record that is allowed to be used in an ID mapping
     * workflow. </p> <p>If the value is set to <code>ONE_SOURCE_TO_ONE_TARGET</code>,
     * only one record in the source is matched to one record in the target. </p> <p>If
     * the value is set to <code>MANY_SOURCE_TO_ONE_TARGET</code>, all matching records
     * in the source are matched to one record in the target.</p>
     */
    inline const Aws::Vector<RecordMatchingModel>& GetRecordMatchingModels() const{ return m_recordMatchingModels; }
    inline bool RecordMatchingModelsHasBeenSet() const { return m_recordMatchingModelsHasBeenSet; }
    inline void SetRecordMatchingModels(const Aws::Vector<RecordMatchingModel>& value) { m_recordMatchingModelsHasBeenSet = true; m_recordMatchingModels = value; }
    inline void SetRecordMatchingModels(Aws::Vector<RecordMatchingModel>&& value) { m_recordMatchingModelsHasBeenSet = true; m_recordMatchingModels = std::move(value); }
    inline NamespaceRuleBasedProperties& WithRecordMatchingModels(const Aws::Vector<RecordMatchingModel>& value) { SetRecordMatchingModels(value); return *this;}
    inline NamespaceRuleBasedProperties& WithRecordMatchingModels(Aws::Vector<RecordMatchingModel>&& value) { SetRecordMatchingModels(std::move(value)); return *this;}
    inline NamespaceRuleBasedProperties& AddRecordMatchingModels(const RecordMatchingModel& value) { m_recordMatchingModelsHasBeenSet = true; m_recordMatchingModels.push_back(value); return *this; }
    inline NamespaceRuleBasedProperties& AddRecordMatchingModels(RecordMatchingModel&& value) { m_recordMatchingModelsHasBeenSet = true; m_recordMatchingModels.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The sets of rules you can use in an ID mapping workflow. The limitations
     * specified for the source and target must be compatible.</p>
     */
    inline const Aws::Vector<IdMappingWorkflowRuleDefinitionType>& GetRuleDefinitionTypes() const{ return m_ruleDefinitionTypes; }
    inline bool RuleDefinitionTypesHasBeenSet() const { return m_ruleDefinitionTypesHasBeenSet; }
    inline void SetRuleDefinitionTypes(const Aws::Vector<IdMappingWorkflowRuleDefinitionType>& value) { m_ruleDefinitionTypesHasBeenSet = true; m_ruleDefinitionTypes = value; }
    inline void SetRuleDefinitionTypes(Aws::Vector<IdMappingWorkflowRuleDefinitionType>&& value) { m_ruleDefinitionTypesHasBeenSet = true; m_ruleDefinitionTypes = std::move(value); }
    inline NamespaceRuleBasedProperties& WithRuleDefinitionTypes(const Aws::Vector<IdMappingWorkflowRuleDefinitionType>& value) { SetRuleDefinitionTypes(value); return *this;}
    inline NamespaceRuleBasedProperties& WithRuleDefinitionTypes(Aws::Vector<IdMappingWorkflowRuleDefinitionType>&& value) { SetRuleDefinitionTypes(std::move(value)); return *this;}
    inline NamespaceRuleBasedProperties& AddRuleDefinitionTypes(const IdMappingWorkflowRuleDefinitionType& value) { m_ruleDefinitionTypesHasBeenSet = true; m_ruleDefinitionTypes.push_back(value); return *this; }
    inline NamespaceRuleBasedProperties& AddRuleDefinitionTypes(IdMappingWorkflowRuleDefinitionType&& value) { m_ruleDefinitionTypesHasBeenSet = true; m_ruleDefinitionTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The rules for the ID namespace.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rulesHasBeenSet = true; m_rules = value; }
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }
    inline NamespaceRuleBasedProperties& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}
    inline NamespaceRuleBasedProperties& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}
    inline NamespaceRuleBasedProperties& AddRules(const Rule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }
    inline NamespaceRuleBasedProperties& AddRules(Rule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }
    ///@}
  private:

    AttributeMatchingModel m_attributeMatchingModel;
    bool m_attributeMatchingModelHasBeenSet = false;

    Aws::Vector<RecordMatchingModel> m_recordMatchingModels;
    bool m_recordMatchingModelsHasBeenSet = false;

    Aws::Vector<IdMappingWorkflowRuleDefinitionType> m_ruleDefinitionTypes;
    bool m_ruleDefinitionTypesHasBeenSet = false;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
