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
   * List of actions that have been created in the schedule.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchScheduleActionCreateResult">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API BatchScheduleActionCreateResult
  {
  public:
    BatchScheduleActionCreateResult();
    BatchScheduleActionCreateResult(Aws::Utils::Json::JsonView jsonValue);
    BatchScheduleActionCreateResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * List of actions that have been created in the schedule.
     */
    inline const Aws::Vector<ScheduleAction>& GetScheduleActions() const{ return m_scheduleActions; }

    /**
     * List of actions that have been created in the schedule.
     */
    inline bool ScheduleActionsHasBeenSet() const { return m_scheduleActionsHasBeenSet; }

    /**
     * List of actions that have been created in the schedule.
     */
    inline void SetScheduleActions(const Aws::Vector<ScheduleAction>& value) { m_scheduleActionsHasBeenSet = true; m_scheduleActions = value; }

    /**
     * List of actions that have been created in the schedule.
     */
    inline void SetScheduleActions(Aws::Vector<ScheduleAction>&& value) { m_scheduleActionsHasBeenSet = true; m_scheduleActions = std::move(value); }

    /**
     * List of actions that have been created in the schedule.
     */
    inline BatchScheduleActionCreateResult& WithScheduleActions(const Aws::Vector<ScheduleAction>& value) { SetScheduleActions(value); return *this;}

    /**
     * List of actions that have been created in the schedule.
     */
    inline BatchScheduleActionCreateResult& WithScheduleActions(Aws::Vector<ScheduleAction>&& value) { SetScheduleActions(std::move(value)); return *this;}

    /**
     * List of actions that have been created in the schedule.
     */
    inline BatchScheduleActionCreateResult& AddScheduleActions(const ScheduleAction& value) { m_scheduleActionsHasBeenSet = true; m_scheduleActions.push_back(value); return *this; }

    /**
     * List of actions that have been created in the schedule.
     */
    inline BatchScheduleActionCreateResult& AddScheduleActions(ScheduleAction&& value) { m_scheduleActionsHasBeenSet = true; m_scheduleActions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ScheduleAction> m_scheduleActions;
    bool m_scheduleActionsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
