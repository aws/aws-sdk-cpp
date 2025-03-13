/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeAuditTaskResult
  {
  public:
    AWS_IOT_API DescribeAuditTaskResult() = default;
    AWS_IOT_API DescribeAuditTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeAuditTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the audit: one of "IN_PROGRESS", "COMPLETED", "FAILED", or
     * "CANCELED".</p>
     */
    inline AuditTaskStatus GetTaskStatus() const { return m_taskStatus; }
    inline void SetTaskStatus(AuditTaskStatus value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }
    inline DescribeAuditTaskResult& WithTaskStatus(AuditTaskStatus value) { SetTaskStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of audit: "ON_DEMAND_AUDIT_TASK" or "SCHEDULED_AUDIT_TASK".</p>
     */
    inline AuditTaskType GetTaskType() const { return m_taskType; }
    inline void SetTaskType(AuditTaskType value) { m_taskTypeHasBeenSet = true; m_taskType = value; }
    inline DescribeAuditTaskResult& WithTaskType(AuditTaskType value) { SetTaskType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the audit started.</p>
     */
    inline const Aws::Utils::DateTime& GetTaskStartTime() const { return m_taskStartTime; }
    template<typename TaskStartTimeT = Aws::Utils::DateTime>
    void SetTaskStartTime(TaskStartTimeT&& value) { m_taskStartTimeHasBeenSet = true; m_taskStartTime = std::forward<TaskStartTimeT>(value); }
    template<typename TaskStartTimeT = Aws::Utils::DateTime>
    DescribeAuditTaskResult& WithTaskStartTime(TaskStartTimeT&& value) { SetTaskStartTime(std::forward<TaskStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Statistical information about the audit.</p>
     */
    inline const TaskStatistics& GetTaskStatistics() const { return m_taskStatistics; }
    template<typename TaskStatisticsT = TaskStatistics>
    void SetTaskStatistics(TaskStatisticsT&& value) { m_taskStatisticsHasBeenSet = true; m_taskStatistics = std::forward<TaskStatisticsT>(value); }
    template<typename TaskStatisticsT = TaskStatistics>
    DescribeAuditTaskResult& WithTaskStatistics(TaskStatisticsT&& value) { SetTaskStatistics(std::forward<TaskStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the scheduled audit (only if the audit was a scheduled
     * audit).</p>
     */
    inline const Aws::String& GetScheduledAuditName() const { return m_scheduledAuditName; }
    template<typename ScheduledAuditNameT = Aws::String>
    void SetScheduledAuditName(ScheduledAuditNameT&& value) { m_scheduledAuditNameHasBeenSet = true; m_scheduledAuditName = std::forward<ScheduledAuditNameT>(value); }
    template<typename ScheduledAuditNameT = Aws::String>
    DescribeAuditTaskResult& WithScheduledAuditName(ScheduledAuditNameT&& value) { SetScheduledAuditName(std::forward<ScheduledAuditNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about each check performed during this audit.</p>
     */
    inline const Aws::Map<Aws::String, AuditCheckDetails>& GetAuditDetails() const { return m_auditDetails; }
    template<typename AuditDetailsT = Aws::Map<Aws::String, AuditCheckDetails>>
    void SetAuditDetails(AuditDetailsT&& value) { m_auditDetailsHasBeenSet = true; m_auditDetails = std::forward<AuditDetailsT>(value); }
    template<typename AuditDetailsT = Aws::Map<Aws::String, AuditCheckDetails>>
    DescribeAuditTaskResult& WithAuditDetails(AuditDetailsT&& value) { SetAuditDetails(std::forward<AuditDetailsT>(value)); return *this;}
    template<typename AuditDetailsKeyT = Aws::String, typename AuditDetailsValueT = AuditCheckDetails>
    DescribeAuditTaskResult& AddAuditDetails(AuditDetailsKeyT&& key, AuditDetailsValueT&& value) {
      m_auditDetailsHasBeenSet = true; m_auditDetails.emplace(std::forward<AuditDetailsKeyT>(key), std::forward<AuditDetailsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAuditTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AuditTaskStatus m_taskStatus{AuditTaskStatus::NOT_SET};
    bool m_taskStatusHasBeenSet = false;

    AuditTaskType m_taskType{AuditTaskType::NOT_SET};
    bool m_taskTypeHasBeenSet = false;

    Aws::Utils::DateTime m_taskStartTime{};
    bool m_taskStartTimeHasBeenSet = false;

    TaskStatistics m_taskStatistics;
    bool m_taskStatisticsHasBeenSet = false;

    Aws::String m_scheduledAuditName;
    bool m_scheduledAuditNameHasBeenSet = false;

    Aws::Map<Aws::String, AuditCheckDetails> m_auditDetails;
    bool m_auditDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
