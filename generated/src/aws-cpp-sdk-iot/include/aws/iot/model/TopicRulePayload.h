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
    AWS_IOT_API TopicRulePayload();
    AWS_IOT_API TopicRulePayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API TopicRulePayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The SQL statement used to query the topic. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-sql-reference.html">IoT
     * SQL Reference</a> in the <i>IoT Developer Guide</i>.</p>
     */
    inline const Aws::String& GetSql() const{ return m_sql; }
    inline bool SqlHasBeenSet() const { return m_sqlHasBeenSet; }
    inline void SetSql(const Aws::String& value) { m_sqlHasBeenSet = true; m_sql = value; }
    inline void SetSql(Aws::String&& value) { m_sqlHasBeenSet = true; m_sql = std::move(value); }
    inline void SetSql(const char* value) { m_sqlHasBeenSet = true; m_sql.assign(value); }
    inline TopicRulePayload& WithSql(const Aws::String& value) { SetSql(value); return *this;}
    inline TopicRulePayload& WithSql(Aws::String&& value) { SetSql(std::move(value)); return *this;}
    inline TopicRulePayload& WithSql(const char* value) { SetSql(value); return *this;}
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
    inline TopicRulePayload& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline TopicRulePayload& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline TopicRulePayload& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions associated with the rule.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline TopicRulePayload& WithActions(const Aws::Vector<Action>& value) { SetActions(value); return *this;}
    inline TopicRulePayload& WithActions(Aws::Vector<Action>&& value) { SetActions(std::move(value)); return *this;}
    inline TopicRulePayload& AddActions(const Action& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline TopicRulePayload& AddActions(Action&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the rule is disabled.</p>
     */
    inline bool GetRuleDisabled() const{ return m_ruleDisabled; }
    inline bool RuleDisabledHasBeenSet() const { return m_ruleDisabledHasBeenSet; }
    inline void SetRuleDisabled(bool value) { m_ruleDisabledHasBeenSet = true; m_ruleDisabled = value; }
    inline TopicRulePayload& WithRuleDisabled(bool value) { SetRuleDisabled(value); return *this;}
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
    inline TopicRulePayload& WithAwsIotSqlVersion(const Aws::String& value) { SetAwsIotSqlVersion(value); return *this;}
    inline TopicRulePayload& WithAwsIotSqlVersion(Aws::String&& value) { SetAwsIotSqlVersion(std::move(value)); return *this;}
    inline TopicRulePayload& WithAwsIotSqlVersion(const char* value) { SetAwsIotSqlVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take when an error occurs.</p>
     */
    inline const Action& GetErrorAction() const{ return m_errorAction; }
    inline bool ErrorActionHasBeenSet() const { return m_errorActionHasBeenSet; }
    inline void SetErrorAction(const Action& value) { m_errorActionHasBeenSet = true; m_errorAction = value; }
    inline void SetErrorAction(Action&& value) { m_errorActionHasBeenSet = true; m_errorAction = std::move(value); }
    inline TopicRulePayload& WithErrorAction(const Action& value) { SetErrorAction(value); return *this;}
    inline TopicRulePayload& WithErrorAction(Action&& value) { SetErrorAction(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_sql;
    bool m_sqlHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

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
