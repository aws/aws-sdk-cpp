/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/DayOfWeek.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies a weekly recurrence pattern for running a classification
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/WeeklySchedule">AWS
   * API Reference</a></p>
   */
  class WeeklySchedule
  {
  public:
    AWS_MACIE2_API WeeklySchedule();
    AWS_MACIE2_API WeeklySchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API WeeklySchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The day of the week when Amazon Macie runs the job.</p>
     */
    inline const DayOfWeek& GetDayOfWeek() const{ return m_dayOfWeek; }

    /**
     * <p>The day of the week when Amazon Macie runs the job.</p>
     */
    inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }

    /**
     * <p>The day of the week when Amazon Macie runs the job.</p>
     */
    inline void SetDayOfWeek(const DayOfWeek& value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = value; }

    /**
     * <p>The day of the week when Amazon Macie runs the job.</p>
     */
    inline void SetDayOfWeek(DayOfWeek&& value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = std::move(value); }

    /**
     * <p>The day of the week when Amazon Macie runs the job.</p>
     */
    inline WeeklySchedule& WithDayOfWeek(const DayOfWeek& value) { SetDayOfWeek(value); return *this;}

    /**
     * <p>The day of the week when Amazon Macie runs the job.</p>
     */
    inline WeeklySchedule& WithDayOfWeek(DayOfWeek&& value) { SetDayOfWeek(std::move(value)); return *this;}

  private:

    DayOfWeek m_dayOfWeek;
    bool m_dayOfWeekHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
