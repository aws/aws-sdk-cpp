/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/AttributeMatchingModel.h>
#include <aws/entityresolution/model/MatchPurpose.h>
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
   * <p>An object which defines the list of matching rules to run in a matching
   * workflow. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/RuleBasedProperties">AWS
   * API Reference</a></p>
   */
  class RuleBasedProperties
  {
  public:
    AWS_ENTITYRESOLUTION_API RuleBasedProperties() = default;
    AWS_ENTITYRESOLUTION_API RuleBasedProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API RuleBasedProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of <code>Rule</code> objects, each of which have fields
     * <code>RuleName</code> and <code>MatchingKeys</code>.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<Rule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<Rule>>
    RuleBasedProperties& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = Rule>
    RuleBasedProperties& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The comparison type. You can choose <code>ONE_TO_ONE</code> or
     * <code>MANY_TO_MANY</code> as the <code>attributeMatchingModel</code>. </p> <p>If
     * you choose <code>ONE_TO_ONE</code>, the system can only match attributes if the
     * sub-types are an exact match. For example, for the <code>Email</code> attribute
     * type, the system will only consider it a match if the value of the
     * <code>Email</code> field of Profile A matches the value of the
     * <code>Email</code> field of Profile B.</p> <p>If you choose
     * <code>MANY_TO_MANY</code>, the system can match attributes across the sub-types
     * of an attribute type. For example, if the value of the <code>Email</code> field
     * of Profile A and the value of <code>BusinessEmail</code> field of Profile B
     * matches, the two profiles are matched on the <code>Email</code> attribute type.
     * </p>
     */
    inline AttributeMatchingModel GetAttributeMatchingModel() const { return m_attributeMatchingModel; }
    inline bool AttributeMatchingModelHasBeenSet() const { return m_attributeMatchingModelHasBeenSet; }
    inline void SetAttributeMatchingModel(AttributeMatchingModel value) { m_attributeMatchingModelHasBeenSet = true; m_attributeMatchingModel = value; }
    inline RuleBasedProperties& WithAttributeMatchingModel(AttributeMatchingModel value) { SetAttributeMatchingModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An indicator of whether to generate IDs and index the data or not.</p> <p>If
     * you choose <code>IDENTIFIER_GENERATION</code>, the process generates IDs and
     * indexes the data.</p> <p>If you choose <code>INDEXING</code>, the process
     * indexes the data without generating IDs.</p>
     */
    inline MatchPurpose GetMatchPurpose() const { return m_matchPurpose; }
    inline bool MatchPurposeHasBeenSet() const { return m_matchPurposeHasBeenSet; }
    inline void SetMatchPurpose(MatchPurpose value) { m_matchPurposeHasBeenSet = true; m_matchPurpose = value; }
    inline RuleBasedProperties& WithMatchPurpose(MatchPurpose value) { SetMatchPurpose(value); return *this;}
    ///@}
  private:

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;

    AttributeMatchingModel m_attributeMatchingModel{AttributeMatchingModel::NOT_SET};
    bool m_attributeMatchingModelHasBeenSet = false;

    MatchPurpose m_matchPurpose{MatchPurpose::NOT_SET};
    bool m_matchPurposeHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
