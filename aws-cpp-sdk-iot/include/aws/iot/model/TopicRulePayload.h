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
  class AWS_IOT_API TopicRulePayload
  {
  public:
    TopicRulePayload();
    TopicRulePayload(const Aws::Utils::Json::JsonValue& jsonValue);
    TopicRulePayload& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The SQL statement used to query the topic. For more information, see <a
     * href="http://docs.aws.amazon.com/iot/latest/developerguide/iot-rules.html#aws-iot-sql-reference">AWS
     * IoT SQL Reference</a> in the <i>AWS IoT Developer Guide</i>.</p>
     */
    inline const Aws::String& GetSql() const{ return m_sql; }

    /**
     * <p>The SQL statement used to query the topic. For more information, see <a
     * href="http://docs.aws.amazon.com/iot/latest/developerguide/iot-rules.html#aws-iot-sql-reference">AWS
     * IoT SQL Reference</a> in the <i>AWS IoT Developer Guide</i>.</p>
     */
    inline void SetSql(const Aws::String& value) { m_sqlHasBeenSet = true; m_sql = value; }

    /**
     * <p>The SQL statement used to query the topic. For more information, see <a
     * href="http://docs.aws.amazon.com/iot/latest/developerguide/iot-rules.html#aws-iot-sql-reference">AWS
     * IoT SQL Reference</a> in the <i>AWS IoT Developer Guide</i>.</p>
     */
    inline void SetSql(Aws::String&& value) { m_sqlHasBeenSet = true; m_sql = value; }

    /**
     * <p>The SQL statement used to query the topic. For more information, see <a
     * href="http://docs.aws.amazon.com/iot/latest/developerguide/iot-rules.html#aws-iot-sql-reference">AWS
     * IoT SQL Reference</a> in the <i>AWS IoT Developer Guide</i>.</p>
     */
    inline void SetSql(const char* value) { m_sqlHasBeenSet = true; m_sql.assign(value); }

    /**
     * <p>The SQL statement used to query the topic. For more information, see <a
     * href="http://docs.aws.amazon.com/iot/latest/developerguide/iot-rules.html#aws-iot-sql-reference">AWS
     * IoT SQL Reference</a> in the <i>AWS IoT Developer Guide</i>.</p>
     */
    inline TopicRulePayload& WithSql(const Aws::String& value) { SetSql(value); return *this;}

    /**
     * <p>The SQL statement used to query the topic. For more information, see <a
     * href="http://docs.aws.amazon.com/iot/latest/developerguide/iot-rules.html#aws-iot-sql-reference">AWS
     * IoT SQL Reference</a> in the <i>AWS IoT Developer Guide</i>.</p>
     */
    inline TopicRulePayload& WithSql(Aws::String&& value) { SetSql(value); return *this;}

    /**
     * <p>The SQL statement used to query the topic. For more information, see <a
     * href="http://docs.aws.amazon.com/iot/latest/developerguide/iot-rules.html#aws-iot-sql-reference">AWS
     * IoT SQL Reference</a> in the <i>AWS IoT Developer Guide</i>.</p>
     */
    inline TopicRulePayload& WithSql(const char* value) { SetSql(value); return *this;}

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
    inline TopicRulePayload& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the rule.</p>
     */
    inline TopicRulePayload& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the rule.</p>
     */
    inline TopicRulePayload& WithDescription(const char* value) { SetDescription(value); return *this;}

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
    inline TopicRulePayload& WithActions(const Aws::Vector<Action>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions associated with the rule.</p>
     */
    inline TopicRulePayload& WithActions(Aws::Vector<Action>&& value) { SetActions(value); return *this;}

    /**
     * <p>The actions associated with the rule.</p>
     */
    inline TopicRulePayload& AddActions(const Action& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The actions associated with the rule.</p>
     */
    inline TopicRulePayload& AddActions(Action&& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

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
    inline TopicRulePayload& WithRuleDisabled(bool value) { SetRuleDisabled(value); return *this;}

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
    inline TopicRulePayload& WithAwsIotSqlVersion(const Aws::String& value) { SetAwsIotSqlVersion(value); return *this;}

    /**
     * <p>The version of the SQL rules engine to use when evaluating the rule.</p>
     */
    inline TopicRulePayload& WithAwsIotSqlVersion(Aws::String&& value) { SetAwsIotSqlVersion(value); return *this;}

    /**
     * <p>The version of the SQL rules engine to use when evaluating the rule.</p>
     */
    inline TopicRulePayload& WithAwsIotSqlVersion(const char* value) { SetAwsIotSqlVersion(value); return *this;}

  private:
    Aws::String m_sql;
    bool m_sqlHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
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
