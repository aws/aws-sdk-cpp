/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/EphemeralStorage.h>
#include <aws/batch/model/NetworkConfiguration.h>
#include <aws/batch/model/RuntimePlatform.h>
#include <aws/batch/model/TaskContainerDetails.h>
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
   * <p>The details of a task definition that describes the container and volume
   * definitions of an Amazon ECS task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EcsTaskDetails">AWS
   * API Reference</a></p>
   */
  class EcsTaskDetails
  {
  public:
    AWS_BATCH_API EcsTaskDetails();
    AWS_BATCH_API EcsTaskDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EcsTaskDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of containers that are included in the <code>taskProperties</code>
     * list.</p>
     */
    inline const Aws::Vector<TaskContainerDetails>& GetContainers() const{ return m_containers; }

    /**
     * <p>A list of containers that are included in the <code>taskProperties</code>
     * list.</p>
     */
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }

    /**
     * <p>A list of containers that are included in the <code>taskProperties</code>
     * list.</p>
     */
    inline void SetContainers(const Aws::Vector<TaskContainerDetails>& value) { m_containersHasBeenSet = true; m_containers = value; }

    /**
     * <p>A list of containers that are included in the <code>taskProperties</code>
     * list.</p>
     */
    inline void SetContainers(Aws::Vector<TaskContainerDetails>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }

    /**
     * <p>A list of containers that are included in the <code>taskProperties</code>
     * list.</p>
     */
    inline EcsTaskDetails& WithContainers(const Aws::Vector<TaskContainerDetails>& value) { SetContainers(value); return *this;}

    /**
     * <p>A list of containers that are included in the <code>taskProperties</code>
     * list.</p>
     */
    inline EcsTaskDetails& WithContainers(Aws::Vector<TaskContainerDetails>&& value) { SetContainers(std::move(value)); return *this;}

    /**
     * <p>A list of containers that are included in the <code>taskProperties</code>
     * list.</p>
     */
    inline EcsTaskDetails& AddContainers(const TaskContainerDetails& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }

    /**
     * <p>A list of containers that are included in the <code>taskProperties</code>
     * list.</p>
     */
    inline EcsTaskDetails& AddContainers(TaskContainerDetails&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the container instance that hosts the
     * task.</p>
     */
    inline const Aws::String& GetContainerInstanceArn() const{ return m_containerInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance that hosts the
     * task.</p>
     */
    inline bool ContainerInstanceArnHasBeenSet() const { return m_containerInstanceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance that hosts the
     * task.</p>
     */
    inline void SetContainerInstanceArn(const Aws::String& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance that hosts the
     * task.</p>
     */
    inline void SetContainerInstanceArn(Aws::String&& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance that hosts the
     * task.</p>
     */
    inline void SetContainerInstanceArn(const char* value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance that hosts the
     * task.</p>
     */
    inline EcsTaskDetails& WithContainerInstanceArn(const Aws::String& value) { SetContainerInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance that hosts the
     * task.</p>
     */
    inline EcsTaskDetails& WithContainerInstanceArn(Aws::String&& value) { SetContainerInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance that hosts the
     * task.</p>
     */
    inline EcsTaskDetails& WithContainerInstanceArn(const char* value) { SetContainerInstanceArn(value); return *this;}


    /**
     * <p>The ARN of the Amazon ECS task.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>The ARN of the Amazon ECS task.</p>
     */
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }

    /**
     * <p>The ARN of the Amazon ECS task.</p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }

    /**
     * <p>The ARN of the Amazon ECS task.</p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon ECS task.</p>
     */
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }

    /**
     * <p>The ARN of the Amazon ECS task.</p>
     */
    inline EcsTaskDetails& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon ECS task.</p>
     */
    inline EcsTaskDetails& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon ECS task.</p>
     */
    inline EcsTaskDetails& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}


    /**
     * <p>The amount of ephemeral storage allocated for the task.</p>
     */
    inline const EphemeralStorage& GetEphemeralStorage() const{ return m_ephemeralStorage; }

    /**
     * <p>The amount of ephemeral storage allocated for the task.</p>
     */
    inline bool EphemeralStorageHasBeenSet() const { return m_ephemeralStorageHasBeenSet; }

    /**
     * <p>The amount of ephemeral storage allocated for the task.</p>
     */
    inline void SetEphemeralStorage(const EphemeralStorage& value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = value; }

    /**
     * <p>The amount of ephemeral storage allocated for the task.</p>
     */
    inline void SetEphemeralStorage(EphemeralStorage&& value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = std::move(value); }

    /**
     * <p>The amount of ephemeral storage allocated for the task.</p>
     */
    inline EcsTaskDetails& WithEphemeralStorage(const EphemeralStorage& value) { SetEphemeralStorage(value); return *this;}

    /**
     * <p>The amount of ephemeral storage allocated for the task.</p>
     */
    inline EcsTaskDetails& WithEphemeralStorage(EphemeralStorage&& value) { SetEphemeralStorage(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline EcsTaskDetails& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline EcsTaskDetails& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline EcsTaskDetails& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>The Fargate platform version where the jobs are running.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }

    /**
     * <p>The Fargate platform version where the jobs are running.</p>
     */
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }

    /**
     * <p>The Fargate platform version where the jobs are running.</p>
     */
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }

    /**
     * <p>The Fargate platform version where the jobs are running.</p>
     */
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }

    /**
     * <p>The Fargate platform version where the jobs are running.</p>
     */
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }

    /**
     * <p>The Fargate platform version where the jobs are running.</p>
     */
    inline EcsTaskDetails& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}

    /**
     * <p>The Fargate platform version where the jobs are running.</p>
     */
    inline EcsTaskDetails& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}

    /**
     * <p>The Fargate platform version where the jobs are running.</p>
     */
    inline EcsTaskDetails& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}


    /**
     * <p>The IPC resource namespace to use for the containers in the task.</p>
     */
    inline const Aws::String& GetIpcMode() const{ return m_ipcMode; }

    /**
     * <p>The IPC resource namespace to use for the containers in the task.</p>
     */
    inline bool IpcModeHasBeenSet() const { return m_ipcModeHasBeenSet; }

    /**
     * <p>The IPC resource namespace to use for the containers in the task.</p>
     */
    inline void SetIpcMode(const Aws::String& value) { m_ipcModeHasBeenSet = true; m_ipcMode = value; }

    /**
     * <p>The IPC resource namespace to use for the containers in the task.</p>
     */
    inline void SetIpcMode(Aws::String&& value) { m_ipcModeHasBeenSet = true; m_ipcMode = std::move(value); }

    /**
     * <p>The IPC resource namespace to use for the containers in the task.</p>
     */
    inline void SetIpcMode(const char* value) { m_ipcModeHasBeenSet = true; m_ipcMode.assign(value); }

    /**
     * <p>The IPC resource namespace to use for the containers in the task.</p>
     */
    inline EcsTaskDetails& WithIpcMode(const Aws::String& value) { SetIpcMode(value); return *this;}

    /**
     * <p>The IPC resource namespace to use for the containers in the task.</p>
     */
    inline EcsTaskDetails& WithIpcMode(Aws::String&& value) { SetIpcMode(std::move(value)); return *this;}

    /**
     * <p>The IPC resource namespace to use for the containers in the task.</p>
     */
    inline EcsTaskDetails& WithIpcMode(const char* value) { SetIpcMode(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for Amazon Web Services permissions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>This is object is comparable to <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_ContainerProperties.html">ContainerProperties:jobRoleArn</a>.</p>
     * 
     */
    inline const Aws::String& GetTaskRoleArn() const{ return m_taskRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for Amazon Web Services permissions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>This is object is comparable to <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_ContainerProperties.html">ContainerProperties:jobRoleArn</a>.</p>
     * 
     */
    inline bool TaskRoleArnHasBeenSet() const { return m_taskRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for Amazon Web Services permissions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>This is object is comparable to <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_ContainerProperties.html">ContainerProperties:jobRoleArn</a>.</p>
     * 
     */
    inline void SetTaskRoleArn(const Aws::String& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for Amazon Web Services permissions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>This is object is comparable to <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_ContainerProperties.html">ContainerProperties:jobRoleArn</a>.</p>
     * 
     */
    inline void SetTaskRoleArn(Aws::String&& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for Amazon Web Services permissions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>This is object is comparable to <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_ContainerProperties.html">ContainerProperties:jobRoleArn</a>.</p>
     * 
     */
    inline void SetTaskRoleArn(const char* value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for Amazon Web Services permissions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>This is object is comparable to <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_ContainerProperties.html">ContainerProperties:jobRoleArn</a>.</p>
     * 
     */
    inline EcsTaskDetails& WithTaskRoleArn(const Aws::String& value) { SetTaskRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for Amazon Web Services permissions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>This is object is comparable to <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_ContainerProperties.html">ContainerProperties:jobRoleArn</a>.</p>
     * 
     */
    inline EcsTaskDetails& WithTaskRoleArn(Aws::String&& value) { SetTaskRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for Amazon Web Services permissions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>This is object is comparable to <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_ContainerProperties.html">ContainerProperties:jobRoleArn</a>.</p>
     * 
     */
    inline EcsTaskDetails& WithTaskRoleArn(const char* value) { SetTaskRoleArn(value); return *this;}


    /**
     * <p>The process namespace to use for the containers in the task.</p>
     */
    inline const Aws::String& GetPidMode() const{ return m_pidMode; }

    /**
     * <p>The process namespace to use for the containers in the task.</p>
     */
    inline bool PidModeHasBeenSet() const { return m_pidModeHasBeenSet; }

    /**
     * <p>The process namespace to use for the containers in the task.</p>
     */
    inline void SetPidMode(const Aws::String& value) { m_pidModeHasBeenSet = true; m_pidMode = value; }

    /**
     * <p>The process namespace to use for the containers in the task.</p>
     */
    inline void SetPidMode(Aws::String&& value) { m_pidModeHasBeenSet = true; m_pidMode = std::move(value); }

    /**
     * <p>The process namespace to use for the containers in the task.</p>
     */
    inline void SetPidMode(const char* value) { m_pidModeHasBeenSet = true; m_pidMode.assign(value); }

    /**
     * <p>The process namespace to use for the containers in the task.</p>
     */
    inline EcsTaskDetails& WithPidMode(const Aws::String& value) { SetPidMode(value); return *this;}

    /**
     * <p>The process namespace to use for the containers in the task.</p>
     */
    inline EcsTaskDetails& WithPidMode(Aws::String&& value) { SetPidMode(std::move(value)); return *this;}

    /**
     * <p>The process namespace to use for the containers in the task.</p>
     */
    inline EcsTaskDetails& WithPidMode(const char* value) { SetPidMode(value); return *this;}


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
    inline EcsTaskDetails& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}

    /**
     * <p>The network configuration for jobs that are running on Fargate resources.
     * Jobs that are running on Amazon EC2 resources must not specify this
     * parameter.</p>
     */
    inline EcsTaskDetails& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}


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
    inline EcsTaskDetails& WithRuntimePlatform(const RuntimePlatform& value) { SetRuntimePlatform(value); return *this;}

    /**
     * <p>An object that represents the compute environment architecture for Batch jobs
     * on Fargate.</p>
     */
    inline EcsTaskDetails& WithRuntimePlatform(RuntimePlatform&& value) { SetRuntimePlatform(std::move(value)); return *this;}


    /**
     * <p>A list of data volumes used in a job.</p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const{ return m_volumes; }

    /**
     * <p>A list of data volumes used in a job.</p>
     */
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }

    /**
     * <p>A list of data volumes used in a job.</p>
     */
    inline void SetVolumes(const Aws::Vector<Volume>& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>A list of data volumes used in a job.</p>
     */
    inline void SetVolumes(Aws::Vector<Volume>&& value) { m_volumesHasBeenSet = true; m_volumes = std::move(value); }

    /**
     * <p>A list of data volumes used in a job.</p>
     */
    inline EcsTaskDetails& WithVolumes(const Aws::Vector<Volume>& value) { SetVolumes(value); return *this;}

    /**
     * <p>A list of data volumes used in a job.</p>
     */
    inline EcsTaskDetails& WithVolumes(Aws::Vector<Volume>&& value) { SetVolumes(std::move(value)); return *this;}

    /**
     * <p>A list of data volumes used in a job.</p>
     */
    inline EcsTaskDetails& AddVolumes(const Volume& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

    /**
     * <p>A list of data volumes used in a job.</p>
     */
    inline EcsTaskDetails& AddVolumes(Volume&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TaskContainerDetails> m_containers;
    bool m_containersHasBeenSet = false;

    Aws::String m_containerInstanceArn;
    bool m_containerInstanceArnHasBeenSet = false;

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet = false;

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
