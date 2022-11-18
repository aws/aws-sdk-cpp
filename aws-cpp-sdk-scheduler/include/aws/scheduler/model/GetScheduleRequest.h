﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/scheduler/SchedulerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Scheduler
{
namespace Model
{

  /**
   */
  class AWS_SCHEDULER_API GetScheduleRequest : public SchedulerRequest
  {
  public:
    GetScheduleRequest();

    /**
     * Virtual Copy Constructor idiom;
     * Override in an inherited class to have overridden functions (such as GetRequestSpecificHeaders) be called by the SDK.
     * (If you are creating a child of this: don't forget to keep the original return type or (better) just use the 'override' keyword)
    */
    virtual Aws::UniquePtr<GetScheduleRequest> Clone() const
    {
      return Aws::MakeUnique<GetScheduleRequest>(GetServiceRequestName(), *this);
    }

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSchedule"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the schedule group associated with this schedule. If you omit
     * this, EventBridge Scheduler assumes that the schedule is associated with the
     * default group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the schedule group associated with this schedule. If you omit
     * this, EventBridge Scheduler assumes that the schedule is associated with the
     * default group.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the schedule group associated with this schedule. If you omit
     * this, EventBridge Scheduler assumes that the schedule is associated with the
     * default group.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the schedule group associated with this schedule. If you omit
     * this, EventBridge Scheduler assumes that the schedule is associated with the
     * default group.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the schedule group associated with this schedule. If you omit
     * this, EventBridge Scheduler assumes that the schedule is associated with the
     * default group.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the schedule group associated with this schedule. If you omit
     * this, EventBridge Scheduler assumes that the schedule is associated with the
     * default group.</p>
     */
    inline GetScheduleRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the schedule group associated with this schedule. If you omit
     * this, EventBridge Scheduler assumes that the schedule is associated with the
     * default group.</p>
     */
    inline GetScheduleRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the schedule group associated with this schedule. If you omit
     * this, EventBridge Scheduler assumes that the schedule is associated with the
     * default group.</p>
     */
    inline GetScheduleRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The name of the schedule to retrieve.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the schedule to retrieve.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the schedule to retrieve.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the schedule to retrieve.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the schedule to retrieve.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the schedule to retrieve.</p>
     */
    inline GetScheduleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the schedule to retrieve.</p>
     */
    inline GetScheduleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the schedule to retrieve.</p>
     */
    inline GetScheduleRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
