/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/datapipeline/model/PipelineObject.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains information about a pipeline task that is assigned to a task
   * runner.</p>
   */
  class AWS_DATAPIPELINE_API TaskObject
  {
  public:
    TaskObject();
    TaskObject(const Aws::Utils::Json::JsonValue& jsonValue);
    TaskObject& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>An internal identifier for the task. This ID is passed to the
     * <a>SetTaskStatus</a> and <a>ReportTaskProgress</a> actions.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>An internal identifier for the task. This ID is passed to the
     * <a>SetTaskStatus</a> and <a>ReportTaskProgress</a> actions.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>An internal identifier for the task. This ID is passed to the
     * <a>SetTaskStatus</a> and <a>ReportTaskProgress</a> actions.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>An internal identifier for the task. This ID is passed to the
     * <a>SetTaskStatus</a> and <a>ReportTaskProgress</a> actions.</p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p>An internal identifier for the task. This ID is passed to the
     * <a>SetTaskStatus</a> and <a>ReportTaskProgress</a> actions.</p>
     */
    inline TaskObject& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>An internal identifier for the task. This ID is passed to the
     * <a>SetTaskStatus</a> and <a>ReportTaskProgress</a> actions.</p>
     */
    inline TaskObject& WithTaskId(Aws::String&& value) { SetTaskId(value); return *this;}

    /**
     * <p>An internal identifier for the task. This ID is passed to the
     * <a>SetTaskStatus</a> and <a>ReportTaskProgress</a> actions.</p>
     */
    inline TaskObject& WithTaskId(const char* value) { SetTaskId(value); return *this;}

    /**
     * <p>The ID of the pipeline that provided the task.</p>
     */
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }

    /**
     * <p>The ID of the pipeline that provided the task.</p>
     */
    inline void SetPipelineId(const Aws::String& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }

    /**
     * <p>The ID of the pipeline that provided the task.</p>
     */
    inline void SetPipelineId(Aws::String&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }

    /**
     * <p>The ID of the pipeline that provided the task.</p>
     */
    inline void SetPipelineId(const char* value) { m_pipelineIdHasBeenSet = true; m_pipelineId.assign(value); }

    /**
     * <p>The ID of the pipeline that provided the task.</p>
     */
    inline TaskObject& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}

    /**
     * <p>The ID of the pipeline that provided the task.</p>
     */
    inline TaskObject& WithPipelineId(Aws::String&& value) { SetPipelineId(value); return *this;}

    /**
     * <p>The ID of the pipeline that provided the task.</p>
     */
    inline TaskObject& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}

    /**
     * <p>The ID of the pipeline task attempt object. AWS Data Pipeline uses this value
     * to track how many times a task is attempted.</p>
     */
    inline const Aws::String& GetAttemptId() const{ return m_attemptId; }

    /**
     * <p>The ID of the pipeline task attempt object. AWS Data Pipeline uses this value
     * to track how many times a task is attempted.</p>
     */
    inline void SetAttemptId(const Aws::String& value) { m_attemptIdHasBeenSet = true; m_attemptId = value; }

    /**
     * <p>The ID of the pipeline task attempt object. AWS Data Pipeline uses this value
     * to track how many times a task is attempted.</p>
     */
    inline void SetAttemptId(Aws::String&& value) { m_attemptIdHasBeenSet = true; m_attemptId = value; }

    /**
     * <p>The ID of the pipeline task attempt object. AWS Data Pipeline uses this value
     * to track how many times a task is attempted.</p>
     */
    inline void SetAttemptId(const char* value) { m_attemptIdHasBeenSet = true; m_attemptId.assign(value); }

    /**
     * <p>The ID of the pipeline task attempt object. AWS Data Pipeline uses this value
     * to track how many times a task is attempted.</p>
     */
    inline TaskObject& WithAttemptId(const Aws::String& value) { SetAttemptId(value); return *this;}

    /**
     * <p>The ID of the pipeline task attempt object. AWS Data Pipeline uses this value
     * to track how many times a task is attempted.</p>
     */
    inline TaskObject& WithAttemptId(Aws::String&& value) { SetAttemptId(value); return *this;}

    /**
     * <p>The ID of the pipeline task attempt object. AWS Data Pipeline uses this value
     * to track how many times a task is attempted.</p>
     */
    inline TaskObject& WithAttemptId(const char* value) { SetAttemptId(value); return *this;}

    /**
     * <p>Connection information for the location where the task runner will publish
     * the output of the task.</p>
     */
    inline const Aws::Map<Aws::String, PipelineObject>& GetObjects() const{ return m_objects; }

    /**
     * <p>Connection information for the location where the task runner will publish
     * the output of the task.</p>
     */
    inline void SetObjects(const Aws::Map<Aws::String, PipelineObject>& value) { m_objectsHasBeenSet = true; m_objects = value; }

    /**
     * <p>Connection information for the location where the task runner will publish
     * the output of the task.</p>
     */
    inline void SetObjects(Aws::Map<Aws::String, PipelineObject>&& value) { m_objectsHasBeenSet = true; m_objects = value; }

    /**
     * <p>Connection information for the location where the task runner will publish
     * the output of the task.</p>
     */
    inline TaskObject& WithObjects(const Aws::Map<Aws::String, PipelineObject>& value) { SetObjects(value); return *this;}

    /**
     * <p>Connection information for the location where the task runner will publish
     * the output of the task.</p>
     */
    inline TaskObject& WithObjects(Aws::Map<Aws::String, PipelineObject>&& value) { SetObjects(value); return *this;}

    /**
     * <p>Connection information for the location where the task runner will publish
     * the output of the task.</p>
     */
    inline TaskObject& AddObjects(const Aws::String& key, const PipelineObject& value) { m_objectsHasBeenSet = true; m_objects[key] = value; return *this; }

    /**
     * <p>Connection information for the location where the task runner will publish
     * the output of the task.</p>
     */
    inline TaskObject& AddObjects(Aws::String&& key, const PipelineObject& value) { m_objectsHasBeenSet = true; m_objects[key] = value; return *this; }

    /**
     * <p>Connection information for the location where the task runner will publish
     * the output of the task.</p>
     */
    inline TaskObject& AddObjects(const Aws::String& key, PipelineObject&& value) { m_objectsHasBeenSet = true; m_objects[key] = value; return *this; }

    /**
     * <p>Connection information for the location where the task runner will publish
     * the output of the task.</p>
     */
    inline TaskObject& AddObjects(Aws::String&& key, PipelineObject&& value) { m_objectsHasBeenSet = true; m_objects[key] = value; return *this; }

    /**
     * <p>Connection information for the location where the task runner will publish
     * the output of the task.</p>
     */
    inline TaskObject& AddObjects(const char* key, PipelineObject&& value) { m_objectsHasBeenSet = true; m_objects[key] = value; return *this; }

    /**
     * <p>Connection information for the location where the task runner will publish
     * the output of the task.</p>
     */
    inline TaskObject& AddObjects(const char* key, const PipelineObject& value) { m_objectsHasBeenSet = true; m_objects[key] = value; return *this; }

  private:
    Aws::String m_taskId;
    bool m_taskIdHasBeenSet;
    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet;
    Aws::String m_attemptId;
    bool m_attemptIdHasBeenSet;
    Aws::Map<Aws::String, PipelineObject> m_objects;
    bool m_objectsHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
