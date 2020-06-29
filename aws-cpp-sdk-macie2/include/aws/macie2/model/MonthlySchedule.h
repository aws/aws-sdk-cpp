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
   * <p>Run the job once a month, on a specific day of the month. This value can be
   * an integer from 1 through 30.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/MonthlySchedule">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API MonthlySchedule
  {
  public:
    MonthlySchedule();
    MonthlySchedule(Aws::Utils::Json::JsonView jsonValue);
    MonthlySchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Run the job once a month, on a specific day of the month. This value can be
     * an integer from 1 through 30.</p>
     */
    inline int GetDayOfMonth() const{ return m_dayOfMonth; }

    /**
     * <p>Run the job once a month, on a specific day of the month. This value can be
     * an integer from 1 through 30.</p>
     */
    inline bool DayOfMonthHasBeenSet() const { return m_dayOfMonthHasBeenSet; }

    /**
     * <p>Run the job once a month, on a specific day of the month. This value can be
     * an integer from 1 through 30.</p>
     */
    inline void SetDayOfMonth(int value) { m_dayOfMonthHasBeenSet = true; m_dayOfMonth = value; }

    /**
     * <p>Run the job once a month, on a specific day of the month. This value can be
     * an integer from 1 through 30.</p>
     */
    inline MonthlySchedule& WithDayOfMonth(int value) { SetDayOfMonth(value); return *this;}

  private:

    int m_dayOfMonth;
    bool m_dayOfMonthHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
