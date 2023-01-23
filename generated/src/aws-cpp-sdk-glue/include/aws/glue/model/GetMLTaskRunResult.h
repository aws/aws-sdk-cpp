/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TaskStatusType.h>
#include <aws/glue/model/TaskRunProperties.h>
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
namespace Glue
{
namespace Model
{
  class GetMLTaskRunResult
  {
  public:
    AWS_GLUE_API GetMLTaskRunResult();
    AWS_GLUE_API GetMLTaskRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetMLTaskRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the task run.</p>
     */
    inline const Aws::String& GetTransformId() const{ return m_transformId; }

    /**
     * <p>The unique identifier of the task run.</p>
     */
    inline void SetTransformId(const Aws::String& value) { m_transformId = value; }

    /**
     * <p>The unique identifier of the task run.</p>
     */
    inline void SetTransformId(Aws::String&& value) { m_transformId = std::move(value); }

    /**
     * <p>The unique identifier of the task run.</p>
     */
    inline void SetTransformId(const char* value) { m_transformId.assign(value); }

    /**
     * <p>The unique identifier of the task run.</p>
     */
    inline GetMLTaskRunResult& WithTransformId(const Aws::String& value) { SetTransformId(value); return *this;}

    /**
     * <p>The unique identifier of the task run.</p>
     */
    inline GetMLTaskRunResult& WithTransformId(Aws::String&& value) { SetTransformId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the task run.</p>
     */
    inline GetMLTaskRunResult& WithTransformId(const char* value) { SetTransformId(value); return *this;}


    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline const Aws::String& GetTaskRunId() const{ return m_taskRunId; }

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline void SetTaskRunId(const Aws::String& value) { m_taskRunId = value; }

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline void SetTaskRunId(Aws::String&& value) { m_taskRunId = std::move(value); }

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline void SetTaskRunId(const char* value) { m_taskRunId.assign(value); }

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline GetMLTaskRunResult& WithTaskRunId(const Aws::String& value) { SetTaskRunId(value); return *this;}

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline GetMLTaskRunResult& WithTaskRunId(Aws::String&& value) { SetTaskRunId(std::move(value)); return *this;}

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline GetMLTaskRunResult& WithTaskRunId(const char* value) { SetTaskRunId(value); return *this;}


    /**
     * <p>The status for this task run.</p>
     */
    inline const TaskStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status for this task run.</p>
     */
    inline void SetStatus(const TaskStatusType& value) { m_status = value; }

    /**
     * <p>The status for this task run.</p>
     */
    inline void SetStatus(TaskStatusType&& value) { m_status = std::move(value); }

    /**
     * <p>The status for this task run.</p>
     */
    inline GetMLTaskRunResult& WithStatus(const TaskStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status for this task run.</p>
     */
    inline GetMLTaskRunResult& WithStatus(TaskStatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The names of the log groups that are associated with the task run.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The names of the log groups that are associated with the task run.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupName = value; }

    /**
     * <p>The names of the log groups that are associated with the task run.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupName = std::move(value); }

    /**
     * <p>The names of the log groups that are associated with the task run.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupName.assign(value); }

    /**
     * <p>The names of the log groups that are associated with the task run.</p>
     */
    inline GetMLTaskRunResult& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The names of the log groups that are associated with the task run.</p>
     */
    inline GetMLTaskRunResult& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The names of the log groups that are associated with the task run.</p>
     */
    inline GetMLTaskRunResult& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>The list of properties that are associated with the task run.</p>
     */
    inline const TaskRunProperties& GetProperties() const{ return m_properties; }

    /**
     * <p>The list of properties that are associated with the task run.</p>
     */
    inline void SetProperties(const TaskRunProperties& value) { m_properties = value; }

    /**
     * <p>The list of properties that are associated with the task run.</p>
     */
    inline void SetProperties(TaskRunProperties&& value) { m_properties = std::move(value); }

    /**
     * <p>The list of properties that are associated with the task run.</p>
     */
    inline GetMLTaskRunResult& WithProperties(const TaskRunProperties& value) { SetProperties(value); return *this;}

    /**
     * <p>The list of properties that are associated with the task run.</p>
     */
    inline GetMLTaskRunResult& WithProperties(TaskRunProperties&& value) { SetProperties(std::move(value)); return *this;}


    /**
     * <p>The error strings that are associated with the task run.</p>
     */
    inline const Aws::String& GetErrorString() const{ return m_errorString; }

    /**
     * <p>The error strings that are associated with the task run.</p>
     */
    inline void SetErrorString(const Aws::String& value) { m_errorString = value; }

    /**
     * <p>The error strings that are associated with the task run.</p>
     */
    inline void SetErrorString(Aws::String&& value) { m_errorString = std::move(value); }

    /**
     * <p>The error strings that are associated with the task run.</p>
     */
    inline void SetErrorString(const char* value) { m_errorString.assign(value); }

    /**
     * <p>The error strings that are associated with the task run.</p>
     */
    inline GetMLTaskRunResult& WithErrorString(const Aws::String& value) { SetErrorString(value); return *this;}

    /**
     * <p>The error strings that are associated with the task run.</p>
     */
    inline GetMLTaskRunResult& WithErrorString(Aws::String&& value) { SetErrorString(std::move(value)); return *this;}

    /**
     * <p>The error strings that are associated with the task run.</p>
     */
    inline GetMLTaskRunResult& WithErrorString(const char* value) { SetErrorString(value); return *this;}


    /**
     * <p>The date and time when this task run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const{ return m_startedOn; }

    /**
     * <p>The date and time when this task run started.</p>
     */
    inline void SetStartedOn(const Aws::Utils::DateTime& value) { m_startedOn = value; }

    /**
     * <p>The date and time when this task run started.</p>
     */
    inline void SetStartedOn(Aws::Utils::DateTime&& value) { m_startedOn = std::move(value); }

    /**
     * <p>The date and time when this task run started.</p>
     */
    inline GetMLTaskRunResult& WithStartedOn(const Aws::Utils::DateTime& value) { SetStartedOn(value); return *this;}

    /**
     * <p>The date and time when this task run started.</p>
     */
    inline GetMLTaskRunResult& WithStartedOn(Aws::Utils::DateTime&& value) { SetStartedOn(std::move(value)); return *this;}


    /**
     * <p>The date and time when this task run was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const{ return m_lastModifiedOn; }

    /**
     * <p>The date and time when this task run was last modified.</p>
     */
    inline void SetLastModifiedOn(const Aws::Utils::DateTime& value) { m_lastModifiedOn = value; }

    /**
     * <p>The date and time when this task run was last modified.</p>
     */
    inline void SetLastModifiedOn(Aws::Utils::DateTime&& value) { m_lastModifiedOn = std::move(value); }

    /**
     * <p>The date and time when this task run was last modified.</p>
     */
    inline GetMLTaskRunResult& WithLastModifiedOn(const Aws::Utils::DateTime& value) { SetLastModifiedOn(value); return *this;}

    /**
     * <p>The date and time when this task run was last modified.</p>
     */
    inline GetMLTaskRunResult& WithLastModifiedOn(Aws::Utils::DateTime&& value) { SetLastModifiedOn(std::move(value)); return *this;}


    /**
     * <p>The date and time when this task run was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const{ return m_completedOn; }

    /**
     * <p>The date and time when this task run was completed.</p>
     */
    inline void SetCompletedOn(const Aws::Utils::DateTime& value) { m_completedOn = value; }

    /**
     * <p>The date and time when this task run was completed.</p>
     */
    inline void SetCompletedOn(Aws::Utils::DateTime&& value) { m_completedOn = std::move(value); }

    /**
     * <p>The date and time when this task run was completed.</p>
     */
    inline GetMLTaskRunResult& WithCompletedOn(const Aws::Utils::DateTime& value) { SetCompletedOn(value); return *this;}

    /**
     * <p>The date and time when this task run was completed.</p>
     */
    inline GetMLTaskRunResult& WithCompletedOn(Aws::Utils::DateTime&& value) { SetCompletedOn(std::move(value)); return *this;}


    /**
     * <p>The amount of time (in seconds) that the task run consumed resources.</p>
     */
    inline int GetExecutionTime() const{ return m_executionTime; }

    /**
     * <p>The amount of time (in seconds) that the task run consumed resources.</p>
     */
    inline void SetExecutionTime(int value) { m_executionTime = value; }

    /**
     * <p>The amount of time (in seconds) that the task run consumed resources.</p>
     */
    inline GetMLTaskRunResult& WithExecutionTime(int value) { SetExecutionTime(value); return *this;}

  private:

    Aws::String m_transformId;

    Aws::String m_taskRunId;

    TaskStatusType m_status;

    Aws::String m_logGroupName;

    TaskRunProperties m_properties;

    Aws::String m_errorString;

    Aws::Utils::DateTime m_startedOn;

    Aws::Utils::DateTime m_lastModifiedOn;

    Aws::Utils::DateTime m_completedOn;

    int m_executionTime;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
