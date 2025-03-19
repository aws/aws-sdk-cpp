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
    AWS_IOT_API DescribeAuditMitigationActionsTaskResult() = default;
    AWS_IOT_API DescribeAuditMitigationActionsTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeAuditMitigationActionsTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current status of the task.</p>
     */
    inline AuditMitigationActionsTaskStatus GetTaskStatus() const { return m_taskStatus; }
    inline void SetTaskStatus(AuditMitigationActionsTaskStatus value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }
    inline DescribeAuditMitigationActionsTaskResult& WithTaskStatus(AuditMitigationActionsTaskStatus value) { SetTaskStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the task was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    DescribeAuditMitigationActionsTaskResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the task was completed or canceled.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    DescribeAuditMitigationActionsTaskResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Aggregate counts of the results when the mitigation tasks were applied to the
     * findings for this audit mitigation actions task.</p>
     */
    inline const Aws::Map<Aws::String, TaskStatisticsForAuditCheck>& GetTaskStatistics() const { return m_taskStatistics; }
    template<typename TaskStatisticsT = Aws::Map<Aws::String, TaskStatisticsForAuditCheck>>
    void SetTaskStatistics(TaskStatisticsT&& value) { m_taskStatisticsHasBeenSet = true; m_taskStatistics = std::forward<TaskStatisticsT>(value); }
    template<typename TaskStatisticsT = Aws::Map<Aws::String, TaskStatisticsForAuditCheck>>
    DescribeAuditMitigationActionsTaskResult& WithTaskStatistics(TaskStatisticsT&& value) { SetTaskStatistics(std::forward<TaskStatisticsT>(value)); return *this;}
    template<typename TaskStatisticsKeyT = Aws::String, typename TaskStatisticsValueT = TaskStatisticsForAuditCheck>
    DescribeAuditMitigationActionsTaskResult& AddTaskStatistics(TaskStatisticsKeyT&& key, TaskStatisticsValueT&& value) {
      m_taskStatisticsHasBeenSet = true; m_taskStatistics.emplace(std::forward<TaskStatisticsKeyT>(key), std::forward<TaskStatisticsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Identifies the findings to which the mitigation actions are applied. This can
     * be by audit checks, by audit task, or a set of findings.</p>
     */
    inline const AuditMitigationActionsTaskTarget& GetTarget() const { return m_target; }
    template<typename TargetT = AuditMitigationActionsTaskTarget>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = AuditMitigationActionsTaskTarget>
    DescribeAuditMitigationActionsTaskResult& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the mitigation actions that should be applied to specific audit
     * checks.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetAuditCheckToActionsMapping() const { return m_auditCheckToActionsMapping; }
    template<typename AuditCheckToActionsMappingT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetAuditCheckToActionsMapping(AuditCheckToActionsMappingT&& value) { m_auditCheckToActionsMappingHasBeenSet = true; m_auditCheckToActionsMapping = std::forward<AuditCheckToActionsMappingT>(value); }
    template<typename AuditCheckToActionsMappingT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    DescribeAuditMitigationActionsTaskResult& WithAuditCheckToActionsMapping(AuditCheckToActionsMappingT&& value) { SetAuditCheckToActionsMapping(std::forward<AuditCheckToActionsMappingT>(value)); return *this;}
    template<typename AuditCheckToActionsMappingKeyT = Aws::String, typename AuditCheckToActionsMappingValueT = Aws::Vector<Aws::String>>
    DescribeAuditMitigationActionsTaskResult& AddAuditCheckToActionsMapping(AuditCheckToActionsMappingKeyT&& key, AuditCheckToActionsMappingValueT&& value) {
      m_auditCheckToActionsMappingHasBeenSet = true; m_auditCheckToActionsMapping.emplace(std::forward<AuditCheckToActionsMappingKeyT>(key), std::forward<AuditCheckToActionsMappingValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies the mitigation actions and their parameters that are applied as
     * part of this task.</p>
     */
    inline const Aws::Vector<MitigationAction>& GetActionsDefinition() const { return m_actionsDefinition; }
    template<typename ActionsDefinitionT = Aws::Vector<MitigationAction>>
    void SetActionsDefinition(ActionsDefinitionT&& value) { m_actionsDefinitionHasBeenSet = true; m_actionsDefinition = std::forward<ActionsDefinitionT>(value); }
    template<typename ActionsDefinitionT = Aws::Vector<MitigationAction>>
    DescribeAuditMitigationActionsTaskResult& WithActionsDefinition(ActionsDefinitionT&& value) { SetActionsDefinition(std::forward<ActionsDefinitionT>(value)); return *this;}
    template<typename ActionsDefinitionT = MitigationAction>
    DescribeAuditMitigationActionsTaskResult& AddActionsDefinition(ActionsDefinitionT&& value) { m_actionsDefinitionHasBeenSet = true; m_actionsDefinition.emplace_back(std::forward<ActionsDefinitionT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAuditMitigationActionsTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AuditMitigationActionsTaskStatus m_taskStatus{AuditMitigationActionsTaskStatus::NOT_SET};
    bool m_taskStatusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Map<Aws::String, TaskStatisticsForAuditCheck> m_taskStatistics;
    bool m_taskStatisticsHasBeenSet = false;

    AuditMitigationActionsTaskTarget m_target;
    bool m_targetHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_auditCheckToActionsMapping;
    bool m_auditCheckToActionsMappingHasBeenSet = false;

    Aws::Vector<MitigationAction> m_actionsDefinition;
    bool m_actionsDefinitionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
