/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/HoursOfOperationDays.h>
#include <aws/connect/model/HoursOfOperationTimeSlice.h>
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
   * <p>Contains information about the hours of operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HoursOfOperationConfig">AWS
   * API Reference</a></p>
   */
  class HoursOfOperationConfig
  {
  public:
    AWS_CONNECT_API HoursOfOperationConfig();
    AWS_CONNECT_API HoursOfOperationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HoursOfOperationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The day that the hours of operation applies to.</p>
     */
    inline const HoursOfOperationDays& GetDay() const{ return m_day; }

    /**
     * <p>The day that the hours of operation applies to.</p>
     */
    inline bool DayHasBeenSet() const { return m_dayHasBeenSet; }

    /**
     * <p>The day that the hours of operation applies to.</p>
     */
    inline void SetDay(const HoursOfOperationDays& value) { m_dayHasBeenSet = true; m_day = value; }

    /**
     * <p>The day that the hours of operation applies to.</p>
     */
    inline void SetDay(HoursOfOperationDays&& value) { m_dayHasBeenSet = true; m_day = std::move(value); }

    /**
     * <p>The day that the hours of operation applies to.</p>
     */
    inline HoursOfOperationConfig& WithDay(const HoursOfOperationDays& value) { SetDay(value); return *this;}

    /**
     * <p>The day that the hours of operation applies to.</p>
     */
    inline HoursOfOperationConfig& WithDay(HoursOfOperationDays&& value) { SetDay(std::move(value)); return *this;}


    /**
     * <p>The start time that your contact center opens.</p>
     */
    inline const HoursOfOperationTimeSlice& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time that your contact center opens.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time that your contact center opens.</p>
     */
    inline void SetStartTime(const HoursOfOperationTimeSlice& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time that your contact center opens.</p>
     */
    inline void SetStartTime(HoursOfOperationTimeSlice&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time that your contact center opens.</p>
     */
    inline HoursOfOperationConfig& WithStartTime(const HoursOfOperationTimeSlice& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time that your contact center opens.</p>
     */
    inline HoursOfOperationConfig& WithStartTime(HoursOfOperationTimeSlice&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end time that your contact center closes.</p>
     */
    inline const HoursOfOperationTimeSlice& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time that your contact center closes.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time that your contact center closes.</p>
     */
    inline void SetEndTime(const HoursOfOperationTimeSlice& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time that your contact center closes.</p>
     */
    inline void SetEndTime(HoursOfOperationTimeSlice&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time that your contact center closes.</p>
     */
    inline HoursOfOperationConfig& WithEndTime(const HoursOfOperationTimeSlice& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time that your contact center closes.</p>
     */
    inline HoursOfOperationConfig& WithEndTime(HoursOfOperationTimeSlice&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    HoursOfOperationDays m_day;
    bool m_dayHasBeenSet = false;

    HoursOfOperationTimeSlice m_startTime;
    bool m_startTimeHasBeenSet = false;

    HoursOfOperationTimeSlice m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
