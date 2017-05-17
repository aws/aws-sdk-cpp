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

  /**
   * <p>Information about the Maintenance Window.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowIdentity">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API MaintenanceWindowIdentity
  {
  public:
    MaintenanceWindowIdentity();
    MaintenanceWindowIdentity(const Aws::Utils::Json::JsonValue& jsonValue);
    MaintenanceWindowIdentity& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ID of the Maintenance Window.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The ID of the Maintenance Window.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The ID of the Maintenance Window.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }

    /**
     * <p>The ID of the Maintenance Window.</p>
     */
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }

    /**
     * <p>The ID of the Maintenance Window.</p>
     */
    inline MaintenanceWindowIdentity& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the Maintenance Window.</p>
     */
    inline MaintenanceWindowIdentity& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Maintenance Window.</p>
     */
    inline MaintenanceWindowIdentity& WithWindowId(const char* value) { SetWindowId(value); return *this;}

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
    inline MaintenanceWindowIdentity& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline MaintenanceWindowIdentity& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Maintenance Window.</p>
     */
    inline MaintenanceWindowIdentity& WithName(const char* value) { SetName(value); return *this;}

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
    inline MaintenanceWindowIdentity& WithEnabled(bool value) { SetEnabled(value); return *this;}

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
    inline MaintenanceWindowIdentity& WithDuration(int value) { SetDuration(value); return *this;}

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
    inline MaintenanceWindowIdentity& WithCutoff(int value) { SetCutoff(value); return *this;}

  private:
    Aws::String m_windowId;
    bool m_windowIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    bool m_enabled;
    bool m_enabledHasBeenSet;
    int m_duration;
    bool m_durationHasBeenSet;
    int m_cutoff;
    bool m_cutoffHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
