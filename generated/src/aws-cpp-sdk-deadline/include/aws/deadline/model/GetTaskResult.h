/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/deadline/model/TaskRunStatus.h>
#include <aws/deadline/model/TaskTargetRunStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/deadline/model/TaskParameterValue.h>
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
  class GetTaskResult
  {
  public:
    AWS_DEADLINE_API GetTaskResult() = default;
    AWS_DEADLINE_API GetTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The task ID.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    GetTaskResult& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetTaskResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    GetTaskResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run status for the task.</p>
     */
    inline TaskRunStatus GetRunStatus() const { return m_runStatus; }
    inline void SetRunStatus(TaskRunStatus value) { m_runStatusHasBeenSet = true; m_runStatus = value; }
    inline GetTaskResult& WithRunStatus(TaskRunStatus value) { SetRunStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run status with which to start the task.</p>
     */
    inline TaskTargetRunStatus GetTargetRunStatus() const { return m_targetRunStatus; }
    inline void SetTargetRunStatus(TaskTargetRunStatus value) { m_targetRunStatusHasBeenSet = true; m_targetRunStatus = value; }
    inline GetTaskResult& WithTargetRunStatus(TaskTargetRunStatus value) { SetTargetRunStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times that the task failed and was retried.</p>
     */
    inline int GetFailureRetryCount() const { return m_failureRetryCount; }
    inline void SetFailureRetryCount(int value) { m_failureRetryCountHasBeenSet = true; m_failureRetryCount = value; }
    inline GetTaskResult& WithFailureRetryCount(int value) { SetFailureRetryCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the task.</p>
     */
    inline const Aws::Map<Aws::String, TaskParameterValue>& GetParameters() const { return m_parameters; }
    template<typename ParametersT = Aws::Map<Aws::String, TaskParameterValue>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, TaskParameterValue>>
    GetTaskResult& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = TaskParameterValue>
    GetTaskResult& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The date and time the resource started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    GetTaskResult& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
    template<typename EndedAtT = Aws::Utils::DateTime>
    void SetEndedAt(EndedAtT&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::forward<EndedAtT>(value); }
    template<typename EndedAtT = Aws::Utils::DateTime>
    GetTaskResult& WithEndedAt(EndedAtT&& value) { SetEndedAt(std::forward<EndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetTaskResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    GetTaskResult& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest session ID for the task.</p>
     */
    inline const Aws::String& GetLatestSessionActionId() const { return m_latestSessionActionId; }
    template<typename LatestSessionActionIdT = Aws::String>
    void SetLatestSessionActionId(LatestSessionActionIdT&& value) { m_latestSessionActionIdHasBeenSet = true; m_latestSessionActionId = std::forward<LatestSessionActionIdT>(value); }
    template<typename LatestSessionActionIdT = Aws::String>
    GetTaskResult& WithLatestSessionActionId(LatestSessionActionIdT&& value) { SetLatestSessionActionId(std::forward<LatestSessionActionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    TaskRunStatus m_runStatus{TaskRunStatus::NOT_SET};
    bool m_runStatusHasBeenSet = false;

    TaskTargetRunStatus m_targetRunStatus{TaskTargetRunStatus::NOT_SET};
    bool m_targetRunStatusHasBeenSet = false;

    int m_failureRetryCount{0};
    bool m_failureRetryCountHasBeenSet = false;

    Aws::Map<Aws::String, TaskParameterValue> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt{};
    bool m_endedAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::String m_latestSessionActionId;
    bool m_latestSessionActionIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
