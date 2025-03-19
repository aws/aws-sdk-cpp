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
    AWS_DATAPIPELINE_API TaskObject() = default;
    AWS_DATAPIPELINE_API TaskObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API TaskObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An internal identifier for the task. This ID is passed to the
     * <a>SetTaskStatus</a> and <a>ReportTaskProgress</a> actions.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    TaskObject& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the pipeline that provided the task.</p>
     */
    inline const Aws::String& GetPipelineId() const { return m_pipelineId; }
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }
    template<typename PipelineIdT = Aws::String>
    void SetPipelineId(PipelineIdT&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::forward<PipelineIdT>(value); }
    template<typename PipelineIdT = Aws::String>
    TaskObject& WithPipelineId(PipelineIdT&& value) { SetPipelineId(std::forward<PipelineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the pipeline task attempt object. AWS Data Pipeline uses this value
     * to track how many times a task is attempted.</p>
     */
    inline const Aws::String& GetAttemptId() const { return m_attemptId; }
    inline bool AttemptIdHasBeenSet() const { return m_attemptIdHasBeenSet; }
    template<typename AttemptIdT = Aws::String>
    void SetAttemptId(AttemptIdT&& value) { m_attemptIdHasBeenSet = true; m_attemptId = std::forward<AttemptIdT>(value); }
    template<typename AttemptIdT = Aws::String>
    TaskObject& WithAttemptId(AttemptIdT&& value) { SetAttemptId(std::forward<AttemptIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connection information for the location where the task runner will publish
     * the output of the task.</p>
     */
    inline const Aws::Map<Aws::String, PipelineObject>& GetObjects() const { return m_objects; }
    inline bool ObjectsHasBeenSet() const { return m_objectsHasBeenSet; }
    template<typename ObjectsT = Aws::Map<Aws::String, PipelineObject>>
    void SetObjects(ObjectsT&& value) { m_objectsHasBeenSet = true; m_objects = std::forward<ObjectsT>(value); }
    template<typename ObjectsT = Aws::Map<Aws::String, PipelineObject>>
    TaskObject& WithObjects(ObjectsT&& value) { SetObjects(std::forward<ObjectsT>(value)); return *this;}
    template<typename ObjectsKeyT = Aws::String, typename ObjectsValueT = PipelineObject>
    TaskObject& AddObjects(ObjectsKeyT&& key, ObjectsValueT&& value) {
      m_objectsHasBeenSet = true; m_objects.emplace(std::forward<ObjectsKeyT>(key), std::forward<ObjectsValueT>(value)); return *this;
    }
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
