/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/scheduler/model/FlexibleTimeWindow.h>
#include <aws/scheduler/model/ScheduleState.h>
#include <aws/scheduler/model/Target.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Scheduler
{
namespace Model
{
  class GetScheduleResult
  {
  public:
    AWS_SCHEDULER_API GetScheduleResult();
    AWS_SCHEDULER_API GetScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEDULER_API GetScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline GetScheduleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline GetScheduleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline GetScheduleResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time at which the schedule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The time at which the schedule was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The time at which the schedule was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The time at which the schedule was created.</p>
     */
    inline GetScheduleResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The time at which the schedule was created.</p>
     */
    inline GetScheduleResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The description of the schedule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the schedule.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the schedule.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the schedule.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the schedule.</p>
     */
    inline GetScheduleResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the schedule.</p>
     */
    inline GetScheduleResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the schedule.</p>
     */
    inline GetScheduleResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date, in UTC, before which the schedule can invoke its target. Depending
     * on the schedule's recurrence expression, invocations might stop on, or before,
     * the <code>EndDate</code> you specify. EventBridge Scheduler ignores
     * <code>EndDate</code> for one-time schedules.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The date, in UTC, before which the schedule can invoke its target. Depending
     * on the schedule's recurrence expression, invocations might stop on, or before,
     * the <code>EndDate</code> you specify. EventBridge Scheduler ignores
     * <code>EndDate</code> for one-time schedules.</p>
     */
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDate = value; }

    /**
     * <p>The date, in UTC, before which the schedule can invoke its target. Depending
     * on the schedule's recurrence expression, invocations might stop on, or before,
     * the <code>EndDate</code> you specify. EventBridge Scheduler ignores
     * <code>EndDate</code> for one-time schedules.</p>
     */
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDate = std::move(value); }

    /**
     * <p>The date, in UTC, before which the schedule can invoke its target. Depending
     * on the schedule's recurrence expression, invocations might stop on, or before,
     * the <code>EndDate</code> you specify. EventBridge Scheduler ignores
     * <code>EndDate</code> for one-time schedules.</p>
     */
    inline GetScheduleResult& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}

    /**
     * <p>The date, in UTC, before which the schedule can invoke its target. Depending
     * on the schedule's recurrence expression, invocations might stop on, or before,
     * the <code>EndDate</code> you specify. EventBridge Scheduler ignores
     * <code>EndDate</code> for one-time schedules.</p>
     */
    inline GetScheduleResult& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}


    /**
     * <p>Allows you to configure a time window during which EventBridge Scheduler
     * invokes the schedule.</p>
     */
    inline const FlexibleTimeWindow& GetFlexibleTimeWindow() const{ return m_flexibleTimeWindow; }

    /**
     * <p>Allows you to configure a time window during which EventBridge Scheduler
     * invokes the schedule.</p>
     */
    inline void SetFlexibleTimeWindow(const FlexibleTimeWindow& value) { m_flexibleTimeWindow = value; }

    /**
     * <p>Allows you to configure a time window during which EventBridge Scheduler
     * invokes the schedule.</p>
     */
    inline void SetFlexibleTimeWindow(FlexibleTimeWindow&& value) { m_flexibleTimeWindow = std::move(value); }

    /**
     * <p>Allows you to configure a time window during which EventBridge Scheduler
     * invokes the schedule.</p>
     */
    inline GetScheduleResult& WithFlexibleTimeWindow(const FlexibleTimeWindow& value) { SetFlexibleTimeWindow(value); return *this;}

    /**
     * <p>Allows you to configure a time window during which EventBridge Scheduler
     * invokes the schedule.</p>
     */
    inline GetScheduleResult& WithFlexibleTimeWindow(FlexibleTimeWindow&& value) { SetFlexibleTimeWindow(std::move(value)); return *this;}


    /**
     * <p>The name of the schedule group associated with this schedule.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the schedule group associated with this schedule.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupName = value; }

    /**
     * <p>The name of the schedule group associated with this schedule.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupName = std::move(value); }

    /**
     * <p>The name of the schedule group associated with this schedule.</p>
     */
    inline void SetGroupName(const char* value) { m_groupName.assign(value); }

    /**
     * <p>The name of the schedule group associated with this schedule.</p>
     */
    inline GetScheduleResult& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the schedule group associated with this schedule.</p>
     */
    inline GetScheduleResult& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the schedule group associated with this schedule.</p>
     */
    inline GetScheduleResult& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The ARN for a customer managed KMS Key that is be used to encrypt and decrypt
     * your data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The ARN for a customer managed KMS Key that is be used to encrypt and decrypt
     * your data.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArn = value; }

    /**
     * <p>The ARN for a customer managed KMS Key that is be used to encrypt and decrypt
     * your data.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArn = std::move(value); }

    /**
     * <p>The ARN for a customer managed KMS Key that is be used to encrypt and decrypt
     * your data.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArn.assign(value); }

    /**
     * <p>The ARN for a customer managed KMS Key that is be used to encrypt and decrypt
     * your data.</p>
     */
    inline GetScheduleResult& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The ARN for a customer managed KMS Key that is be used to encrypt and decrypt
     * your data.</p>
     */
    inline GetScheduleResult& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for a customer managed KMS Key that is be used to encrypt and decrypt
     * your data.</p>
     */
    inline GetScheduleResult& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    /**
     * <p>The time at which the schedule was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationDate() const{ return m_lastModificationDate; }

    /**
     * <p>The time at which the schedule was last modified.</p>
     */
    inline void SetLastModificationDate(const Aws::Utils::DateTime& value) { m_lastModificationDate = value; }

    /**
     * <p>The time at which the schedule was last modified.</p>
     */
    inline void SetLastModificationDate(Aws::Utils::DateTime&& value) { m_lastModificationDate = std::move(value); }

    /**
     * <p>The time at which the schedule was last modified.</p>
     */
    inline GetScheduleResult& WithLastModificationDate(const Aws::Utils::DateTime& value) { SetLastModificationDate(value); return *this;}

    /**
     * <p>The time at which the schedule was last modified.</p>
     */
    inline GetScheduleResult& WithLastModificationDate(Aws::Utils::DateTime&& value) { SetLastModificationDate(std::move(value)); return *this;}


    /**
     * <p>The name of the schedule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the schedule.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the schedule.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the schedule.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the schedule.</p>
     */
    inline GetScheduleResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the schedule.</p>
     */
    inline GetScheduleResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the schedule.</p>
     */
    inline GetScheduleResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The expression that defines when the schedule runs. The following formats
     * are supported. </p> <ul> <li> <p> <code>at</code> expression -
     * <code>at(yyyy-mm-ddThh:mm:ss)</code> </p> </li> <li> <p> <code>rate</code>
     * expression - <code>rate(unit value)</code> </p> </li> <li> <p> <code>cron</code>
     * expression - <code>cron(fields)</code> </p> </li> </ul> <p> You can use
     * <code>at</code> expressions to create one-time schedules that invoke a target
     * once, at the time and in the time zone, that you specify. You can use
     * <code>rate</code> and <code>cron</code> expressions to create recurring
     * schedules. Rate-based schedules are useful when you want to invoke a target at
     * regular intervals, such as every 15 minutes or every five days. Cron-based
     * schedules are useful when you want to invoke a target periodically at a specific
     * time, such as at 8:00 am (UTC+0) every 1st day of the month. </p> <p> A
     * <code>cron</code> expression consists of six fields separated by white spaces:
     * <code>(minutes hours day_of_month month day_of_week year)</code>. </p> <p> A
     * <code>rate</code> expression consists of a <i>value</i> as a positive integer,
     * and a <i>unit</i> with the following options: <code>minute</code> |
     * <code>minutes</code> | <code>hour</code> | <code>hours</code> | <code>day</code>
     * | <code>days</code> </p> <p> For more information and examples, see <a
     * href="https://docs.aws.amazon.com/scheduler/latest/UserGuide/schedule-types.html">Schedule
     * types on EventBridge Scheduler</a> in the <i>EventBridge Scheduler User
     * Guide</i>. </p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p> The expression that defines when the schedule runs. The following formats
     * are supported. </p> <ul> <li> <p> <code>at</code> expression -
     * <code>at(yyyy-mm-ddThh:mm:ss)</code> </p> </li> <li> <p> <code>rate</code>
     * expression - <code>rate(unit value)</code> </p> </li> <li> <p> <code>cron</code>
     * expression - <code>cron(fields)</code> </p> </li> </ul> <p> You can use
     * <code>at</code> expressions to create one-time schedules that invoke a target
     * once, at the time and in the time zone, that you specify. You can use
     * <code>rate</code> and <code>cron</code> expressions to create recurring
     * schedules. Rate-based schedules are useful when you want to invoke a target at
     * regular intervals, such as every 15 minutes or every five days. Cron-based
     * schedules are useful when you want to invoke a target periodically at a specific
     * time, such as at 8:00 am (UTC+0) every 1st day of the month. </p> <p> A
     * <code>cron</code> expression consists of six fields separated by white spaces:
     * <code>(minutes hours day_of_month month day_of_week year)</code>. </p> <p> A
     * <code>rate</code> expression consists of a <i>value</i> as a positive integer,
     * and a <i>unit</i> with the following options: <code>minute</code> |
     * <code>minutes</code> | <code>hour</code> | <code>hours</code> | <code>day</code>
     * | <code>days</code> </p> <p> For more information and examples, see <a
     * href="https://docs.aws.amazon.com/scheduler/latest/UserGuide/schedule-types.html">Schedule
     * types on EventBridge Scheduler</a> in the <i>EventBridge Scheduler User
     * Guide</i>. </p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpression = value; }

    /**
     * <p> The expression that defines when the schedule runs. The following formats
     * are supported. </p> <ul> <li> <p> <code>at</code> expression -
     * <code>at(yyyy-mm-ddThh:mm:ss)</code> </p> </li> <li> <p> <code>rate</code>
     * expression - <code>rate(unit value)</code> </p> </li> <li> <p> <code>cron</code>
     * expression - <code>cron(fields)</code> </p> </li> </ul> <p> You can use
     * <code>at</code> expressions to create one-time schedules that invoke a target
     * once, at the time and in the time zone, that you specify. You can use
     * <code>rate</code> and <code>cron</code> expressions to create recurring
     * schedules. Rate-based schedules are useful when you want to invoke a target at
     * regular intervals, such as every 15 minutes or every five days. Cron-based
     * schedules are useful when you want to invoke a target periodically at a specific
     * time, such as at 8:00 am (UTC+0) every 1st day of the month. </p> <p> A
     * <code>cron</code> expression consists of six fields separated by white spaces:
     * <code>(minutes hours day_of_month month day_of_week year)</code>. </p> <p> A
     * <code>rate</code> expression consists of a <i>value</i> as a positive integer,
     * and a <i>unit</i> with the following options: <code>minute</code> |
     * <code>minutes</code> | <code>hour</code> | <code>hours</code> | <code>day</code>
     * | <code>days</code> </p> <p> For more information and examples, see <a
     * href="https://docs.aws.amazon.com/scheduler/latest/UserGuide/schedule-types.html">Schedule
     * types on EventBridge Scheduler</a> in the <i>EventBridge Scheduler User
     * Guide</i>. </p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpression = std::move(value); }

    /**
     * <p> The expression that defines when the schedule runs. The following formats
     * are supported. </p> <ul> <li> <p> <code>at</code> expression -
     * <code>at(yyyy-mm-ddThh:mm:ss)</code> </p> </li> <li> <p> <code>rate</code>
     * expression - <code>rate(unit value)</code> </p> </li> <li> <p> <code>cron</code>
     * expression - <code>cron(fields)</code> </p> </li> </ul> <p> You can use
     * <code>at</code> expressions to create one-time schedules that invoke a target
     * once, at the time and in the time zone, that you specify. You can use
     * <code>rate</code> and <code>cron</code> expressions to create recurring
     * schedules. Rate-based schedules are useful when you want to invoke a target at
     * regular intervals, such as every 15 minutes or every five days. Cron-based
     * schedules are useful when you want to invoke a target periodically at a specific
     * time, such as at 8:00 am (UTC+0) every 1st day of the month. </p> <p> A
     * <code>cron</code> expression consists of six fields separated by white spaces:
     * <code>(minutes hours day_of_month month day_of_week year)</code>. </p> <p> A
     * <code>rate</code> expression consists of a <i>value</i> as a positive integer,
     * and a <i>unit</i> with the following options: <code>minute</code> |
     * <code>minutes</code> | <code>hour</code> | <code>hours</code> | <code>day</code>
     * | <code>days</code> </p> <p> For more information and examples, see <a
     * href="https://docs.aws.amazon.com/scheduler/latest/UserGuide/schedule-types.html">Schedule
     * types on EventBridge Scheduler</a> in the <i>EventBridge Scheduler User
     * Guide</i>. </p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpression.assign(value); }

    /**
     * <p> The expression that defines when the schedule runs. The following formats
     * are supported. </p> <ul> <li> <p> <code>at</code> expression -
     * <code>at(yyyy-mm-ddThh:mm:ss)</code> </p> </li> <li> <p> <code>rate</code>
     * expression - <code>rate(unit value)</code> </p> </li> <li> <p> <code>cron</code>
     * expression - <code>cron(fields)</code> </p> </li> </ul> <p> You can use
     * <code>at</code> expressions to create one-time schedules that invoke a target
     * once, at the time and in the time zone, that you specify. You can use
     * <code>rate</code> and <code>cron</code> expressions to create recurring
     * schedules. Rate-based schedules are useful when you want to invoke a target at
     * regular intervals, such as every 15 minutes or every five days. Cron-based
     * schedules are useful when you want to invoke a target periodically at a specific
     * time, such as at 8:00 am (UTC+0) every 1st day of the month. </p> <p> A
     * <code>cron</code> expression consists of six fields separated by white spaces:
     * <code>(minutes hours day_of_month month day_of_week year)</code>. </p> <p> A
     * <code>rate</code> expression consists of a <i>value</i> as a positive integer,
     * and a <i>unit</i> with the following options: <code>minute</code> |
     * <code>minutes</code> | <code>hour</code> | <code>hours</code> | <code>day</code>
     * | <code>days</code> </p> <p> For more information and examples, see <a
     * href="https://docs.aws.amazon.com/scheduler/latest/UserGuide/schedule-types.html">Schedule
     * types on EventBridge Scheduler</a> in the <i>EventBridge Scheduler User
     * Guide</i>. </p>
     */
    inline GetScheduleResult& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p> The expression that defines when the schedule runs. The following formats
     * are supported. </p> <ul> <li> <p> <code>at</code> expression -
     * <code>at(yyyy-mm-ddThh:mm:ss)</code> </p> </li> <li> <p> <code>rate</code>
     * expression - <code>rate(unit value)</code> </p> </li> <li> <p> <code>cron</code>
     * expression - <code>cron(fields)</code> </p> </li> </ul> <p> You can use
     * <code>at</code> expressions to create one-time schedules that invoke a target
     * once, at the time and in the time zone, that you specify. You can use
     * <code>rate</code> and <code>cron</code> expressions to create recurring
     * schedules. Rate-based schedules are useful when you want to invoke a target at
     * regular intervals, such as every 15 minutes or every five days. Cron-based
     * schedules are useful when you want to invoke a target periodically at a specific
     * time, such as at 8:00 am (UTC+0) every 1st day of the month. </p> <p> A
     * <code>cron</code> expression consists of six fields separated by white spaces:
     * <code>(minutes hours day_of_month month day_of_week year)</code>. </p> <p> A
     * <code>rate</code> expression consists of a <i>value</i> as a positive integer,
     * and a <i>unit</i> with the following options: <code>minute</code> |
     * <code>minutes</code> | <code>hour</code> | <code>hours</code> | <code>day</code>
     * | <code>days</code> </p> <p> For more information and examples, see <a
     * href="https://docs.aws.amazon.com/scheduler/latest/UserGuide/schedule-types.html">Schedule
     * types on EventBridge Scheduler</a> in the <i>EventBridge Scheduler User
     * Guide</i>. </p>
     */
    inline GetScheduleResult& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p> The expression that defines when the schedule runs. The following formats
     * are supported. </p> <ul> <li> <p> <code>at</code> expression -
     * <code>at(yyyy-mm-ddThh:mm:ss)</code> </p> </li> <li> <p> <code>rate</code>
     * expression - <code>rate(unit value)</code> </p> </li> <li> <p> <code>cron</code>
     * expression - <code>cron(fields)</code> </p> </li> </ul> <p> You can use
     * <code>at</code> expressions to create one-time schedules that invoke a target
     * once, at the time and in the time zone, that you specify. You can use
     * <code>rate</code> and <code>cron</code> expressions to create recurring
     * schedules. Rate-based schedules are useful when you want to invoke a target at
     * regular intervals, such as every 15 minutes or every five days. Cron-based
     * schedules are useful when you want to invoke a target periodically at a specific
     * time, such as at 8:00 am (UTC+0) every 1st day of the month. </p> <p> A
     * <code>cron</code> expression consists of six fields separated by white spaces:
     * <code>(minutes hours day_of_month month day_of_week year)</code>. </p> <p> A
     * <code>rate</code> expression consists of a <i>value</i> as a positive integer,
     * and a <i>unit</i> with the following options: <code>minute</code> |
     * <code>minutes</code> | <code>hour</code> | <code>hours</code> | <code>day</code>
     * | <code>days</code> </p> <p> For more information and examples, see <a
     * href="https://docs.aws.amazon.com/scheduler/latest/UserGuide/schedule-types.html">Schedule
     * types on EventBridge Scheduler</a> in the <i>EventBridge Scheduler User
     * Guide</i>. </p>
     */
    inline GetScheduleResult& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}


    /**
     * <p>The timezone in which the scheduling expression is evaluated.</p>
     */
    inline const Aws::String& GetScheduleExpressionTimezone() const{ return m_scheduleExpressionTimezone; }

    /**
     * <p>The timezone in which the scheduling expression is evaluated.</p>
     */
    inline void SetScheduleExpressionTimezone(const Aws::String& value) { m_scheduleExpressionTimezone = value; }

    /**
     * <p>The timezone in which the scheduling expression is evaluated.</p>
     */
    inline void SetScheduleExpressionTimezone(Aws::String&& value) { m_scheduleExpressionTimezone = std::move(value); }

    /**
     * <p>The timezone in which the scheduling expression is evaluated.</p>
     */
    inline void SetScheduleExpressionTimezone(const char* value) { m_scheduleExpressionTimezone.assign(value); }

    /**
     * <p>The timezone in which the scheduling expression is evaluated.</p>
     */
    inline GetScheduleResult& WithScheduleExpressionTimezone(const Aws::String& value) { SetScheduleExpressionTimezone(value); return *this;}

    /**
     * <p>The timezone in which the scheduling expression is evaluated.</p>
     */
    inline GetScheduleResult& WithScheduleExpressionTimezone(Aws::String&& value) { SetScheduleExpressionTimezone(std::move(value)); return *this;}

    /**
     * <p>The timezone in which the scheduling expression is evaluated.</p>
     */
    inline GetScheduleResult& WithScheduleExpressionTimezone(const char* value) { SetScheduleExpressionTimezone(value); return *this;}


    /**
     * <p>The date, in UTC, after which the schedule can begin invoking its target.
     * Depending on the schedule's recurrence expression, invocations might occur on,
     * or after, the <code>StartDate</code> you specify. EventBridge Scheduler ignores
     * <code>StartDate</code> for one-time schedules.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The date, in UTC, after which the schedule can begin invoking its target.
     * Depending on the schedule's recurrence expression, invocations might occur on,
     * or after, the <code>StartDate</code> you specify. EventBridge Scheduler ignores
     * <code>StartDate</code> for one-time schedules.</p>
     */
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDate = value; }

    /**
     * <p>The date, in UTC, after which the schedule can begin invoking its target.
     * Depending on the schedule's recurrence expression, invocations might occur on,
     * or after, the <code>StartDate</code> you specify. EventBridge Scheduler ignores
     * <code>StartDate</code> for one-time schedules.</p>
     */
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDate = std::move(value); }

    /**
     * <p>The date, in UTC, after which the schedule can begin invoking its target.
     * Depending on the schedule's recurrence expression, invocations might occur on,
     * or after, the <code>StartDate</code> you specify. EventBridge Scheduler ignores
     * <code>StartDate</code> for one-time schedules.</p>
     */
    inline GetScheduleResult& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}

    /**
     * <p>The date, in UTC, after which the schedule can begin invoking its target.
     * Depending on the schedule's recurrence expression, invocations might occur on,
     * or after, the <code>StartDate</code> you specify. EventBridge Scheduler ignores
     * <code>StartDate</code> for one-time schedules.</p>
     */
    inline GetScheduleResult& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the schedule is enabled or disabled.</p>
     */
    inline const ScheduleState& GetState() const{ return m_state; }

    /**
     * <p>Specifies whether the schedule is enabled or disabled.</p>
     */
    inline void SetState(const ScheduleState& value) { m_state = value; }

    /**
     * <p>Specifies whether the schedule is enabled or disabled.</p>
     */
    inline void SetState(ScheduleState&& value) { m_state = std::move(value); }

    /**
     * <p>Specifies whether the schedule is enabled or disabled.</p>
     */
    inline GetScheduleResult& WithState(const ScheduleState& value) { SetState(value); return *this;}

    /**
     * <p>Specifies whether the schedule is enabled or disabled.</p>
     */
    inline GetScheduleResult& WithState(ScheduleState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The schedule target.</p>
     */
    inline const Target& GetTarget() const{ return m_target; }

    /**
     * <p>The schedule target.</p>
     */
    inline void SetTarget(const Target& value) { m_target = value; }

    /**
     * <p>The schedule target.</p>
     */
    inline void SetTarget(Target&& value) { m_target = std::move(value); }

    /**
     * <p>The schedule target.</p>
     */
    inline GetScheduleResult& WithTarget(const Target& value) { SetTarget(value); return *this;}

    /**
     * <p>The schedule target.</p>
     */
    inline GetScheduleResult& WithTarget(Target&& value) { SetTarget(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationDate;

    Aws::String m_description;

    Aws::Utils::DateTime m_endDate;

    FlexibleTimeWindow m_flexibleTimeWindow;

    Aws::String m_groupName;

    Aws::String m_kmsKeyArn;

    Aws::Utils::DateTime m_lastModificationDate;

    Aws::String m_name;

    Aws::String m_scheduleExpression;

    Aws::String m_scheduleExpressionTimezone;

    Aws::Utils::DateTime m_startDate;

    ScheduleState m_state;

    Target m_target;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
