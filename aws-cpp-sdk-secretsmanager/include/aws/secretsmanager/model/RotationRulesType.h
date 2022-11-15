/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecretsManager
{
namespace Model
{

  /**
   * <p>A structure that defines the rotation configuration for the
   * secret.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/RotationRulesType">AWS
   * API Reference</a></p>
   */
  class AWS_SECRETSMANAGER_API RotationRulesType
  {
  public:
    RotationRulesType();
    RotationRulesType(Aws::Utils::Json::JsonView jsonValue);
    RotationRulesType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of days between automatic scheduled rotations of the secret. You
     * can use this value to check that your secret meets your compliance guidelines
     * for how often secrets must be rotated.</p> <p>In <code>DescribeSecret</code> and
     * <code>ListSecrets</code>, this value is calculated from the rotation schedule
     * after every successful rotation. In <code>RotateSecret</code>, you can set the
     * rotation schedule in <code>RotationRules</code> with
     * <code>AutomaticallyAfterDays</code> or <code>ScheduleExpression</code>, but not
     * both.</p>
     */
    inline long long GetAutomaticallyAfterDays() const{ return m_automaticallyAfterDays; }

    /**
     * <p>The number of days between automatic scheduled rotations of the secret. You
     * can use this value to check that your secret meets your compliance guidelines
     * for how often secrets must be rotated.</p> <p>In <code>DescribeSecret</code> and
     * <code>ListSecrets</code>, this value is calculated from the rotation schedule
     * after every successful rotation. In <code>RotateSecret</code>, you can set the
     * rotation schedule in <code>RotationRules</code> with
     * <code>AutomaticallyAfterDays</code> or <code>ScheduleExpression</code>, but not
     * both.</p>
     */
    inline bool AutomaticallyAfterDaysHasBeenSet() const { return m_automaticallyAfterDaysHasBeenSet; }

    /**
     * <p>The number of days between automatic scheduled rotations of the secret. You
     * can use this value to check that your secret meets your compliance guidelines
     * for how often secrets must be rotated.</p> <p>In <code>DescribeSecret</code> and
     * <code>ListSecrets</code>, this value is calculated from the rotation schedule
     * after every successful rotation. In <code>RotateSecret</code>, you can set the
     * rotation schedule in <code>RotationRules</code> with
     * <code>AutomaticallyAfterDays</code> or <code>ScheduleExpression</code>, but not
     * both.</p>
     */
    inline void SetAutomaticallyAfterDays(long long value) { m_automaticallyAfterDaysHasBeenSet = true; m_automaticallyAfterDays = value; }

    /**
     * <p>The number of days between automatic scheduled rotations of the secret. You
     * can use this value to check that your secret meets your compliance guidelines
     * for how often secrets must be rotated.</p> <p>In <code>DescribeSecret</code> and
     * <code>ListSecrets</code>, this value is calculated from the rotation schedule
     * after every successful rotation. In <code>RotateSecret</code>, you can set the
     * rotation schedule in <code>RotationRules</code> with
     * <code>AutomaticallyAfterDays</code> or <code>ScheduleExpression</code>, but not
     * both.</p>
     */
    inline RotationRulesType& WithAutomaticallyAfterDays(long long value) { SetAutomaticallyAfterDays(value); return *this;}


    /**
     * <p>The length of the rotation window in hours, for example <code>3h</code> for a
     * three hour window. Secrets Manager rotates your secret at any time during this
     * window. The window must not go into the next UTC day. If you don't specify this
     * value, the window automatically ends at the end of the UTC day. The window
     * begins according to the <code>ScheduleExpression</code>. For more information,
     * including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a>.</p>
     */
    inline const Aws::String& GetDuration() const{ return m_duration; }

    /**
     * <p>The length of the rotation window in hours, for example <code>3h</code> for a
     * three hour window. Secrets Manager rotates your secret at any time during this
     * window. The window must not go into the next UTC day. If you don't specify this
     * value, the window automatically ends at the end of the UTC day. The window
     * begins according to the <code>ScheduleExpression</code>. For more information,
     * including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a>.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The length of the rotation window in hours, for example <code>3h</code> for a
     * three hour window. Secrets Manager rotates your secret at any time during this
     * window. The window must not go into the next UTC day. If you don't specify this
     * value, the window automatically ends at the end of the UTC day. The window
     * begins according to the <code>ScheduleExpression</code>. For more information,
     * including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a>.</p>
     */
    inline void SetDuration(const Aws::String& value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The length of the rotation window in hours, for example <code>3h</code> for a
     * three hour window. Secrets Manager rotates your secret at any time during this
     * window. The window must not go into the next UTC day. If you don't specify this
     * value, the window automatically ends at the end of the UTC day. The window
     * begins according to the <code>ScheduleExpression</code>. For more information,
     * including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a>.</p>
     */
    inline void SetDuration(Aws::String&& value) { m_durationHasBeenSet = true; m_duration = std::move(value); }

    /**
     * <p>The length of the rotation window in hours, for example <code>3h</code> for a
     * three hour window. Secrets Manager rotates your secret at any time during this
     * window. The window must not go into the next UTC day. If you don't specify this
     * value, the window automatically ends at the end of the UTC day. The window
     * begins according to the <code>ScheduleExpression</code>. For more information,
     * including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a>.</p>
     */
    inline void SetDuration(const char* value) { m_durationHasBeenSet = true; m_duration.assign(value); }

    /**
     * <p>The length of the rotation window in hours, for example <code>3h</code> for a
     * three hour window. Secrets Manager rotates your secret at any time during this
     * window. The window must not go into the next UTC day. If you don't specify this
     * value, the window automatically ends at the end of the UTC day. The window
     * begins according to the <code>ScheduleExpression</code>. For more information,
     * including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a>.</p>
     */
    inline RotationRulesType& WithDuration(const Aws::String& value) { SetDuration(value); return *this;}

    /**
     * <p>The length of the rotation window in hours, for example <code>3h</code> for a
     * three hour window. Secrets Manager rotates your secret at any time during this
     * window. The window must not go into the next UTC day. If you don't specify this
     * value, the window automatically ends at the end of the UTC day. The window
     * begins according to the <code>ScheduleExpression</code>. For more information,
     * including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a>.</p>
     */
    inline RotationRulesType& WithDuration(Aws::String&& value) { SetDuration(std::move(value)); return *this;}

    /**
     * <p>The length of the rotation window in hours, for example <code>3h</code> for a
     * three hour window. Secrets Manager rotates your secret at any time during this
     * window. The window must not go into the next UTC day. If you don't specify this
     * value, the window automatically ends at the end of the UTC day. The window
     * begins according to the <code>ScheduleExpression</code>. For more information,
     * including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a>.</p>
     */
    inline RotationRulesType& WithDuration(const char* value) { SetDuration(value); return *this;}


    /**
     * <p>A <code>cron()</code> or <code>rate()</code> expression that defines the
     * schedule for rotating your secret. Secrets Manager rotation schedules use UTC
     * time zone. </p> <p>Secrets Manager <code>rate()</code> expressions represent the
     * interval in days that you want to rotate your secret, for example <code>rate(10
     * days)</code>. If you use a <code>rate()</code> expression, the rotation window
     * opens at midnight, and Secrets Manager rotates your secret any time that day
     * after midnight. You can set a <code>Duration</code> to shorten the rotation
     * window.</p> <p>You can use a <code>cron()</code> expression to create rotation
     * schedules that are more detailed than a rotation interval. For more information,
     * including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a>. If you use a <code>cron()</code>
     * expression, Secrets Manager rotates your secret any time during that day after
     * the window opens. For example, <code>cron(0 8 1 * ? *)</code> represents a
     * rotation window that occurs on the first day of every month beginning at 8:00 AM
     * UTC. Secrets Manager rotates the secret any time that day after 8:00 AM. You can
     * set a <code>Duration</code> to shorten the rotation window.</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>A <code>cron()</code> or <code>rate()</code> expression that defines the
     * schedule for rotating your secret. Secrets Manager rotation schedules use UTC
     * time zone. </p> <p>Secrets Manager <code>rate()</code> expressions represent the
     * interval in days that you want to rotate your secret, for example <code>rate(10
     * days)</code>. If you use a <code>rate()</code> expression, the rotation window
     * opens at midnight, and Secrets Manager rotates your secret any time that day
     * after midnight. You can set a <code>Duration</code> to shorten the rotation
     * window.</p> <p>You can use a <code>cron()</code> expression to create rotation
     * schedules that are more detailed than a rotation interval. For more information,
     * including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a>. If you use a <code>cron()</code>
     * expression, Secrets Manager rotates your secret any time during that day after
     * the window opens. For example, <code>cron(0 8 1 * ? *)</code> represents a
     * rotation window that occurs on the first day of every month beginning at 8:00 AM
     * UTC. Secrets Manager rotates the secret any time that day after 8:00 AM. You can
     * set a <code>Duration</code> to shorten the rotation window.</p>
     */
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }

    /**
     * <p>A <code>cron()</code> or <code>rate()</code> expression that defines the
     * schedule for rotating your secret. Secrets Manager rotation schedules use UTC
     * time zone. </p> <p>Secrets Manager <code>rate()</code> expressions represent the
     * interval in days that you want to rotate your secret, for example <code>rate(10
     * days)</code>. If you use a <code>rate()</code> expression, the rotation window
     * opens at midnight, and Secrets Manager rotates your secret any time that day
     * after midnight. You can set a <code>Duration</code> to shorten the rotation
     * window.</p> <p>You can use a <code>cron()</code> expression to create rotation
     * schedules that are more detailed than a rotation interval. For more information,
     * including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a>. If you use a <code>cron()</code>
     * expression, Secrets Manager rotates your secret any time during that day after
     * the window opens. For example, <code>cron(0 8 1 * ? *)</code> represents a
     * rotation window that occurs on the first day of every month beginning at 8:00 AM
     * UTC. Secrets Manager rotates the secret any time that day after 8:00 AM. You can
     * set a <code>Duration</code> to shorten the rotation window.</p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>A <code>cron()</code> or <code>rate()</code> expression that defines the
     * schedule for rotating your secret. Secrets Manager rotation schedules use UTC
     * time zone. </p> <p>Secrets Manager <code>rate()</code> expressions represent the
     * interval in days that you want to rotate your secret, for example <code>rate(10
     * days)</code>. If you use a <code>rate()</code> expression, the rotation window
     * opens at midnight, and Secrets Manager rotates your secret any time that day
     * after midnight. You can set a <code>Duration</code> to shorten the rotation
     * window.</p> <p>You can use a <code>cron()</code> expression to create rotation
     * schedules that are more detailed than a rotation interval. For more information,
     * including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a>. If you use a <code>cron()</code>
     * expression, Secrets Manager rotates your secret any time during that day after
     * the window opens. For example, <code>cron(0 8 1 * ? *)</code> represents a
     * rotation window that occurs on the first day of every month beginning at 8:00 AM
     * UTC. Secrets Manager rotates the secret any time that day after 8:00 AM. You can
     * set a <code>Duration</code> to shorten the rotation window.</p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    /**
     * <p>A <code>cron()</code> or <code>rate()</code> expression that defines the
     * schedule for rotating your secret. Secrets Manager rotation schedules use UTC
     * time zone. </p> <p>Secrets Manager <code>rate()</code> expressions represent the
     * interval in days that you want to rotate your secret, for example <code>rate(10
     * days)</code>. If you use a <code>rate()</code> expression, the rotation window
     * opens at midnight, and Secrets Manager rotates your secret any time that day
     * after midnight. You can set a <code>Duration</code> to shorten the rotation
     * window.</p> <p>You can use a <code>cron()</code> expression to create rotation
     * schedules that are more detailed than a rotation interval. For more information,
     * including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a>. If you use a <code>cron()</code>
     * expression, Secrets Manager rotates your secret any time during that day after
     * the window opens. For example, <code>cron(0 8 1 * ? *)</code> represents a
     * rotation window that occurs on the first day of every month beginning at 8:00 AM
     * UTC. Secrets Manager rotates the secret any time that day after 8:00 AM. You can
     * set a <code>Duration</code> to shorten the rotation window.</p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p>A <code>cron()</code> or <code>rate()</code> expression that defines the
     * schedule for rotating your secret. Secrets Manager rotation schedules use UTC
     * time zone. </p> <p>Secrets Manager <code>rate()</code> expressions represent the
     * interval in days that you want to rotate your secret, for example <code>rate(10
     * days)</code>. If you use a <code>rate()</code> expression, the rotation window
     * opens at midnight, and Secrets Manager rotates your secret any time that day
     * after midnight. You can set a <code>Duration</code> to shorten the rotation
     * window.</p> <p>You can use a <code>cron()</code> expression to create rotation
     * schedules that are more detailed than a rotation interval. For more information,
     * including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a>. If you use a <code>cron()</code>
     * expression, Secrets Manager rotates your secret any time during that day after
     * the window opens. For example, <code>cron(0 8 1 * ? *)</code> represents a
     * rotation window that occurs on the first day of every month beginning at 8:00 AM
     * UTC. Secrets Manager rotates the secret any time that day after 8:00 AM. You can
     * set a <code>Duration</code> to shorten the rotation window.</p>
     */
    inline RotationRulesType& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>A <code>cron()</code> or <code>rate()</code> expression that defines the
     * schedule for rotating your secret. Secrets Manager rotation schedules use UTC
     * time zone. </p> <p>Secrets Manager <code>rate()</code> expressions represent the
     * interval in days that you want to rotate your secret, for example <code>rate(10
     * days)</code>. If you use a <code>rate()</code> expression, the rotation window
     * opens at midnight, and Secrets Manager rotates your secret any time that day
     * after midnight. You can set a <code>Duration</code> to shorten the rotation
     * window.</p> <p>You can use a <code>cron()</code> expression to create rotation
     * schedules that are more detailed than a rotation interval. For more information,
     * including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a>. If you use a <code>cron()</code>
     * expression, Secrets Manager rotates your secret any time during that day after
     * the window opens. For example, <code>cron(0 8 1 * ? *)</code> represents a
     * rotation window that occurs on the first day of every month beginning at 8:00 AM
     * UTC. Secrets Manager rotates the secret any time that day after 8:00 AM. You can
     * set a <code>Duration</code> to shorten the rotation window.</p>
     */
    inline RotationRulesType& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p>A <code>cron()</code> or <code>rate()</code> expression that defines the
     * schedule for rotating your secret. Secrets Manager rotation schedules use UTC
     * time zone. </p> <p>Secrets Manager <code>rate()</code> expressions represent the
     * interval in days that you want to rotate your secret, for example <code>rate(10
     * days)</code>. If you use a <code>rate()</code> expression, the rotation window
     * opens at midnight, and Secrets Manager rotates your secret any time that day
     * after midnight. You can set a <code>Duration</code> to shorten the rotation
     * window.</p> <p>You can use a <code>cron()</code> expression to create rotation
     * schedules that are more detailed than a rotation interval. For more information,
     * including examples, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_schedule.html">Schedule
     * expressions in Secrets Manager rotation</a>. If you use a <code>cron()</code>
     * expression, Secrets Manager rotates your secret any time during that day after
     * the window opens. For example, <code>cron(0 8 1 * ? *)</code> represents a
     * rotation window that occurs on the first day of every month beginning at 8:00 AM
     * UTC. Secrets Manager rotates the secret any time that day after 8:00 AM. You can
     * set a <code>Duration</code> to shorten the rotation window.</p>
     */
    inline RotationRulesType& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}

  private:

    long long m_automaticallyAfterDays;
    bool m_automaticallyAfterDaysHasBeenSet = false;

    Aws::String m_duration;
    bool m_durationHasBeenSet = false;

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
