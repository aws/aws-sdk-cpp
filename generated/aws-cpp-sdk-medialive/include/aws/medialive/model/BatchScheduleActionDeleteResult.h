﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/ScheduleAction.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * List of actions that have been deleted from the schedule.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchScheduleActionDeleteResult">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API BatchScheduleActionDeleteResult
  {
  public:
    BatchScheduleActionDeleteResult();
    BatchScheduleActionDeleteResult(Aws::Utils::Json::JsonView jsonValue);
    BatchScheduleActionDeleteResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * List of actions that have been deleted from the schedule.
     */
    inline const Aws::Vector<ScheduleAction>& GetScheduleActions() const{ return m_scheduleActions; }

    /**
     * List of actions that have been deleted from the schedule.
     */
    inline bool ScheduleActionsHasBeenSet() const { return m_scheduleActionsHasBeenSet; }

    /**
     * List of actions that have been deleted from the schedule.
     */
    inline void SetScheduleActions(const Aws::Vector<ScheduleAction>& value) { m_scheduleActionsHasBeenSet = true; m_scheduleActions = value; }

    /**
     * List of actions that have been deleted from the schedule.
     */
    inline void SetScheduleActions(Aws::Vector<ScheduleAction>&& value) { m_scheduleActionsHasBeenSet = true; m_scheduleActions = std::move(value); }

    /**
     * List of actions that have been deleted from the schedule.
     */
    inline BatchScheduleActionDeleteResult& WithScheduleActions(const Aws::Vector<ScheduleAction>& value) { SetScheduleActions(value); return *this;}

    /**
     * List of actions that have been deleted from the schedule.
     */
    inline BatchScheduleActionDeleteResult& WithScheduleActions(Aws::Vector<ScheduleAction>&& value) { SetScheduleActions(std::move(value)); return *this;}

    /**
     * List of actions that have been deleted from the schedule.
     */
    inline BatchScheduleActionDeleteResult& AddScheduleActions(const ScheduleAction& value) { m_scheduleActionsHasBeenSet = true; m_scheduleActions.push_back(value); return *this; }

    /**
     * List of actions that have been deleted from the schedule.
     */
    inline BatchScheduleActionDeleteResult& AddScheduleActions(ScheduleAction&& value) { m_scheduleActionsHasBeenSet = true; m_scheduleActions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ScheduleAction> m_scheduleActions;
    bool m_scheduleActionsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
