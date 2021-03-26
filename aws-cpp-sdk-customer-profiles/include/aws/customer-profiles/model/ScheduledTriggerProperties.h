/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/DataPullMode.h>
#include <aws/core/utils/DateTime.h>
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
namespace CustomerProfiles
{
namespace Model
{

  class AWS_CUSTOMERPROFILES_API ScheduledTriggerProperties
  {
  public:
    ScheduledTriggerProperties();
    ScheduledTriggerProperties(Aws::Utils::Json::JsonView jsonValue);
    ScheduledTriggerProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }

    
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    
    inline ScheduledTriggerProperties& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    
    inline ScheduledTriggerProperties& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    
    inline ScheduledTriggerProperties& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}


    
    inline const DataPullMode& GetDataPullMode() const{ return m_dataPullMode; }

    
    inline bool DataPullModeHasBeenSet() const { return m_dataPullModeHasBeenSet; }

    
    inline void SetDataPullMode(const DataPullMode& value) { m_dataPullModeHasBeenSet = true; m_dataPullMode = value; }

    
    inline void SetDataPullMode(DataPullMode&& value) { m_dataPullModeHasBeenSet = true; m_dataPullMode = std::move(value); }

    
    inline ScheduledTriggerProperties& WithDataPullMode(const DataPullMode& value) { SetDataPullMode(value); return *this;}

    
    inline ScheduledTriggerProperties& WithDataPullMode(DataPullMode&& value) { SetDataPullMode(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetScheduleStartTime() const{ return m_scheduleStartTime; }

    
    inline bool ScheduleStartTimeHasBeenSet() const { return m_scheduleStartTimeHasBeenSet; }

    
    inline void SetScheduleStartTime(const Aws::Utils::DateTime& value) { m_scheduleStartTimeHasBeenSet = true; m_scheduleStartTime = value; }

    
    inline void SetScheduleStartTime(Aws::Utils::DateTime&& value) { m_scheduleStartTimeHasBeenSet = true; m_scheduleStartTime = std::move(value); }

    
    inline ScheduledTriggerProperties& WithScheduleStartTime(const Aws::Utils::DateTime& value) { SetScheduleStartTime(value); return *this;}

    
    inline ScheduledTriggerProperties& WithScheduleStartTime(Aws::Utils::DateTime&& value) { SetScheduleStartTime(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetScheduleEndTime() const{ return m_scheduleEndTime; }

    
    inline bool ScheduleEndTimeHasBeenSet() const { return m_scheduleEndTimeHasBeenSet; }

    
    inline void SetScheduleEndTime(const Aws::Utils::DateTime& value) { m_scheduleEndTimeHasBeenSet = true; m_scheduleEndTime = value; }

    
    inline void SetScheduleEndTime(Aws::Utils::DateTime&& value) { m_scheduleEndTimeHasBeenSet = true; m_scheduleEndTime = std::move(value); }

    
    inline ScheduledTriggerProperties& WithScheduleEndTime(const Aws::Utils::DateTime& value) { SetScheduleEndTime(value); return *this;}

    
    inline ScheduledTriggerProperties& WithScheduleEndTime(Aws::Utils::DateTime&& value) { SetScheduleEndTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }

    
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }

    
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    
    inline ScheduledTriggerProperties& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    
    inline ScheduledTriggerProperties& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    
    inline ScheduledTriggerProperties& WithTimezone(const char* value) { SetTimezone(value); return *this;}


    
    inline long long GetScheduleOffset() const{ return m_scheduleOffset; }

    
    inline bool ScheduleOffsetHasBeenSet() const { return m_scheduleOffsetHasBeenSet; }

    
    inline void SetScheduleOffset(long long value) { m_scheduleOffsetHasBeenSet = true; m_scheduleOffset = value; }

    
    inline ScheduledTriggerProperties& WithScheduleOffset(long long value) { SetScheduleOffset(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetFirstExecutionFrom() const{ return m_firstExecutionFrom; }

    
    inline bool FirstExecutionFromHasBeenSet() const { return m_firstExecutionFromHasBeenSet; }

    
    inline void SetFirstExecutionFrom(const Aws::Utils::DateTime& value) { m_firstExecutionFromHasBeenSet = true; m_firstExecutionFrom = value; }

    
    inline void SetFirstExecutionFrom(Aws::Utils::DateTime&& value) { m_firstExecutionFromHasBeenSet = true; m_firstExecutionFrom = std::move(value); }

    
    inline ScheduledTriggerProperties& WithFirstExecutionFrom(const Aws::Utils::DateTime& value) { SetFirstExecutionFrom(value); return *this;}

    
    inline ScheduledTriggerProperties& WithFirstExecutionFrom(Aws::Utils::DateTime&& value) { SetFirstExecutionFrom(std::move(value)); return *this;}

  private:

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet;

    DataPullMode m_dataPullMode;
    bool m_dataPullModeHasBeenSet;

    Aws::Utils::DateTime m_scheduleStartTime;
    bool m_scheduleStartTimeHasBeenSet;

    Aws::Utils::DateTime m_scheduleEndTime;
    bool m_scheduleEndTimeHasBeenSet;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet;

    long long m_scheduleOffset;
    bool m_scheduleOffsetHasBeenSet;

    Aws::Utils::DateTime m_firstExecutionFrom;
    bool m_firstExecutionFromHasBeenSet;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
