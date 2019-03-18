/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_IOT_API AuditTaskMetadata
  {
  public:
    AuditTaskMetadata();
    AuditTaskMetadata(Aws::Utils::Json::JsonView jsonValue);
    AuditTaskMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of this audit.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The ID of this audit.</p>
     */
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }

    /**
     * <p>The ID of this audit.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>The ID of this audit.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p>The ID of this audit.</p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p>The ID of this audit.</p>
     */
    inline AuditTaskMetadata& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The ID of this audit.</p>
     */
    inline AuditTaskMetadata& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of this audit.</p>
     */
    inline AuditTaskMetadata& WithTaskId(const char* value) { SetTaskId(value); return *this;}


    /**
     * <p>The status of this audit: one of "IN_PROGRESS", "COMPLETED", "FAILED" or
     * "CANCELED".</p>
     */
    inline const AuditTaskStatus& GetTaskStatus() const{ return m_taskStatus; }

    /**
     * <p>The status of this audit: one of "IN_PROGRESS", "COMPLETED", "FAILED" or
     * "CANCELED".</p>
     */
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }

    /**
     * <p>The status of this audit: one of "IN_PROGRESS", "COMPLETED", "FAILED" or
     * "CANCELED".</p>
     */
    inline void SetTaskStatus(const AuditTaskStatus& value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }

    /**
     * <p>The status of this audit: one of "IN_PROGRESS", "COMPLETED", "FAILED" or
     * "CANCELED".</p>
     */
    inline void SetTaskStatus(AuditTaskStatus&& value) { m_taskStatusHasBeenSet = true; m_taskStatus = std::move(value); }

    /**
     * <p>The status of this audit: one of "IN_PROGRESS", "COMPLETED", "FAILED" or
     * "CANCELED".</p>
     */
    inline AuditTaskMetadata& WithTaskStatus(const AuditTaskStatus& value) { SetTaskStatus(value); return *this;}

    /**
     * <p>The status of this audit: one of "IN_PROGRESS", "COMPLETED", "FAILED" or
     * "CANCELED".</p>
     */
    inline AuditTaskMetadata& WithTaskStatus(AuditTaskStatus&& value) { SetTaskStatus(std::move(value)); return *this;}


    /**
     * <p>The type of this audit: one of "ON_DEMAND_AUDIT_TASK" or
     * "SCHEDULED_AUDIT_TASK".</p>
     */
    inline const AuditTaskType& GetTaskType() const{ return m_taskType; }

    /**
     * <p>The type of this audit: one of "ON_DEMAND_AUDIT_TASK" or
     * "SCHEDULED_AUDIT_TASK".</p>
     */
    inline bool TaskTypeHasBeenSet() const { return m_taskTypeHasBeenSet; }

    /**
     * <p>The type of this audit: one of "ON_DEMAND_AUDIT_TASK" or
     * "SCHEDULED_AUDIT_TASK".</p>
     */
    inline void SetTaskType(const AuditTaskType& value) { m_taskTypeHasBeenSet = true; m_taskType = value; }

    /**
     * <p>The type of this audit: one of "ON_DEMAND_AUDIT_TASK" or
     * "SCHEDULED_AUDIT_TASK".</p>
     */
    inline void SetTaskType(AuditTaskType&& value) { m_taskTypeHasBeenSet = true; m_taskType = std::move(value); }

    /**
     * <p>The type of this audit: one of "ON_DEMAND_AUDIT_TASK" or
     * "SCHEDULED_AUDIT_TASK".</p>
     */
    inline AuditTaskMetadata& WithTaskType(const AuditTaskType& value) { SetTaskType(value); return *this;}

    /**
     * <p>The type of this audit: one of "ON_DEMAND_AUDIT_TASK" or
     * "SCHEDULED_AUDIT_TASK".</p>
     */
    inline AuditTaskMetadata& WithTaskType(AuditTaskType&& value) { SetTaskType(std::move(value)); return *this;}

  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet;

    AuditTaskStatus m_taskStatus;
    bool m_taskStatusHasBeenSet;

    AuditTaskType m_taskType;
    bool m_taskTypeHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
