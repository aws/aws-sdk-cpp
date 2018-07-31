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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/AuditTaskStatus.h>
#include <aws/iot/model/AuditTaskType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/TaskStatistics.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iot/model/AuditCheckDetails.h>
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
namespace IoT
{
namespace Model
{
  class AWS_IOT_API DescribeAuditTaskResult
  {
  public:
    DescribeAuditTaskResult();
    DescribeAuditTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAuditTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the audit: one of "IN_PROGRESS", "COMPLETED", "FAILED", or
     * "CANCELED".</p>
     */
    inline const AuditTaskStatus& GetTaskStatus() const{ return m_taskStatus; }

    /**
     * <p>The status of the audit: one of "IN_PROGRESS", "COMPLETED", "FAILED", or
     * "CANCELED".</p>
     */
    inline void SetTaskStatus(const AuditTaskStatus& value) { m_taskStatus = value; }

    /**
     * <p>The status of the audit: one of "IN_PROGRESS", "COMPLETED", "FAILED", or
     * "CANCELED".</p>
     */
    inline void SetTaskStatus(AuditTaskStatus&& value) { m_taskStatus = std::move(value); }

    /**
     * <p>The status of the audit: one of "IN_PROGRESS", "COMPLETED", "FAILED", or
     * "CANCELED".</p>
     */
    inline DescribeAuditTaskResult& WithTaskStatus(const AuditTaskStatus& value) { SetTaskStatus(value); return *this;}

    /**
     * <p>The status of the audit: one of "IN_PROGRESS", "COMPLETED", "FAILED", or
     * "CANCELED".</p>
     */
    inline DescribeAuditTaskResult& WithTaskStatus(AuditTaskStatus&& value) { SetTaskStatus(std::move(value)); return *this;}


    /**
     * <p>The type of audit: "ON_DEMAND_AUDIT_TASK" or "SCHEDULED_AUDIT_TASK".</p>
     */
    inline const AuditTaskType& GetTaskType() const{ return m_taskType; }

    /**
     * <p>The type of audit: "ON_DEMAND_AUDIT_TASK" or "SCHEDULED_AUDIT_TASK".</p>
     */
    inline void SetTaskType(const AuditTaskType& value) { m_taskType = value; }

    /**
     * <p>The type of audit: "ON_DEMAND_AUDIT_TASK" or "SCHEDULED_AUDIT_TASK".</p>
     */
    inline void SetTaskType(AuditTaskType&& value) { m_taskType = std::move(value); }

    /**
     * <p>The type of audit: "ON_DEMAND_AUDIT_TASK" or "SCHEDULED_AUDIT_TASK".</p>
     */
    inline DescribeAuditTaskResult& WithTaskType(const AuditTaskType& value) { SetTaskType(value); return *this;}

    /**
     * <p>The type of audit: "ON_DEMAND_AUDIT_TASK" or "SCHEDULED_AUDIT_TASK".</p>
     */
    inline DescribeAuditTaskResult& WithTaskType(AuditTaskType&& value) { SetTaskType(std::move(value)); return *this;}


    /**
     * <p>The time the audit started.</p>
     */
    inline const Aws::Utils::DateTime& GetTaskStartTime() const{ return m_taskStartTime; }

    /**
     * <p>The time the audit started.</p>
     */
    inline void SetTaskStartTime(const Aws::Utils::DateTime& value) { m_taskStartTime = value; }

    /**
     * <p>The time the audit started.</p>
     */
    inline void SetTaskStartTime(Aws::Utils::DateTime&& value) { m_taskStartTime = std::move(value); }

    /**
     * <p>The time the audit started.</p>
     */
    inline DescribeAuditTaskResult& WithTaskStartTime(const Aws::Utils::DateTime& value) { SetTaskStartTime(value); return *this;}

    /**
     * <p>The time the audit started.</p>
     */
    inline DescribeAuditTaskResult& WithTaskStartTime(Aws::Utils::DateTime&& value) { SetTaskStartTime(std::move(value)); return *this;}


    /**
     * <p>Statistical information about the audit.</p>
     */
    inline const TaskStatistics& GetTaskStatistics() const{ return m_taskStatistics; }

    /**
     * <p>Statistical information about the audit.</p>
     */
    inline void SetTaskStatistics(const TaskStatistics& value) { m_taskStatistics = value; }

    /**
     * <p>Statistical information about the audit.</p>
     */
    inline void SetTaskStatistics(TaskStatistics&& value) { m_taskStatistics = std::move(value); }

    /**
     * <p>Statistical information about the audit.</p>
     */
    inline DescribeAuditTaskResult& WithTaskStatistics(const TaskStatistics& value) { SetTaskStatistics(value); return *this;}

