/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-readiness/model/Readiness.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-readiness/model/Message.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * Result with status for an individual rule..<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/RuleResult">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53RECOVERYREADINESS_API RuleResult
  {
  public:
    RuleResult();
    RuleResult(Aws::Utils::Json::JsonView jsonValue);
    RuleResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The time the resource was last checked for readiness, in ISO-8601 format, UTC.
     */
    inline const Aws::Utils::DateTime& GetLastCheckedTimestamp() const{ return m_lastCheckedTimestamp; }

    /**
     * The time the resource was last checked for readiness, in ISO-8601 format, UTC.
     */
    inline bool LastCheckedTimestampHasBeenSet() const { return m_lastCheckedTimestampHasBeenSet; }

    /**
     * The time the resource was last checked for readiness, in ISO-8601 format, UTC.
     */
    inline void SetLastCheckedTimestamp(const Aws::Utils::DateTime& value) { m_lastCheckedTimestampHasBeenSet = true; m_lastCheckedTimestamp = value; }

    /**
     * The time the resource was last checked for readiness, in ISO-8601 format, UTC.
     */
    inline void SetLastCheckedTimestamp(Aws::Utils::DateTime&& value) { m_lastCheckedTimestampHasBeenSet = true; m_lastCheckedTimestamp = std::move(value); }

    /**
     * The time the resource was last checked for readiness, in ISO-8601 format, UTC.
     */
    inline RuleResult& WithLastCheckedTimestamp(const Aws::Utils::DateTime& value) { SetLastCheckedTimestamp(value); return *this;}

    /**
     * The time the resource was last checked for readiness, in ISO-8601 format, UTC.
     */
    inline RuleResult& WithLastCheckedTimestamp(Aws::Utils::DateTime&& value) { SetLastCheckedTimestamp(std::move(value)); return *this;}


    /**
     * Details about the resource's readiness
     */
    inline const Aws::Vector<Message>& GetMessages() const{ return m_messages; }

    /**
     * Details about the resource's readiness
     */
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }

    /**
     * Details about the resource's readiness
     */
    inline void SetMessages(const Aws::Vector<Message>& value) { m_messagesHasBeenSet = true; m_messages = value; }

    /**
     * Details about the resource's readiness
     */
    inline void SetMessages(Aws::Vector<Message>&& value) { m_messagesHasBeenSet = true; m_messages = std::move(value); }

    /**
     * Details about the resource's readiness
     */
    inline RuleResult& WithMessages(const Aws::Vector<Message>& value) { SetMessages(value); return *this;}

    /**
     * Details about the resource's readiness
     */
    inline RuleResult& WithMessages(Aws::Vector<Message>&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * Details about the resource's readiness
     */
    inline RuleResult& AddMessages(const Message& value) { m_messagesHasBeenSet = true; m_messages.push_back(value); return *this; }

    /**
     * Details about the resource's readiness
     */
    inline RuleResult& AddMessages(Message&& value) { m_messagesHasBeenSet = true; m_messages.push_back(std::move(value)); return *this; }


    /**
     * The readiness at rule level.
     */
    inline const Readiness& GetReadiness() const{ return m_readiness; }

    /**
     * The readiness at rule level.
     */
    inline bool ReadinessHasBeenSet() const { return m_readinessHasBeenSet; }

    /**
     * The readiness at rule level.
     */
    inline void SetReadiness(const Readiness& value) { m_readinessHasBeenSet = true; m_readiness = value; }

    /**
     * The readiness at rule level.
     */
    inline void SetReadiness(Readiness&& value) { m_readinessHasBeenSet = true; m_readiness = std::move(value); }

    /**
     * The readiness at rule level.
     */
    inline RuleResult& WithReadiness(const Readiness& value) { SetReadiness(value); return *this;}

    /**
     * The readiness at rule level.
     */
    inline RuleResult& WithReadiness(Readiness&& value) { SetReadiness(std::move(value)); return *this;}


    /**
     * The identifier of the rule.
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * The identifier of the rule.
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * The identifier of the rule.
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * The identifier of the rule.
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * The identifier of the rule.
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * The identifier of the rule.
     */
    inline RuleResult& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * The identifier of the rule.
     */
    inline RuleResult& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * The identifier of the rule.
     */
    inline RuleResult& WithRuleId(const char* value) { SetRuleId(value); return *this;}

  private:

    Aws::Utils::DateTime m_lastCheckedTimestamp;
    bool m_lastCheckedTimestampHasBeenSet;

    Aws::Vector<Message> m_messages;
    bool m_messagesHasBeenSet;

    Readiness m_readiness;
    bool m_readinessHasBeenSet;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
