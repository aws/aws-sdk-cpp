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
    AWS_INSPECTOR_API FindingFilter() = default;
    AWS_INSPECTOR_API FindingFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API FindingFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>agentId</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentIds() const { return m_agentIds; }
    inline bool AgentIdsHasBeenSet() const { return m_agentIdsHasBeenSet; }
    template<typename AgentIdsT = Aws::Vector<Aws::String>>
    void SetAgentIds(AgentIdsT&& value) { m_agentIdsHasBeenSet = true; m_agentIds = std::forward<AgentIdsT>(value); }
    template<typename AgentIdsT = Aws::Vector<Aws::String>>
    FindingFilter& WithAgentIds(AgentIdsT&& value) { SetAgentIds(std::forward<AgentIdsT>(value)); return *this;}
    template<typename AgentIdsT = Aws::String>
    FindingFilter& AddAgentIds(AgentIdsT&& value) { m_agentIdsHasBeenSet = true; m_agentIds.emplace_back(std::forward<AgentIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the
     * <b>autoScalingGroup</b> property of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoScalingGroups() const { return m_autoScalingGroups; }
    inline bool AutoScalingGroupsHasBeenSet() const { return m_autoScalingGroupsHasBeenSet; }
    template<typename AutoScalingGroupsT = Aws::Vector<Aws::String>>
    void SetAutoScalingGroups(AutoScalingGroupsT&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = std::forward<AutoScalingGroupsT>(value); }
    template<typename AutoScalingGroupsT = Aws::Vector<Aws::String>>
    FindingFilter& WithAutoScalingGroups(AutoScalingGroupsT&& value) { SetAutoScalingGroups(std::forward<AutoScalingGroupsT>(value)); return *this;}
    template<typename AutoScalingGroupsT = Aws::String>
    FindingFilter& AddAutoScalingGroups(AutoScalingGroupsT&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.emplace_back(std::forward<AutoScalingGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>ruleName</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRuleNames() const { return m_ruleNames; }
    inline bool RuleNamesHasBeenSet() const { return m_ruleNamesHasBeenSet; }
    template<typename RuleNamesT = Aws::Vector<Aws::String>>
    void SetRuleNames(RuleNamesT&& value) { m_ruleNamesHasBeenSet = true; m_ruleNames = std::forward<RuleNamesT>(value); }
    template<typename RuleNamesT = Aws::Vector<Aws::String>>
    FindingFilter& WithRuleNames(RuleNamesT&& value) { SetRuleNames(std::forward<RuleNamesT>(value)); return *this;}
    template<typename RuleNamesT = Aws::String>
    FindingFilter& AddRuleNames(RuleNamesT&& value) { m_ruleNamesHasBeenSet = true; m_ruleNames.emplace_back(std::forward<RuleNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>severity</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Severity>& GetSeverities() const { return m_severities; }
    inline bool SeveritiesHasBeenSet() const { return m_severitiesHasBeenSet; }
    template<typename SeveritiesT = Aws::Vector<Severity>>
    void SetSeverities(SeveritiesT&& value) { m_severitiesHasBeenSet = true; m_severities = std::forward<SeveritiesT>(value); }
    template<typename SeveritiesT = Aws::Vector<Severity>>
    FindingFilter& WithSeverities(SeveritiesT&& value) { SetSeverities(std::forward<SeveritiesT>(value)); return *this;}
    inline FindingFilter& AddSeverities(Severity value) { m_severitiesHasBeenSet = true; m_severities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the
     * <b>rulesPackageArn</b> property of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesPackageArns() const { return m_rulesPackageArns; }
    inline bool RulesPackageArnsHasBeenSet() const { return m_rulesPackageArnsHasBeenSet; }
    template<typename RulesPackageArnsT = Aws::Vector<Aws::String>>
    void SetRulesPackageArns(RulesPackageArnsT&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = std::forward<RulesPackageArnsT>(value); }
    template<typename RulesPackageArnsT = Aws::Vector<Aws::String>>
    FindingFilter& WithRulesPackageArns(RulesPackageArnsT&& value) { SetRulesPackageArns(std::forward<RulesPackageArnsT>(value)); return *this;}
    template<typename RulesPackageArnsT = Aws::String>
    FindingFilter& AddRulesPackageArns(RulesPackageArnsT&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.emplace_back(std::forward<RulesPackageArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For a record to match a filter, the list of values that are specified for
     * this data type property must be contained in the list of values of the
     * <b>attributes</b> property of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<Attribute>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<Attribute>>
    FindingFilter& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = Attribute>
    FindingFilter& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must be contained in the list of values of the
     * <b>userAttributes</b> property of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Attribute>& GetUserAttributes() const { return m_userAttributes; }
    inline bool UserAttributesHasBeenSet() const { return m_userAttributesHasBeenSet; }
    template<typename UserAttributesT = Aws::Vector<Attribute>>
    void SetUserAttributes(UserAttributesT&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = std::forward<UserAttributesT>(value); }
    template<typename UserAttributesT = Aws::Vector<Attribute>>
    FindingFilter& WithUserAttributes(UserAttributesT&& value) { SetUserAttributes(std::forward<UserAttributesT>(value)); return *this;}
    template<typename UserAttributesT = Attribute>
    FindingFilter& AddUserAttributes(UserAttributesT&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace_back(std::forward<UserAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time range during which the finding is generated.</p>
     */
    inline const TimestampRange& GetCreationTimeRange() const { return m_creationTimeRange; }
    inline bool CreationTimeRangeHasBeenSet() const { return m_creationTimeRangeHasBeenSet; }
    template<typename CreationTimeRangeT = TimestampRange>
    void SetCreationTimeRange(CreationTimeRangeT&& value) { m_creationTimeRangeHasBeenSet = true; m_creationTimeRange = std::forward<CreationTimeRangeT>(value); }
    template<typename CreationTimeRangeT = TimestampRange>
    FindingFilter& WithCreationTimeRange(CreationTimeRangeT&& value) { SetCreationTimeRange(std::forward<CreationTimeRangeT>(value)); return *this;}
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
