/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/DependencyCounts.h>
#include <aws/deadline/model/StepLifecycleStatus.h>
#include <aws/deadline/model/ParameterSpace.h>
#include <aws/deadline/model/StepRequiredCapabilities.h>
#include <aws/deadline/model/StepTargetTaskRunStatus.h>
#include <aws/deadline/model/TaskRunStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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


    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline GetStepResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline GetStepResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline GetStepResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline GetStepResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline GetStepResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The number of dependencies in the step.</p>
     */
    inline const DependencyCounts& GetDependencyCounts() const{ return m_dependencyCounts; }

    /**
     * <p>The number of dependencies in the step.</p>
     */
    inline void SetDependencyCounts(const DependencyCounts& value) { m_dependencyCounts = value; }

    /**
     * <p>The number of dependencies in the step.</p>
     */
    inline void SetDependencyCounts(DependencyCounts&& value) { m_dependencyCounts = std::move(value); }

    /**
     * <p>The number of dependencies in the step.</p>
     */
    inline GetStepResult& WithDependencyCounts(const DependencyCounts& value) { SetDependencyCounts(value); return *this;}

    /**
     * <p>The number of dependencies in the step.</p>
     */
    inline GetStepResult& WithDependencyCounts(DependencyCounts&& value) { SetDependencyCounts(std::move(value)); return *this;}


    /**
     * <p>The description of the step.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the step.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the step.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the step.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the step.</p>
     */
    inline GetStepResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the step.</p>
     */
    inline GetStepResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the step.</p>
     */
    inline GetStepResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAt = value; }

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAt = std::move(value); }

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline GetStepResult& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline GetStepResult& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}


    /**
     * <p>The life cycle status of the step.</p>
     */
    inline const StepLifecycleStatus& GetLifecycleStatus() const{ return m_lifecycleStatus; }

    /**
     * <p>The life cycle status of the step.</p>
     */
    inline void SetLifecycleStatus(const StepLifecycleStatus& value) { m_lifecycleStatus = value; }

    /**
     * <p>The life cycle status of the step.</p>
     */
    inline void SetLifecycleStatus(StepLifecycleStatus&& value) { m_lifecycleStatus = std::move(value); }

    /**
     * <p>The life cycle status of the step.</p>
     */
    inline GetStepResult& WithLifecycleStatus(const StepLifecycleStatus& value) { SetLifecycleStatus(value); return *this;}

    /**
     * <p>The life cycle status of the step.</p>
     */
    inline GetStepResult& WithLifecycleStatus(StepLifecycleStatus&& value) { SetLifecycleStatus(std::move(value)); return *this;}


    /**
     * <p>A message that describes the lifecycle status of the step.</p>
     */
    inline const Aws::String& GetLifecycleStatusMessage() const{ return m_lifecycleStatusMessage; }

    /**
     * <p>A message that describes the lifecycle status of the step.</p>
     */
    inline void SetLifecycleStatusMessage(const Aws::String& value) { m_lifecycleStatusMessage = value; }

    /**
     * <p>A message that describes the lifecycle status of the step.</p>
     */
    inline void SetLifecycleStatusMessage(Aws::String&& value) { m_lifecycleStatusMessage = std::move(value); }

    /**
     * <p>A message that describes the lifecycle status of the step.</p>
     */
    inline void SetLifecycleStatusMessage(const char* value) { m_lifecycleStatusMessage.assign(value); }

    /**
     * <p>A message that describes the lifecycle status of the step.</p>
     */
    inline GetStepResult& WithLifecycleStatusMessage(const Aws::String& value) { SetLifecycleStatusMessage(value); return *this;}

    /**
     * <p>A message that describes the lifecycle status of the step.</p>
     */
    inline GetStepResult& WithLifecycleStatusMessage(Aws::String&& value) { SetLifecycleStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A message that describes the lifecycle status of the step.</p>
     */
    inline GetStepResult& WithLifecycleStatusMessage(const char* value) { SetLifecycleStatusMessage(value); return *this;}


    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the step.</p>
     */
    inline GetStepResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the step.</p>
     */
    inline GetStepResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the step.</p>
     */
    inline GetStepResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of step parameters and the combination expression for the step.</p>
     */
    inline const ParameterSpace& GetParameterSpace() const{ return m_parameterSpace; }

    /**
     * <p>A list of step parameters and the combination expression for the step.</p>
     */
    inline void SetParameterSpace(const ParameterSpace& value) { m_parameterSpace = value; }

    /**
     * <p>A list of step parameters and the combination expression for the step.</p>
     */
    inline void SetParameterSpace(ParameterSpace&& value) { m_parameterSpace = std::move(value); }

    /**
     * <p>A list of step parameters and the combination expression for the step.</p>
     */
    inline GetStepResult& WithParameterSpace(const ParameterSpace& value) { SetParameterSpace(value); return *this;}

    /**
     * <p>A list of step parameters and the combination expression for the step.</p>
     */
    inline GetStepResult& WithParameterSpace(ParameterSpace&& value) { SetParameterSpace(std::move(value)); return *this;}


    /**
     * <p>The required capabilities of the step.</p>
     */
    inline const StepRequiredCapabilities& GetRequiredCapabilities() const{ return m_requiredCapabilities; }

    /**
     * <p>The required capabilities of the step.</p>
     */
    inline void SetRequiredCapabilities(const StepRequiredCapabilities& value) { m_requiredCapabilities = value; }

    /**
     * <p>The required capabilities of the step.</p>
     */
    inline void SetRequiredCapabilities(StepRequiredCapabilities&& value) { m_requiredCapabilities = std::move(value); }

    /**
     * <p>The required capabilities of the step.</p>
     */
    inline GetStepResult& WithRequiredCapabilities(const StepRequiredCapabilities& value) { SetRequiredCapabilities(value); return *this;}

    /**
     * <p>The required capabilities of the step.</p>
     */
    inline GetStepResult& WithRequiredCapabilities(StepRequiredCapabilities&& value) { SetRequiredCapabilities(std::move(value)); return *this;}


    /**
     * <p>The date and time the resource started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline GetStepResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline GetStepResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The step ID.</p>
     */
    inline const Aws::String& GetStepId() const{ return m_stepId; }

    /**
     * <p>The step ID.</p>
     */
    inline void SetStepId(const Aws::String& value) { m_stepId = value; }

    /**
     * <p>The step ID.</p>
     */
    inline void SetStepId(Aws::String&& value) { m_stepId = std::move(value); }

    /**
     * <p>The step ID.</p>
     */
    inline void SetStepId(const char* value) { m_stepId.assign(value); }

    /**
     * <p>The step ID.</p>
     */
    inline GetStepResult& WithStepId(const Aws::String& value) { SetStepId(value); return *this;}

    /**
     * <p>The step ID.</p>
     */
    inline GetStepResult& WithStepId(Aws::String&& value) { SetStepId(std::move(value)); return *this;}

    /**
     * <p>The step ID.</p>
     */
    inline GetStepResult& WithStepId(const char* value) { SetStepId(value); return *this;}


    /**
     * <p>The task status with which the job started.</p>
     */
    inline const StepTargetTaskRunStatus& GetTargetTaskRunStatus() const{ return m_targetTaskRunStatus; }

    /**
     * <p>The task status with which the job started.</p>
     */
    inline void SetTargetTaskRunStatus(const StepTargetTaskRunStatus& value) { m_targetTaskRunStatus = value; }

    /**
     * <p>The task status with which the job started.</p>
     */
    inline void SetTargetTaskRunStatus(StepTargetTaskRunStatus&& value) { m_targetTaskRunStatus = std::move(value); }

    /**
     * <p>The task status with which the job started.</p>
     */
    inline GetStepResult& WithTargetTaskRunStatus(const StepTargetTaskRunStatus& value) { SetTargetTaskRunStatus(value); return *this;}

    /**
     * <p>The task status with which the job started.</p>
     */
    inline GetStepResult& WithTargetTaskRunStatus(StepTargetTaskRunStatus&& value) { SetTargetTaskRunStatus(std::move(value)); return *this;}


    /**
     * <p>The task run status for the job.</p>
     */
    inline const TaskRunStatus& GetTaskRunStatus() const{ return m_taskRunStatus; }

    /**
     * <p>The task run status for the job.</p>
     */
    inline void SetTaskRunStatus(const TaskRunStatus& value) { m_taskRunStatus = value; }

    /**
     * <p>The task run status for the job.</p>
     */
    inline void SetTaskRunStatus(TaskRunStatus&& value) { m_taskRunStatus = std::move(value); }

    /**
     * <p>The task run status for the job.</p>
     */
    inline GetStepResult& WithTaskRunStatus(const TaskRunStatus& value) { SetTaskRunStatus(value); return *this;}

    /**
     * <p>The task run status for the job.</p>
     */
    inline GetStepResult& WithTaskRunStatus(TaskRunStatus&& value) { SetTaskRunStatus(std::move(value)); return *this;}


    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline const Aws::Map<TaskRunStatus, int>& GetTaskRunStatusCounts() const{ return m_taskRunStatusCounts; }

    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline void SetTaskRunStatusCounts(const Aws::Map<TaskRunStatus, int>& value) { m_taskRunStatusCounts = value; }

    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline void SetTaskRunStatusCounts(Aws::Map<TaskRunStatus, int>&& value) { m_taskRunStatusCounts = std::move(value); }

    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline GetStepResult& WithTaskRunStatusCounts(const Aws::Map<TaskRunStatus, int>& value) { SetTaskRunStatusCounts(value); return *this;}

    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline GetStepResult& WithTaskRunStatusCounts(Aws::Map<TaskRunStatus, int>&& value) { SetTaskRunStatusCounts(std::move(value)); return *this;}

    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline GetStepResult& AddTaskRunStatusCounts(const TaskRunStatus& key, int value) { m_taskRunStatusCounts.emplace(key, value); return *this; }

    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline GetStepResult& AddTaskRunStatusCounts(TaskRunStatus&& key, int value) { m_taskRunStatusCounts.emplace(std::move(key), value); return *this; }


    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline GetStepResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline GetStepResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline GetStepResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline GetStepResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline GetStepResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetStepResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetStepResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetStepResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    DependencyCounts m_dependencyCounts;

    Aws::String m_description;

    Aws::Utils::DateTime m_endedAt;

    StepLifecycleStatus m_lifecycleStatus;

    Aws::String m_lifecycleStatusMessage;

    Aws::String m_name;

    ParameterSpace m_parameterSpace;

    StepRequiredCapabilities m_requiredCapabilities;

    Aws::Utils::DateTime m_startedAt;

    Aws::String m_stepId;

    StepTargetTaskRunStatus m_targetTaskRunStatus;

    TaskRunStatus m_taskRunStatus;

    Aws::Map<TaskRunStatus, int> m_taskRunStatusCounts;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
