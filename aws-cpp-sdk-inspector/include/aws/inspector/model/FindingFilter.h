/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_INSPECTOR_API FindingFilter
  {
  public:
    FindingFilter();
    FindingFilter(Aws::Utils::Json::JsonView jsonValue);
    FindingFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>agentId</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentIds() const{ return m_agentIds; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>agentId</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline bool AgentIdsHasBeenSet() const { return m_agentIdsHasBeenSet; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>agentId</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline void SetAgentIds(const Aws::Vector<Aws::String>& value) { m_agentIdsHasBeenSet = true; m_agentIds = value; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>agentId</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline void SetAgentIds(Aws::Vector<Aws::String>&& value) { m_agentIdsHasBeenSet = true; m_agentIds = std::move(value); }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>agentId</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& WithAgentIds(const Aws::Vector<Aws::String>& value) { SetAgentIds(value); return *this;}

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>agentId</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& WithAgentIds(Aws::Vector<Aws::String>&& value) { SetAgentIds(std::move(value)); return *this;}

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>agentId</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& AddAgentIds(const Aws::String& value) { m_agentIdsHasBeenSet = true; m_agentIds.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>agentId</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& AddAgentIds(Aws::String&& value) { m_agentIdsHasBeenSet = true; m_agentIds.push_back(std::move(value)); return *this; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>agentId</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& AddAgentIds(const char* value) { m_agentIdsHasBeenSet = true; m_agentIds.push_back(value); return *this; }


    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the
     * <b>autoScalingGroup</b> property of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoScalingGroups() const{ return m_autoScalingGroups; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the
     * <b>autoScalingGroup</b> property of the <a>Finding</a> data type.</p>
     */
    inline bool AutoScalingGroupsHasBeenSet() const { return m_autoScalingGroupsHasBeenSet; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the
     * <b>autoScalingGroup</b> property of the <a>Finding</a> data type.</p>
     */
    inline void SetAutoScalingGroups(const Aws::Vector<Aws::String>& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = value; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the
     * <b>autoScalingGroup</b> property of the <a>Finding</a> data type.</p>
     */
    inline void SetAutoScalingGroups(Aws::Vector<Aws::String>&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = std::move(value); }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the
     * <b>autoScalingGroup</b> property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& WithAutoScalingGroups(const Aws::Vector<Aws::String>& value) { SetAutoScalingGroups(value); return *this;}

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the
     * <b>autoScalingGroup</b> property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& WithAutoScalingGroups(Aws::Vector<Aws::String>&& value) { SetAutoScalingGroups(std::move(value)); return *this;}

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the
     * <b>autoScalingGroup</b> property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& AddAutoScalingGroups(const Aws::String& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the
     * <b>autoScalingGroup</b> property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& AddAutoScalingGroups(Aws::String&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the
     * <b>autoScalingGroup</b> property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& AddAutoScalingGroups(const char* value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }


    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>ruleName</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRuleNames() const{ return m_ruleNames; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>ruleName</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline bool RuleNamesHasBeenSet() const { return m_ruleNamesHasBeenSet; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>ruleName</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline void SetRuleNames(const Aws::Vector<Aws::String>& value) { m_ruleNamesHasBeenSet = true; m_ruleNames = value; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>ruleName</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline void SetRuleNames(Aws::Vector<Aws::String>&& value) { m_ruleNamesHasBeenSet = true; m_ruleNames = std::move(value); }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>ruleName</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& WithRuleNames(const Aws::Vector<Aws::String>& value) { SetRuleNames(value); return *this;}

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>ruleName</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& WithRuleNames(Aws::Vector<Aws::String>&& value) { SetRuleNames(std::move(value)); return *this;}

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>ruleName</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& AddRuleNames(const Aws::String& value) { m_ruleNamesHasBeenSet = true; m_ruleNames.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>ruleName</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& AddRuleNames(Aws::String&& value) { m_ruleNamesHasBeenSet = true; m_ruleNames.push_back(std::move(value)); return *this; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>ruleName</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& AddRuleNames(const char* value) { m_ruleNamesHasBeenSet = true; m_ruleNames.push_back(value); return *this; }


    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>severity</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Severity>& GetSeverities() const{ return m_severities; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>severity</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline bool SeveritiesHasBeenSet() const { return m_severitiesHasBeenSet; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>severity</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline void SetSeverities(const Aws::Vector<Severity>& value) { m_severitiesHasBeenSet = true; m_severities = value; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>severity</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline void SetSeverities(Aws::Vector<Severity>&& value) { m_severitiesHasBeenSet = true; m_severities = std::move(value); }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>severity</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& WithSeverities(const Aws::Vector<Severity>& value) { SetSeverities(value); return *this;}

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>severity</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& WithSeverities(Aws::Vector<Severity>&& value) { SetSeverities(std::move(value)); return *this;}

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>severity</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& AddSeverities(const Severity& value) { m_severitiesHasBeenSet = true; m_severities.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the <b>severity</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& AddSeverities(Severity&& value) { m_severitiesHasBeenSet = true; m_severities.push_back(std::move(value)); return *this; }


    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the
     * <b>rulesPackageArn</b> property of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesPackageArns() const{ return m_rulesPackageArns; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the
     * <b>rulesPackageArn</b> property of the <a>Finding</a> data type.</p>
     */
    inline bool RulesPackageArnsHasBeenSet() const { return m_rulesPackageArnsHasBeenSet; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the
     * <b>rulesPackageArn</b> property of the <a>Finding</a> data type.</p>
     */
    inline void SetRulesPackageArns(const Aws::Vector<Aws::String>& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = value; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the
     * <b>rulesPackageArn</b> property of the <a>Finding</a> data type.</p>
     */
    inline void SetRulesPackageArns(Aws::Vector<Aws::String>&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = std::move(value); }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the
     * <b>rulesPackageArn</b> property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& WithRulesPackageArns(const Aws::Vector<Aws::String>& value) { SetRulesPackageArns(value); return *this;}

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the
     * <b>rulesPackageArn</b> property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& WithRulesPackageArns(Aws::Vector<Aws::String>&& value) { SetRulesPackageArns(std::move(value)); return *this;}

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the
     * <b>rulesPackageArn</b> property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& AddRulesPackageArns(const Aws::String& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the
     * <b>rulesPackageArn</b> property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& AddRulesPackageArns(Aws::String&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(std::move(value)); return *this; }

    /**
     * <p>For a record to match a filter, one of the values that is specified for this
     * data type property must be the exact match of the value of the
     * <b>rulesPackageArn</b> property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& AddRulesPackageArns(const char* value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(value); return *this; }


    /**
     * <p>For a record to match a filter, the list of values that are specified for
     * this data type property must be contained in the list of values of the
     * <b>attributes</b> property of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>For a record to match a filter, the list of values that are specified for
     * this data type property must be contained in the list of values of the
     * <b>attributes</b> property of the <a>Finding</a> data type.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>For a record to match a filter, the list of values that are specified for
     * this data type property must be contained in the list of values of the
     * <b>attributes</b> property of the <a>Finding</a> data type.</p>
     */
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>For a record to match a filter, the list of values that are specified for
     * this data type property must be contained in the list of values of the
     * <b>attributes</b> property of the <a>Finding</a> data type.</p>
     */
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>For a record to match a filter, the list of values that are specified for
     * this data type property must be contained in the list of values of the
     * <b>attributes</b> property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>For a record to match a filter, the list of values that are specified for
     * this data type property must be contained in the list of values of the
     * <b>attributes</b> property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>For a record to match a filter, the list of values that are specified for
     * this data type property must be contained in the list of values of the
     * <b>attributes</b> property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the list of values that are specified for
     * this data type property must be contained in the list of values of the
     * <b>attributes</b> property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }


    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must be contained in the list of values of the
     * <b>userAttributes</b> property of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Attribute>& GetUserAttributes() const{ return m_userAttributes; }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must be contained in the list of values of the
     * <b>userAttributes</b> property of the <a>Finding</a> data type.</p>
     */
    inline bool UserAttributesHasBeenSet() const { return m_userAttributesHasBeenSet; }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must be contained in the list of values of the
     * <b>userAttributes</b> property of the <a>Finding</a> data type.</p>
     */
    inline void SetUserAttributes(const Aws::Vector<Attribute>& value) { m_userAttributesHasBeenSet = true; m_userAttributes = value; }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must be contained in the list of values of the
     * <b>userAttributes</b> property of the <a>Finding</a> data type.</p>
     */
    inline void SetUserAttributes(Aws::Vector<Attribute>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = std::move(value); }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must be contained in the list of values of the
     * <b>userAttributes</b> property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& WithUserAttributes(const Aws::Vector<Attribute>& value) { SetUserAttributes(value); return *this;}

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must be contained in the list of values of the
     * <b>userAttributes</b> property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& WithUserAttributes(Aws::Vector<Attribute>&& value) { SetUserAttributes(std::move(value)); return *this;}

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must be contained in the list of values of the
     * <b>userAttributes</b> property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& AddUserAttributes(const Attribute& value) { m_userAttributesHasBeenSet = true; m_userAttributes.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must be contained in the list of values of the
     * <b>userAttributes</b> property of the <a>Finding</a> data type.</p>
     */
    inline FindingFilter& AddUserAttributes(Attribute&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The time range during which the finding is generated.</p>
     */
    inline const TimestampRange& GetCreationTimeRange() const{ return m_creationTimeRange; }

    /**
     * <p>The time range during which the finding is generated.</p>
     */
    inline bool CreationTimeRangeHasBeenSet() const { return m_creationTimeRangeHasBeenSet; }

    /**
     * <p>The time range during which the finding is generated.</p>
     */
    inline void SetCreationTimeRange(const TimestampRange& value) { m_creationTimeRangeHasBeenSet = true; m_creationTimeRange = value; }

    /**
     * <p>The time range during which the finding is generated.</p>
     */
    inline void SetCreationTimeRange(TimestampRange&& value) { m_creationTimeRangeHasBeenSet = true; m_creationTimeRange = std::move(value); }

    /**
     * <p>The time range during which the finding is generated.</p>
     */
    inline FindingFilter& WithCreationTimeRange(const TimestampRange& value) { SetCreationTimeRange(value); return *this;}

    /**
     * <p>The time range during which the finding is generated.</p>
     */
    inline FindingFilter& WithCreationTimeRange(TimestampRange&& value) { SetCreationTimeRange(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_agentIds;
    bool m_agentIdsHasBeenSet;

    Aws::Vector<Aws::String> m_autoScalingGroups;
    bool m_autoScalingGroupsHasBeenSet;

    Aws::Vector<Aws::String> m_ruleNames;
    bool m_ruleNamesHasBeenSet;

    Aws::Vector<Severity> m_severities;
    bool m_severitiesHasBeenSet;

    Aws::Vector<Aws::String> m_rulesPackageArns;
    bool m_rulesPackageArnsHasBeenSet;

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet;

    Aws::Vector<Attribute> m_userAttributes;
    bool m_userAttributesHasBeenSet;

    TimestampRange m_creationTimeRange;
    bool m_creationTimeRangeHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
