/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/Attribute.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Inspector
{
namespace Model
{

  /**
   * <p>This data type is used as a request parameter in the <a>ListFindings</a>
   * action.</p>
   */
  class AWS_INSPECTOR_API FindingsFilter
  {
  public:
    FindingsFilter();
    FindingsFilter(const Aws::Utils::Json::JsonValue& jsonValue);
    FindingsFilter& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>rulesPackageArn</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesPackageArns() const{ return m_rulesPackageArns; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>rulesPackageArn</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline void SetRulesPackageArns(const Aws::Vector<Aws::String>& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>rulesPackageArn</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline void SetRulesPackageArns(Aws::Vector<Aws::String>&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>rulesPackageArn</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline FindingsFilter& WithRulesPackageArns(const Aws::Vector<Aws::String>& value) { SetRulesPackageArns(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>rulesPackageArn</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline FindingsFilter& WithRulesPackageArns(Aws::Vector<Aws::String>&& value) { SetRulesPackageArns(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>rulesPackageArn</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline FindingsFilter& AddRulesPackageArns(const Aws::String& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>rulesPackageArn</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline FindingsFilter& AddRulesPackageArns(Aws::String&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>rulesPackageArn</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline FindingsFilter& AddRulesPackageArns(const char* value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>ruleName</b> property of
     * the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRuleNames() const{ return m_ruleNames; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>ruleName</b> property of
     * the <a>Finding</a> data type.</p>
     */
    inline void SetRuleNames(const Aws::Vector<Aws::String>& value) { m_ruleNamesHasBeenSet = true; m_ruleNames = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>ruleName</b> property of
     * the <a>Finding</a> data type.</p>
     */
    inline void SetRuleNames(Aws::Vector<Aws::String>&& value) { m_ruleNamesHasBeenSet = true; m_ruleNames = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>ruleName</b> property of
     * the <a>Finding</a> data type.</p>
     */
    inline FindingsFilter& WithRuleNames(const Aws::Vector<Aws::String>& value) { SetRuleNames(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>ruleName</b> property of
     * the <a>Finding</a> data type.</p>
     */
    inline FindingsFilter& WithRuleNames(Aws::Vector<Aws::String>&& value) { SetRuleNames(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>ruleName</b> property of
     * the <a>Finding</a> data type.</p>
     */
    inline FindingsFilter& AddRuleNames(const Aws::String& value) { m_ruleNamesHasBeenSet = true; m_ruleNames.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>ruleName</b> property of
     * the <a>Finding</a> data type.</p>
     */
    inline FindingsFilter& AddRuleNames(Aws::String&& value) { m_ruleNamesHasBeenSet = true; m_ruleNames.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>ruleName</b> property of
     * the <a>Finding</a> data type.</p>
     */
    inline FindingsFilter& AddRuleNames(const char* value) { m_ruleNamesHasBeenSet = true; m_ruleNames.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>severity</b> property of
     * the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSeverities() const{ return m_severities; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>severity</b> property of
     * the <a>Finding</a> data type.</p>
     */
    inline void SetSeverities(const Aws::Vector<Aws::String>& value) { m_severitiesHasBeenSet = true; m_severities = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>severity</b> property of
     * the <a>Finding</a> data type.</p>
     */
    inline void SetSeverities(Aws::Vector<Aws::String>&& value) { m_severitiesHasBeenSet = true; m_severities = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>severity</b> property of
     * the <a>Finding</a> data type.</p>
     */
    inline FindingsFilter& WithSeverities(const Aws::Vector<Aws::String>& value) { SetSeverities(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>severity</b> property of
     * the <a>Finding</a> data type.</p>
     */
    inline FindingsFilter& WithSeverities(Aws::Vector<Aws::String>&& value) { SetSeverities(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>severity</b> property of
     * the <a>Finding</a> data type.</p>
     */
    inline FindingsFilter& AddSeverities(const Aws::String& value) { m_severitiesHasBeenSet = true; m_severities.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>severity</b> property of
     * the <a>Finding</a> data type.</p>
     */
    inline FindingsFilter& AddSeverities(Aws::String&& value) { m_severitiesHasBeenSet = true; m_severities.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>severity</b> property of
     * the <a>Finding</a> data type.</p>
     */
    inline FindingsFilter& AddSeverities(const char* value) { m_severitiesHasBeenSet = true; m_severities.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>attributes</b> property
     * of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>attributes</b> property
     * of the <a>Finding</a> data type.</p>
     */
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>attributes</b> property
     * of the <a>Finding</a> data type.</p>
     */
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>attributes</b> property
     * of the <a>Finding</a> data type.</p>
     */
    inline FindingsFilter& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>attributes</b> property
     * of the <a>Finding</a> data type.</p>
     */
    inline FindingsFilter& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>attributes</b> property
     * of the <a>Finding</a> data type.</p>
     */
    inline FindingsFilter& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>attributes</b> property
     * of the <a>Finding</a> data type.</p>
     */
    inline FindingsFilter& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>userAttributes</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline const Aws::Vector<Attribute>& GetUserAttributes() const{ return m_userAttributes; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>userAttributes</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline void SetUserAttributes(const Aws::Vector<Attribute>& value) { m_userAttributesHasBeenSet = true; m_userAttributes = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>userAttributes</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline void SetUserAttributes(Aws::Vector<Attribute>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>userAttributes</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline FindingsFilter& WithUserAttributes(const Aws::Vector<Attribute>& value) { SetUserAttributes(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>userAttributes</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline FindingsFilter& WithUserAttributes(Aws::Vector<Attribute>&& value) { SetUserAttributes(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>userAttributes</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline FindingsFilter& AddUserAttributes(const Attribute& value) { m_userAttributesHasBeenSet = true; m_userAttributes.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>userAttributes</b>
     * property of the <a>Finding</a> data type.</p>
     */
    inline FindingsFilter& AddUserAttributes(Attribute&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_rulesPackageArns;
    bool m_rulesPackageArnsHasBeenSet;
    Aws::Vector<Aws::String> m_ruleNames;
    bool m_ruleNamesHasBeenSet;
    Aws::Vector<Aws::String> m_severities;
    bool m_severitiesHasBeenSet;
    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet;
    Aws::Vector<Attribute> m_userAttributes;
    bool m_userAttributesHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
