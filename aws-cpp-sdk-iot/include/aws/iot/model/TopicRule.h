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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/Action.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes a rule.</p>
   */
  class AWS_IOT_API TopicRule
  {
  public:
    TopicRule();
    TopicRule(const Aws::Utils::Json::JsonValue& jsonValue);
    TopicRule& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline TopicRule& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline TopicRule& WithRuleName(Aws::String&& value) { SetRuleName(value); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline TopicRule& WithRuleName(const char* value) { SetRuleName(value); return *this;}

    /**
     * <p>The SQL statement used to query the topic. When using a SQL query with
     * multiple lines, be sure to escape the newline characters.</p>
     */
    inline const Aws::String& GetSql() const{ return m_sql; }

    /**
     * <p>The SQL statement used to query the topic. When using a SQL query with
     * multiple lines, be sure to escape the newline characters.</p>
     */
    inline void SetSql(const Aws::String& value) { m_sqlHasBeenSet = true; m_sql = value; }

    /**
     * <p>The SQL statement used to query the topic. When using a SQL query with
     * multiple lines, be sure to escape the newline characters.</p>
     */
    inline void SetSql(Aws::String&& value) { m_sqlHasBeenSet = true; m_sql = value; }

    /**
     * <p>The SQL statement used to query the topic. When using a SQL query with
     * multiple lines, be sure to escape the newline characters.</p>
     */
    inline void SetSql(const char* value) { m_sqlHasBeenSet = true; m_sql.assign(value); }

    /**
     * <p>The SQL statement used to query the topic. When using a SQL query with
     * multiple lines, be sure to escape the newline characters.</p>
     */
    inline TopicRule& WithSql(const Aws::String& value) { SetSql(value); return *this;}

    /**
     * <p>The SQL statement used to query the topic. When using a SQL query with
     * multiple lines, be sure to escape the newline characters.</p>
     */
    inline TopicRule& WithSql(Aws::String&& value) { SetSql(value); return *this;}

    /**
     * <p>The SQL statement used to query the topic. When using a SQL query with
     * multiple lines, be sure to escape the newline characters.</p>
     */
    inline TopicRule& WithSql(const char* value) { SetSql(value); return *this;}

    /**
     * <p>The description of the rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the rule.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the rule.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the rule.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the rule.</p>
     */
    inline TopicRule& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the rule.</p>
     */
    inline TopicRule& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the rule.</p>
     */
    inline TopicRule& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The date and time the rule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time the rule was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time the rule was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time the rule was created.</p>
     */
    inline TopicRule& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time the rule was created.</p>
     */
    inline TopicRule& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The actions associated with the rule.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions associated with the rule.</p>
     */
    inline void SetActions(const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions associated with the rule.</p>
     */
    inline void SetActions(Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions associated with the rule.</p>
     */
    inline TopicRule& WithActions(const Aws::Vector<Action>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions associated with the rule.</p>
     */
    inline TopicRule& WithActions(Aws::Vector<Action>&& value) { SetActions(value); return *this;}

    /**
     * <p>The actions associated with the rule.</p>
     */
    inline TopicRule& AddActions(const Action& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The actions associated with the rule.</p>
     */
    inline TopicRule& AddActions(Action&& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>Specifies whether the rule is disabled.</p>
     */
    inline bool GetRuleDisabled() const{ return m_ruleDisabled; }

    /**
     * <p>Specifies whether the rule is disabled.</p>
     */
    inline void SetRuleDisabled(bool value) { m_ruleDisabledHasBeenSet = true; m_ruleDisabled = value; }

    /**
     * <p>Specifies whether the rule is disabled.</p>
     */
    inline TopicRule& WithRuleDisabled(bool value) { SetRuleDisabled(value); return *this;}

    /**
     * <p>The version of the SQL rules engine to use when evaluating the rule.</p>
     */
    inline const Aws::String& GetAwsIotSqlVersion() const{ return m_awsIotSqlVersion; }

    /**
     * <p>The version of the SQL rules engine to use when evaluating the rule.</p>
     */
    inline void SetAwsIotSqlVersion(const Aws::String& value) { m_awsIotSqlVersionHasBeenSet = true; m_awsIotSqlVersion = value; }

    /**
     * <p>The version of the SQL rules engine to use when evaluating the rule.</p>
     */
    inline void SetAwsIotSqlVersion(Aws::String&& value) { m_awsIotSqlVersionHasBeenSet = true; m_awsIotSqlVersion = value; }

    /**
     * <p>The version of the SQL rules engine to use when evaluating the rule.</p>
     */
    inline void SetAwsIotSqlVersion(const char* value) { m_awsIotSqlVersionHasBeenSet = true; m_awsIotSqlVersion.assign(value); }

    /**
     * <p>The version of the SQL rules engine to use when evaluating the rule.</p>
     */
    inline TopicRule& WithAwsIotSqlVersion(const Aws::String& value) { SetAwsIotSqlVersion(value); return *this;}

    /**
     * <p>The version of the SQL rules engine to use when evaluating the rule.</p>
     */
    inline TopicRule& WithAwsIotSqlVersion(Aws::String&& value) { SetAwsIotSqlVersion(value); return *this;}

    /**
     * <p>The version of the SQL rules engine to use when evaluating the rule.</p>
     */
    inline TopicRule& WithAwsIotSqlVersion(const char* value) { SetAwsIotSqlVersion(value); return *this;}

  private:
    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet;
    Aws::String m_sql;
    bool m_sqlHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;
    Aws::Vector<Action> m_actions;
    bool m_actionsHasBeenSet;
    bool m_ruleDisabled;
    bool m_ruleDisabledHasBeenSet;
    Aws::String m_awsIotSqlVersion;
    bool m_awsIotSqlVersionHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
