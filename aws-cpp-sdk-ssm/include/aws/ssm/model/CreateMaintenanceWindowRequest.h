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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API CreateMaintenanceWindowRequest : public SSMRequest
  {
  public:
    CreateMaintenanceWindowRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMaintenanceWindow"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline CreateMaintenanceWindowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline CreateMaintenanceWindowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline CreateMaintenanceWindowRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An optional description for the Maintenance Window. We recommend specifying a
     * description to help you organize your Maintenance Windows. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description for the Maintenance Window. We recommend specifying a
     * description to help you organize your Maintenance Windows. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description for the Maintenance Window. We recommend specifying a
     * description to help you organize your Maintenance Windows. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description for the Maintenance Window. We recommend specifying a
     * description to help you organize your Maintenance Windows. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description for the Maintenance Window. We recommend specifying a
     * description to help you organize your Maintenance Windows. </p>
     */
    inline CreateMaintenanceWindowRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description for the Maintenance Window. We recommend specifying a
     * description to help you organize your Maintenance Windows. </p>
     */
    inline CreateMaintenanceWindowRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description for the Maintenance Window. We recommend specifying a
     * description to help you organize your Maintenance Windows. </p>
     */
    inline CreateMaintenanceWindowRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline void SetSchedule(Aws::String&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline void SetSchedule(const char* value) { m_scheduleHasBeenSet = true; m_schedule.assign(value); }

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline CreateMaintenanceWindowRequest& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline CreateMaintenanceWindowRequest& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline CreateMaintenanceWindowRequest& WithSchedule(const char* value) { SetSchedule(value); return *this;}


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
    inline CreateMaintenanceWindowRequest& WithDuration(int value) { SetDuration(value); return *this;}


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
    inline CreateMaintenanceWindowRequest& WithCutoff(int value) { SetCutoff(value); return *this;}


    /**
     * <p>Enables a Maintenance Window task to execute on managed instances, even if
     * you have not registered those instances as targets. If enabled, then you must
     * specify the unregistered instances (by instance ID) when you register a task
     * with the Maintenance Window </p> <p>If you don't enable this option, then you
     * must specify previously-registered targets when you register a task with the
     * Maintenance Window. </p>
     */
    inline bool GetAllowUnassociatedTargets() const{ return m_allowUnassociatedTargets; }

    /**
     * <p>Enables a Maintenance Window task to execute on managed instances, even if
     * you have not registered those instances as targets. If enabled, then you must
     * specify the unregistered instances (by instance ID) when you register a task
     * with the Maintenance Window </p> <p>If you don't enable this option, then you
     * must specify previously-registered targets when you register a task with the
     * Maintenance Window. </p>
     */
    inline void SetAllowUnassociatedTargets(bool value) { m_allowUnassociatedTargetsHasBeenSet = true; m_allowUnassociatedTargets = value; }

    /**
     * <p>Enables a Maintenance Window task to execute on managed instances, even if
     * you have not registered those instances as targets. If enabled, then you must
     * specify the unregistered instances (by instance ID) when you register a task
     * with the Maintenance Window </p> <p>If you don't enable this option, then you
     * must specify previously-registered targets when you register a task with the
     * Maintenance Window. </p>
     */
    inline CreateMaintenanceWindowRequest& WithAllowUnassociatedTargets(bool value) { SetAllowUnassociatedTargets(value); return *this;}


    /**
     * <p>User-provided idempotency token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline CreateMaintenanceWindowRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline CreateMaintenanceWindowRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline CreateMaintenanceWindowRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_schedule;
    bool m_scheduleHasBeenSet;

    int m_duration;
    bool m_durationHasBeenSet;

    int m_cutoff;
    bool m_cutoffHasBeenSet;

    bool m_allowUnassociatedTargets;
    bool m_allowUnassociatedTargetsHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
