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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/MaintenanceWindowExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
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
  class AWS_SSM_API GetMaintenanceWindowExecutionResult
  {
  public:
    GetMaintenanceWindowExecutionResult();
    GetMaintenanceWindowExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetMaintenanceWindowExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the maintenance window execution.</p>
     */
    inline const Aws::String& GetWindowExecutionId() const{ return m_windowExecutionId; }

    /**
     * <p>The ID of the maintenance window execution.</p>
     */
    inline void SetWindowExecutionId(const Aws::String& value) { m_windowExecutionId = value; }

    /**
     * <p>The ID of the maintenance window execution.</p>
     */
    inline void SetWindowExecutionId(Aws::String&& value) { m_windowExecutionId = std::move(value); }

    /**
     * <p>The ID of the maintenance window execution.</p>
     */
    inline void SetWindowExecutionId(const char* value) { m_windowExecutionId.assign(value); }

    /**
     * <p>The ID of the maintenance window execution.</p>
     */
    inline GetMaintenanceWindowExecutionResult& WithWindowExecutionId(const Aws::String& value) { SetWindowExecutionId(value); return *this;}

    /**
     * <p>The ID of the maintenance window execution.</p>
     */
    inline GetMaintenanceWindowExecutionResult& WithWindowExecutionId(Aws::String&& value) { SetWindowExecutionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the maintenance window execution.</p>
     */
    inline GetMaintenanceWindowExecutionResult& WithWindowExecutionId(const char* value) { SetWindowExecutionId(value); return *this;}


    /**
     * <p>The ID of the task executions from the maintenance window execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTaskIds() const{ return m_taskIds; }

    /**
     * <p>The ID of the task executions from the maintenance window execution.</p>
     */
    inline void SetTaskIds(const Aws::Vector<Aws::String>& value) { m_taskIds = value; }

    /**
     * <p>The ID of the task executions from the maintenance window execution.</p>
     */
    inline void SetTaskIds(Aws::Vector<Aws::String>&& value) { m_taskIds = std::move(value); }

    /**
     * <p>The ID of the task executions from the maintenance window execution.</p>
     */
    inline GetMaintenanceWindowExecutionResult& WithTaskIds(const Aws::Vector<Aws::String>& value) { SetTaskIds(value); return *this;}

    /**
     * <p>The ID of the task executions from the maintenance window execution.</p>
     */
    inline GetMaintenanceWindowExecutionResult& WithTaskIds(Aws::Vector<Aws::String>&& value) { SetTaskIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the task executions from the maintenance window execution.</p>
     */
    inline GetMaintenanceWindowExecutionResult& AddTaskIds(const Aws::String& value) { m_taskIds.push_back(value); return *this; }

    /**
     * <p>The ID of the task executions from the maintenance window execution.</p>
     */
    inline GetMaintenanceWindowExecutionResult& AddTaskIds(Aws::String&& value) { m_taskIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the task executions from the maintenance window execution.</p>
     */
    inline GetMaintenanceWindowExecutionResult& AddTaskIds(const char* value) { m_taskIds.push_back(value); return *this; }


    /**
     * <p>The status of the maintenance window execution.</p>
     */
    inline const MaintenanceWindowExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the maintenance window execution.</p>
     */
    inline void SetStatus(const MaintenanceWindowExecutionStatus& value) { m_status = value; }

    /**
     * <p>The status of the maintenance window execution.</p>
     */
    inline void SetStatus(MaintenanceWindowExecutionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the maintenance window execution.</p>
     */
    inline GetMaintenanceWindowExecutionResult& WithStatus(const MaintenanceWindowExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the maintenance window execution.</p>
     */
    inline GetMaintenanceWindowExecutionResult& WithStatus(MaintenanceWindowExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The details explaining the Status. Only available for certain status
     * values.</p>
     */
    inline const Aws::String& GetStatusDetails() const{ return m_statusDetails; }

    /**
     * <p>The details explaining the Status. Only available for certain status
     * values.</p>
     */
    inline void SetStatusDetails(const Aws::String& value) { m_statusDetails = value; }

    /**
     * <p>The details explaining the Status. Only available for certain status
     * values.</p>
     */
    inline void SetStatusDetails(Aws::String&& value) { m_statusDetails = std::move(value); }

    /**
     * <p>The details explaining the Status. Only available for certain status
     * values.</p>
     */
    inline void SetStatusDetails(const char* value) { m_statusDetails.assign(value); }

    /**
     * <p>The details explaining the Status. Only available for certain status
     * values.</p>
     */
    inline GetMaintenanceWindowExecutionResult& WithStatusDetails(const Aws::String& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>The details explaining the Status. Only available for certain status
     * values.</p>
     */
    inline GetMaintenanceWindowExecutionResult& WithStatusDetails(Aws::String&& value) { SetStatusDetails(std::move(value)); return *this;}

    /**
     * <p>The details explaining the Status. Only available for certain status
     * values.</p>
     */
    inline GetMaintenanceWindowExecutionResult& WithStatusDetails(const char* value) { SetStatusDetails(value); return *this;}


    /**
     * <p>The time the maintenance window started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time the maintenance window started running.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>The time the maintenance window started running.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>The time the maintenance window started running.</p>
     */
    inline GetMaintenanceWindowExecutionResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time the maintenance window started running.</p>
     */
    inline GetMaintenanceWindowExecutionResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time the maintenance window finished running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time the maintenance window finished running.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }

    /**
     * <p>The time the maintenance window finished running.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }

    /**
     * <p>The time the maintenance window finished running.</p>
     */
    inline GetMaintenanceWindowExecutionResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time the maintenance window finished running.</p>
     */
    inline GetMaintenanceWindowExecutionResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_windowExecutionId;

    Aws::Vector<Aws::String> m_taskIds;

    MaintenanceWindowExecutionStatus m_status;

    Aws::String m_statusDetails;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
