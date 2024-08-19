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
    AWS_DEADLINE_API GetTaskResult();
    AWS_DEADLINE_API GetTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The task ID.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline void SetTaskId(const Aws::String& value) { m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskId.assign(value); }
    inline GetTaskResult& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline GetTaskResult& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline GetTaskResult& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetTaskResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetTaskResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetTaskResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetTaskResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetTaskResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run status for the task.</p>
     */
    inline const TaskRunStatus& GetRunStatus() const{ return m_runStatus; }
    inline void SetRunStatus(const TaskRunStatus& value) { m_runStatus = value; }
    inline void SetRunStatus(TaskRunStatus&& value) { m_runStatus = std::move(value); }
    inline GetTaskResult& WithRunStatus(const TaskRunStatus& value) { SetRunStatus(value); return *this;}
    inline GetTaskResult& WithRunStatus(TaskRunStatus&& value) { SetRunStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run status with which to start the task.</p>
     */
    inline const TaskTargetRunStatus& GetTargetRunStatus() const{ return m_targetRunStatus; }
    inline void SetTargetRunStatus(const TaskTargetRunStatus& value) { m_targetRunStatus = value; }
    inline void SetTargetRunStatus(TaskTargetRunStatus&& value) { m_targetRunStatus = std::move(value); }
    inline GetTaskResult& WithTargetRunStatus(const TaskTargetRunStatus& value) { SetTargetRunStatus(value); return *this;}
    inline GetTaskResult& WithTargetRunStatus(TaskTargetRunStatus&& value) { SetTargetRunStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times that the task failed and was retried.</p>
     */
    inline int GetFailureRetryCount() const{ return m_failureRetryCount; }
    inline void SetFailureRetryCount(int value) { m_failureRetryCount = value; }
    inline GetTaskResult& WithFailureRetryCount(int value) { SetFailureRetryCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the task.</p>
     */
    inline const Aws::Map<Aws::String, TaskParameterValue>& GetParameters() const{ return m_parameters; }
    inline void SetParameters(const Aws::Map<Aws::String, TaskParameterValue>& value) { m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, TaskParameterValue>&& value) { m_parameters = std::move(value); }
    inline GetTaskResult& WithParameters(const Aws::Map<Aws::String, TaskParameterValue>& value) { SetParameters(value); return *this;}
    inline GetTaskResult& WithParameters(Aws::Map<Aws::String, TaskParameterValue>&& value) { SetParameters(std::move(value)); return *this;}
    inline GetTaskResult& AddParameters(const Aws::String& key, const TaskParameterValue& value) { m_parameters.emplace(key, value); return *this; }
    inline GetTaskResult& AddParameters(Aws::String&& key, const TaskParameterValue& value) { m_parameters.emplace(std::move(key), value); return *this; }
    inline GetTaskResult& AddParameters(const Aws::String& key, TaskParameterValue&& value) { m_parameters.emplace(key, std::move(value)); return *this; }
    inline GetTaskResult& AddParameters(Aws::String&& key, TaskParameterValue&& value) { m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline GetTaskResult& AddParameters(const char* key, TaskParameterValue&& value) { m_parameters.emplace(key, std::move(value)); return *this; }
    inline GetTaskResult& AddParameters(const char* key, const TaskParameterValue& value) { m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time the resource started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }
    inline GetTaskResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline GetTaskResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAt = value; }
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAt = std::move(value); }
    inline GetTaskResult& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}
    inline GetTaskResult& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetTaskResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetTaskResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline GetTaskResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline GetTaskResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline GetTaskResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest session ID for the task.</p>
     */
    inline const Aws::String& GetLatestSessionActionId() const{ return m_latestSessionActionId; }
    inline void SetLatestSessionActionId(const Aws::String& value) { m_latestSessionActionId = value; }
    inline void SetLatestSessionActionId(Aws::String&& value) { m_latestSessionActionId = std::move(value); }
    inline void SetLatestSessionActionId(const char* value) { m_latestSessionActionId.assign(value); }
    inline GetTaskResult& WithLatestSessionActionId(const Aws::String& value) { SetLatestSessionActionId(value); return *this;}
    inline GetTaskResult& WithLatestSessionActionId(Aws::String&& value) { SetLatestSessionActionId(std::move(value)); return *this;}
    inline GetTaskResult& WithLatestSessionActionId(const char* value) { SetLatestSessionActionId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_taskId;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    TaskRunStatus m_runStatus;

    TaskTargetRunStatus m_targetRunStatus;

    int m_failureRetryCount;

    Aws::Map<Aws::String, TaskParameterValue> m_parameters;

    Aws::Utils::DateTime m_startedAt;

    Aws::Utils::DateTime m_endedAt;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_latestSessionActionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
