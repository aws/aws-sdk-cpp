/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/Time.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/Day.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>A weekly schedule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/WeeklySchedule">AWS
   * API Reference</a></p>
   */
  class WeeklySchedule
  {
  public:
    AWS_INSPECTOR2_API WeeklySchedule() = default;
    AWS_INSPECTOR2_API WeeklySchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API WeeklySchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The weekly schedule's start time.</p>
     */
    inline const Time& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Time>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Time>
    WeeklySchedule& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weekly schedule's days.</p>
     */
    inline const Aws::Vector<Day>& GetDays() const { return m_days; }
    inline bool DaysHasBeenSet() const { return m_daysHasBeenSet; }
    template<typename DaysT = Aws::Vector<Day>>
    void SetDays(DaysT&& value) { m_daysHasBeenSet = true; m_days = std::forward<DaysT>(value); }
    template<typename DaysT = Aws::Vector<Day>>
    WeeklySchedule& WithDays(DaysT&& value) { SetDays(std::forward<DaysT>(value)); return *this;}
    inline WeeklySchedule& AddDays(Day value) { m_daysHasBeenSet = true; m_days.push_back(value); return *this; }
    ///@}
  private:

    Time m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Vector<Day> m_days;
    bool m_daysHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
