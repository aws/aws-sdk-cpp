/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/Time.h>
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
   * <p>A monthly schedule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/MonthlySchedule">AWS
   * API Reference</a></p>
   */
  class MonthlySchedule
  {
  public:
    AWS_INSPECTOR2_API MonthlySchedule() = default;
    AWS_INSPECTOR2_API MonthlySchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API MonthlySchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The monthly schedule's start time.</p>
     */
    inline const Time& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Time>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Time>
    MonthlySchedule& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monthly schedule's day.</p>
     */
    inline Day GetDay() const { return m_day; }
    inline bool DayHasBeenSet() const { return m_dayHasBeenSet; }
    inline void SetDay(Day value) { m_dayHasBeenSet = true; m_day = value; }
    inline MonthlySchedule& WithDay(Day value) { SetDay(value); return *this;}
    ///@}
  private:

    Time m_startTime;
    bool m_startTimeHasBeenSet = false;

    Day m_day{Day::NOT_SET};
    bool m_dayHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
