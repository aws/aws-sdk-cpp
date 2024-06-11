/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/AuditMitigationActionsTaskStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iot/model/AuditMitigationActionsTaskTarget.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/TaskStatisticsForAuditCheck.h>
#include <aws/iot/model/MitigationAction.h>
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
  class DescribeAuditMitigationActionsTaskResult
  {
  public:
    AWS_IOT_API DescribeAuditMitigationActionsTaskResult();
    AWS_IOT_API DescribeAuditMitigationActionsTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeAuditMitigationActionsTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current status of the task.</p>
     */
    inline const AuditMitigationActionsTaskStatus& GetTaskStatus() const{ return m_taskStatus; }
    inline void SetTaskStatus(const AuditMitigationActionsTaskStatus& value) { m_taskStatus = value; }
    inline void SetTaskStatus(AuditMitigationActionsTaskStatus&& value) { m_taskStatus = std::move(value); }
    inline DescribeAuditMitigationActionsTaskResult& WithTaskStatus(const AuditMitigationActionsTaskStatus& value) { SetTaskStatus(value); return *this;}
    inline DescribeAuditMitigationActionsTaskResult& WithTaskStatus(AuditMitigationActionsTaskStatus&& value) { SetTaskStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the task was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline DescribeAuditMitigationActionsTaskResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline DescribeAuditMitigationActionsTaskResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the task was completed or canceled.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline DescribeAuditMitigationActionsTaskResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline DescribeAuditMitigationActionsTaskResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Aggregate counts of the results when the mitigation tasks were applied to the
     * findings for this audit mitigation actions task.</p>
     */
    inline const Aws::Map<Aws::String, TaskStatisticsForAuditCheck>& GetTaskStatistics() const{ return m_taskStatistics; }
    inline void SetTaskStatistics(const Aws::Map<Aws::String, TaskStatisticsForAuditCheck>& value) { m_taskStatistics = value; }
    inline void SetTaskStatistics(Aws::Map<Aws::String, TaskStatisticsForAuditCheck>&& value) { m_taskStatistics = std::move(value); }
    inline DescribeAuditMitigationActionsTaskResult& WithTaskStatistics(const Aws::Map<Aws::String, TaskStatisticsForAuditCheck>& value) { SetTaskStatistics(value); return *this;}
    inline DescribeAuditMitigationActionsTaskResult& WithTaskStatistics(Aws::Map<Aws::String, TaskStatisticsForAuditCheck>&& value) { SetTaskStatistics(std::move(value)); return *this;}
    inline DescribeAuditMitigationActionsTaskResult& AddTaskStatistics(const Aws::String& key, const TaskStatisticsForAuditCheck& value) { m_taskStatistics.emplace(key, value); return *this; }
    inline DescribeAuditMitigationActionsTaskResult& AddTaskStatistics(Aws::String&& key, const TaskStatisticsForAuditCheck& value) { m_taskStatistics.emplace(std::move(key), value); return *this; }
    inline DescribeAuditMitigationActionsTaskResult& AddTaskStatistics(const Aws::String& key, TaskStatisticsForAuditCheck&& value) { m_taskStatistics.emplace(key, std::move(value)); return *this; }
    inline DescribeAuditMitigationActionsTaskResult& AddTaskStatistics(Aws::String&& key, TaskStatisticsForAuditCheck&& value) { m_taskStatistics.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeAuditMitigationActionsTaskResult& AddTaskStatistics(const char* key, TaskStatisticsForAuditCheck&& value) { m_taskStatistics.emplace(key, std::move(value)); return *this; }
    inline DescribeAuditMitigationActionsTaskResult& AddTaskStatistics(const char* key, const TaskStatisticsForAuditCheck& value) { m_taskStatistics.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the findings to which the mitigation actions are applied. This can
     * be by audit checks, by audit task, or a set of findings.</p>
     */
    inline const AuditMitigationActionsTaskTarget& GetTarget() const{ return m_target; }
    inline void SetTarget(const AuditMitigationActionsTaskTarget& value) { m_target = value; }
    inline void SetTarget(AuditMitigationActionsTaskTarget&& value) { m_target = std::move(value); }
    inline DescribeAuditMitigationActionsTaskResult& WithTarget(const AuditMitigationActionsTaskTarget& value) { SetTarget(value); return *this;}
    inline DescribeAuditMitigationActionsTaskResult& WithTarget(AuditMitigationActionsTaskTarget&& value) { SetTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the mitigation actions that should be applied to specific audit
     * checks.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetAuditCheckToActionsMapping() const{ return m_auditCheckToActionsMapping; }
    inline void SetAuditCheckToActionsMapping(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_auditCheckToActionsMapping = value; }
    inline void SetAuditCheckToActionsMapping(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_auditCheckToActionsMapping = std::move(value); }
    inline DescribeAuditMitigationActionsTaskResult& WithAuditCheckToActionsMapping(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetAuditCheckToActionsMapping(value); return *this;}
    inline DescribeAuditMitigationActionsTaskResult& WithAuditCheckToActionsMapping(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetAuditCheckToActionsMapping(std::move(value)); return *this;}
    inline DescribeAuditMitigationActionsTaskResult& AddAuditCheckToActionsMapping(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_auditCheckToActionsMapping.emplace(key, value); return *this; }
    inline DescribeAuditMitigationActionsTaskResult& AddAuditCheckToActionsMapping(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_auditCheckToActionsMapping.emplace(std::move(key), value); return *this; }
    inline DescribeAuditMitigationActionsTaskResult& AddAuditCheckToActionsMapping(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_auditCheckToActionsMapping.emplace(key, std::move(value)); return *this; }
    inline DescribeAuditMitigationActionsTaskResult& AddAuditCheckToActionsMapping(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_auditCheckToActionsMapping.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeAuditMitigationActionsTaskResult& AddAuditCheckToActionsMapping(const char* key, Aws::Vector<Aws::String>&& value) { m_auditCheckToActionsMapping.emplace(key, std::move(value)); return *this; }
    inline DescribeAuditMitigationActionsTaskResult& AddAuditCheckToActionsMapping(const char* key, const Aws::Vector<Aws::String>& value) { m_auditCheckToActionsMapping.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the mitigation actions and their parameters that are applied as
     * part of this task.</p>
     */
    inline const Aws::Vector<MitigationAction>& GetActionsDefinition() const{ return m_actionsDefinition; }
    inline void SetActionsDefinition(const Aws::Vector<MitigationAction>& value) { m_actionsDefinition = value; }
    inline void SetActionsDefinition(Aws::Vector<MitigationAction>&& value) { m_actionsDefinition = std::move(value); }
    inline DescribeAuditMitigationActionsTaskResult& WithActionsDefinition(const Aws::Vector<MitigationAction>& value) { SetActionsDefinition(value); return *this;}
    inline DescribeAuditMitigationActionsTaskResult& WithActionsDefinition(Aws::Vector<MitigationAction>&& value) { SetActionsDefinition(std::move(value)); return *this;}
    inline DescribeAuditMitigationActionsTaskResult& AddActionsDefinition(const MitigationAction& value) { m_actionsDefinition.push_back(value); return *this; }
    inline DescribeAuditMitigationActionsTaskResult& AddActionsDefinition(MitigationAction&& value) { m_actionsDefinition.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAuditMitigationActionsTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAuditMitigationActionsTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAuditMitigationActionsTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AuditMitigationActionsTaskStatus m_taskStatus;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;

    Aws::Map<Aws::String, TaskStatisticsForAuditCheck> m_taskStatistics;

    AuditMitigationActionsTaskTarget m_target;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_auditCheckToActionsMapping;

    Aws::Vector<MitigationAction> m_actionsDefinition;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
