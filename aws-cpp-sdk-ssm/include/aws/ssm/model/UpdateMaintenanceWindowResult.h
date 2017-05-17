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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{
  class AWS_SSM_API UpdateMaintenanceWindowResult
  {
  public:
    UpdateMaintenanceWindowResult();
    UpdateMaintenanceWindowResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateMaintenanceWindowResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The ID of the created Maintenance Window.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The ID of the created Maintenance Window.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowId = value; }

    /**
     * <p>The ID of the created Maintenance Window.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowId = std::move(value); }

    /**
     * <p>The ID of the created Maintenance Window.</p>
     */
    inline void SetWindowId(const char* value) { m_windowId.assign(value); }

    /**
     * <p>The ID of the created Maintenance Window.</p>
     */
    inline UpdateMaintenanceWindowResult& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the created Maintenance Window.</p>
     */
    inline UpdateMaintenanceWindowResult& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the created Maintenance Window.</p>
     */
    inline UpdateMaintenanceWindowResult& WithWindowId(const char* value) { SetWindowId(value); return *this;}

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline UpdateMaintenanceWindowResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline UpdateMaintenanceWindowResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline UpdateMaintenanceWindowResult& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline const Aws::String& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline void SetSchedule(const Aws::String& value) { m_schedule = value; }

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline void SetSchedule(Aws::String&& value) { m_schedule = std::move(value); }

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline void SetSchedule(const char* value) { m_schedule.assign(value); }

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline UpdateMaintenanceWindowResult& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline UpdateMaintenanceWindowResult& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}

    /**
     * <p>The schedule of the Maintenance Window in the form of a cron or rate
     * expression.</p>
     */
    inline UpdateMaintenanceWindowResult& WithSchedule(const char* value) { SetSchedule(value); return *this;}

    /**
     * <p>The duration of the Maintenance Window in hours.</p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>The duration of the Maintenance Window in hours.</p>
     */
    inline void SetDuration(int value) { m_duration = value; }

    /**
     * <p>The duration of the Maintenance Window in hours.</p>
     */
    inline UpdateMaintenanceWindowResult& WithDuration(int value) { SetDuration(value); return *this;}

    /**
     * <p>The number of hours before the end of the Maintenance Window that Systems
     * Manager stops scheduling new tasks for execution.</p>
     */
    inline int GetCutoff() const{ return m_cutoff; }

    /**
     * <p>The number of hours before the end of the Maintenance Window that Systems
     * Manager stops scheduling new tasks for execution.</p>
     */
    inline void SetCutoff(int value) { m_cutoff = value; }

    /**
     * <p>The number of hours before the end of the Maintenance Window that Systems
     * Manager stops scheduling new tasks for execution.</p>
     */
    inline UpdateMaintenanceWindowResult& WithCutoff(int value) { SetCutoff(value); return *this;}

    /**
     * <p>Whether targets must be registered with the Maintenance Window before tasks
     * can be defined for those targets.</p>
     */
    inline bool GetAllowUnassociatedTargets() const{ return m_allowUnassociatedTargets; }

    /**
     * <p>Whether targets must be registered with the Maintenance Window before tasks
     * can be defined for those targets.</p>
     */
    inline void SetAllowUnassociatedTargets(bool value) { m_allowUnassociatedTargets = value; }

    /**
     * <p>Whether targets must be registered with the Maintenance Window before tasks
     * can be defined for those targets.</p>
     */
    inline UpdateMaintenanceWindowResult& WithAllowUnassociatedTargets(bool value) { SetAllowUnassociatedTargets(value); return *this;}

    /**
     * <p>Whether the Maintenance Window is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether the Maintenance Window is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabled = value; }

    /**
     * <p>Whether the Maintenance Window is enabled.</p>
     */
    inline UpdateMaintenanceWindowResult& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:
    Aws::String m_windowId;
    Aws::String m_name;
    Aws::String m_schedule;
    int m_duration;
    int m_cutoff;
    bool m_allowUnassociatedTargets;
    bool m_enabled;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
