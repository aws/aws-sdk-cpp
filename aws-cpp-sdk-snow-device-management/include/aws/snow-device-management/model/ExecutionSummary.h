/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snow-device-management/model/ExecutionState.h>
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
namespace SnowDeviceManagement
{
namespace Model
{

  /**
   * <p>The summary of a task execution on a specified device.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/ExecutionSummary">AWS
   * API Reference</a></p>
   */
  class ExecutionSummary
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API ExecutionSummary();
    AWS_SNOWDEVICEMANAGEMENT_API ExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API ExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the execution.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }

    /**
     * <p>The ID of the execution.</p>
     */
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }

    /**
     * <p>The ID of the execution.</p>
     */
    inline void SetExecutionId(const Aws::String& value) { m_executionIdHasBeenSet = true; m_executionId = value; }

    /**
     * <p>The ID of the execution.</p>
     */
    inline void SetExecutionId(Aws::String&& value) { m_executionIdHasBeenSet = true; m_executionId = std::move(value); }

    /**
     * <p>The ID of the execution.</p>
     */
    inline void SetExecutionId(const char* value) { m_executionIdHasBeenSet = true; m_executionId.assign(value); }

    /**
     * <p>The ID of the execution.</p>
     */
    inline ExecutionSummary& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p>The ID of the execution.</p>
     */
    inline ExecutionSummary& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the execution.</p>
     */
    inline ExecutionSummary& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}


    /**
     * <p>The ID of the managed device that the task is being executed on.</p>
     */
    inline const Aws::String& GetManagedDeviceId() const{ return m_managedDeviceId; }

    /**
     * <p>The ID of the managed device that the task is being executed on.</p>
     */
    inline bool ManagedDeviceIdHasBeenSet() const { return m_managedDeviceIdHasBeenSet; }

    /**
     * <p>The ID of the managed device that the task is being executed on.</p>
     */
    inline void SetManagedDeviceId(const Aws::String& value) { m_managedDeviceIdHasBeenSet = true; m_managedDeviceId = value; }

    /**
     * <p>The ID of the managed device that the task is being executed on.</p>
     */
    inline void SetManagedDeviceId(Aws::String&& value) { m_managedDeviceIdHasBeenSet = true; m_managedDeviceId = std::move(value); }

    /**
     * <p>The ID of the managed device that the task is being executed on.</p>
     */
    inline void SetManagedDeviceId(const char* value) { m_managedDeviceIdHasBeenSet = true; m_managedDeviceId.assign(value); }

    /**
     * <p>The ID of the managed device that the task is being executed on.</p>
     */
    inline ExecutionSummary& WithManagedDeviceId(const Aws::String& value) { SetManagedDeviceId(value); return *this;}

    /**
     * <p>The ID of the managed device that the task is being executed on.</p>
     */
    inline ExecutionSummary& WithManagedDeviceId(Aws::String&& value) { SetManagedDeviceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the managed device that the task is being executed on.</p>
     */
    inline ExecutionSummary& WithManagedDeviceId(const char* value) { SetManagedDeviceId(value); return *this;}


    /**
     * <p>The state of the execution.</p>
     */
    inline const ExecutionState& GetState() const{ return m_state; }

    /**
     * <p>The state of the execution.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the execution.</p>
     */
    inline void SetState(const ExecutionState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the execution.</p>
     */
    inline void SetState(ExecutionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the execution.</p>
     */
    inline ExecutionSummary& WithState(const ExecutionState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the execution.</p>
     */
    inline ExecutionSummary& WithState(ExecutionState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The ID of the task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The ID of the task.</p>
     */
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }

    /**
     * <p>The ID of the task.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>The ID of the task.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p>The ID of the task.</p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p>The ID of the task.</p>
     */
    inline ExecutionSummary& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The ID of the task.</p>
     */
    inline ExecutionSummary& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the task.</p>
     */
    inline ExecutionSummary& WithTaskId(const char* value) { SetTaskId(value); return *this;}

  private:

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    Aws::String m_managedDeviceId;
    bool m_managedDeviceIdHasBeenSet = false;

    ExecutionState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
