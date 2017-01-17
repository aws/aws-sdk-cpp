﻿/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/MaintenanceWindowExecutionStatus.h>
#include <aws/core/utils/DateTime.h>

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
   * <p>Describes the information about an execution of a Maintenance Window.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowExecution">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API MaintenanceWindowExecution
  {
  public:
    MaintenanceWindowExecution();
    MaintenanceWindowExecution(const Aws::Utils::Json::JsonValue& jsonValue);
    MaintenanceWindowExecution& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
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
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The ID of the Maintenance Window.</p>
     */
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }

    /**
     * <p>The ID of the Maintenance Window.</p>
     */
    inline MaintenanceWindowExecution& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the Maintenance Window.</p>
     */
    inline MaintenanceWindowExecution& WithWindowId(Aws::String&& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the Maintenance Window.</p>
     */
    inline MaintenanceWindowExecution& WithWindowId(const char* value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the Maintenance Window execution.</p>
     */
    inline const Aws::String& GetWindowExecutionId() const{ return m_windowExecutionId; }

    /**
     * <p>The ID of the Maintenance Window execution.</p>
     */
    inline void SetWindowExecutionId(const Aws::String& value) { m_windowExecutionIdHasBeenSet = true; m_windowExecutionId = value; }

    /**
     * <p>The ID of the Maintenance Window execution.</p>
     */
    inline void SetWindowExecutionId(Aws::String&& value) { m_windowExecutionIdHasBeenSet = true; m_windowExecutionId = value; }

    /**
     * <p>The ID of the Maintenance Window execution.</p>
     */
    inline void SetWindowExecutionId(const char* value) { m_windowExecutionIdHasBeenSet = true; m_windowExecutionId.assign(value); }

    /**
     * <p>The ID of the Maintenance Window execution.</p>
     */
    inline MaintenanceWindowExecution& WithWindowExecutionId(const Aws::String& value) { SetWindowExecutionId(value); return *this;}

    /**
     * <p>The ID of the Maintenance Window execution.</p>
     */
    inline MaintenanceWindowExecution& WithWindowExecutionId(Aws::String&& value) { SetWindowExecutionId(value); return *this;}

    /**
     * <p>The ID of the Maintenance Window execution.</p>
     */
    inline MaintenanceWindowExecution& WithWindowExecutionId(const char* value) { SetWindowExecutionId(value); return *this;}

    /**
     * <p>The status of the execution.</p>
     */
    inline const MaintenanceWindowExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the execution.</p>
     */
    inline void SetStatus(const MaintenanceWindowExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the execution.</p>
     */
    inline void SetStatus(MaintenanceWindowExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the execution.</p>
     */
    inline MaintenanceWindowExecution& WithStatus(const MaintenanceWindowExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the execution.</p>
     */
    inline MaintenanceWindowExecution& WithStatus(MaintenanceWindowExecutionStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>The details explaining the Status. Only available for certain status
     * values.</p>
     */
    inline const Aws::String& GetStatusDetails() const{ return m_statusDetails; }

    /**
     * <p>The details explaining the Status. Only available for certain status
     * values.</p>
     */
    inline void SetStatusDetails(const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }

    /**
     * <p>The details explaining the Status. Only available for certain status
     * values.</p>
     */
    inline void SetStatusDetails(Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }

    /**
     * <p>The details explaining the Status. Only available for certain status
     * values.</p>
     */
    inline void SetStatusDetails(const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.assign(value); }

    /**
     * <p>The details explaining the Status. Only available for certain status
     * values.</p>
     */
    inline MaintenanceWindowExecution& WithStatusDetails(const Aws::String& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>The details explaining the Status. Only available for certain status
     * values.</p>
     */
    inline MaintenanceWindowExecution& WithStatusDetails(Aws::String&& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>The details explaining the Status. Only available for certain status
     * values.</p>
     */
    inline MaintenanceWindowExecution& WithStatusDetails(const char* value) { SetStatusDetails(value); return *this;}

    /**
     * <p>The time the execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time the execution started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time the execution started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time the execution started.</p>
     */
    inline MaintenanceWindowExecution& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time the execution started.</p>
     */
    inline MaintenanceWindowExecution& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time the execution finished.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time the execution finished.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time the execution finished.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time the execution finished.</p>
     */
    inline MaintenanceWindowExecution& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time the execution finished.</p>
     */
    inline MaintenanceWindowExecution& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(value); return *this;}

  private:
    Aws::String m_windowId;
    bool m_windowIdHasBeenSet;
    Aws::String m_windowExecutionId;
    bool m_windowExecutionIdHasBeenSet;
    MaintenanceWindowExecutionStatus m_status;
    bool m_statusHasBeenSet;
    Aws::String m_statusDetails;
    bool m_statusDetailsHasBeenSet;
    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;
    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
