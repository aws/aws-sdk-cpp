/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/TimestampRange.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/Severity.h>
#include <aws/inspector/model/Attribute.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>This data type is used as a request parameter in the <a>ListFindings</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/FindingFilter">AWS
   * API Reference</a></p>
   */
  class FindingFilter
  {
  public:
    AWS_INSPECTOR_API FindingFilter();
    AWS_INSPECTOR_API FindingFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API FindingFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>agentId</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentIds() const{ return m_agentIds; }
    inline bool AgentIdsHasBeenSet() const { return m_agentIdsHasBeenSet; }
    inline void SetAgentIds(const Aws::Vector<Aws::String>& value) { m_agentIdsHasBeenSet = true; m_agentIds = value; }
    inline void SetAgentIds(Aws::Vector<Aws::String>&& value) { m_agentIdsHasBeenSet = true; m_agentIds = std::move(value); }
    inline FindingFilter& WithAgentIds(const Aws::Vector<Aws::String>& value) { SetAgentIds(value); return *this;}
    inline FindingFilter& WithAgentIds(Aws::Vector<Aws::String>&& value) { SetAgentIds(std::move(value)); return *this;}
    inline FindingFilter& AddAgentIds(const Aws::String& value) { m_agentIdsHasBeenSet = true; m_agentIds.push_back(value); return *this; }
    inline FindingFilter& AddAgentIds(Aws::String&& value) { m_agentIdsHasBeenSet = true; m_agentIds.push_back(std::move(value)); return *this; }
    inline FindingFilter& AddAgentIds(const char* value) { m_agentIdsHasBeenSet = true; m_agentIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the
     * <b>autoScalingGroup</b> property of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoScalingGroups() const{ return m_autoScalingGroups; }
    inline bool AutoScalingGroupsHasBeenSet() const { return m_autoScalingGroupsHasBeenSet; }
    inline void SetAutoScalingGroups(const Aws::Vector<Aws::String>& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = value; }
    inline void SetAutoScalingGroups(Aws::Vector<Aws::String>&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = std::move(value); }
    inline FindingFilter& WithAutoScalingGroups(const Aws::Vector<Aws::String>& value) { SetAutoScalingGroups(value); return *this;}
    inline FindingFilter& WithAutoScalingGroups(Aws::Vector<Aws::String>&& value) { SetAutoScalingGroups(std::move(value)); return *this;}
    inline FindingFilter& AddAutoScalingGroups(const Aws::String& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }
    inline FindingFilter& AddAutoScalingGroups(Aws::String&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(std::move(value)); return *this; }
    inline FindingFilter& AddAutoScalingGroups(const char* value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>ruleName</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRuleNames() const{ return m_ruleNames; }
    inline bool RuleNamesHasBeenSet() const { return m_ruleNamesHasBeenSet; }
    inline void SetRuleNames(const Aws::Vector<Aws::String>& value) { m_ruleNamesHasBeenSet = true; m_ruleNames = value; }
    inline void SetRuleNames(Aws::Vector<Aws::String>&& value) { m_ruleNamesHasBeenSet = true; m_ruleNames = std::move(value); }
    inline FindingFilter& WithRuleNames(const Aws::Vector<Aws::String>& value) { SetRuleNames(value); return *this;}
    inline FindingFilter& WithRuleNames(Aws::Vector<Aws::String>&& value) { SetRuleNames(std::move(value)); return *this;}
    inline FindingFilter& AddRuleNames(const Aws::String& value) { m_ruleNamesHasBeenSet = true; m_ruleNames.push_back(value); return *this; }
    inline FindingFilter& AddRuleNames(Aws::String&& value) { m_ruleNamesHasBeenSet = true; m_ruleNames.push_back(std::move(value)); return *this; }
    inline FindingFilter& AddRuleNames(const char* value) { m_ruleNamesHasBeenSet = true; m_ruleNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>severity</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Severity>& GetSeverities() const{ return m_severities; }
    inline bool SeveritiesHasBeenSet() const { return m_severitiesHasBeenSet; }
    inline void SetSeverities(const Aws::Vector<Severity>& value) { m_severitiesHasBeenSet = true; m_severities = value; }
    inline void SetSeverities(Aws::Vector<Severity>&& value) { m_severitiesHasBeenSet = true; m_severities = std::move(value); }
    inline FindingFilter& WithSeverities(const Aws::Vector<Severity>& value) { SetSeverities(value); return *this;}
    inline FindingFilter& WithSeverities(Aws::Vector<Severity>&& value) { SetSeverities(std::move(value)); return *this;}
    inline FindingFilter& AddSeverities(const Severity& value) { m_severitiesHasBeenSet = true; m_severities.push_back(value); return *this; }
    inline FindingFilter& AddSeverities(Severity&& value) { m_severitiesHasBeenSet = true; m_severities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the
     * <b>rulesPackageArn</b> property of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesPackageArns() const{ return m_rulesPackageArns; }
    inline bool RulesPackageArnsHasBeenSet() const { return m_rulesPackageArnsHasBeenSet; }
    inline void SetRulesPackageArns(const Aws::Vector<Aws::String>& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = value; }
    inline void SetRulesPackageArns(Aws::Vector<Aws::String>&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = std::move(value); }
    inline FindingFilter& WithRulesPackageArns(const Aws::Vector<Aws::String>& value) { SetRulesPackageArns(value); return *this;}
    inline FindingFilter& WithRulesPackageArns(Aws::Vector<Aws::String>&& value) { SetRulesPackageArns(std::move(value)); return *this;}
    inline FindingFilter& AddRulesPackageArns(const Aws::String& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(value); return *this; }
    inline FindingFilter& AddRulesPackageArns(Aws::String&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(std::move(value)); return *this; }
    inline FindingFilter& AddRulesPackageArns(const char* value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>For a record to match a filter, the list of values that are specified for
     * this data type property must be contained in the list of values of the
     * <b>attributes</b> property of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline FindingFilter& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}
    inline FindingFilter& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(std::move(value)); return *this;}
    inline FindingFilter& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }
    inline FindingFilter& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must be contained in the list of values of the
     * <b>userAttributes</b> property of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Attribute>& GetUserAttributes() const{ return m_userAttributes; }
    inline bool UserAttributesHasBeenSet() const { return m_userAttributesHasBeenSet; }
    inline void SetUserAttributes(const Aws::Vector<Attribute>& value) { m_userAttributesHasBeenSet = true; m_userAttributes = value; }
    inline void SetUserAttributes(Aws::Vector<Attribute>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = std::move(value); }
    inline FindingFilter& WithUserAttributes(const Aws::Vector<Attribute>& value) { SetUserAttributes(value); return *this;}
    inline FindingFilter& WithUserAttributes(Aws::Vector<Attribute>&& value) { SetUserAttributes(std::move(value)); return *this;}
    inline FindingFilter& AddUserAttributes(const Attribute& value) { m_userAttributesHasBeenSet = true; m_userAttributes.push_back(value); return *this; }
    inline FindingFilter& AddUserAttributes(Attribute&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time range during which the finding is generated.</p>
     */
    inline const TimestampRange& GetCreationTimeRange() const{ return m_creationTimeRange; }
    inline bool CreationTimeRangeHasBeenSet() const { return m_creationTimeRangeHasBeenSet; }
    inline void SetCreationTimeRange(const TimestampRange& value) { m_creationTimeRangeHasBeenSet = true; m_creationTimeRange = value; }
    inline void SetCreationTimeRange(TimestampRange&& value) { m_creationTimeRangeHasBeenSet = true; m_creationTimeRange = std::move(value); }
    inline FindingFilter& WithCreationTimeRange(const TimestampRange& value) { SetCreationTimeRange(value); return *this;}
    inline FindingFilter& WithCreationTimeRange(TimestampRange&& value) { SetCreationTimeRange(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_agentIds;
    bool m_agentIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_autoScalingGroups;
    bool m_autoScalingGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_ruleNames;
    bool m_ruleNamesHasBeenSet = false;

    Aws::Vector<Severity> m_severities;
    bool m_severitiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_rulesPackageArns;
    bool m_rulesPackageArnsHasBeenSet = false;

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Vector<Attribute> m_userAttributes;
    bool m_userAttributesHasBeenSet = false;

    TimestampRange m_creationTimeRange;
    bool m_creationTimeRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
