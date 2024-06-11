﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ScheduleState.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A scheduling object using a <code>cron</code> statement to schedule an
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Schedule">AWS API
   * Reference</a></p>
   */
  class Schedule
  {
  public:
    AWS_GLUE_API Schedule();
    AWS_GLUE_API Schedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Schedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <code>cron</code> expression used to specify the schedule (see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-data-warehouse-schedule.html">Time-Based
     * Schedules for Jobs and Crawlers</a>. For example, to run something every day at
     * 12:15 UTC, you would specify: <code>cron(15 12 * * ? *)</code>.</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }
    inline Schedule& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}
    inline Schedule& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}
    inline Schedule& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the schedule.</p>
     */
    inline const ScheduleState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ScheduleState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ScheduleState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Schedule& WithState(const ScheduleState& value) { SetState(value); return *this;}
    inline Schedule& WithState(ScheduleState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    ScheduleState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
