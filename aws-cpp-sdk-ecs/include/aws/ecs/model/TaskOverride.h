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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/ContainerOverride.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The overrides associated with a task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/TaskOverride">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API TaskOverride
  {
  public:
    TaskOverride();
    TaskOverride(Aws::Utils::Json::JsonView jsonValue);
    TaskOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One or more container overrides sent to a task.</p>
     */
    inline const Aws::Vector<ContainerOverride>& GetContainerOverrides() const{ return m_containerOverrides; }

    /**
     * <p>One or more container overrides sent to a task.</p>
     */
    inline bool ContainerOverridesHasBeenSet() const { return m_containerOverridesHasBeenSet; }

    /**
     * <p>One or more container overrides sent to a task.</p>
     */
    inline void SetContainerOverrides(const Aws::Vector<ContainerOverride>& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides = value; }

    /**
     * <p>One or more container overrides sent to a task.</p>
     */
    inline void SetContainerOverrides(Aws::Vector<ContainerOverride>&& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides = std::move(value); }

    /**
     * <p>One or more container overrides sent to a task.</p>
     */
    inline TaskOverride& WithContainerOverrides(const Aws::Vector<ContainerOverride>& value) { SetContainerOverrides(value); return *this;}

    /**
     * <p>One or more container overrides sent to a task.</p>
     */
    inline TaskOverride& WithContainerOverrides(Aws::Vector<ContainerOverride>&& value) { SetContainerOverrides(std::move(value)); return *this;}

    /**
     * <p>One or more container overrides sent to a task.</p>
     */
    inline TaskOverride& AddContainerOverrides(const ContainerOverride& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides.push_back(value); return *this; }

    /**
     * <p>One or more container overrides sent to a task.</p>
     */
    inline TaskOverride& AddContainerOverrides(ContainerOverride&& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role.</p>
     */
    inline const Aws::String& GetTaskRoleArn() const{ return m_taskRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role.</p>
     */
    inline bool TaskRoleArnHasBeenSet() const { return m_taskRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role.</p>
     */
    inline void SetTaskRoleArn(const Aws::String& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role.</p>
     */
    inline void SetTaskRoleArn(Aws::String&& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role.</p>
     */
    inline void SetTaskRoleArn(const char* value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role.</p>
     */
    inline TaskOverride& WithTaskRoleArn(const Aws::String& value) { SetTaskRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role.</p>
     */
    inline TaskOverride& WithTaskRoleArn(Aws::String&& value) { SetTaskRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role.</p>
     */
    inline TaskOverride& WithTaskRoleArn(const char* value) { SetTaskRoleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that the Amazon ECS
     * container agent and the Docker daemon can assume.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that the Amazon ECS
     * container agent and the Docker daemon can assume.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that the Amazon ECS
     * container agent and the Docker daemon can assume.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that the Amazon ECS
     * container agent and the Docker daemon can assume.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that the Amazon ECS
     * container agent and the Docker daemon can assume.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that the Amazon ECS
     * container agent and the Docker daemon can assume.</p>
     */
    inline TaskOverride& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that the Amazon ECS
     * container agent and the Docker daemon can assume.</p>
     */
    inline TaskOverride& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that the Amazon ECS
     * container agent and the Docker daemon can assume.</p>
     */
    inline TaskOverride& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}

  private:

    Aws::Vector<ContainerOverride> m_containerOverrides;
    bool m_containerOverridesHasBeenSet;

    Aws::String m_taskRoleArn;
    bool m_taskRoleArnHasBeenSet;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
