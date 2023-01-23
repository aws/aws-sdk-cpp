/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>

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
   * <p>Specifies a monthly recurrence pattern for running a classification
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/MonthlySchedule">AWS
   * API Reference</a></p>
   */
  class MonthlySchedule
  {
  public:
    AWS_MACIE2_API MonthlySchedule();
    AWS_MACIE2_API MonthlySchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API MonthlySchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The numeric day of the month when Amazon Macie runs the job. This value can
     * be an integer from 1 through 31.</p> <p>If this value exceeds the number of days
     * in a certain month, Macie doesn't run the job that month. Macie runs the job
     * only during months that have the specified day. For example, if this value is 31
     * and a month has only 30 days, Macie doesn't run the job that month. To run the
     * job every month, specify a value that's less than 29.</p>
     */
    inline int GetDayOfMonth() const{ return m_dayOfMonth; }

    /**
     * <p>The numeric day of the month when Amazon Macie runs the job. This value can
     * be an integer from 1 through 31.</p> <p>If this value exceeds the number of days
     * in a certain month, Macie doesn't run the job that month. Macie runs the job
     * only during months that have the specified day. For example, if this value is 31
     * and a month has only 30 days, Macie doesn't run the job that month. To run the
     * job every month, specify a value that's less than 29.</p>
     */
    inline bool DayOfMonthHasBeenSet() const { return m_dayOfMonthHasBeenSet; }

    /**
     * <p>The numeric day of the month when Amazon Macie runs the job. This value can
     * be an integer from 1 through 31.</p> <p>If this value exceeds the number of days
     * in a certain month, Macie doesn't run the job that month. Macie runs the job
     * only during months that have the specified day. For example, if this value is 31
     * and a month has only 30 days, Macie doesn't run the job that month. To run the
     * job every month, specify a value that's less than 29.</p>
     */
    inline void SetDayOfMonth(int value) { m_dayOfMonthHasBeenSet = true; m_dayOfMonth = value; }

    /**
     * <p>The numeric day of the month when Amazon Macie runs the job. This value can
     * be an integer from 1 through 31.</p> <p>If this value exceeds the number of days
     * in a certain month, Macie doesn't run the job that month. Macie runs the job
     * only during months that have the specified day. For example, if this value is 31
     * and a month has only 30 days, Macie doesn't run the job that month. To run the
     * job every month, specify a value that's less than 29.</p>
     */
    inline MonthlySchedule& WithDayOfMonth(int value) { SetDayOfMonth(value); return *this;}

  private:

    int m_dayOfMonth;
    bool m_dayOfMonthHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
