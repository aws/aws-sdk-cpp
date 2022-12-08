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
    AWS_IOT_API AuditMitigationActionsTaskMetadata();
    AWS_IOT_API AuditMitigationActionsTaskMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AuditMitigationActionsTaskMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The unique identifier for the task.</p>
     */
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }

    /**
     * <p>The unique identifier for the task.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>The unique identifier for the task.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p>The unique identifier for the task.</p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p>The unique identifier for the task.</p>
     */
    inline AuditMitigationActionsTaskMetadata& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The unique identifier for the task.</p>
     */
    inline AuditMitigationActionsTaskMetadata& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the task.</p>
     */
    inline AuditMitigationActionsTaskMetadata& WithTaskId(const char* value) { SetTaskId(value); return *this;}


    /**
     * <p>The time at which the audit mitigation actions task was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time at which the audit mitigation actions task was started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time at which the audit mitigation actions task was started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time at which the audit mitigation actions task was started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time at which the audit mitigation actions task was started.</p>
     */
    inline AuditMitigationActionsTaskMetadata& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time at which the audit mitigation actions task was started.</p>
     */
    inline AuditMitigationActionsTaskMetadata& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The current state of the audit mitigation actions task.</p>
     */
    inline const AuditMitigationActionsTaskStatus& GetTaskStatus() const{ return m_taskStatus; }

    /**
     * <p>The current state of the audit mitigation actions task.</p>
     */
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }

    /**
     * <p>The current state of the audit mitigation actions task.</p>
     */
    inline void SetTaskStatus(const AuditMitigationActionsTaskStatus& value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }

    /**
     * <p>The current state of the audit mitigation actions task.</p>
     */
    inline void SetTaskStatus(AuditMitigationActionsTaskStatus&& value) { m_taskStatusHasBeenSet = true; m_taskStatus = std::move(value); }

    /**
     * <p>The current state of the audit mitigation actions task.</p>
     */
    inline AuditMitigationActionsTaskMetadata& WithTaskStatus(const AuditMitigationActionsTaskStatus& value) { SetTaskStatus(value); return *this;}

    /**
     * <p>The current state of the audit mitigation actions task.</p>
     */
    inline AuditMitigationActionsTaskMetadata& WithTaskStatus(AuditMitigationActionsTaskStatus&& value) { SetTaskStatus(std::move(value)); return *this;}

  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    AuditMitigationActionsTaskStatus m_taskStatus;
    bool m_taskStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
