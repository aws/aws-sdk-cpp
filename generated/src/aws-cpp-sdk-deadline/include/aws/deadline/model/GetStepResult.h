/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/StepLifecycleStatus.h>
#include <aws/deadline/model/TaskRunStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/deadline/model/StepTargetTaskRunStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/deadline/model/DependencyCounts.h>
#include <aws/deadline/model/StepRequiredCapabilities.h>
#include <aws/deadline/model/ParameterSpace.h>
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
namespace deadline
{
namespace Model
{
  class GetStepResult
  {
  public:
    AWS_DEADLINE_API GetStepResult() = default;
    AWS_DEADLINE_API GetStepResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetStepResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The step ID.</p>
     */
    inline const Aws::String& GetStepId() const { return m_stepId; }
    template<typename StepIdT = Aws::String>
    void SetStepId(StepIdT&& value) { m_stepIdHasBeenSet = true; m_stepId = std::forward<StepIdT>(value); }
    template<typename StepIdT = Aws::String>
    GetStepResult& WithStepId(StepIdT&& value) { SetStepId(std::forward<StepIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetStepResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The life cycle status of the step.</p>
     */
    inline StepLifecycleStatus GetLifecycleStatus() const { return m_lifecycleStatus; }
    inline void SetLifecycleStatus(StepLifecycleStatus value) { m_lifecycleStatusHasBeenSet = true; m_lifecycleStatus = value; }
    inline GetStepResult& WithLifecycleStatus(StepLifecycleStatus value) { SetLifecycleStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that describes the lifecycle status of the step.</p>
     */
    inline const Aws::String& GetLifecycleStatusMessage() const { return m_lifecycleStatusMessage; }
    template<typename LifecycleStatusMessageT = Aws::String>
    void SetLifecycleStatusMessage(LifecycleStatusMessageT&& value) { m_lifecycleStatusMessageHasBeenSet = true; m_lifecycleStatusMessage = std::forward<LifecycleStatusMessageT>(value); }
    template<typename LifecycleStatusMessageT = Aws::String>
    GetStepResult& WithLifecycleStatusMessage(LifecycleStatusMessageT&& value) { SetLifecycleStatusMessage(std::forward<LifecycleStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task run status for the job.</p>
     */
    inline TaskRunStatus GetTaskRunStatus() const { return m_taskRunStatus; }
    inline void SetTaskRunStatus(TaskRunStatus value) { m_taskRunStatusHasBeenSet = true; m_taskRunStatus = value; }
    inline GetStepResult& WithTaskRunStatus(TaskRunStatus value) { SetTaskRunStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline const Aws::Map<TaskRunStatus, int>& GetTaskRunStatusCounts() const { return m_taskRunStatusCounts; }
    template<typename TaskRunStatusCountsT = Aws::Map<TaskRunStatus, int>>
    void SetTaskRunStatusCounts(TaskRunStatusCountsT&& value) { m_taskRunStatusCountsHasBeenSet = true; m_taskRunStatusCounts = std::forward<TaskRunStatusCountsT>(value); }
    template<typename TaskRunStatusCountsT = Aws::Map<TaskRunStatus, int>>
    GetStepResult& WithTaskRunStatusCounts(TaskRunStatusCountsT&& value) { SetTaskRunStatusCounts(std::forward<TaskRunStatusCountsT>(value)); return *this;}
    inline GetStepResult& AddTaskRunStatusCounts(TaskRunStatus key, int value) {
      m_taskRunStatusCountsHasBeenSet = true; m_taskRunStatusCounts.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The total number of times tasks from the step failed and were retried.</p>
     */
    inline int GetTaskFailureRetryCount() const { return m_taskFailureRetryCount; }
    inline void SetTaskFailureRetryCount(int value) { m_taskFailureRetryCountHasBeenSet = true; m_taskFailureRetryCount = value; }
    inline GetStepResult& WithTaskFailureRetryCount(int value) { SetTaskFailureRetryCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task status with which the job started.</p>
     */
    inline StepTargetTaskRunStatus GetTargetTaskRunStatus() const { return m_targetTaskRunStatus; }
    inline void SetTargetTaskRunStatus(StepTargetTaskRunStatus value) { m_targetTaskRunStatusHasBeenSet = true; m_targetTaskRunStatus = value; }
    inline GetStepResult& WithTargetTaskRunStatus(StepTargetTaskRunStatus value) { SetTargetTaskRunStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetStepResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    GetStepResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetStepResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    GetStepResult& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    GetStepResult& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
    template<typename EndedAtT = Aws::Utils::DateTime>
    void SetEndedAt(EndedAtT&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::forward<EndedAtT>(value); }
    template<typename EndedAtT = Aws::Utils::DateTime>
    GetStepResult& WithEndedAt(EndedAtT&& value) { SetEndedAt(std::forward<EndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of dependencies in the step.</p>
     */
    inline const DependencyCounts& GetDependencyCounts() const { return m_dependencyCounts; }
    template<typename DependencyCountsT = DependencyCounts>
    void SetDependencyCounts(DependencyCountsT&& value) { m_dependencyCountsHasBeenSet = true; m_dependencyCounts = std::forward<DependencyCountsT>(value); }
    template<typename DependencyCountsT = DependencyCounts>
    GetStepResult& WithDependencyCounts(DependencyCountsT&& value) { SetDependencyCounts(std::forward<DependencyCountsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The required capabilities of the step.</p>
     */
    inline const StepRequiredCapabilities& GetRequiredCapabilities() const { return m_requiredCapabilities; }
    template<typename RequiredCapabilitiesT = StepRequiredCapabilities>
    void SetRequiredCapabilities(RequiredCapabilitiesT&& value) { m_requiredCapabilitiesHasBeenSet = true; m_requiredCapabilities = std::forward<RequiredCapabilitiesT>(value); }
    template<typename RequiredCapabilitiesT = StepRequiredCapabilities>
    GetStepResult& WithRequiredCapabilities(RequiredCapabilitiesT&& value) { SetRequiredCapabilities(std::forward<RequiredCapabilitiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of step parameters and the combination expression for the step.</p>
     */
    inline const ParameterSpace& GetParameterSpace() const { return m_parameterSpace; }
    template<typename ParameterSpaceT = ParameterSpace>
    void SetParameterSpace(ParameterSpaceT&& value) { m_parameterSpaceHasBeenSet = true; m_parameterSpace = std::forward<ParameterSpaceT>(value); }
    template<typename ParameterSpaceT = ParameterSpace>
    GetStepResult& WithParameterSpace(ParameterSpaceT&& value) { SetParameterSpace(std::forward<ParameterSpaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the step.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetStepResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetStepResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stepId;
    bool m_stepIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StepLifecycleStatus m_lifecycleStatus{StepLifecycleStatus::NOT_SET};
    bool m_lifecycleStatusHasBeenSet = false;

    Aws::String m_lifecycleStatusMessage;
    bool m_lifecycleStatusMessageHasBeenSet = false;

    TaskRunStatus m_taskRunStatus{TaskRunStatus::NOT_SET};
    bool m_taskRunStatusHasBeenSet = false;

    Aws::Map<TaskRunStatus, int> m_taskRunStatusCounts;
    bool m_taskRunStatusCountsHasBeenSet = false;

    int m_taskFailureRetryCount{0};
    bool m_taskFailureRetryCountHasBeenSet = false;

    StepTargetTaskRunStatus m_targetTaskRunStatus{StepTargetTaskRunStatus::NOT_SET};
    bool m_targetTaskRunStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt{};
    bool m_endedAtHasBeenSet = false;

    DependencyCounts m_dependencyCounts;
    bool m_dependencyCountsHasBeenSet = false;

    StepRequiredCapabilities m_requiredCapabilities;
    bool m_requiredCapabilitiesHasBeenSet = false;

    ParameterSpace m_parameterSpace;
    bool m_parameterSpaceHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
