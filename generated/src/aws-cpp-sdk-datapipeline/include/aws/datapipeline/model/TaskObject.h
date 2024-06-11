/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/datapipeline/model/PipelineObject.h>
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
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains information about a pipeline task that is assigned to a task
   * runner.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/TaskObject">AWS
   * API Reference</a></p>
   */
  class TaskObject
  {
  public:
    AWS_DATAPIPELINE_API TaskObject();
    AWS_DATAPIPELINE_API TaskObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API TaskObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An internal identifier for the task. This ID is passed to the
     * <a>SetTaskStatus</a> and <a>ReportTaskProgress</a> actions.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }
    inline TaskObject& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline TaskObject& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline TaskObject& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the pipeline that provided the task.</p>
     */
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }
    inline void SetPipelineId(const Aws::String& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }
    inline void SetPipelineId(Aws::String&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::move(value); }
    inline void SetPipelineId(const char* value) { m_pipelineIdHasBeenSet = true; m_pipelineId.assign(value); }
    inline TaskObject& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}
    inline TaskObject& WithPipelineId(Aws::String&& value) { SetPipelineId(std::move(value)); return *this;}
    inline TaskObject& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the pipeline task attempt object. AWS Data Pipeline uses this value
     * to track how many times a task is attempted.</p>
     */
    inline const Aws::String& GetAttemptId() const{ return m_attemptId; }
    inline bool AttemptIdHasBeenSet() const { return m_attemptIdHasBeenSet; }
    inline void SetAttemptId(const Aws::String& value) { m_attemptIdHasBeenSet = true; m_attemptId = value; }
    inline void SetAttemptId(Aws::String&& value) { m_attemptIdHasBeenSet = true; m_attemptId = std::move(value); }
    inline void SetAttemptId(const char* value) { m_attemptIdHasBeenSet = true; m_attemptId.assign(value); }
    inline TaskObject& WithAttemptId(const Aws::String& value) { SetAttemptId(value); return *this;}
    inline TaskObject& WithAttemptId(Aws::String&& value) { SetAttemptId(std::move(value)); return *this;}
    inline TaskObject& WithAttemptId(const char* value) { SetAttemptId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connection information for the location where the task runner will publish
     * the output of the task.</p>
     */
    inline const Aws::Map<Aws::String, PipelineObject>& GetObjects() const{ return m_objects; }
    inline bool ObjectsHasBeenSet() const { return m_objectsHasBeenSet; }
    inline void SetObjects(const Aws::Map<Aws::String, PipelineObject>& value) { m_objectsHasBeenSet = true; m_objects = value; }
    inline void SetObjects(Aws::Map<Aws::String, PipelineObject>&& value) { m_objectsHasBeenSet = true; m_objects = std::move(value); }
    inline TaskObject& WithObjects(const Aws::Map<Aws::String, PipelineObject>& value) { SetObjects(value); return *this;}
    inline TaskObject& WithObjects(Aws::Map<Aws::String, PipelineObject>&& value) { SetObjects(std::move(value)); return *this;}
    inline TaskObject& AddObjects(const Aws::String& key, const PipelineObject& value) { m_objectsHasBeenSet = true; m_objects.emplace(key, value); return *this; }
    inline TaskObject& AddObjects(Aws::String&& key, const PipelineObject& value) { m_objectsHasBeenSet = true; m_objects.emplace(std::move(key), value); return *this; }
    inline TaskObject& AddObjects(const Aws::String& key, PipelineObject&& value) { m_objectsHasBeenSet = true; m_objects.emplace(key, std::move(value)); return *this; }
    inline TaskObject& AddObjects(Aws::String&& key, PipelineObject&& value) { m_objectsHasBeenSet = true; m_objects.emplace(std::move(key), std::move(value)); return *this; }
    inline TaskObject& AddObjects(const char* key, PipelineObject&& value) { m_objectsHasBeenSet = true; m_objects.emplace(key, std::move(value)); return *this; }
    inline TaskObject& AddObjects(const char* key, const PipelineObject& value) { m_objectsHasBeenSet = true; m_objects.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet = false;

    Aws::String m_attemptId;
    bool m_attemptIdHasBeenSet = false;

    Aws::Map<Aws::String, PipelineObject> m_objects;
    bool m_objectsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
