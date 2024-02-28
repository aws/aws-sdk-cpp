/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/EphemeralStorage.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/NetworkConfiguration.h>
#include <aws/batch/model/RuntimePlatform.h>
#include <aws/batch/model/TaskContainerProperties.h>
#include <aws/batch/model/Volume.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>The properties for a task definition that describes the container and volume
   * definitions of an Amazon ECS task. You can specify which Docker images to use,
   * the required resources, and other configurations related to launching the task
   * definition through an Amazon ECS service or task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EcsTaskProperties">AWS
   * API Reference</a></p>
   */
  class EcsTaskProperties
  {
  public:
    AWS_BATCH_API EcsTaskProperties();
    AWS_BATCH_API EcsTaskProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EcsTaskProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This object is a list of containers.</p>
     */
    inline const Aws::Vector<TaskContainerProperties>& GetContainers() const{ return m_containers; }

    /**
     * <p>This object is a list of containers.</p>
     */
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }

    /**
     * <p>This object is a list of containers.</p>
     */
    inline void SetContainers(const Aws::Vector<TaskContainerProperties>& value) { m_containersHasBeenSet = true; m_containers = value; }

    /**
     * <p>This object is a list of containers.</p>
     */
    inline void SetContainers(Aws::Vector<TaskContainerProperties>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }

    /**
     * <p>This object is a list of containers.</p>
     */
    inline EcsTaskProperties& WithContainers(const Aws::Vector<TaskContainerProperties>& value) { SetContainers(value); return *this;}

    /**
     * <p>This object is a list of containers.</p>
     */
    inline EcsTaskProperties& WithContainers(Aws::Vector<TaskContainerProperties>&& value) { SetContainers(std::move(value)); return *this;}

    /**
     * <p>This object is a list of containers.</p>
     */
    inline EcsTaskProperties& AddContainers(const TaskContainerProperties& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }

    /**
     * <p>This object is a list of containers.</p>
     */
    inline EcsTaskProperties& AddContainers(TaskContainerProperties&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }


    /**
     * <p>The amount of ephemeral storage to allocate for the task. This parameter is
     * used to expand the total amount of ephemeral storage available, beyond the
     * default amount, for tasks hosted on Fargate.</p>
     */
    inline const EphemeralStorage& GetEphemeralStorage() const{ return m_ephemeralStorage; }

    /**
     * <p>The amount of ephemeral storage to allocate for the task. This parameter is
     * used to expand the total amount of ephemeral storage available, beyond the
     * default amount, for tasks hosted on Fargate.</p>
     */
    inline bool EphemeralStorageHasBeenSet() const { return m_ephemeralStorageHasBeenSet; }

    /**
     * <p>The amount of ephemeral storage to allocate for the task. This parameter is
     * used to expand the total amount of ephemeral storage available, beyond the
     * default amount, for tasks hosted on Fargate.</p>
     */
    inline void SetEphemeralStorage(const EphemeralStorage& value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = value; }

    /**
     * <p>The amount of ephemeral storage to allocate for the task. This parameter is
     * used to expand the total amount of ephemeral storage available, beyond the
     * default amount, for tasks hosted on Fargate.</p>
     */
    inline void SetEphemeralStorage(EphemeralStorage&& value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = std::move(value); }

    /**
     * <p>The amount of ephemeral storage to allocate for the task. This parameter is
     * used to expand the total amount of ephemeral storage available, beyond the
     * default amount, for tasks hosted on Fargate.</p>
     */
    inline EcsTaskProperties& WithEphemeralStorage(const EphemeralStorage& value) { SetEphemeralStorage(value); return *this;}

    /**
     * <p>The amount of ephemeral storage to allocate for the task. This parameter is
     * used to expand the total amount of ephemeral storage available, beyond the
     * default amount, for tasks hosted on Fargate.</p>
     */
    inline EcsTaskProperties& WithEphemeralStorage(EphemeralStorage&& value) { SetEphemeralStorage(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For jobs that run on Fargate resources, you must provide an execution role. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For jobs that run on Fargate resources, you must provide an execution role. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For jobs that run on Fargate resources, you must provide an execution role. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For jobs that run on Fargate resources, you must provide an execution role. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For jobs that run on Fargate resources, you must provide an execution role. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For jobs that run on Fargate resources, you must provide an execution role. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline EcsTaskProperties& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For jobs that run on Fargate resources, you must provide an execution role. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline EcsTaskProperties& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For jobs that run on Fargate resources, you must provide an execution role. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline EcsTaskProperties& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>The Fargate platform version where the jobs are running. A platform version
     * is specified only for jobs that are running on Fargate resources. If one isn't
     * specified, the <code>LATEST</code> platform version is used by default. This
     * uses a recent, approved version of the Fargate platform for compute resources.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }

    /**
     * <p>The Fargate platform version where the jobs are running. A platform version
     * is specified only for jobs that are running on Fargate resources. If one isn't
     * specified, the <code>LATEST</code> platform version is used by default. This
     * uses a recent, approved version of the Fargate platform for compute resources.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }

    /**
     * <p>The Fargate platform version where the jobs are running. A platform version
     * is specified only for jobs that are running on Fargate resources. If one isn't
     * specified, the <code>LATEST</code> platform version is used by default. This
     * uses a recent, approved version of the Fargate platform for compute resources.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }

    /**
     * <p>The Fargate platform version where the jobs are running. A platform version
     * is specified only for jobs that are running on Fargate resources. If one isn't
     * specified, the <code>LATEST</code> platform version is used by default. This
     * uses a recent, approved version of the Fargate platform for compute resources.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }

    /**
     * <p>The Fargate platform version where the jobs are running. A platform version
     * is specified only for jobs that are running on Fargate resources. If one isn't
     * specified, the <code>LATEST</code> platform version is used by default. This
     * uses a recent, approved version of the Fargate platform for compute resources.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }

    /**
     * <p>The Fargate platform version where the jobs are running. A platform version
     * is specified only for jobs that are running on Fargate resources. If one isn't
     * specified, the <code>LATEST</code> platform version is used by default. This
     * uses a recent, approved version of the Fargate platform for compute resources.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline EcsTaskProperties& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}

    /**
     * <p>The Fargate platform version where the jobs are running. A platform version
     * is specified only for jobs that are running on Fargate resources. If one isn't
     * specified, the <code>LATEST</code> platform version is used by default. This
     * uses a recent, approved version of the Fargate platform for compute resources.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline EcsTaskProperties& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}

    /**
     * <p>The Fargate platform version where the jobs are running. A platform version
     * is specified only for jobs that are running on Fargate resources. If one isn't
     * specified, the <code>LATEST</code> platform version is used by default. This
     * uses a recent, approved version of the Fargate platform for compute resources.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline EcsTaskProperties& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}


    /**
     * <p>The IPC resource namespace to use for the containers in the task. The valid
     * values are <code>host</code>, <code>task</code>, or <code>none</code>.</p> <p>If
     * <code>host</code> is specified, all containers within the tasks that specified
     * the <code>host</code> IPC mode on the same container instance share the same IPC
     * resources with the host Amazon EC2 instance.</p> <p>If <code>task</code> is
     * specified, all containers within the specified <code>task</code> share the same
     * IPC resources.</p> <p>If <code>none</code> is specified, the IPC resources
     * within the containers of a task are private, and are not shared with other
     * containers in a task or on the container instance. </p> <p>If no value is
     * specified, then the IPC resource namespace sharing depends on the Docker daemon
     * setting on the container instance. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#ipc-settings---ipc">IPC
     * settings</a> in the Docker run reference.</p>
     */
    inline const Aws::String& GetIpcMode() const{ return m_ipcMode; }

    /**
     * <p>The IPC resource namespace to use for the containers in the task. The valid
     * values are <code>host</code>, <code>task</code>, or <code>none</code>.</p> <p>If
     * <code>host</code> is specified, all containers within the tasks that specified
     * the <code>host</code> IPC mode on the same container instance share the same IPC
     * resources with the host Amazon EC2 instance.</p> <p>If <code>task</code> is
     * specified, all containers within the specified <code>task</code> share the same
     * IPC resources.</p> <p>If <code>none</code> is specified, the IPC resources
     * within the containers of a task are private, and are not shared with other
     * containers in a task or on the container instance. </p> <p>If no value is
     * specified, then the IPC resource namespace sharing depends on the Docker daemon
     * setting on the container instance. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#ipc-settings---ipc">IPC
     * settings</a> in the Docker run reference.</p>
     */
    inline bool IpcModeHasBeenSet() const { return m_ipcModeHasBeenSet; }

    /**
     * <p>The IPC resource namespace to use for the containers in the task. The valid
     * values are <code>host</code>, <code>task</code>, or <code>none</code>.</p> <p>If
     * <code>host</code> is specified, all containers within the tasks that specified
     * the <code>host</code> IPC mode on the same container instance share the same IPC
     * resources with the host Amazon EC2 instance.</p> <p>If <code>task</code> is
     * specified, all containers within the specified <code>task</code> share the same
     * IPC resources.</p> <p>If <code>none</code> is specified, the IPC resources
     * within the containers of a task are private, and are not shared with other
     * containers in a task or on the container instance. </p> <p>If no value is
     * specified, then the IPC resource namespace sharing depends on the Docker daemon
     * setting on the container instance. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#ipc-settings---ipc">IPC
     * settings</a> in the Docker run reference.</p>
     */
    inline void SetIpcMode(const Aws::String& value) { m_ipcModeHasBeenSet = true; m_ipcMode = value; }

    /**
     * <p>The IPC resource namespace to use for the containers in the task. The valid
     * values are <code>host</code>, <code>task</code>, or <code>none</code>.</p> <p>If
     * <code>host</code> is specified, all containers within the tasks that specified
     * the <code>host</code> IPC mode on the same container instance share the same IPC
     * resources with the host Amazon EC2 instance.</p> <p>If <code>task</code> is
     * specified, all containers within the specified <code>task</code> share the same
     * IPC resources.</p> <p>If <code>none</code> is specified, the IPC resources
     * within the containers of a task are private, and are not shared with other
     * containers in a task or on the container instance. </p> <p>If no value is
     * specified, then the IPC resource namespace sharing depends on the Docker daemon
     * setting on the container instance. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#ipc-settings---ipc">IPC
     * settings</a> in the Docker run reference.</p>
     */
    inline void SetIpcMode(Aws::String&& value) { m_ipcModeHasBeenSet = true; m_ipcMode = std::move(value); }

    /**
     * <p>The IPC resource namespace to use for the containers in the task. The valid
     * values are <code>host</code>, <code>task</code>, or <code>none</code>.</p> <p>If
     * <code>host</code> is specified, all containers within the tasks that specified
     * the <code>host</code> IPC mode on the same container instance share the same IPC
     * resources with the host Amazon EC2 instance.</p> <p>If <code>task</code> is
     * specified, all containers within the specified <code>task</code> share the same
     * IPC resources.</p> <p>If <code>none</code> is specified, the IPC resources
     * within the containers of a task are private, and are not shared with other
     * containers in a task or on the container instance. </p> <p>If no value is
     * specified, then the IPC resource namespace sharing depends on the Docker daemon
     * setting on the container instance. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#ipc-settings---ipc">IPC
     * settings</a> in the Docker run reference.</p>
     */
    inline void SetIpcMode(const char* value) { m_ipcModeHasBeenSet = true; m_ipcMode.assign(value); }

    /**
     * <p>The IPC resource namespace to use for the containers in the task. The valid
     * values are <code>host</code>, <code>task</code>, or <code>none</code>.</p> <p>If
     * <code>host</code> is specified, all containers within the tasks that specified
     * the <code>host</code> IPC mode on the same container instance share the same IPC
     * resources with the host Amazon EC2 instance.</p> <p>If <code>task</code> is
     * specified, all containers within the specified <code>task</code> share the same
     * IPC resources.</p> <p>If <code>none</code> is specified, the IPC resources
     * within the containers of a task are private, and are not shared with other
     * containers in a task or on the container instance. </p> <p>If no value is
     * specified, then the IPC resource namespace sharing depends on the Docker daemon
     * setting on the container instance. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#ipc-settings---ipc">IPC
     * settings</a> in the Docker run reference.</p>
     */
    inline EcsTaskProperties& WithIpcMode(const Aws::String& value) { SetIpcMode(value); return *this;}

    /**
     * <p>The IPC resource namespace to use for the containers in the task. The valid
     * values are <code>host</code>, <code>task</code>, or <code>none</code>.</p> <p>If
     * <code>host</code> is specified, all containers within the tasks that specified
     * the <code>host</code> IPC mode on the same container instance share the same IPC
     * resources with the host Amazon EC2 instance.</p> <p>If <code>task</code> is
     * specified, all containers within the specified <code>task</code> share the same
     * IPC resources.</p> <p>If <code>none</code> is specified, the IPC resources
     * within the containers of a task are private, and are not shared with other
     * containers in a task or on the container instance. </p> <p>If no value is
     * specified, then the IPC resource namespace sharing depends on the Docker daemon
     * setting on the container instance. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#ipc-settings---ipc">IPC
     * settings</a> in the Docker run reference.</p>
     */
    inline EcsTaskProperties& WithIpcMode(Aws::String&& value) { SetIpcMode(std::move(value)); return *this;}

    /**
     * <p>The IPC resource namespace to use for the containers in the task. The valid
     * values are <code>host</code>, <code>task</code>, or <code>none</code>.</p> <p>If
     * <code>host</code> is specified, all containers within the tasks that specified
     * the <code>host</code> IPC mode on the same container instance share the same IPC
     * resources with the host Amazon EC2 instance.</p> <p>If <code>task</code> is
     * specified, all containers within the specified <code>task</code> share the same
     * IPC resources.</p> <p>If <code>none</code> is specified, the IPC resources
     * within the containers of a task are private, and are not shared with other
     * containers in a task or on the container instance. </p> <p>If no value is
     * specified, then the IPC resource namespace sharing depends on the Docker daemon
     * setting on the container instance. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#ipc-settings---ipc">IPC
     * settings</a> in the Docker run reference.</p>
     */
    inline EcsTaskProperties& WithIpcMode(const char* value) { SetIpcMode(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that's associated with the Amazon ECS
     * task.</p>  <p>This is object is comparable to <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_ContainerProperties.html">ContainerProperties:jobRoleArn</a>.</p>
     * 
     */
    inline const Aws::String& GetTaskRoleArn() const{ return m_taskRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that's associated with the Amazon ECS
     * task.</p>  <p>This is object is comparable to <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_ContainerProperties.html">ContainerProperties:jobRoleArn</a>.</p>
     * 
     */
    inline bool TaskRoleArnHasBeenSet() const { return m_taskRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that's associated with the Amazon ECS
     * task.</p>  <p>This is object is comparable to <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_ContainerProperties.html">ContainerProperties:jobRoleArn</a>.</p>
     * 
     */
    inline void SetTaskRoleArn(const Aws::String& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that's associated with the Amazon ECS
     * task.</p>  <p>This is object is comparable to <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_ContainerProperties.html">ContainerProperties:jobRoleArn</a>.</p>
     * 
     */
    inline void SetTaskRoleArn(Aws::String&& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that's associated with the Amazon ECS
     * task.</p>  <p>This is object is comparable to <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_ContainerProperties.html">ContainerProperties:jobRoleArn</a>.</p>
     * 
     */
    inline void SetTaskRoleArn(const char* value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that's associated with the Amazon ECS
     * task.</p>  <p>This is object is comparable to <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_ContainerProperties.html">ContainerProperties:jobRoleArn</a>.</p>
     * 
     */
    inline EcsTaskProperties& WithTaskRoleArn(const Aws::String& value) { SetTaskRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that's associated with the Amazon ECS
     * task.</p>  <p>This is object is comparable to <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_ContainerProperties.html">ContainerProperties:jobRoleArn</a>.</p>
     * 
     */
    inline EcsTaskProperties& WithTaskRoleArn(Aws::String&& value) { SetTaskRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that's associated with the Amazon ECS
     * task.</p>  <p>This is object is comparable to <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_ContainerProperties.html">ContainerProperties:jobRoleArn</a>.</p>
     * 
     */
    inline EcsTaskProperties& WithTaskRoleArn(const char* value) { SetTaskRoleArn(value); return *this;}


    /**
     * <p>The process namespace to use for the containers in the task. The valid values
     * are <code>host</code> or <code>task</code>. For example, monitoring sidecars
     * might need <code>pidMode</code> to access information about other containers
     * running in the same task.</p> <p>If <code>host</code> is specified, all
     * containers within the tasks that specified the <code>host</code> PID mode on the
     * same container instance share the process namespace with the host Amazon EC2
     * instance.</p> <p>If <code>task</code> is specified, all containers within the
     * specified task share the same process namespace.</p> <p>If no value is
     * specified, the default is a private namespace for each container. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/run/#pid-settings---pid">PID
     * settings</a> in the Docker run reference.</p>
     */
    inline const Aws::String& GetPidMode() const{ return m_pidMode; }

    /**
     * <p>The process namespace to use for the containers in the task. The valid values
     * are <code>host</code> or <code>task</code>. For example, monitoring sidecars
     * might need <code>pidMode</code> to access information about other containers
     * running in the same task.</p> <p>If <code>host</code> is specified, all
     * containers within the tasks that specified the <code>host</code> PID mode on the
     * same container instance share the process namespace with the host Amazon EC2
     * instance.</p> <p>If <code>task</code> is specified, all containers within the
     * specified task share the same process namespace.</p> <p>If no value is
     * specified, the default is a private namespace for each container. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/run/#pid-settings---pid">PID
     * settings</a> in the Docker run reference.</p>
     */
    inline bool PidModeHasBeenSet() const { return m_pidModeHasBeenSet; }

    /**
     * <p>The process namespace to use for the containers in the task. The valid values
     * are <code>host</code> or <code>task</code>. For example, monitoring sidecars
     * might need <code>pidMode</code> to access information about other containers
     * running in the same task.</p> <p>If <code>host</code> is specified, all
     * containers within the tasks that specified the <code>host</code> PID mode on the
     * same container instance share the process namespace with the host Amazon EC2
     * instance.</p> <p>If <code>task</code> is specified, all containers within the
     * specified task share the same process namespace.</p> <p>If no value is
     * specified, the default is a private namespace for each container. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/run/#pid-settings---pid">PID
     * settings</a> in the Docker run reference.</p>
     */
    inline void SetPidMode(const Aws::String& value) { m_pidModeHasBeenSet = true; m_pidMode = value; }

    /**
     * <p>The process namespace to use for the containers in the task. The valid values
     * are <code>host</code> or <code>task</code>. For example, monitoring sidecars
     * might need <code>pidMode</code> to access information about other containers
     * running in the same task.</p> <p>If <code>host</code> is specified, all
     * containers within the tasks that specified the <code>host</code> PID mode on the
     * same container instance share the process namespace with the host Amazon EC2
     * instance.</p> <p>If <code>task</code> is specified, all containers within the
     * specified task share the same process namespace.</p> <p>If no value is
     * specified, the default is a private namespace for each container. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/run/#pid-settings---pid">PID
     * settings</a> in the Docker run reference.</p>
     */
    inline void SetPidMode(Aws::String&& value) { m_pidModeHasBeenSet = true; m_pidMode = std::move(value); }

    /**
     * <p>The process namespace to use for the containers in the task. The valid values
     * are <code>host</code> or <code>task</code>. For example, monitoring sidecars
     * might need <code>pidMode</code> to access information about other containers
     * running in the same task.</p> <p>If <code>host</code> is specified, all
     * containers within the tasks that specified the <code>host</code> PID mode on the
     * same container instance share the process namespace with the host Amazon EC2
     * instance.</p> <p>If <code>task</code> is specified, all containers within the
     * specified task share the same process namespace.</p> <p>If no value is
     * specified, the default is a private namespace for each container. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/run/#pid-settings---pid">PID
     * settings</a> in the Docker run reference.</p>
     */
    inline void SetPidMode(const char* value) { m_pidModeHasBeenSet = true; m_pidMode.assign(value); }

    /**
     * <p>The process namespace to use for the containers in the task. The valid values
     * are <code>host</code> or <code>task</code>. For example, monitoring sidecars
     * might need <code>pidMode</code> to access information about other containers
     * running in the same task.</p> <p>If <code>host</code> is specified, all
     * containers within the tasks that specified the <code>host</code> PID mode on the
     * same container instance share the process namespace with the host Amazon EC2
     * instance.</p> <p>If <code>task</code> is specified, all containers within the
     * specified task share the same process namespace.</p> <p>If no value is
     * specified, the default is a private namespace for each container. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/run/#pid-settings---pid">PID
     * settings</a> in the Docker run reference.</p>
     */
    inline EcsTaskProperties& WithPidMode(const Aws::String& value) { SetPidMode(value); return *this;}

    /**
     * <p>The process namespace to use for the containers in the task. The valid values
     * are <code>host</code> or <code>task</code>. For example, monitoring sidecars
     * might need <code>pidMode</code> to access information about other containers
     * running in the same task.</p> <p>If <code>host</code> is specified, all
     * containers within the tasks that specified the <code>host</code> PID mode on the
     * same container instance share the process namespace with the host Amazon EC2
     * instance.</p> <p>If <code>task</code> is specified, all containers within the
     * specified task share the same process namespace.</p> <p>If no value is
     * specified, the default is a private namespace for each container. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/run/#pid-settings---pid">PID
     * settings</a> in the Docker run reference.</p>
     */
    inline EcsTaskProperties& WithPidMode(Aws::String&& value) { SetPidMode(std::move(value)); return *this;}

    /**
     * <p>The process namespace to use for the containers in the task. The valid values
     * are <code>host</code> or <code>task</code>. For example, monitoring sidecars
     * might need <code>pidMode</code> to access information about other containers
     * running in the same task.</p> <p>If <code>host</code> is specified, all
     * containers within the tasks that specified the <code>host</code> PID mode on the
     * same container instance share the process namespace with the host Amazon EC2
     * instance.</p> <p>If <code>task</code> is specified, all containers within the
     * specified task share the same process namespace.</p> <p>If no value is
     * specified, the default is a private namespace for each container. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/run/#pid-settings---pid">PID
     * settings</a> in the Docker run reference.</p>
     */
    inline EcsTaskProperties& WithPidMode(const char* value) { SetPidMode(value); return *this;}


    /**
     * <p>The network configuration for jobs that are running on Fargate resources.
     * Jobs that are running on Amazon EC2 resources must not specify this
     * parameter.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }

    /**
     * <p>The network configuration for jobs that are running on Fargate resources.
     * Jobs that are running on Amazon EC2 resources must not specify this
     * parameter.</p>
     */
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }

    /**
     * <p>The network configuration for jobs that are running on Fargate resources.
     * Jobs that are running on Amazon EC2 resources must not specify this
     * parameter.</p>
     */
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }

    /**
     * <p>The network configuration for jobs that are running on Fargate resources.
     * Jobs that are running on Amazon EC2 resources must not specify this
     * parameter.</p>
     */
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }

    /**
     * <p>The network configuration for jobs that are running on Fargate resources.
     * Jobs that are running on Amazon EC2 resources must not specify this
     * parameter.</p>
     */
    inline EcsTaskProperties& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}

    /**
     * <p>The network configuration for jobs that are running on Fargate resources.
     * Jobs that are running on Amazon EC2 resources must not specify this
     * parameter.</p>
     */
    inline EcsTaskProperties& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}


    /**
     * <p>An object that represents the compute environment architecture for Batch jobs
     * on Fargate.</p>
     */
    inline const RuntimePlatform& GetRuntimePlatform() const{ return m_runtimePlatform; }

    /**
     * <p>An object that represents the compute environment architecture for Batch jobs
     * on Fargate.</p>
     */
    inline bool RuntimePlatformHasBeenSet() const { return m_runtimePlatformHasBeenSet; }

    /**
     * <p>An object that represents the compute environment architecture for Batch jobs
     * on Fargate.</p>
     */
    inline void SetRuntimePlatform(const RuntimePlatform& value) { m_runtimePlatformHasBeenSet = true; m_runtimePlatform = value; }

    /**
     * <p>An object that represents the compute environment architecture for Batch jobs
     * on Fargate.</p>
     */
    inline void SetRuntimePlatform(RuntimePlatform&& value) { m_runtimePlatformHasBeenSet = true; m_runtimePlatform = std::move(value); }

    /**
     * <p>An object that represents the compute environment architecture for Batch jobs
     * on Fargate.</p>
     */
    inline EcsTaskProperties& WithRuntimePlatform(const RuntimePlatform& value) { SetRuntimePlatform(value); return *this;}

    /**
     * <p>An object that represents the compute environment architecture for Batch jobs
     * on Fargate.</p>
     */
    inline EcsTaskProperties& WithRuntimePlatform(RuntimePlatform&& value) { SetRuntimePlatform(std::move(value)); return *this;}


    /**
     * <p>A list of volumes that are associated with the job.</p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const{ return m_volumes; }

    /**
     * <p>A list of volumes that are associated with the job.</p>
     */
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }

    /**
     * <p>A list of volumes that are associated with the job.</p>
     */
    inline void SetVolumes(const Aws::Vector<Volume>& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>A list of volumes that are associated with the job.</p>
     */
    inline void SetVolumes(Aws::Vector<Volume>&& value) { m_volumesHasBeenSet = true; m_volumes = std::move(value); }

    /**
     * <p>A list of volumes that are associated with the job.</p>
     */
    inline EcsTaskProperties& WithVolumes(const Aws::Vector<Volume>& value) { SetVolumes(value); return *this;}

    /**
     * <p>A list of volumes that are associated with the job.</p>
     */
    inline EcsTaskProperties& WithVolumes(Aws::Vector<Volume>&& value) { SetVolumes(std::move(value)); return *this;}

    /**
     * <p>A list of volumes that are associated with the job.</p>
     */
    inline EcsTaskProperties& AddVolumes(const Volume& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

    /**
     * <p>A list of volumes that are associated with the job.</p>
     */
    inline EcsTaskProperties& AddVolumes(Volume&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TaskContainerProperties> m_containers;
    bool m_containersHasBeenSet = false;

    EphemeralStorage m_ephemeralStorage;
    bool m_ephemeralStorageHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    Aws::String m_ipcMode;
    bool m_ipcModeHasBeenSet = false;

    Aws::String m_taskRoleArn;
    bool m_taskRoleArnHasBeenSet = false;

    Aws::String m_pidMode;
    bool m_pidModeHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    RuntimePlatform m_runtimePlatform;
    bool m_runtimePlatformHasBeenSet = false;

    Aws::Vector<Volume> m_volumes;
    bool m_volumesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
