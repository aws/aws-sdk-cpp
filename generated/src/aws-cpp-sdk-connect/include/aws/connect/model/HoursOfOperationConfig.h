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
    AWS_CONNECT_API HoursOfOperationConfig() = default;
    AWS_CONNECT_API HoursOfOperationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HoursOfOperationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The day that the hours of operation applies to.</p>
     */
    inline HoursOfOperationDays GetDay() const { return m_day; }
    inline bool DayHasBeenSet() const { return m_dayHasBeenSet; }
    inline void SetDay(HoursOfOperationDays value) { m_dayHasBeenSet = true; m_day = value; }
    inline HoursOfOperationConfig& WithDay(HoursOfOperationDays value) { SetDay(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time that your contact center opens.</p>
     */
    inline const HoursOfOperationTimeSlice& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = HoursOfOperationTimeSlice>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = HoursOfOperationTimeSlice>
    HoursOfOperationConfig& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time that your contact center closes.</p>
     */
    inline const HoursOfOperationTimeSlice& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = HoursOfOperationTimeSlice>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = HoursOfOperationTimeSlice>
    HoursOfOperationConfig& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}
  private:

    HoursOfOperationDays m_day{HoursOfOperationDays::NOT_SET};
    bool m_dayHasBeenSet = false;

    HoursOfOperationTimeSlice m_startTime;
    bool m_startTimeHasBeenSet = false;

    HoursOfOperationTimeSlice m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
