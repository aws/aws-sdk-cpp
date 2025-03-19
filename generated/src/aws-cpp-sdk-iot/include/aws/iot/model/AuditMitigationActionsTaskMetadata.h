/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/AuditMitigationActionsTaskStatus.h>
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
   * <p>Information about an audit mitigation actions task that is returned by
   * <code>ListAuditMitigationActionsTasks</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AuditMitigationActionsTaskMetadata">AWS
   * API Reference</a></p>
   */
  class AuditMitigationActionsTaskMetadata
  {
  public:
    AWS_IOT_API AuditMitigationActionsTaskMetadata() = default;
    AWS_IOT_API AuditMitigationActionsTaskMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AuditMitigationActionsTaskMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the task.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    AuditMitigationActionsTaskMetadata& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the audit mitigation actions task was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    AuditMitigationActionsTaskMetadata& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the audit mitigation actions task.</p>
     */
    inline AuditMitigationActionsTaskStatus GetTaskStatus() const { return m_taskStatus; }
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }
    inline void SetTaskStatus(AuditMitigationActionsTaskStatus value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }
    inline AuditMitigationActionsTaskMetadata& WithTaskStatus(AuditMitigationActionsTaskStatus value) { SetTaskStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    AuditMitigationActionsTaskStatus m_taskStatus{AuditMitigationActionsTaskStatus::NOT_SET};
    bool m_taskStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
