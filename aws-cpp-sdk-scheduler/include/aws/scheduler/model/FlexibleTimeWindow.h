/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/scheduler/model/FlexibleTimeWindowMode.h>
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
namespace Scheduler
{
namespace Model
{

  /**
   * <p>Allows you to configure a time window during which EventBridge Scheduler
   * invokes the schedule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/FlexibleTimeWindow">AWS
   * API Reference</a></p>
   */
  class FlexibleTimeWindow
  {
  public:
    AWS_SCHEDULER_API FlexibleTimeWindow();
    AWS_SCHEDULER_API FlexibleTimeWindow(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API FlexibleTimeWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum time window during which a schedule can be invoked.</p>
     */
    inline int GetMaximumWindowInMinutes() const{ return m_maximumWindowInMinutes; }

    /**
     * <p>The maximum time window during which a schedule can be invoked.</p>
     */
    inline bool MaximumWindowInMinutesHasBeenSet() const { return m_maximumWindowInMinutesHasBeenSet; }

    /**
     * <p>The maximum time window during which a schedule can be invoked.</p>
     */
    inline void SetMaximumWindowInMinutes(int value) { m_maximumWindowInMinutesHasBeenSet = true; m_maximumWindowInMinutes = value; }

    /**
     * <p>The maximum time window during which a schedule can be invoked.</p>
     */
    inline FlexibleTimeWindow& WithMaximumWindowInMinutes(int value) { SetMaximumWindowInMinutes(value); return *this;}


    /**
     * <p>Determines whether the schedule is invoked within a flexible time window.</p>
     */
    inline const FlexibleTimeWindowMode& GetMode() const{ return m_mode; }

    /**
     * <p>Determines whether the schedule is invoked within a flexible time window.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>Determines whether the schedule is invoked within a flexible time window.</p>
     */
    inline void SetMode(const FlexibleTimeWindowMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>Determines whether the schedule is invoked within a flexible time window.</p>
     */
    inline void SetMode(FlexibleTimeWindowMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>Determines whether the schedule is invoked within a flexible time window.</p>
     */
    inline FlexibleTimeWindow& WithMode(const FlexibleTimeWindowMode& value) { SetMode(value); return *this;}

    /**
     * <p>Determines whether the schedule is invoked within a flexible time window.</p>
     */
    inline FlexibleTimeWindow& WithMode(FlexibleTimeWindowMode&& value) { SetMode(std::move(value)); return *this;}

  private:

    int m_maximumWindowInMinutes;
    bool m_maximumWindowInMinutesHasBeenSet = false;

    FlexibleTimeWindowMode m_mode;
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
