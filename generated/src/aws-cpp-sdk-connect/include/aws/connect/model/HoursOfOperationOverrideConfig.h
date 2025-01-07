﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/OverrideDays.h>
#include <aws/connect/model/OverrideTimeSlice.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the hours of operation override config: day, start time,
   * and end time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HoursOfOperationOverrideConfig">AWS
   * API Reference</a></p>
   */
  class HoursOfOperationOverrideConfig
  {
  public:
    AWS_CONNECT_API HoursOfOperationOverrideConfig();
    AWS_CONNECT_API HoursOfOperationOverrideConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HoursOfOperationOverrideConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The day that the hours of operation override applies to.</p>
     */
    inline const OverrideDays& GetDay() const{ return m_day; }
    inline bool DayHasBeenSet() const { return m_dayHasBeenSet; }
    inline void SetDay(const OverrideDays& value) { m_dayHasBeenSet = true; m_day = value; }
    inline void SetDay(OverrideDays&& value) { m_dayHasBeenSet = true; m_day = std::move(value); }
    inline HoursOfOperationOverrideConfig& WithDay(const OverrideDays& value) { SetDay(value); return *this;}
    inline HoursOfOperationOverrideConfig& WithDay(OverrideDays&& value) { SetDay(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time when your contact center opens if overrides are applied.</p>
     */
    inline const OverrideTimeSlice& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const OverrideTimeSlice& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(OverrideTimeSlice&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline HoursOfOperationOverrideConfig& WithStartTime(const OverrideTimeSlice& value) { SetStartTime(value); return *this;}
    inline HoursOfOperationOverrideConfig& WithStartTime(OverrideTimeSlice&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time that your contact center closes if overrides are applied.</p>
     */
    inline const OverrideTimeSlice& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const OverrideTimeSlice& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(OverrideTimeSlice&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline HoursOfOperationOverrideConfig& WithEndTime(const OverrideTimeSlice& value) { SetEndTime(value); return *this;}
    inline HoursOfOperationOverrideConfig& WithEndTime(OverrideTimeSlice&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}
  private:

    OverrideDays m_day;
    bool m_dayHasBeenSet = false;

    OverrideTimeSlice m_startTime;
    bool m_startTimeHasBeenSet = false;

    OverrideTimeSlice m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