    /**
     * <p>Statistical information about the audit.</p>
     */
    inline DescribeAuditTaskResult& WithTaskStatistics(TaskStatistics&& value) { SetTaskStatistics(std::move(value)); return *this;}


    /**
     * <p>The name of the scheduled audit (only if the audit was a scheduled
     * audit).</p>
     */
    inline const Aws::String& GetScheduledAuditName() const{ return m_scheduledAuditName; }

    /**
     * <p>The name of the scheduled audit (only if the audit was a scheduled
     * audit).</p>
     */
    inline void SetScheduledAuditName(const Aws::String& value) { m_scheduledAuditName = value; }

    /**
     * <p>The name of the scheduled audit (only if the audit was a scheduled
     * audit).</p>
     */
    inline void SetScheduledAuditName(Aws::String&& value) { m_scheduledAuditName = std::move(value); }

    /**
     * <p>The name of the scheduled audit (only if the audit was a scheduled
     * audit).</p>
     */
    inline void SetScheduledAuditName(const char* value) { m_scheduledAuditName.assign(value); }

    /**
     * <p>The name of the scheduled audit (only if the audit was a scheduled
     * audit).</p>
     */
    inline DescribeAuditTaskResult& WithScheduledAuditName(const Aws::String& value) { SetScheduledAuditName(value); return *this;}

    /**
     * <p>The name of the scheduled audit (only if the audit was a scheduled
     * audit).</p>
     */
    inline DescribeAuditTaskResult& WithScheduledAuditName(Aws::String&& value) { SetScheduledAuditName(std::move(value)); return *this;}

    /**
     * <p>The name of the scheduled audit (only if the audit was a scheduled
     * audit).</p>
     */
    inline DescribeAuditTaskResult& WithScheduledAuditName(const char* value) { SetScheduledAuditName(value); return *this;}


    /**
     * <p>Detailed information about each check performed during this audit.</p>
     */
    inline const Aws::Map<Aws::String, AuditCheckDetails>& GetAuditDetails() const{ return m_auditDetails; }

    /**
     * <p>Detailed information about each check performed during this audit.</p>
     */
    inline void SetAuditDetails(const Aws::Map<Aws::String, AuditCheckDetails>& value) { m_auditDetails = value; }

    /**
     * <p>Detailed information about each check performed during this audit.</p>
     */
    inline void SetAuditDetails(Aws::Map<Aws::String, AuditCheckDetails>&& value) { m_auditDetails = std::move(value); }

    /**
     * <p>Detailed information about each check performed during this audit.</p>
     */
    inline DescribeAuditTaskResult& WithAuditDetails(const Aws::Map<Aws::String, AuditCheckDetails>& value) { SetAuditDetails(value); return *this;}

    /**
     * <p>Detailed information about each check performed during this audit.</p>
     */
    inline DescribeAuditTaskResult& WithAuditDetails(Aws::Map<Aws::String, AuditCheckDetails>&& value) { SetAuditDetails(std::move(value)); return *this;}

    /**
     * <p>Detailed information about each check performed during this audit.</p>
     */
    inline DescribeAuditTaskResult& AddAuditDetails(const Aws::String& key, const AuditCheckDetails& value) { m_auditDetails.emplace(key, value); return *this; }

    /**
     * <p>Detailed information about each check performed during this audit.</p>
     */
    inline DescribeAuditTaskResult& AddAuditDetails(Aws::String&& key, const AuditCheckDetails& value) { m_auditDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>Detailed information about each check performed during this audit.</p>
     */
    inline DescribeAuditTaskResult& AddAuditDetails(const Aws::String& key, AuditCheckDetails&& value) { m_auditDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Detailed information about each check performed during this audit.</p>
     */
    inline DescribeAuditTaskResult& AddAuditDetails(Aws::String&& key, AuditCheckDetails&& value) { m_auditDetails.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Detailed information about each check performed during this audit.</p>
     */
    inline DescribeAuditTaskResult& AddAuditDetails(const char* key, AuditCheckDetails&& value) { m_auditDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Detailed information about each check performed during this audit.</p>
     */
    inline DescribeAuditTaskResult& AddAuditDetails(const char* key, const AuditCheckDetails& value) { m_auditDetails.emplace(key, value); return *this; }

  private:

    AuditTaskStatus m_taskStatus;

    AuditTaskType m_taskType;

    Aws::Utils::DateTime m_taskStartTime;

    TaskStatistics m_taskStatistics;

    Aws::String m_scheduledAuditName;

    Aws::Map<Aws::String, AuditCheckDetails> m_auditDetails;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
