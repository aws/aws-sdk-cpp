/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AuditTaskStatus.h>
#include <aws/iot/model/AuditTaskType.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The audits that were performed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AuditTaskMetadata">AWS
   * API Reference</a></p>
   */
  class AuditTaskMetadata
  {
  public:
    AWS_IOT_API AuditTaskMetadata() = default;
    AWS_IOT_API AuditTaskMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AuditTaskMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of this audit.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    AuditTaskMetadata& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this audit. One of "IN_PROGRESS", "COMPLETED", "FAILED", or
     * "CANCELED".</p>
     */
    inline AuditTaskStatus GetTaskStatus() const { return m_taskStatus; }
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }
    inline void SetTaskStatus(AuditTaskStatus value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }
    inline AuditTaskMetadata& WithTaskStatus(AuditTaskStatus value) { SetTaskStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of this audit. One of "ON_DEMAND_AUDIT_TASK" or
     * "SCHEDULED_AUDIT_TASK".</p>
     */
    inline AuditTaskType GetTaskType() const { return m_taskType; }
    inline bool TaskTypeHasBeenSet() const { return m_taskTypeHasBeenSet; }
    inline void SetTaskType(AuditTaskType value) { m_taskTypeHasBeenSet = true; m_taskType = value; }
    inline AuditTaskMetadata& WithTaskType(AuditTaskType value) { SetTaskType(value); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    AuditTaskStatus m_taskStatus{AuditTaskStatus::NOT_SET};
    bool m_taskStatusHasBeenSet = false;

    AuditTaskType m_taskType{AuditTaskType::NOT_SET};
    bool m_taskTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
