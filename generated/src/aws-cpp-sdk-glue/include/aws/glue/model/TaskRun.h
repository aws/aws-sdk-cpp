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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>The sampling parameters that are associated with the machine learning
   * transform.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TaskRun">AWS API
   * Reference</a></p>
   */
  class TaskRun
  {
  public:
    AWS_GLUE_API TaskRun();
    AWS_GLUE_API TaskRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TaskRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the transform.</p>
     */
    inline const Aws::String& GetTransformId() const{ return m_transformId; }

    /**
     * <p>The unique identifier for the transform.</p>
     */
    inline bool TransformIdHasBeenSet() const { return m_transformIdHasBeenSet; }

    /**
     * <p>The unique identifier for the transform.</p>
     */
    inline void SetTransformId(const Aws::String& value) { m_transformIdHasBeenSet = true; m_transformId = value; }

    /**
     * <p>The unique identifier for the transform.</p>
     */
    inline void SetTransformId(Aws::String&& value) { m_transformIdHasBeenSet = true; m_transformId = std::move(value); }

    /**
     * <p>The unique identifier for the transform.</p>
     */
    inline void SetTransformId(const char* value) { m_transformIdHasBeenSet = true; m_transformId.assign(value); }

    /**
     * <p>The unique identifier for the transform.</p>
     */
    inline TaskRun& WithTransformId(const Aws::String& value) { SetTransformId(value); return *this;}

    /**
     * <p>The unique identifier for the transform.</p>
     */
    inline TaskRun& WithTransformId(Aws::String&& value) { SetTransformId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the transform.</p>
     */
    inline TaskRun& WithTransformId(const char* value) { SetTransformId(value); return *this;}


    /**
     * <p>The unique identifier for this task run.</p>
     */
    inline const Aws::String& GetTaskRunId() const{ return m_taskRunId; }

    /**
     * <p>The unique identifier for this task run.</p>
     */
    inline bool TaskRunIdHasBeenSet() const { return m_taskRunIdHasBeenSet; }

    /**
     * <p>The unique identifier for this task run.</p>
     */
    inline void SetTaskRunId(const Aws::String& value) { m_taskRunIdHasBeenSet = true; m_taskRunId = value; }

    /**
     * <p>The unique identifier for this task run.</p>
     */
    inline void SetTaskRunId(Aws::String&& value) { m_taskRunIdHasBeenSet = true; m_taskRunId = std::move(value); }

    /**
     * <p>The unique identifier for this task run.</p>
     */
    inline void SetTaskRunId(const char* value) { m_taskRunIdHasBeenSet = true; m_taskRunId.assign(value); }

    /**
     * <p>The unique identifier for this task run.</p>
     */
    inline TaskRun& WithTaskRunId(const Aws::String& value) { SetTaskRunId(value); return *this;}

    /**
     * <p>The unique identifier for this task run.</p>
     */
    inline TaskRun& WithTaskRunId(Aws::String&& value) { SetTaskRunId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for this task run.</p>
     */
    inline TaskRun& WithTaskRunId(const char* value) { SetTaskRunId(value); return *this;}


    /**
     * <p>The current status of the requested task run.</p>
     */
    inline const TaskStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the requested task run.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the requested task run.</p>
     */
    inline void SetStatus(const TaskStatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the requested task run.</p>
     */
    inline void SetStatus(TaskStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the requested task run.</p>
     */
    inline TaskRun& WithStatus(const TaskStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the requested task run.</p>
     */
    inline TaskRun& WithStatus(TaskStatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The names of the log group for secure logging, associated with this task
     * run.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The names of the log group for secure logging, associated with this task
     * run.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The names of the log group for secure logging, associated with this task
     * run.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The names of the log group for secure logging, associated with this task
     * run.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The names of the log group for secure logging, associated with this task
     * run.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The names of the log group for secure logging, associated with this task
     * run.</p>
     */
    inline TaskRun& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The names of the log group for secure logging, associated with this task
     * run.</p>
     */
    inline TaskRun& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The names of the log group for secure logging, associated with this task
     * run.</p>
     */
    inline TaskRun& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>Specifies configuration properties associated with this task run.</p>
     */
    inline const TaskRunProperties& GetProperties() const{ return m_properties; }

    /**
     * <p>Specifies configuration properties associated with this task run.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>Specifies configuration properties associated with this task run.</p>
     */
    inline void SetProperties(const TaskRunProperties& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>Specifies configuration properties associated with this task run.</p>
     */
    inline void SetProperties(TaskRunProperties&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>Specifies configuration properties associated with this task run.</p>
     */
    inline TaskRun& WithProperties(const TaskRunProperties& value) { SetProperties(value); return *this;}

    /**
     * <p>Specifies configuration properties associated with this task run.</p>
     */
    inline TaskRun& WithProperties(TaskRunProperties&& value) { SetProperties(std::move(value)); return *this;}


    /**
     * <p>The list of error strings associated with this task run.</p>
     */
    inline const Aws::String& GetErrorString() const{ return m_errorString; }

    /**
     * <p>The list of error strings associated with this task run.</p>
     */
    inline bool ErrorStringHasBeenSet() const { return m_errorStringHasBeenSet; }

    /**
     * <p>The list of error strings associated with this task run.</p>
     */
    inline void SetErrorString(const Aws::String& value) { m_errorStringHasBeenSet = true; m_errorString = value; }

    /**
     * <p>The list of error strings associated with this task run.</p>
     */
    inline void SetErrorString(Aws::String&& value) { m_errorStringHasBeenSet = true; m_errorString = std::move(value); }

    /**
     * <p>The list of error strings associated with this task run.</p>
     */
    inline void SetErrorString(const char* value) { m_errorStringHasBeenSet = true; m_errorString.assign(value); }

    /**
     * <p>The list of error strings associated with this task run.</p>
     */
    inline TaskRun& WithErrorString(const Aws::String& value) { SetErrorString(value); return *this;}

    /**
     * <p>The list of error strings associated with this task run.</p>
     */
    inline TaskRun& WithErrorString(Aws::String&& value) { SetErrorString(std::move(value)); return *this;}

    /**
     * <p>The list of error strings associated with this task run.</p>
     */
    inline TaskRun& WithErrorString(const char* value) { SetErrorString(value); return *this;}


    /**
     * <p>The date and time that this task run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const{ return m_startedOn; }

    /**
     * <p>The date and time that this task run started.</p>
     */
    inline bool StartedOnHasBeenSet() const { return m_startedOnHasBeenSet; }

    /**
     * <p>The date and time that this task run started.</p>
     */
    inline void SetStartedOn(const Aws::Utils::DateTime& value) { m_startedOnHasBeenSet = true; m_startedOn = value; }

    /**
     * <p>The date and time that this task run started.</p>
     */
    inline void SetStartedOn(Aws::Utils::DateTime&& value) { m_startedOnHasBeenSet = true; m_startedOn = std::move(value); }

    /**
     * <p>The date and time that this task run started.</p>
     */
    inline TaskRun& WithStartedOn(const Aws::Utils::DateTime& value) { SetStartedOn(value); return *this;}

    /**
     * <p>The date and time that this task run started.</p>
     */
    inline TaskRun& WithStartedOn(Aws::Utils::DateTime&& value) { SetStartedOn(std::move(value)); return *this;}


    /**
     * <p>The last point in time that the requested task run was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const{ return m_lastModifiedOn; }

    /**
     * <p>The last point in time that the requested task run was updated.</p>
     */
    inline bool LastModifiedOnHasBeenSet() const { return m_lastModifiedOnHasBeenSet; }

    /**
     * <p>The last point in time that the requested task run was updated.</p>
     */
    inline void SetLastModifiedOn(const Aws::Utils::DateTime& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = value; }

    /**
     * <p>The last point in time that the requested task run was updated.</p>
     */
    inline void SetLastModifiedOn(Aws::Utils::DateTime&& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = std::move(value); }

    /**
     * <p>The last point in time that the requested task run was updated.</p>
     */
    inline TaskRun& WithLastModifiedOn(const Aws::Utils::DateTime& value) { SetLastModifiedOn(value); return *this;}

    /**
     * <p>The last point in time that the requested task run was updated.</p>
     */
    inline TaskRun& WithLastModifiedOn(Aws::Utils::DateTime&& value) { SetLastModifiedOn(std::move(value)); return *this;}


    /**
     * <p>The last point in time that the requested task run was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const{ return m_completedOn; }

    /**
     * <p>The last point in time that the requested task run was completed.</p>
     */
    inline bool CompletedOnHasBeenSet() const { return m_completedOnHasBeenSet; }

    /**
     * <p>The last point in time that the requested task run was completed.</p>
     */
    inline void SetCompletedOn(const Aws::Utils::DateTime& value) { m_completedOnHasBeenSet = true; m_completedOn = value; }

    /**
     * <p>The last point in time that the requested task run was completed.</p>
     */
    inline void SetCompletedOn(Aws::Utils::DateTime&& value) { m_completedOnHasBeenSet = true; m_completedOn = std::move(value); }

    /**
     * <p>The last point in time that the requested task run was completed.</p>
     */
    inline TaskRun& WithCompletedOn(const Aws::Utils::DateTime& value) { SetCompletedOn(value); return *this;}

    /**
     * <p>The last point in time that the requested task run was completed.</p>
     */
    inline TaskRun& WithCompletedOn(Aws::Utils::DateTime&& value) { SetCompletedOn(std::move(value)); return *this;}


    /**
     * <p>The amount of time (in seconds) that the task run consumed resources.</p>
     */
    inline int GetExecutionTime() const{ return m_executionTime; }

    /**
     * <p>The amount of time (in seconds) that the task run consumed resources.</p>
     */
    inline bool ExecutionTimeHasBeenSet() const { return m_executionTimeHasBeenSet; }

    /**
     * <p>The amount of time (in seconds) that the task run consumed resources.</p>
     */
    inline void SetExecutionTime(int value) { m_executionTimeHasBeenSet = true; m_executionTime = value; }

    /**
     * <p>The amount of time (in seconds) that the task run consumed resources.</p>
     */
    inline TaskRun& WithExecutionTime(int value) { SetExecutionTime(value); return *this;}

  private:

    Aws::String m_transformId;
    bool m_transformIdHasBeenSet = false;

    Aws::String m_taskRunId;
    bool m_taskRunIdHasBeenSet = false;

    TaskStatusType m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    TaskRunProperties m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::String m_errorString;
    bool m_errorStringHasBeenSet = false;

    Aws::Utils::DateTime m_startedOn;
    bool m_startedOnHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedOn;
    bool m_lastModifiedOnHasBeenSet = false;

    Aws::Utils::DateTime m_completedOn;
    bool m_completedOnHasBeenSet = false;

    int m_executionTime;
    bool m_executionTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
