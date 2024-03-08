/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/Time.h>
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
   * <p>A daily schedule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/DailySchedule">AWS
   * API Reference</a></p>
   */
  class DailySchedule
  {
  public:
    AWS_INSPECTOR2_API DailySchedule();
    AWS_INSPECTOR2_API DailySchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API DailySchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The schedule start time.</p>
     */
    inline const Time& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The schedule start time.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The schedule start time.</p>
     */
    inline void SetStartTime(const Time& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The schedule start time.</p>
     */
    inline void SetStartTime(Time&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The schedule start time.</p>
     */
    inline DailySchedule& WithStartTime(const Time& value) { SetStartTime(value); return *this;}

    /**
     * <p>The schedule start time.</p>
     */
    inline DailySchedule& WithStartTime(Time&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    Time m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
