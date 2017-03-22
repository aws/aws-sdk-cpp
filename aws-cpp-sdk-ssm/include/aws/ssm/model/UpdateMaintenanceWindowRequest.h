/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API UpdateMaintenanceWindowRequest : public SSMRequest
  {
  public:
    UpdateMaintenanceWindowRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Maintenance Window to update.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The ID of the Maintenance Window to update.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The ID of the Maintenance Window to update.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The ID of the Maintenance Window to update.</p>
     */
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }

    /**
     * <p>The ID of the Maintenance Window to update.</p>
     */
    inline UpdateMaintenanceWindowRequest& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the Maintenance Window to update.</p>
     */
    inline UpdateMaintenanceWindowRequest& WithWindowId(Aws::String&& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the Maintenance Window to update.</p>
     */
    inline UpdateMaintenanceWindowRequest& WithWindowId(const char* value) { SetWindowId(value); return *this;}

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline UpdateMaintenanceWindowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline UpdateMaintenanceWindowRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline UpdateMaintenanceWindowRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline const Aws::String& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline void SetSchedule(const Aws::String& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline void SetSchedule(Aws::String&& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline void SetSchedule(const char* value) { m_scheduleHasBeenSet = true; m_schedule.assign(value); }

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline UpdateMaintenanceWindowRequest& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline UpdateMaintenanceWindowRequest& WithSchedule(Aws::String&& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline UpdateMaintenanceWindowRequest& WithSchedule(const char* value) { SetSchedule(value); return *this;}

    /**
     * <p>The duration of the Maintenance Window in hours.</p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>The duration of the Maintenance Window in hours.</p>
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The duration of the Maintenance Window in hours.</p>
     */
    inline UpdateMaintenanceWindowRequest& WithDuration(int value) { SetDuration(value); return *this;}

    /**
     * <p>The number of hours before the end of the Maintenance Window that Systems
     * Manager stops scheduling new tasks for execution.</p>
     */
    inline int GetCutoff() const{ return m_cutoff; }

    /**
     * <p>The number of hours before the end of the Maintenance Window that Systems
     * Manager stops scheduling new tasks for execution.</p>
     */
    inline void SetCutoff(int value) { m_cutoffHasBeenSet = true; m_cutoff = value; }

    /**
     * <p>The number of hours before the end of the Maintenance Window that Systems
     * Manager stops scheduling new tasks for execution.</p>
     */
    inline UpdateMaintenanceWindowRequest& WithCutoff(int value) { SetCutoff(value); return *this;}

    /**
     * <p>Whether targets must be registered with the Maintenance Window before tasks
     * can be defined for those targets.</p>
     */
    inline bool GetAllowUnassociatedTargets() const{ return m_allowUnassociatedTargets; }

    /**
     * <p>Whether targets must be registered with the Maintenance Window before tasks
     * can be defined for those targets.</p>
     */
    inline void SetAllowUnassociatedTargets(bool value) { m_allowUnassociatedTargetsHasBeenSet = true; m_allowUnassociatedTargets = value; }

    /**
     * <p>Whether targets must be registered with the Maintenance Window before tasks
     * can be defined for those targets.</p>
     */
    inline UpdateMaintenanceWindowRequest& WithAllowUnassociatedTargets(bool value) { SetAllowUnassociatedTargets(value); return *this;}

    /**
     * <p>Whether the Maintenance Window is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether the Maintenance Window is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Whether the Maintenance Window is enabled.</p>
     */
    inline UpdateMaintenanceWindowRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:
    Aws::String m_windowId;
    bool m_windowIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_schedule;
    bool m_scheduleHasBeenSet;
    int m_duration;
    bool m_durationHasBeenSet;
    int m_cutoff;
    bool m_cutoffHasBeenSet;
    bool m_allowUnassociatedTargets;
    bool m_allowUnassociatedTargetsHasBeenSet;
    bool m_enabled;
    bool m_enabledHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
