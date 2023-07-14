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
   * A list of schedule actions to create (in a request) or that have been created
   * (in a response).<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchScheduleActionCreateRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API BatchScheduleActionCreateRequest
  {
  public:
    BatchScheduleActionCreateRequest();
    BatchScheduleActionCreateRequest(Aws::Utils::Json::JsonView jsonValue);
    BatchScheduleActionCreateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A list of schedule actions to create.
     */
    inline const Aws::Vector<ScheduleAction>& GetScheduleActions() const{ return m_scheduleActions; }

    /**
     * A list of schedule actions to create.
     */
    inline bool ScheduleActionsHasBeenSet() const { return m_scheduleActionsHasBeenSet; }

    /**
     * A list of schedule actions to create.
     */
    inline void SetScheduleActions(const Aws::Vector<ScheduleAction>& value) { m_scheduleActionsHasBeenSet = true; m_scheduleActions = value; }

    /**
     * A list of schedule actions to create.
     */
    inline void SetScheduleActions(Aws::Vector<ScheduleAction>&& value) { m_scheduleActionsHasBeenSet = true; m_scheduleActions = std::move(value); }

    /**
     * A list of schedule actions to create.
     */
    inline BatchScheduleActionCreateRequest& WithScheduleActions(const Aws::Vector<ScheduleAction>& value) { SetScheduleActions(value); return *this;}

    /**
     * A list of schedule actions to create.
     */
    inline BatchScheduleActionCreateRequest& WithScheduleActions(Aws::Vector<ScheduleAction>&& value) { SetScheduleActions(std::move(value)); return *this;}

    /**
     * A list of schedule actions to create.
     */
    inline BatchScheduleActionCreateRequest& AddScheduleActions(const ScheduleAction& value) { m_scheduleActionsHasBeenSet = true; m_scheduleActions.push_back(value); return *this; }

    /**
     * A list of schedule actions to create.
     */
    inline BatchScheduleActionCreateRequest& AddScheduleActions(ScheduleAction&& value) { m_scheduleActionsHasBeenSet = true; m_scheduleActions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ScheduleAction> m_scheduleActions;
    bool m_scheduleActionsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
