/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01T00:00:00Z/MonthlySchedule">AWS
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
