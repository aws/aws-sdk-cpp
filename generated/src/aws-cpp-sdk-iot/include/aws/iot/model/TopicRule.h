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
    AWS_IOT_API TopicRule() = default;
    AWS_IOT_API TopicRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API TopicRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    TopicRule& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL statement used to query the topic. When using a SQL query with
     * multiple lines, be sure to escape the newline characters.</p>
     */
    inline const Aws::String& GetSql() const { return m_sql; }
    inline bool SqlHasBeenSet() const { return m_sqlHasBeenSet; }
    template<typename SqlT = Aws::String>
    void SetSql(SqlT&& value) { m_sqlHasBeenSet = true; m_sql = std::forward<SqlT>(value); }
    template<typename SqlT = Aws::String>
    TopicRule& WithSql(SqlT&& value) { SetSql(std::forward<SqlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the rule.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    TopicRule& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the rule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    TopicRule& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions associated with the rule.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<Action>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<Action>>
    TopicRule& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = Action>
    TopicRule& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the rule is disabled.</p>
     */
    inline bool GetRuleDisabled() const { return m_ruleDisabled; }
    inline bool RuleDisabledHasBeenSet() const { return m_ruleDisabledHasBeenSet; }
    inline void SetRuleDisabled(bool value) { m_ruleDisabledHasBeenSet = true; m_ruleDisabled = value; }
    inline TopicRule& WithRuleDisabled(bool value) { SetRuleDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the SQL rules engine to use when evaluating the rule.</p>
     */
    inline const Aws::String& GetAwsIotSqlVersion() const { return m_awsIotSqlVersion; }
    inline bool AwsIotSqlVersionHasBeenSet() const { return m_awsIotSqlVersionHasBeenSet; }
    template<typename AwsIotSqlVersionT = Aws::String>
    void SetAwsIotSqlVersion(AwsIotSqlVersionT&& value) { m_awsIotSqlVersionHasBeenSet = true; m_awsIotSqlVersion = std::forward<AwsIotSqlVersionT>(value); }
    template<typename AwsIotSqlVersionT = Aws::String>
    TopicRule& WithAwsIotSqlVersion(AwsIotSqlVersionT&& value) { SetAwsIotSqlVersion(std::forward<AwsIotSqlVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to perform when an error occurs.</p>
     */
    inline const Action& GetErrorAction() const { return m_errorAction; }
    inline bool ErrorActionHasBeenSet() const { return m_errorActionHasBeenSet; }
    template<typename ErrorActionT = Action>
    void SetErrorAction(ErrorActionT&& value) { m_errorActionHasBeenSet = true; m_errorAction = std::forward<ErrorActionT>(value); }
    template<typename ErrorActionT = Action>
    TopicRule& WithErrorAction(ErrorActionT&& value) { SetErrorAction(std::forward<ErrorActionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::String m_sql;
    bool m_sqlHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Vector<Action> m_actions;
    bool m_actionsHasBeenSet = false;

    bool m_ruleDisabled{false};
    bool m_ruleDisabledHasBeenSet = false;

    Aws::String m_awsIotSqlVersion;
    bool m_awsIotSqlVersionHasBeenSet = false;

    Action m_errorAction;
    bool m_errorActionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
