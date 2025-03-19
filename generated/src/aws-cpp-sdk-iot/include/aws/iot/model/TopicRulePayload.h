/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TopicRulePayload">AWS
   * API Reference</a></p>
   */
  class TopicRulePayload
  {
  public:
    AWS_IOT_API TopicRulePayload() = default;
    AWS_IOT_API TopicRulePayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API TopicRulePayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The SQL statement used to query the topic. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-sql-reference.html">IoT
     * SQL Reference</a> in the <i>IoT Developer Guide</i>.</p>
     */
    inline const Aws::String& GetSql() const { return m_sql; }
    inline bool SqlHasBeenSet() const { return m_sqlHasBeenSet; }
    template<typename SqlT = Aws::String>
    void SetSql(SqlT&& value) { m_sqlHasBeenSet = true; m_sql = std::forward<SqlT>(value); }
    template<typename SqlT = Aws::String>
    TopicRulePayload& WithSql(SqlT&& value) { SetSql(std::forward<SqlT>(value)); return *this;}
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
    TopicRulePayload& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    TopicRulePayload& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = Action>
    TopicRulePayload& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the rule is disabled.</p>
     */
    inline bool GetRuleDisabled() const { return m_ruleDisabled; }
    inline bool RuleDisabledHasBeenSet() const { return m_ruleDisabledHasBeenSet; }
    inline void SetRuleDisabled(bool value) { m_ruleDisabledHasBeenSet = true; m_ruleDisabled = value; }
    inline TopicRulePayload& WithRuleDisabled(bool value) { SetRuleDisabled(value); return *this;}
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
    TopicRulePayload& WithAwsIotSqlVersion(AwsIotSqlVersionT&& value) { SetAwsIotSqlVersion(std::forward<AwsIotSqlVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take when an error occurs.</p>
     */
    inline const Action& GetErrorAction() const { return m_errorAction; }
    inline bool ErrorActionHasBeenSet() const { return m_errorActionHasBeenSet; }
    template<typename ErrorActionT = Action>
    void SetErrorAction(ErrorActionT&& value) { m_errorActionHasBeenSet = true; m_errorAction = std::forward<ErrorActionT>(value); }
    template<typename ErrorActionT = Action>
    TopicRulePayload& WithErrorAction(ErrorActionT&& value) { SetErrorAction(std::forward<ErrorActionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sql;
    bool m_sqlHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

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
