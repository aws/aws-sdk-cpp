﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/model/AttributeMatchingModel.h>
#include <aws/entityresolution/model/RecordMatchingModel.h>
#include <aws/entityresolution/model/IdMappingWorkflowRuleDefinitionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p> An object that defines the list of matching rules to run in an ID mapping
   * workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/IdMappingRuleBasedProperties">AWS
   * API Reference</a></p>
   */
  class IdMappingRuleBasedProperties
  {
  public:
    AWS_ENTITYRESOLUTION_API IdMappingRuleBasedProperties() = default;
    AWS_ENTITYRESOLUTION_API IdMappingRuleBasedProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API IdMappingRuleBasedProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The comparison type. You can either choose <code>ONE_TO_ONE</code> or
     * <code>MANY_TO_MANY</code> as the <code>attributeMatchingModel</code>. </p> <p>If
     * you choose <code>MANY_TO_MANY</code>, the system can match attributes across the
     * sub-types of an attribute type. For example, if the value of the
     * <code>Email</code> field of Profile A matches the value of the
     * <code>BusinessEmail</code> field of Profile B, the two profiles are matched on
     * the <code>Email</code> attribute type. </p> <p>If you choose
     * <code>ONE_TO_ONE</code>, the system can only match attributes if the sub-types
     * are an exact match. For example, for the <code>Email</code> attribute type, the
     * system will only consider it a match if the value of the <code>Email</code>
     * field of Profile A matches the value of the <code>Email</code> field of Profile
     * B.</p>
     */
    inline AttributeMatchingModel GetAttributeMatchingModel() const { return m_attributeMatchingModel; }
    inline bool AttributeMatchingModelHasBeenSet() const { return m_attributeMatchingModelHasBeenSet; }
    inline void SetAttributeMatchingModel(AttributeMatchingModel value) { m_attributeMatchingModelHasBeenSet = true; m_attributeMatchingModel = value; }
    inline IdMappingRuleBasedProperties& WithAttributeMatchingModel(AttributeMatchingModel value) { SetAttributeMatchingModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of matching record that is allowed to be used in an ID mapping
     * workflow. </p> <p>If the value is set to <code>ONE_SOURCE_TO_ONE_TARGET</code>,
     * only one record in the source can be matched to the same record in the
     * target.</p> <p>If the value is set to <code>MANY_SOURCE_TO_ONE_TARGET</code>,
     * multiple records in the source can be matched to one record in the target.</p>
     */
    inline RecordMatchingModel GetRecordMatchingModel() const { return m_recordMatchingModel; }
    inline bool RecordMatchingModelHasBeenSet() const { return m_recordMatchingModelHasBeenSet; }
    inline void SetRecordMatchingModel(RecordMatchingModel value) { m_recordMatchingModelHasBeenSet = true; m_recordMatchingModel = value; }
    inline IdMappingRuleBasedProperties& WithRecordMatchingModel(RecordMatchingModel value) { SetRecordMatchingModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The set of rules you can use in an ID mapping workflow. The limitations
     * specified for the source or target to define the match rules must be
     * compatible.</p>
     */
    inline IdMappingWorkflowRuleDefinitionType GetRuleDefinitionType() const { return m_ruleDefinitionType; }
    inline bool RuleDefinitionTypeHasBeenSet() const { return m_ruleDefinitionTypeHasBeenSet; }
    inline void SetRuleDefinitionType(IdMappingWorkflowRuleDefinitionType value) { m_ruleDefinitionTypeHasBeenSet = true; m_ruleDefinitionType = value; }
    inline IdMappingRuleBasedProperties& WithRuleDefinitionType(IdMappingWorkflowRuleDefinitionType value) { SetRuleDefinitionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The rules that can be used for ID mapping.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<Rule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<Rule>>
    IdMappingRuleBasedProperties& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = Rule>
    IdMappingRuleBasedProperties& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}
  private:

    AttributeMatchingModel m_attributeMatchingModel{AttributeMatchingModel::NOT_SET};
    bool m_attributeMatchingModelHasBeenSet = false;

    RecordMatchingModel m_recordMatchingModel{RecordMatchingModel::NOT_SET};
    bool m_recordMatchingModelHasBeenSet = false;

    IdMappingWorkflowRuleDefinitionType m_ruleDefinitionType{IdMappingWorkflowRuleDefinitionType::NOT_SET};
    bool m_ruleDefinitionTypeHasBeenSet = false;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
