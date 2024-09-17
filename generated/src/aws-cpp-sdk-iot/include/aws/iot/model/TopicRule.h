/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/Action.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes a rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TopicRule">AWS API
   * Reference</a></p>
   */
  class TopicRule
  {
  public:
    AWS_IOT_API TopicRule();
    AWS_IOT_API TopicRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API TopicRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }
    inline TopicRule& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}
    inline TopicRule& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}
    inline TopicRule& WithRuleName(const char* value) { SetRuleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL statement used to query the topic. When using a SQL query with
     * multiple lines, be sure to escape the newline characters.</p>
     */
    inline const Aws::String& GetSql() const{ return m_sql; }
    inline bool SqlHasBeenSet() const { return m_sqlHasBeenSet; }
    inline void SetSql(const Aws::String& value) { m_sqlHasBeenSet = true; m_sql = value; }
    inline void SetSql(Aws::String&& value) { m_sqlHasBeenSet = true; m_sql = std::move(value); }
    inline void SetSql(const char* value) { m_sqlHasBeenSet = true; m_sql.assign(value); }
    inline TopicRule& WithSql(const Aws::String& value) { SetSql(value); return *this;}
    inline TopicRule& WithSql(Aws::String&& value) { SetSql(std::move(value)); return *this;}
    inline TopicRule& WithSql(const char* value) { SetSql(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline TopicRule& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline TopicRule& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline TopicRule& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the rule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline TopicRule& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline TopicRule& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions associated with the rule.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline TopicRule& WithActions(const Aws::Vector<Action>& value) { SetActions(value); return *this;}
    inline TopicRule& WithActions(Aws::Vector<Action>&& value) { SetActions(std::move(value)); return *this;}
    inline TopicRule& AddActions(const Action& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline TopicRule& AddActions(Action&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the rule is disabled.</p>
     */
    inline bool GetRuleDisabled() const{ return m_ruleDisabled; }
    inline bool RuleDisabledHasBeenSet() const { return m_ruleDisabledHasBeenSet; }
    inline void SetRuleDisabled(bool value) { m_ruleDisabledHasBeenSet = true; m_ruleDisabled = value; }
    inline TopicRule& WithRuleDisabled(bool value) { SetRuleDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the SQL rules engine to use when evaluating the rule.</p>
     */
    inline const Aws::String& GetAwsIotSqlVersion() const{ return m_awsIotSqlVersion; }
    inline bool AwsIotSqlVersionHasBeenSet() const { return m_awsIotSqlVersionHasBeenSet; }
    inline void SetAwsIotSqlVersion(const Aws::String& value) { m_awsIotSqlVersionHasBeenSet = true; m_awsIotSqlVersion = value; }
    inline void SetAwsIotSqlVersion(Aws::String&& value) { m_awsIotSqlVersionHasBeenSet = true; m_awsIotSqlVersion = std::move(value); }
    inline void SetAwsIotSqlVersion(const char* value) { m_awsIotSqlVersionHasBeenSet = true; m_awsIotSqlVersion.assign(value); }
    inline TopicRule& WithAwsIotSqlVersion(const Aws::String& value) { SetAwsIotSqlVersion(value); return *this;}
    inline TopicRule& WithAwsIotSqlVersion(Aws::String&& value) { SetAwsIotSqlVersion(std::move(value)); return *this;}
    inline TopicRule& WithAwsIotSqlVersion(const char* value) { SetAwsIotSqlVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to perform when an error occurs.</p>
     */
    inline const Action& GetErrorAction() const{ return m_errorAction; }
    inline bool ErrorActionHasBeenSet() const { return m_errorActionHasBeenSet; }
    inline void SetErrorAction(const Action& value) { m_errorActionHasBeenSet = true; m_errorAction = value; }
    inline void SetErrorAction(Action&& value) { m_errorActionHasBeenSet = true; m_errorAction = std::move(value); }
    inline TopicRule& WithErrorAction(const Action& value) { SetErrorAction(value); return *this;}
    inline TopicRule& WithErrorAction(Action&& value) { SetErrorAction(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::String m_sql;
    bool m_sqlHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Vector<Action> m_actions;
    bool m_actionsHasBeenSet = false;

    bool m_ruleDisabled;
    bool m_ruleDisabledHasBeenSet = false;

    Aws::String m_awsIotSqlVersion;
    bool m_awsIotSqlVersionHasBeenSet = false;

    Action m_errorAction;
    bool m_errorActionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
