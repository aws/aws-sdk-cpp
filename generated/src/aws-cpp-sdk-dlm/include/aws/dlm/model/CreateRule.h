/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/dlm/model/LocationValues.h>
#include <aws/dlm/model/IntervalUnitValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DLM
{
namespace Model
{

  /**
   * <p> <b>[Snapshot and AMI policies only]</b> Specifies when the policy should
   * create snapshots or AMIs.</p>  <ul> <li> <p>You must specify either
   * <b>CronExpression</b>, or <b>Interval</b>, <b>IntervalUnit</b>, and
   * <b>Times</b>.</p> </li> <li> <p>If you need to specify an <a>ArchiveRule</a> for
   * the schedule, then you must specify a creation frequency of at least 28
   * days.</p> </li> </ul> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/CreateRule">AWS API
   * Reference</a></p>
   */
  class CreateRule
  {
  public:
    AWS_DLM_API CreateRule();
    AWS_DLM_API CreateRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API CreateRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> <b>[Snapshot policies only]</b> Specifies the destination for snapshots
     * created by the policy. To create snapshots in the same Region as the source
     * resource, specify <code>CLOUD</code>. To create snapshots on the same Outpost as
     * the source resource, specify <code>OUTPOST_LOCAL</code>. If you omit this
     * parameter, <code>CLOUD</code> is used by default.</p> <p>If the policy targets
     * resources in an Amazon Web Services Region, then you must create snapshots in
     * the same Region as the source resource. If the policy targets resources on an
     * Outpost, then you can create snapshots on the same Outpost as the source
     * resource, or in the Region of that Outpost.</p>
     */
    inline const LocationValues& GetLocation() const{ return m_location; }

    /**
     * <p> <b>[Snapshot policies only]</b> Specifies the destination for snapshots
     * created by the policy. To create snapshots in the same Region as the source
     * resource, specify <code>CLOUD</code>. To create snapshots on the same Outpost as
     * the source resource, specify <code>OUTPOST_LOCAL</code>. If you omit this
     * parameter, <code>CLOUD</code> is used by default.</p> <p>If the policy targets
     * resources in an Amazon Web Services Region, then you must create snapshots in
     * the same Region as the source resource. If the policy targets resources on an
     * Outpost, then you can create snapshots on the same Outpost as the source
     * resource, or in the Region of that Outpost.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p> <b>[Snapshot policies only]</b> Specifies the destination for snapshots
     * created by the policy. To create snapshots in the same Region as the source
     * resource, specify <code>CLOUD</code>. To create snapshots on the same Outpost as
     * the source resource, specify <code>OUTPOST_LOCAL</code>. If you omit this
     * parameter, <code>CLOUD</code> is used by default.</p> <p>If the policy targets
     * resources in an Amazon Web Services Region, then you must create snapshots in
     * the same Region as the source resource. If the policy targets resources on an
     * Outpost, then you can create snapshots on the same Outpost as the source
     * resource, or in the Region of that Outpost.</p>
     */
    inline void SetLocation(const LocationValues& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p> <b>[Snapshot policies only]</b> Specifies the destination for snapshots
     * created by the policy. To create snapshots in the same Region as the source
     * resource, specify <code>CLOUD</code>. To create snapshots on the same Outpost as
     * the source resource, specify <code>OUTPOST_LOCAL</code>. If you omit this
     * parameter, <code>CLOUD</code> is used by default.</p> <p>If the policy targets
     * resources in an Amazon Web Services Region, then you must create snapshots in
     * the same Region as the source resource. If the policy targets resources on an
     * Outpost, then you can create snapshots on the same Outpost as the source
     * resource, or in the Region of that Outpost.</p>
     */
    inline void SetLocation(LocationValues&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p> <b>[Snapshot policies only]</b> Specifies the destination for snapshots
     * created by the policy. To create snapshots in the same Region as the source
     * resource, specify <code>CLOUD</code>. To create snapshots on the same Outpost as
     * the source resource, specify <code>OUTPOST_LOCAL</code>. If you omit this
     * parameter, <code>CLOUD</code> is used by default.</p> <p>If the policy targets
     * resources in an Amazon Web Services Region, then you must create snapshots in
     * the same Region as the source resource. If the policy targets resources on an
     * Outpost, then you can create snapshots on the same Outpost as the source
     * resource, or in the Region of that Outpost.</p>
     */
    inline CreateRule& WithLocation(const LocationValues& value) { SetLocation(value); return *this;}

    /**
     * <p> <b>[Snapshot policies only]</b> Specifies the destination for snapshots
     * created by the policy. To create snapshots in the same Region as the source
     * resource, specify <code>CLOUD</code>. To create snapshots on the same Outpost as
     * the source resource, specify <code>OUTPOST_LOCAL</code>. If you omit this
     * parameter, <code>CLOUD</code> is used by default.</p> <p>If the policy targets
     * resources in an Amazon Web Services Region, then you must create snapshots in
     * the same Region as the source resource. If the policy targets resources on an
     * Outpost, then you can create snapshots on the same Outpost as the source
     * resource, or in the Region of that Outpost.</p>
     */
    inline CreateRule& WithLocation(LocationValues&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>The interval between snapshots. The supported values are 1, 2, 3, 4, 6, 8,
     * 12, and 24.</p>
     */
    inline int GetInterval() const{ return m_interval; }

    /**
     * <p>The interval between snapshots. The supported values are 1, 2, 3, 4, 6, 8,
     * 12, and 24.</p>
     */
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }

    /**
     * <p>The interval between snapshots. The supported values are 1, 2, 3, 4, 6, 8,
     * 12, and 24.</p>
     */
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }

    /**
     * <p>The interval between snapshots. The supported values are 1, 2, 3, 4, 6, 8,
     * 12, and 24.</p>
     */
    inline CreateRule& WithInterval(int value) { SetInterval(value); return *this;}


    /**
     * <p>The interval unit.</p>
     */
    inline const IntervalUnitValues& GetIntervalUnit() const{ return m_intervalUnit; }

    /**
     * <p>The interval unit.</p>
     */
    inline bool IntervalUnitHasBeenSet() const { return m_intervalUnitHasBeenSet; }

    /**
     * <p>The interval unit.</p>
     */
    inline void SetIntervalUnit(const IntervalUnitValues& value) { m_intervalUnitHasBeenSet = true; m_intervalUnit = value; }

    /**
     * <p>The interval unit.</p>
     */
    inline void SetIntervalUnit(IntervalUnitValues&& value) { m_intervalUnitHasBeenSet = true; m_intervalUnit = std::move(value); }

    /**
     * <p>The interval unit.</p>
     */
    inline CreateRule& WithIntervalUnit(const IntervalUnitValues& value) { SetIntervalUnit(value); return *this;}

    /**
     * <p>The interval unit.</p>
     */
    inline CreateRule& WithIntervalUnit(IntervalUnitValues&& value) { SetIntervalUnit(std::move(value)); return *this;}


    /**
     * <p>The time, in UTC, to start the operation. The supported format is hh:mm.</p>
     * <p>The operation occurs within a one-hour window following the specified time.
     * If you do not specify a time, Amazon Data Lifecycle Manager selects a time
     * within the next 24 hours.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTimes() const{ return m_times; }

    /**
     * <p>The time, in UTC, to start the operation. The supported format is hh:mm.</p>
     * <p>The operation occurs within a one-hour window following the specified time.
     * If you do not specify a time, Amazon Data Lifecycle Manager selects a time
     * within the next 24 hours.</p>
     */
    inline bool TimesHasBeenSet() const { return m_timesHasBeenSet; }

    /**
     * <p>The time, in UTC, to start the operation. The supported format is hh:mm.</p>
     * <p>The operation occurs within a one-hour window following the specified time.
     * If you do not specify a time, Amazon Data Lifecycle Manager selects a time
     * within the next 24 hours.</p>
     */
    inline void SetTimes(const Aws::Vector<Aws::String>& value) { m_timesHasBeenSet = true; m_times = value; }

    /**
     * <p>The time, in UTC, to start the operation. The supported format is hh:mm.</p>
     * <p>The operation occurs within a one-hour window following the specified time.
     * If you do not specify a time, Amazon Data Lifecycle Manager selects a time
     * within the next 24 hours.</p>
     */
    inline void SetTimes(Aws::Vector<Aws::String>&& value) { m_timesHasBeenSet = true; m_times = std::move(value); }

    /**
     * <p>The time, in UTC, to start the operation. The supported format is hh:mm.</p>
     * <p>The operation occurs within a one-hour window following the specified time.
     * If you do not specify a time, Amazon Data Lifecycle Manager selects a time
     * within the next 24 hours.</p>
     */
    inline CreateRule& WithTimes(const Aws::Vector<Aws::String>& value) { SetTimes(value); return *this;}

    /**
     * <p>The time, in UTC, to start the operation. The supported format is hh:mm.</p>
     * <p>The operation occurs within a one-hour window following the specified time.
     * If you do not specify a time, Amazon Data Lifecycle Manager selects a time
     * within the next 24 hours.</p>
     */
    inline CreateRule& WithTimes(Aws::Vector<Aws::String>&& value) { SetTimes(std::move(value)); return *this;}

    /**
     * <p>The time, in UTC, to start the operation. The supported format is hh:mm.</p>
     * <p>The operation occurs within a one-hour window following the specified time.
     * If you do not specify a time, Amazon Data Lifecycle Manager selects a time
     * within the next 24 hours.</p>
     */
    inline CreateRule& AddTimes(const Aws::String& value) { m_timesHasBeenSet = true; m_times.push_back(value); return *this; }

    /**
     * <p>The time, in UTC, to start the operation. The supported format is hh:mm.</p>
     * <p>The operation occurs within a one-hour window following the specified time.
     * If you do not specify a time, Amazon Data Lifecycle Manager selects a time
     * within the next 24 hours.</p>
     */
    inline CreateRule& AddTimes(Aws::String&& value) { m_timesHasBeenSet = true; m_times.push_back(std::move(value)); return *this; }

    /**
     * <p>The time, in UTC, to start the operation. The supported format is hh:mm.</p>
     * <p>The operation occurs within a one-hour window following the specified time.
     * If you do not specify a time, Amazon Data Lifecycle Manager selects a time
     * within the next 24 hours.</p>
     */
    inline CreateRule& AddTimes(const char* value) { m_timesHasBeenSet = true; m_times.push_back(value); return *this; }


    /**
     * <p>The schedule, as a Cron expression. The schedule interval must be between 1
     * hour and 1 year. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * expressions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     */
    inline const Aws::String& GetCronExpression() const{ return m_cronExpression; }

    /**
     * <p>The schedule, as a Cron expression. The schedule interval must be between 1
     * hour and 1 year. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * expressions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     */
    inline bool CronExpressionHasBeenSet() const { return m_cronExpressionHasBeenSet; }

    /**
     * <p>The schedule, as a Cron expression. The schedule interval must be between 1
     * hour and 1 year. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * expressions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     */
    inline void SetCronExpression(const Aws::String& value) { m_cronExpressionHasBeenSet = true; m_cronExpression = value; }

    /**
     * <p>The schedule, as a Cron expression. The schedule interval must be between 1
     * hour and 1 year. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * expressions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     */
    inline void SetCronExpression(Aws::String&& value) { m_cronExpressionHasBeenSet = true; m_cronExpression = std::move(value); }

    /**
     * <p>The schedule, as a Cron expression. The schedule interval must be between 1
     * hour and 1 year. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * expressions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     */
    inline void SetCronExpression(const char* value) { m_cronExpressionHasBeenSet = true; m_cronExpression.assign(value); }

    /**
     * <p>The schedule, as a Cron expression. The schedule interval must be between 1
     * hour and 1 year. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * expressions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     */
    inline CreateRule& WithCronExpression(const Aws::String& value) { SetCronExpression(value); return *this;}

    /**
     * <p>The schedule, as a Cron expression. The schedule interval must be between 1
     * hour and 1 year. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * expressions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     */
    inline CreateRule& WithCronExpression(Aws::String&& value) { SetCronExpression(std::move(value)); return *this;}

    /**
     * <p>The schedule, as a Cron expression. The schedule interval must be between 1
     * hour and 1 year. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * expressions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     */
    inline CreateRule& WithCronExpression(const char* value) { SetCronExpression(value); return *this;}

  private:

    LocationValues m_location;
    bool m_locationHasBeenSet = false;

    int m_interval;
    bool m_intervalHasBeenSet = false;

    IntervalUnitValues m_intervalUnit;
    bool m_intervalUnitHasBeenSet = false;

    Aws::Vector<Aws::String> m_times;
    bool m_timesHasBeenSet = false;

    Aws::String m_cronExpression;
    bool m_cronExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
