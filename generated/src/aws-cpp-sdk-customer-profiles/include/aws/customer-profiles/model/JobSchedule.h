/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/JobScheduleDayOfTheWeek.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>The day and time when do you want to start the Identity Resolution Job every
   * week.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/JobSchedule">AWS
   * API Reference</a></p>
   */
  class JobSchedule
  {
  public:
    AWS_CUSTOMERPROFILES_API JobSchedule() = default;
    AWS_CUSTOMERPROFILES_API JobSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API JobSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The day when the Identity Resolution Job should run every week.</p>
     */
    inline JobScheduleDayOfTheWeek GetDayOfTheWeek() const { return m_dayOfTheWeek; }
    inline bool DayOfTheWeekHasBeenSet() const { return m_dayOfTheWeekHasBeenSet; }
    inline void SetDayOfTheWeek(JobScheduleDayOfTheWeek value) { m_dayOfTheWeekHasBeenSet = true; m_dayOfTheWeek = value; }
    inline JobSchedule& WithDayOfTheWeek(JobScheduleDayOfTheWeek value) { SetDayOfTheWeek(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the Identity Resolution Job should run every week.</p>
     */
    inline const Aws::String& GetTime() const { return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    template<typename TimeT = Aws::String>
    void SetTime(TimeT&& value) { m_timeHasBeenSet = true; m_time = std::forward<TimeT>(value); }
    template<typename TimeT = Aws::String>
    JobSchedule& WithTime(TimeT&& value) { SetTime(std::forward<TimeT>(value)); return *this;}
    ///@}
  private:

    JobScheduleDayOfTheWeek m_dayOfTheWeek{JobScheduleDayOfTheWeek::NOT_SET};
    bool m_dayOfTheWeekHasBeenSet = false;

    Aws::String m_time;
    bool m_timeHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
