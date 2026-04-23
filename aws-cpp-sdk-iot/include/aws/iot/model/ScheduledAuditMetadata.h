/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iot/model/AuditFrequency.h>
#include <aws/iot/model/DayOfWeek.h>
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
   * <p>Information about the scheduled audit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ScheduledAuditMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API ScheduledAuditMetadata
  {
  public:
    ScheduledAuditMetadata();
    ScheduledAuditMetadata(Aws::Utils::Json::JsonView jsonValue);
    ScheduledAuditMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the scheduled audit.</p>
     */
    inline const Aws::String& GetScheduledAuditName() const{ return m_scheduledAuditName; }

    /**
     * <p>The name of the scheduled audit.</p>
     */
    inline bool ScheduledAuditNameHasBeenSet() const { return m_scheduledAuditNameHasBeenSet; }

    /**
     * <p>The name of the scheduled audit.</p>
     */
    inline void SetScheduledAuditName(const Aws::String& value) { m_scheduledAuditNameHasBeenSet = true; m_scheduledAuditName = value; }

    /**
     * <p>The name of the scheduled audit.</p>
     */
    inline void SetScheduledAuditName(Aws::String&& value) { m_scheduledAuditNameHasBeenSet = true; m_scheduledAuditName = std::move(value); }

    /**
     * <p>The name of the scheduled audit.</p>
     */
    inline void SetScheduledAuditName(const char* value) { m_scheduledAuditNameHasBeenSet = true; m_scheduledAuditName.assign(value); }

    /**
     * <p>The name of the scheduled audit.</p>
     */
    inline ScheduledAuditMetadata& WithScheduledAuditName(const Aws::String& value) { SetScheduledAuditName(value); return *this;}

    /**
     * <p>The name of the scheduled audit.</p>
     */
    inline ScheduledAuditMetadata& WithScheduledAuditName(Aws::String&& value) { SetScheduledAuditName(std::move(value)); return *this;}

    /**
     * <p>The name of the scheduled audit.</p>
     */
    inline ScheduledAuditMetadata& WithScheduledAuditName(const char* value) { SetScheduledAuditName(value); return *this;}


    /**
     * <p>The ARN of the scheduled audit.</p>
     */
    inline const Aws::String& GetScheduledAuditArn() const{ return m_scheduledAuditArn; }

    /**
     * <p>The ARN of the scheduled audit.</p>
     */
    inline bool ScheduledAuditArnHasBeenSet() const { return m_scheduledAuditArnHasBeenSet; }

    /**
     * <p>The ARN of the scheduled audit.</p>
     */
    inline void SetScheduledAuditArn(const Aws::String& value) { m_scheduledAuditArnHasBeenSet = true; m_scheduledAuditArn = value; }

    /**
     * <p>The ARN of the scheduled audit.</p>
     */
    inline void SetScheduledAuditArn(Aws::String&& value) { m_scheduledAuditArnHasBeenSet = true; m_scheduledAuditArn = std::move(value); }

    /**
     * <p>The ARN of the scheduled audit.</p>
     */
    inline void SetScheduledAuditArn(const char* value) { m_scheduledAuditArnHasBeenSet = true; m_scheduledAuditArn.assign(value); }

    /**
     * <p>The ARN of the scheduled audit.</p>
     */
    inline ScheduledAuditMetadata& WithScheduledAuditArn(const Aws::String& value) { SetScheduledAuditArn(value); return *this;}

    /**
     * <p>The ARN of the scheduled audit.</p>
     */
    inline ScheduledAuditMetadata& WithScheduledAuditArn(Aws::String&& value) { SetScheduledAuditArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the scheduled audit.</p>
     */
    inline ScheduledAuditMetadata& WithScheduledAuditArn(const char* value) { SetScheduledAuditArn(value); return *this;}


    /**
     * <p>How often the scheduled audit takes place.</p>
     */
    inline const AuditFrequency& GetFrequency() const{ return m_frequency; }

    /**
     * <p>How often the scheduled audit takes place.</p>
     */
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }

    /**
     * <p>How often the scheduled audit takes place.</p>
     */
    inline void SetFrequency(const AuditFrequency& value) { m_frequencyHasBeenSet = true; m_frequency = value; }

    /**
     * <p>How often the scheduled audit takes place.</p>
     */
    inline void SetFrequency(AuditFrequency&& value) { m_frequencyHasBeenSet = true; m_frequency = std::move(value); }

    /**
     * <p>How often the scheduled audit takes place.</p>
     */
    inline ScheduledAuditMetadata& WithFrequency(const AuditFrequency& value) { SetFrequency(value); return *this;}

    /**
     * <p>How often the scheduled audit takes place.</p>
     */
    inline ScheduledAuditMetadata& WithFrequency(AuditFrequency&& value) { SetFrequency(std::move(value)); return *this;}


    /**
     * <p>The day of the month on which the scheduled audit is run (if the
     * <code>frequency</code> is "MONTHLY"). If days 29-31 are specified, and the month
     * does not have that many days, the audit takes place on the "LAST" day of the
     * month.</p>
     */
    inline const Aws::String& GetDayOfMonth() const{ return m_dayOfMonth; }

    /**
     * <p>The day of the month on which the scheduled audit is run (if the
     * <code>frequency</code> is "MONTHLY"). If days 29-31 are specified, and the month
     * does not have that many days, the audit takes place on the "LAST" day of the
     * month.</p>
     */
    inline bool DayOfMonthHasBeenSet() const { return m_dayOfMonthHasBeenSet; }

    /**
     * <p>The day of the month on which the scheduled audit is run (if the
     * <code>frequency</code> is "MONTHLY"). If days 29-31 are specified, and the month
     * does not have that many days, the audit takes place on the "LAST" day of the
     * month.</p>
     */
    inline void SetDayOfMonth(const Aws::String& value) { m_dayOfMonthHasBeenSet = true; m_dayOfMonth = value; }

    /**
     * <p>The day of the month on which the scheduled audit is run (if the
     * <code>frequency</code> is "MONTHLY"). If days 29-31 are specified, and the month
     * does not have that many days, the audit takes place on the "LAST" day of the
     * month.</p>
     */
    inline void SetDayOfMonth(Aws::String&& value) { m_dayOfMonthHasBeenSet = true; m_dayOfMonth = std::move(value); }

    /**
     * <p>The day of the month on which the scheduled audit is run (if the
     * <code>frequency</code> is "MONTHLY"). If days 29-31 are specified, and the month
     * does not have that many days, the audit takes place on the "LAST" day of the
     * month.</p>
     */
    inline void SetDayOfMonth(const char* value) { m_dayOfMonthHasBeenSet = true; m_dayOfMonth.assign(value); }

    /**
     * <p>The day of the month on which the scheduled audit is run (if the
     * <code>frequency</code> is "MONTHLY"). If days 29-31 are specified, and the month
     * does not have that many days, the audit takes place on the "LAST" day of the
     * month.</p>
     */
    inline ScheduledAuditMetadata& WithDayOfMonth(const Aws::String& value) { SetDayOfMonth(value); return *this;}

    /**
     * <p>The day of the month on which the scheduled audit is run (if the
     * <code>frequency</code> is "MONTHLY"). If days 29-31 are specified, and the month
     * does not have that many days, the audit takes place on the "LAST" day of the
     * month.</p>
     */
    inline ScheduledAuditMetadata& WithDayOfMonth(Aws::String&& value) { SetDayOfMonth(std::move(value)); return *this;}

    /**
     * <p>The day of the month on which the scheduled audit is run (if the
     * <code>frequency</code> is "MONTHLY"). If days 29-31 are specified, and the month
     * does not have that many days, the audit takes place on the "LAST" day of the
     * month.</p>
     */
    inline ScheduledAuditMetadata& WithDayOfMonth(const char* value) { SetDayOfMonth(value); return *this;}


    /**
     * <p>The day of the week on which the scheduled audit is run (if the
     * <code>frequency</code> is "WEEKLY" or "BIWEEKLY").</p>
     */
    inline const DayOfWeek& GetDayOfWeek() const{ return m_dayOfWeek; }

    /**
     * <p>The day of the week on which the scheduled audit is run (if the
     * <code>frequency</code> is "WEEKLY" or "BIWEEKLY").</p>
     */
    inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }

    /**
     * <p>The day of the week on which the scheduled audit is run (if the
     * <code>frequency</code> is "WEEKLY" or "BIWEEKLY").</p>
     */
    inline void SetDayOfWeek(const DayOfWeek& value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = value; }

    /**
     * <p>The day of the week on which the scheduled audit is run (if the
     * <code>frequency</code> is "WEEKLY" or "BIWEEKLY").</p>
     */
    inline void SetDayOfWeek(DayOfWeek&& value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = std::move(value); }

    /**
     * <p>The day of the week on which the scheduled audit is run (if the
     * <code>frequency</code> is "WEEKLY" or "BIWEEKLY").</p>
     */
    inline ScheduledAuditMetadata& WithDayOfWeek(const DayOfWeek& value) { SetDayOfWeek(value); return *this;}

    /**
     * <p>The day of the week on which the scheduled audit is run (if the
     * <code>frequency</code> is "WEEKLY" or "BIWEEKLY").</p>
     */
    inline ScheduledAuditMetadata& WithDayOfWeek(DayOfWeek&& value) { SetDayOfWeek(std::move(value)); return *this;}

  private:

    Aws::String m_scheduledAuditName;
    bool m_scheduledAuditNameHasBeenSet;

    Aws::String m_scheduledAuditArn;
    bool m_scheduledAuditArnHasBeenSet;

    AuditFrequency m_frequency;
    bool m_frequencyHasBeenSet;

    Aws::String m_dayOfMonth;
    bool m_dayOfMonthHasBeenSet;

    DayOfWeek m_dayOfWeek;
    bool m_dayOfWeekHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
