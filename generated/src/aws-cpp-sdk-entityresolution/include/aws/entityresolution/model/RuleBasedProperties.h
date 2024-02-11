/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/model/AttributeMatchingModel.h>
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
   * <p>An object which defines the list of matching rules to run and has a field
   * <code>Rules</code>, which is a list of rule objects.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/RuleBasedProperties">AWS
   * API Reference</a></p>
   */
  class RuleBasedProperties
  {
  public:
    AWS_ENTITYRESOLUTION_API RuleBasedProperties();
    AWS_ENTITYRESOLUTION_API RuleBasedProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API RuleBasedProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The comparison type. You can either choose <code>ONE_TO_ONE</code> or
     * <code>MANY_TO_MANY</code> as the AttributeMatchingModel. When choosing
     * <code>MANY_TO_MANY</code>, the system can match attributes across the sub-types
     * of an attribute type. For example, if the value of the <code>Email</code> field
     * of Profile A and the value of <code>BusinessEmail</code> field of Profile B
     * matches, the two profiles are matched on the <code>Email</code> type. When
     * choosing <code>ONE_TO_ONE</code> ,the system can only match if the sub-types are
     * exact matches. For example, only when the value of the <code>Email</code> field
     * of Profile A and the value of the <code>Email</code> field of Profile B matches,
     * the two profiles are matched on the <code>Email</code> type.</p>
     */
    inline const AttributeMatchingModel& GetAttributeMatchingModel() const{ return m_attributeMatchingModel; }

    /**
     * <p>The comparison type. You can either choose <code>ONE_TO_ONE</code> or
     * <code>MANY_TO_MANY</code> as the AttributeMatchingModel. When choosing
     * <code>MANY_TO_MANY</code>, the system can match attributes across the sub-types
     * of an attribute type. For example, if the value of the <code>Email</code> field
     * of Profile A and the value of <code>BusinessEmail</code> field of Profile B
     * matches, the two profiles are matched on the <code>Email</code> type. When
     * choosing <code>ONE_TO_ONE</code> ,the system can only match if the sub-types are
     * exact matches. For example, only when the value of the <code>Email</code> field
     * of Profile A and the value of the <code>Email</code> field of Profile B matches,
     * the two profiles are matched on the <code>Email</code> type.</p>
     */
    inline bool AttributeMatchingModelHasBeenSet() const { return m_attributeMatchingModelHasBeenSet; }

    /**
     * <p>The comparison type. You can either choose <code>ONE_TO_ONE</code> or
     * <code>MANY_TO_MANY</code> as the AttributeMatchingModel. When choosing
     * <code>MANY_TO_MANY</code>, the system can match attributes across the sub-types
     * of an attribute type. For example, if the value of the <code>Email</code> field
     * of Profile A and the value of <code>BusinessEmail</code> field of Profile B
     * matches, the two profiles are matched on the <code>Email</code> type. When
     * choosing <code>ONE_TO_ONE</code> ,the system can only match if the sub-types are
     * exact matches. For example, only when the value of the <code>Email</code> field
     * of Profile A and the value of the <code>Email</code> field of Profile B matches,
     * the two profiles are matched on the <code>Email</code> type.</p>
     */
    inline void SetAttributeMatchingModel(const AttributeMatchingModel& value) { m_attributeMatchingModelHasBeenSet = true; m_attributeMatchingModel = value; }

    /**
     * <p>The comparison type. You can either choose <code>ONE_TO_ONE</code> or
     * <code>MANY_TO_MANY</code> as the AttributeMatchingModel. When choosing
     * <code>MANY_TO_MANY</code>, the system can match attributes across the sub-types
     * of an attribute type. For example, if the value of the <code>Email</code> field
     * of Profile A and the value of <code>BusinessEmail</code> field of Profile B
     * matches, the two profiles are matched on the <code>Email</code> type. When
     * choosing <code>ONE_TO_ONE</code> ,the system can only match if the sub-types are
     * exact matches. For example, only when the value of the <code>Email</code> field
     * of Profile A and the value of the <code>Email</code> field of Profile B matches,
     * the two profiles are matched on the <code>Email</code> type.</p>
     */
    inline void SetAttributeMatchingModel(AttributeMatchingModel&& value) { m_attributeMatchingModelHasBeenSet = true; m_attributeMatchingModel = std::move(value); }

    /**
     * <p>The comparison type. You can either choose <code>ONE_TO_ONE</code> or
     * <code>MANY_TO_MANY</code> as the AttributeMatchingModel. When choosing
     * <code>MANY_TO_MANY</code>, the system can match attributes across the sub-types
     * of an attribute type. For example, if the value of the <code>Email</code> field
     * of Profile A and the value of <code>BusinessEmail</code> field of Profile B
     * matches, the two profiles are matched on the <code>Email</code> type. When
     * choosing <code>ONE_TO_ONE</code> ,the system can only match if the sub-types are
     * exact matches. For example, only when the value of the <code>Email</code> field
     * of Profile A and the value of the <code>Email</code> field of Profile B matches,
     * the two profiles are matched on the <code>Email</code> type.</p>
     */
    inline RuleBasedProperties& WithAttributeMatchingModel(const AttributeMatchingModel& value) { SetAttributeMatchingModel(value); return *this;}

    /**
     * <p>The comparison type. You can either choose <code>ONE_TO_ONE</code> or
     * <code>MANY_TO_MANY</code> as the AttributeMatchingModel. When choosing
     * <code>MANY_TO_MANY</code>, the system can match attributes across the sub-types
     * of an attribute type. For example, if the value of the <code>Email</code> field
     * of Profile A and the value of <code>BusinessEmail</code> field of Profile B
     * matches, the two profiles are matched on the <code>Email</code> type. When
     * choosing <code>ONE_TO_ONE</code> ,the system can only match if the sub-types are
     * exact matches. For example, only when the value of the <code>Email</code> field
     * of Profile A and the value of the <code>Email</code> field of Profile B matches,
     * the two profiles are matched on the <code>Email</code> type.</p>
     */
    inline RuleBasedProperties& WithAttributeMatchingModel(AttributeMatchingModel&& value) { SetAttributeMatchingModel(std::move(value)); return *this;}


    /**
     * <p>A list of <code>Rule</code> objects, each of which have fields
     * <code>RuleName</code> and <code>MatchingKeys</code>.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }

    /**
     * <p>A list of <code>Rule</code> objects, each of which have fields
     * <code>RuleName</code> and <code>MatchingKeys</code>.</p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>A list of <code>Rule</code> objects, each of which have fields
     * <code>RuleName</code> and <code>MatchingKeys</code>.</p>
     */
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>A list of <code>Rule</code> objects, each of which have fields
     * <code>RuleName</code> and <code>MatchingKeys</code>.</p>
     */
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>A list of <code>Rule</code> objects, each of which have fields
     * <code>RuleName</code> and <code>MatchingKeys</code>.</p>
     */
    inline RuleBasedProperties& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}

    /**
     * <p>A list of <code>Rule</code> objects, each of which have fields
     * <code>RuleName</code> and <code>MatchingKeys</code>.</p>
     */
    inline RuleBasedProperties& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>A list of <code>Rule</code> objects, each of which have fields
     * <code>RuleName</code> and <code>MatchingKeys</code>.</p>
     */
    inline RuleBasedProperties& AddRules(const Rule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>A list of <code>Rule</code> objects, each of which have fields
     * <code>RuleName</code> and <code>MatchingKeys</code>.</p>
     */
    inline RuleBasedProperties& AddRules(Rule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }

  private:

    AttributeMatchingModel m_attributeMatchingModel;
    bool m_attributeMatchingModelHasBeenSet = false;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
