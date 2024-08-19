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
    AWS_DEADLINE_API GetStepResult();
    AWS_DEADLINE_API GetStepResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetStepResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The step ID.</p>
     */
    inline const Aws::String& GetStepId() const{ return m_stepId; }
    inline void SetStepId(const Aws::String& value) { m_stepId = value; }
    inline void SetStepId(Aws::String&& value) { m_stepId = std::move(value); }
    inline void SetStepId(const char* value) { m_stepId.assign(value); }
    inline GetStepResult& WithStepId(const Aws::String& value) { SetStepId(value); return *this;}
    inline GetStepResult& WithStepId(Aws::String&& value) { SetStepId(std::move(value)); return *this;}
    inline GetStepResult& WithStepId(const char* value) { SetStepId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetStepResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetStepResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetStepResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The life cycle status of the step.</p>
     */
    inline const StepLifecycleStatus& GetLifecycleStatus() const{ return m_lifecycleStatus; }
    inline void SetLifecycleStatus(const StepLifecycleStatus& value) { m_lifecycleStatus = value; }
    inline void SetLifecycleStatus(StepLifecycleStatus&& value) { m_lifecycleStatus = std::move(value); }
    inline GetStepResult& WithLifecycleStatus(const StepLifecycleStatus& value) { SetLifecycleStatus(value); return *this;}
    inline GetStepResult& WithLifecycleStatus(StepLifecycleStatus&& value) { SetLifecycleStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that describes the lifecycle status of the step.</p>
     */
    inline const Aws::String& GetLifecycleStatusMessage() const{ return m_lifecycleStatusMessage; }
    inline void SetLifecycleStatusMessage(const Aws::String& value) { m_lifecycleStatusMessage = value; }
    inline void SetLifecycleStatusMessage(Aws::String&& value) { m_lifecycleStatusMessage = std::move(value); }
    inline void SetLifecycleStatusMessage(const char* value) { m_lifecycleStatusMessage.assign(value); }
    inline GetStepResult& WithLifecycleStatusMessage(const Aws::String& value) { SetLifecycleStatusMessage(value); return *this;}
    inline GetStepResult& WithLifecycleStatusMessage(Aws::String&& value) { SetLifecycleStatusMessage(std::move(value)); return *this;}
    inline GetStepResult& WithLifecycleStatusMessage(const char* value) { SetLifecycleStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task run status for the job.</p>
     */
    inline const TaskRunStatus& GetTaskRunStatus() const{ return m_taskRunStatus; }
    inline void SetTaskRunStatus(const TaskRunStatus& value) { m_taskRunStatus = value; }
    inline void SetTaskRunStatus(TaskRunStatus&& value) { m_taskRunStatus = std::move(value); }
    inline GetStepResult& WithTaskRunStatus(const TaskRunStatus& value) { SetTaskRunStatus(value); return *this;}
    inline GetStepResult& WithTaskRunStatus(TaskRunStatus&& value) { SetTaskRunStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline const Aws::Map<TaskRunStatus, int>& GetTaskRunStatusCounts() const{ return m_taskRunStatusCounts; }
    inline void SetTaskRunStatusCounts(const Aws::Map<TaskRunStatus, int>& value) { m_taskRunStatusCounts = value; }
    inline void SetTaskRunStatusCounts(Aws::Map<TaskRunStatus, int>&& value) { m_taskRunStatusCounts = std::move(value); }
    inline GetStepResult& WithTaskRunStatusCounts(const Aws::Map<TaskRunStatus, int>& value) { SetTaskRunStatusCounts(value); return *this;}
    inline GetStepResult& WithTaskRunStatusCounts(Aws::Map<TaskRunStatus, int>&& value) { SetTaskRunStatusCounts(std::move(value)); return *this;}
    inline GetStepResult& AddTaskRunStatusCounts(const TaskRunStatus& key, int value) { m_taskRunStatusCounts.emplace(key, value); return *this; }
    inline GetStepResult& AddTaskRunStatusCounts(TaskRunStatus&& key, int value) { m_taskRunStatusCounts.emplace(std::move(key), value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The task status with which the job started.</p>
     */
    inline const StepTargetTaskRunStatus& GetTargetTaskRunStatus() const{ return m_targetTaskRunStatus; }
    inline void SetTargetTaskRunStatus(const StepTargetTaskRunStatus& value) { m_targetTaskRunStatus = value; }
    inline void SetTargetTaskRunStatus(StepTargetTaskRunStatus&& value) { m_targetTaskRunStatus = std::move(value); }
    inline GetStepResult& WithTargetTaskRunStatus(const StepTargetTaskRunStatus& value) { SetTargetTaskRunStatus(value); return *this;}
    inline GetStepResult& WithTargetTaskRunStatus(StepTargetTaskRunStatus&& value) { SetTargetTaskRunStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetStepResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetStepResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetStepResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetStepResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetStepResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetStepResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetStepResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline GetStepResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline GetStepResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline GetStepResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }
    inline GetStepResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline GetStepResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAt = value; }
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAt = std::move(value); }
    inline GetStepResult& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}
    inline GetStepResult& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of dependencies in the step.</p>
     */
    inline const DependencyCounts& GetDependencyCounts() const{ return m_dependencyCounts; }
    inline void SetDependencyCounts(const DependencyCounts& value) { m_dependencyCounts = value; }
    inline void SetDependencyCounts(DependencyCounts&& value) { m_dependencyCounts = std::move(value); }
    inline GetStepResult& WithDependencyCounts(const DependencyCounts& value) { SetDependencyCounts(value); return *this;}
    inline GetStepResult& WithDependencyCounts(DependencyCounts&& value) { SetDependencyCounts(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The required capabilities of the step.</p>
     */
    inline const StepRequiredCapabilities& GetRequiredCapabilities() const{ return m_requiredCapabilities; }
    inline void SetRequiredCapabilities(const StepRequiredCapabilities& value) { m_requiredCapabilities = value; }
    inline void SetRequiredCapabilities(StepRequiredCapabilities&& value) { m_requiredCapabilities = std::move(value); }
    inline GetStepResult& WithRequiredCapabilities(const StepRequiredCapabilities& value) { SetRequiredCapabilities(value); return *this;}
    inline GetStepResult& WithRequiredCapabilities(StepRequiredCapabilities&& value) { SetRequiredCapabilities(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of step parameters and the combination expression for the step.</p>
     */
    inline const ParameterSpace& GetParameterSpace() const{ return m_parameterSpace; }
    inline void SetParameterSpace(const ParameterSpace& value) { m_parameterSpace = value; }
    inline void SetParameterSpace(ParameterSpace&& value) { m_parameterSpace = std::move(value); }
    inline GetStepResult& WithParameterSpace(const ParameterSpace& value) { SetParameterSpace(value); return *this;}
    inline GetStepResult& WithParameterSpace(ParameterSpace&& value) { SetParameterSpace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the step.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetStepResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetStepResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetStepResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetStepResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetStepResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetStepResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_stepId;

    Aws::String m_name;

    StepLifecycleStatus m_lifecycleStatus;

    Aws::String m_lifecycleStatusMessage;

    TaskRunStatus m_taskRunStatus;

    Aws::Map<TaskRunStatus, int> m_taskRunStatusCounts;

    StepTargetTaskRunStatus m_targetTaskRunStatus;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::Utils::DateTime m_startedAt;

    Aws::Utils::DateTime m_endedAt;

    DependencyCounts m_dependencyCounts;

    StepRequiredCapabilities m_requiredCapabilities;

    ParameterSpace m_parameterSpace;

    Aws::String m_description;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
