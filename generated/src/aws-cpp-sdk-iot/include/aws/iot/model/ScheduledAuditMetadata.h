﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ScheduledAuditMetadata
  {
  public:
    AWS_IOT_API ScheduledAuditMetadata();
    AWS_IOT_API ScheduledAuditMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ScheduledAuditMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the scheduled audit.</p>
     */
    inline const Aws::String& GetScheduledAuditName() const{ return m_scheduledAuditName; }
    inline bool ScheduledAuditNameHasBeenSet() const { return m_scheduledAuditNameHasBeenSet; }
    inline void SetScheduledAuditName(const Aws::String& value) { m_scheduledAuditNameHasBeenSet = true; m_scheduledAuditName = value; }
    inline void SetScheduledAuditName(Aws::String&& value) { m_scheduledAuditNameHasBeenSet = true; m_scheduledAuditName = std::move(value); }
    inline void SetScheduledAuditName(const char* value) { m_scheduledAuditNameHasBeenSet = true; m_scheduledAuditName.assign(value); }
    inline ScheduledAuditMetadata& WithScheduledAuditName(const Aws::String& value) { SetScheduledAuditName(value); return *this;}
    inline ScheduledAuditMetadata& WithScheduledAuditName(Aws::String&& value) { SetScheduledAuditName(std::move(value)); return *this;}
    inline ScheduledAuditMetadata& WithScheduledAuditName(const char* value) { SetScheduledAuditName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the scheduled audit.</p>
     */
    inline const Aws::String& GetScheduledAuditArn() const{ return m_scheduledAuditArn; }
    inline bool ScheduledAuditArnHasBeenSet() const { return m_scheduledAuditArnHasBeenSet; }
    inline void SetScheduledAuditArn(const Aws::String& value) { m_scheduledAuditArnHasBeenSet = true; m_scheduledAuditArn = value; }
    inline void SetScheduledAuditArn(Aws::String&& value) { m_scheduledAuditArnHasBeenSet = true; m_scheduledAuditArn = std::move(value); }
    inline void SetScheduledAuditArn(const char* value) { m_scheduledAuditArnHasBeenSet = true; m_scheduledAuditArn.assign(value); }
    inline ScheduledAuditMetadata& WithScheduledAuditArn(const Aws::String& value) { SetScheduledAuditArn(value); return *this;}
    inline ScheduledAuditMetadata& WithScheduledAuditArn(Aws::String&& value) { SetScheduledAuditArn(std::move(value)); return *this;}
    inline ScheduledAuditMetadata& WithScheduledAuditArn(const char* value) { SetScheduledAuditArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How often the scheduled audit occurs.</p>
     */
    inline const AuditFrequency& GetFrequency() const{ return m_frequency; }
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
    inline void SetFrequency(const AuditFrequency& value) { m_frequencyHasBeenSet = true; m_frequency = value; }
    inline void SetFrequency(AuditFrequency&& value) { m_frequencyHasBeenSet = true; m_frequency = std::move(value); }
    inline ScheduledAuditMetadata& WithFrequency(const AuditFrequency& value) { SetFrequency(value); return *this;}
    inline ScheduledAuditMetadata& WithFrequency(AuditFrequency&& value) { SetFrequency(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day of the month on which the scheduled audit is run (if the
     * <code>frequency</code> is "MONTHLY"). If days 29-31 are specified, and the month
     * does not have that many days, the audit takes place on the "LAST" day of the
     * month.</p>
     */
    inline const Aws::String& GetDayOfMonth() const{ return m_dayOfMonth; }
    inline bool DayOfMonthHasBeenSet() const { return m_dayOfMonthHasBeenSet; }
    inline void SetDayOfMonth(const Aws::String& value) { m_dayOfMonthHasBeenSet = true; m_dayOfMonth = value; }
    inline void SetDayOfMonth(Aws::String&& value) { m_dayOfMonthHasBeenSet = true; m_dayOfMonth = std::move(value); }
    inline void SetDayOfMonth(const char* value) { m_dayOfMonthHasBeenSet = true; m_dayOfMonth.assign(value); }
    inline ScheduledAuditMetadata& WithDayOfMonth(const Aws::String& value) { SetDayOfMonth(value); return *this;}
    inline ScheduledAuditMetadata& WithDayOfMonth(Aws::String&& value) { SetDayOfMonth(std::move(value)); return *this;}
    inline ScheduledAuditMetadata& WithDayOfMonth(const char* value) { SetDayOfMonth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day of the week on which the scheduled audit is run (if the
     * <code>frequency</code> is "WEEKLY" or "BIWEEKLY").</p>
     */
    inline const DayOfWeek& GetDayOfWeek() const{ return m_dayOfWeek; }
    inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }
    inline void SetDayOfWeek(const DayOfWeek& value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = value; }
    inline void SetDayOfWeek(DayOfWeek&& value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = std::move(value); }
    inline ScheduledAuditMetadata& WithDayOfWeek(const DayOfWeek& value) { SetDayOfWeek(value); return *this;}
    inline ScheduledAuditMetadata& WithDayOfWeek(DayOfWeek&& value) { SetDayOfWeek(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_scheduledAuditName;
    bool m_scheduledAuditNameHasBeenSet = false;

    Aws::String m_scheduledAuditArn;
    bool m_scheduledAuditArnHasBeenSet = false;

    AuditFrequency m_frequency;
    bool m_frequencyHasBeenSet = false;

    Aws::String m_dayOfMonth;
    bool m_dayOfMonthHasBeenSet = false;

    DayOfWeek m_dayOfWeek;
    bool m_dayOfWeekHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
