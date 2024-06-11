﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/LinuxParameters.h>
#include <aws/batch/model/LogConfiguration.h>
#include <aws/batch/model/NetworkConfiguration.h>
#include <aws/batch/model/FargatePlatformConfiguration.h>
#include <aws/batch/model/EphemeralStorage.h>
#include <aws/batch/model/RuntimePlatform.h>
#include <aws/batch/model/RepositoryCredentials.h>
#include <aws/batch/model/Volume.h>
#include <aws/batch/model/KeyValuePair.h>
#include <aws/batch/model/MountPoint.h>
#include <aws/batch/model/Ulimit.h>
#include <aws/batch/model/NetworkInterface.h>
#include <aws/batch/model/ResourceRequirement.h>
#include <aws/batch/model/Secret.h>
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
   * <p>An object that represents the details of a container that's part of a
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ContainerDetail">AWS
   * API Reference</a></p>
   */
  class ContainerDetail
  {
  public:
    AWS_BATCH_API ContainerDetail();
    AWS_BATCH_API ContainerDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ContainerDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The image used to start the container.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }
    inline ContainerDetail& WithImage(const Aws::String& value) { SetImage(value); return *this;}
    inline ContainerDetail& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}
    inline ContainerDetail& WithImage(const char* value) { SetImage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of vCPUs reserved for the container. For jobs that run on Amazon
     * EC2 resources, you can specify the vCPU requirement for the job using
     * <code>resourceRequirements</code>, but you can't specify the vCPU requirements
     * in both the <code>vcpus</code> and <code>resourceRequirements</code> object.
     * This parameter maps to <code>CpuShares</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares. You must specify at least one vCPU. This is
     * required but can be specified in several places. It must be specified for each
     * node at least once.</p>  <p>This parameter isn't applicable to jobs that
     * run on Fargate resources. For jobs that run on Fargate resources, you must
     * specify the vCPU requirement for the job using
     * <code>resourceRequirements</code>.</p> 
     */
    inline int GetVcpus() const{ return m_vcpus; }
    inline bool VcpusHasBeenSet() const { return m_vcpusHasBeenSet; }
    inline void SetVcpus(int value) { m_vcpusHasBeenSet = true; m_vcpus = value; }
    inline ContainerDetail& WithVcpus(int value) { SetVcpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For jobs running on Amazon EC2 resources that didn't specify memory
     * requirements using <code>resourceRequirements</code>, the number of MiB of
     * memory reserved for the job. For other jobs, including all run on Fargate
     * resources, see <code>resourceRequirements</code>.</p>
     */
    inline int GetMemory() const{ return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    inline void SetMemory(int value) { m_memoryHasBeenSet = true; m_memory = value; }
    inline ContainerDetail& WithMemory(int value) { SetMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command that's passed to the container.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }
    inline ContainerDetail& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}
    inline ContainerDetail& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}
    inline ContainerDetail& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }
    inline ContainerDetail& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }
    inline ContainerDetail& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that's associated with the job when run.</p>
     */
    inline const Aws::String& GetJobRoleArn() const{ return m_jobRoleArn; }
    inline bool JobRoleArnHasBeenSet() const { return m_jobRoleArnHasBeenSet; }
    inline void SetJobRoleArn(const Aws::String& value) { m_jobRoleArnHasBeenSet = true; m_jobRoleArn = value; }
    inline void SetJobRoleArn(Aws::String&& value) { m_jobRoleArnHasBeenSet = true; m_jobRoleArn = std::move(value); }
    inline void SetJobRoleArn(const char* value) { m_jobRoleArnHasBeenSet = true; m_jobRoleArn.assign(value); }
    inline ContainerDetail& WithJobRoleArn(const Aws::String& value) { SetJobRoleArn(value); return *this;}
    inline ContainerDetail& WithJobRoleArn(Aws::String&& value) { SetJobRoleArn(std::move(value)); return *this;}
    inline ContainerDetail& WithJobRoleArn(const char* value) { SetJobRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }
    inline ContainerDetail& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline ContainerDetail& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline ContainerDetail& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of volumes that are associated with the job.</p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const{ return m_volumes; }
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }
    inline void SetVolumes(const Aws::Vector<Volume>& value) { m_volumesHasBeenSet = true; m_volumes = value; }
    inline void SetVolumes(Aws::Vector<Volume>&& value) { m_volumesHasBeenSet = true; m_volumes = std::move(value); }
    inline ContainerDetail& WithVolumes(const Aws::Vector<Volume>& value) { SetVolumes(value); return *this;}
    inline ContainerDetail& WithVolumes(Aws::Vector<Volume>&& value) { SetVolumes(std::move(value)); return *this;}
    inline ContainerDetail& AddVolumes(const Volume& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }
    inline ContainerDetail& AddVolumes(Volume&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The environment variables to pass to a container.</p>  <p>Environment
     * variables cannot start with "<code>AWS_BATCH</code>". This naming convention is
     * reserved for variables that Batch sets.</p> 
     */
    inline const Aws::Vector<KeyValuePair>& GetEnvironment() const{ return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    inline void SetEnvironment(const Aws::Vector<KeyValuePair>& value) { m_environmentHasBeenSet = true; m_environment = value; }
    inline void SetEnvironment(Aws::Vector<KeyValuePair>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }
    inline ContainerDetail& WithEnvironment(const Aws::Vector<KeyValuePair>& value) { SetEnvironment(value); return *this;}
    inline ContainerDetail& WithEnvironment(Aws::Vector<KeyValuePair>&& value) { SetEnvironment(std::move(value)); return *this;}
    inline ContainerDetail& AddEnvironment(const KeyValuePair& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }
    inline ContainerDetail& AddEnvironment(KeyValuePair&& value) { m_environmentHasBeenSet = true; m_environment.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The mount points for data volumes in your container.</p>
     */
    inline const Aws::Vector<MountPoint>& GetMountPoints() const{ return m_mountPoints; }
    inline bool MountPointsHasBeenSet() const { return m_mountPointsHasBeenSet; }
    inline void SetMountPoints(const Aws::Vector<MountPoint>& value) { m_mountPointsHasBeenSet = true; m_mountPoints = value; }
    inline void SetMountPoints(Aws::Vector<MountPoint>&& value) { m_mountPointsHasBeenSet = true; m_mountPoints = std::move(value); }
    inline ContainerDetail& WithMountPoints(const Aws::Vector<MountPoint>& value) { SetMountPoints(value); return *this;}
    inline ContainerDetail& WithMountPoints(Aws::Vector<MountPoint>&& value) { SetMountPoints(std::move(value)); return *this;}
    inline ContainerDetail& AddMountPoints(const MountPoint& value) { m_mountPointsHasBeenSet = true; m_mountPoints.push_back(value); return *this; }
    inline ContainerDetail& AddMountPoints(MountPoint&& value) { m_mountPointsHasBeenSet = true; m_mountPoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When this parameter is true, the container is given read-only access to its
     * root file system. This parameter maps to <code>ReadonlyRootfs</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--read-only</code> option to <a
     * href="https://docs.docker.com/engine/reference/commandline/run/"> <code>docker
     * run</code> </a>.</p>
     */
    inline bool GetReadonlyRootFilesystem() const{ return m_readonlyRootFilesystem; }
    inline bool ReadonlyRootFilesystemHasBeenSet() const { return m_readonlyRootFilesystemHasBeenSet; }
    inline void SetReadonlyRootFilesystem(bool value) { m_readonlyRootFilesystemHasBeenSet = true; m_readonlyRootFilesystem = value; }
    inline ContainerDetail& WithReadonlyRootFilesystem(bool value) { SetReadonlyRootFilesystem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>ulimit</code> values to set in the container. This parameter
     * maps to <code>Ulimits</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources.</p> 
     */
    inline const Aws::Vector<Ulimit>& GetUlimits() const{ return m_ulimits; }
    inline bool UlimitsHasBeenSet() const { return m_ulimitsHasBeenSet; }
    inline void SetUlimits(const Aws::Vector<Ulimit>& value) { m_ulimitsHasBeenSet = true; m_ulimits = value; }
    inline void SetUlimits(Aws::Vector<Ulimit>&& value) { m_ulimitsHasBeenSet = true; m_ulimits = std::move(value); }
    inline ContainerDetail& WithUlimits(const Aws::Vector<Ulimit>& value) { SetUlimits(value); return *this;}
    inline ContainerDetail& WithUlimits(Aws::Vector<Ulimit>&& value) { SetUlimits(std::move(value)); return *this;}
    inline ContainerDetail& AddUlimits(const Ulimit& value) { m_ulimitsHasBeenSet = true; m_ulimits.push_back(value); return *this; }
    inline ContainerDetail& AddUlimits(Ulimit&& value) { m_ulimitsHasBeenSet = true; m_ulimits.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When this parameter is true, the container is given elevated permissions on
     * the host container instance (similar to the <code>root</code> user). The default
     * value is <code>false</code>.</p>  <p>This parameter isn't applicable to
     * jobs that are running on Fargate resources and shouldn't be provided, or
     * specified as <code>false</code>.</p> 
     */
    inline bool GetPrivileged() const{ return m_privileged; }
    inline bool PrivilegedHasBeenSet() const { return m_privilegedHasBeenSet; }
    inline void SetPrivileged(bool value) { m_privilegedHasBeenSet = true; m_privileged = value; }
    inline ContainerDetail& WithPrivileged(bool value) { SetPrivileged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    inline void SetUser(const Aws::String& value) { m_userHasBeenSet = true; m_user = value; }
    inline void SetUser(Aws::String&& value) { m_userHasBeenSet = true; m_user = std::move(value); }
    inline void SetUser(const char* value) { m_userHasBeenSet = true; m_user.assign(value); }
    inline ContainerDetail& WithUser(const Aws::String& value) { SetUser(value); return *this;}
    inline ContainerDetail& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}
    inline ContainerDetail& WithUser(const char* value) { SetUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exit code returned upon completion.</p>
     */
    inline int GetExitCode() const{ return m_exitCode; }
    inline bool ExitCodeHasBeenSet() const { return m_exitCodeHasBeenSet; }
    inline void SetExitCode(int value) { m_exitCodeHasBeenSet = true; m_exitCode = value; }
    inline ContainerDetail& WithExitCode(int value) { SetExitCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details for a running or stopped container.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline ContainerDetail& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline ContainerDetail& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline ContainerDetail& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the container instance that the container
     * is running on.</p>
     */
    inline const Aws::String& GetContainerInstanceArn() const{ return m_containerInstanceArn; }
    inline bool ContainerInstanceArnHasBeenSet() const { return m_containerInstanceArnHasBeenSet; }
    inline void SetContainerInstanceArn(const Aws::String& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = value; }
    inline void SetContainerInstanceArn(Aws::String&& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = std::move(value); }
    inline void SetContainerInstanceArn(const char* value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn.assign(value); }
    inline ContainerDetail& WithContainerInstanceArn(const Aws::String& value) { SetContainerInstanceArn(value); return *this;}
    inline ContainerDetail& WithContainerInstanceArn(Aws::String&& value) { SetContainerInstanceArn(std::move(value)); return *this;}
    inline ContainerDetail& WithContainerInstanceArn(const char* value) { SetContainerInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that's associated with
     * the container job. Each container attempt receives a task ARN when they reach
     * the <code>STARTING</code> status.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }
    inline ContainerDetail& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}
    inline ContainerDetail& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}
    inline ContainerDetail& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon CloudWatch Logs log stream that's associated with the
     * container. The log group for Batch jobs is <code>/aws/batch/job</code>. Each
     * container attempt receives a log stream name when they reach the
     * <code>RUNNING</code> status.</p>
     */
    inline const Aws::String& GetLogStreamName() const{ return m_logStreamName; }
    inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }
    inline void SetLogStreamName(const Aws::String& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = value; }
    inline void SetLogStreamName(Aws::String&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = std::move(value); }
    inline void SetLogStreamName(const char* value) { m_logStreamNameHasBeenSet = true; m_logStreamName.assign(value); }
    inline ContainerDetail& WithLogStreamName(const Aws::String& value) { SetLogStreamName(value); return *this;}
    inline ContainerDetail& WithLogStreamName(Aws::String&& value) { SetLogStreamName(std::move(value)); return *this;}
    inline ContainerDetail& WithLogStreamName(const char* value) { SetLogStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of the underlying host infrastructure of a multi-node
     * parallel job.</p>  <p>This parameter isn't applicable to jobs that are
     * running on Fargate resources.</p> 
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline ContainerDetail& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline ContainerDetail& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline ContainerDetail& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interfaces that are associated with the job.</p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfaces() const{ return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    inline void SetNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }
    inline void SetNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }
    inline ContainerDetail& WithNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { SetNetworkInterfaces(value); return *this;}
    inline ContainerDetail& WithNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}
    inline ContainerDetail& AddNetworkInterfaces(const NetworkInterface& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }
    inline ContainerDetail& AddNetworkInterfaces(NetworkInterface&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type and amount of resources to assign to a container. The supported
     * resources include <code>GPU</code>, <code>MEMORY</code>, and
     * <code>VCPU</code>.</p>
     */
    inline const Aws::Vector<ResourceRequirement>& GetResourceRequirements() const{ return m_resourceRequirements; }
    inline bool ResourceRequirementsHasBeenSet() const { return m_resourceRequirementsHasBeenSet; }
    inline void SetResourceRequirements(const Aws::Vector<ResourceRequirement>& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = value; }
    inline void SetResourceRequirements(Aws::Vector<ResourceRequirement>&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = std::move(value); }
    inline ContainerDetail& WithResourceRequirements(const Aws::Vector<ResourceRequirement>& value) { SetResourceRequirements(value); return *this;}
    inline ContainerDetail& WithResourceRequirements(Aws::Vector<ResourceRequirement>&& value) { SetResourceRequirements(std::move(value)); return *this;}
    inline ContainerDetail& AddResourceRequirements(const ResourceRequirement& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(value); return *this; }
    inline ContainerDetail& AddResourceRequirements(ResourceRequirement&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Linux-specific modifications that are applied to the container, such as
     * details for device mappings.</p>
     */
    inline const LinuxParameters& GetLinuxParameters() const{ return m_linuxParameters; }
    inline bool LinuxParametersHasBeenSet() const { return m_linuxParametersHasBeenSet; }
    inline void SetLinuxParameters(const LinuxParameters& value) { m_linuxParametersHasBeenSet = true; m_linuxParameters = value; }
    inline void SetLinuxParameters(LinuxParameters&& value) { m_linuxParametersHasBeenSet = true; m_linuxParameters = std::move(value); }
    inline ContainerDetail& WithLinuxParameters(const LinuxParameters& value) { SetLinuxParameters(value); return *this;}
    inline ContainerDetail& WithLinuxParameters(LinuxParameters&& value) { SetLinuxParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log configuration specification for the container.</p> <p>This parameter
     * maps to <code>LogConfig</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. By default,
     * containers use the same logging driver that the Docker daemon uses. However, the
     * container might use a different logging driver than the Docker daemon by
     * specifying a log driver with this parameter in the container definition. To use
     * a different logging driver for a container, the log system must be configured
     * properly on the container instance. Or, alternatively, it must be configured on
     * a different log server for remote logging options. For more information on the
     * options for different supported log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers</a> in the Docker documentation.</p>  <p>Batch currently supports
     * a subset of the logging drivers available to the Docker daemon (shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-batch-jobdefinition-containerproperties-logconfiguration.html">LogConfiguration</a>
     * data type). Additional log drivers might be available in future releases of the
     * Amazon ECS container agent.</p>  <p>This parameter requires version 1.18
     * of the Docker Remote API or greater on your container instance. To check the
     * Docker Remote API version on your container instance, log in to your container
     * instance and run the following command: <code>sudo docker version | grep "Server
     * API version"</code> </p>  <p>The Amazon ECS container agent running on a
     * container instance must register the logging drivers available on that instance
     * with the <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment variable before
     * containers placed on that instance can use these log configuration options. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS container agent configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> 
     */
    inline const LogConfiguration& GetLogConfiguration() const{ return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    inline void SetLogConfiguration(const LogConfiguration& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = value; }
    inline void SetLogConfiguration(LogConfiguration&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::move(value); }
    inline ContainerDetail& WithLogConfiguration(const LogConfiguration& value) { SetLogConfiguration(value); return *this;}
    inline ContainerDetail& WithLogConfiguration(LogConfiguration&& value) { SetLogConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secrets to pass to the container. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/specifying-sensitive-data.html">Specifying
     * sensitive data</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const Aws::Vector<Secret>& GetSecrets() const{ return m_secrets; }
    inline bool SecretsHasBeenSet() const { return m_secretsHasBeenSet; }
    inline void SetSecrets(const Aws::Vector<Secret>& value) { m_secretsHasBeenSet = true; m_secrets = value; }
    inline void SetSecrets(Aws::Vector<Secret>&& value) { m_secretsHasBeenSet = true; m_secrets = std::move(value); }
    inline ContainerDetail& WithSecrets(const Aws::Vector<Secret>& value) { SetSecrets(value); return *this;}
    inline ContainerDetail& WithSecrets(Aws::Vector<Secret>&& value) { SetSecrets(std::move(value)); return *this;}
    inline ContainerDetail& AddSecrets(const Secret& value) { m_secretsHasBeenSet = true; m_secrets.push_back(value); return *this; }
    inline ContainerDetail& AddSecrets(Secret&& value) { m_secretsHasBeenSet = true; m_secrets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The network configuration for jobs that are running on Fargate resources.
     * Jobs that are running on Amazon EC2 resources must not specify this
     * parameter.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }
    inline ContainerDetail& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}
    inline ContainerDetail& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform configuration for jobs that are running on Fargate resources.
     * Jobs that are running on Amazon EC2 resources must not specify this
     * parameter.</p>
     */
    inline const FargatePlatformConfiguration& GetFargatePlatformConfiguration() const{ return m_fargatePlatformConfiguration; }
    inline bool FargatePlatformConfigurationHasBeenSet() const { return m_fargatePlatformConfigurationHasBeenSet; }
    inline void SetFargatePlatformConfiguration(const FargatePlatformConfiguration& value) { m_fargatePlatformConfigurationHasBeenSet = true; m_fargatePlatformConfiguration = value; }
    inline void SetFargatePlatformConfiguration(FargatePlatformConfiguration&& value) { m_fargatePlatformConfigurationHasBeenSet = true; m_fargatePlatformConfiguration = std::move(value); }
    inline ContainerDetail& WithFargatePlatformConfiguration(const FargatePlatformConfiguration& value) { SetFargatePlatformConfiguration(value); return *this;}
    inline ContainerDetail& WithFargatePlatformConfiguration(FargatePlatformConfiguration&& value) { SetFargatePlatformConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of ephemeral storage allocated for the task. This parameter is
     * used to expand the total amount of ephemeral storage available, beyond the
     * default amount, for tasks hosted on Fargate.</p>
     */
    inline const EphemeralStorage& GetEphemeralStorage() const{ return m_ephemeralStorage; }
    inline bool EphemeralStorageHasBeenSet() const { return m_ephemeralStorageHasBeenSet; }
    inline void SetEphemeralStorage(const EphemeralStorage& value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = value; }
    inline void SetEphemeralStorage(EphemeralStorage&& value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = std::move(value); }
    inline ContainerDetail& WithEphemeralStorage(const EphemeralStorage& value) { SetEphemeralStorage(value); return *this;}
    inline ContainerDetail& WithEphemeralStorage(EphemeralStorage&& value) { SetEphemeralStorage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents the compute environment architecture for Batch jobs
     * on Fargate.</p>
     */
    inline const RuntimePlatform& GetRuntimePlatform() const{ return m_runtimePlatform; }
    inline bool RuntimePlatformHasBeenSet() const { return m_runtimePlatformHasBeenSet; }
    inline void SetRuntimePlatform(const RuntimePlatform& value) { m_runtimePlatformHasBeenSet = true; m_runtimePlatform = value; }
    inline void SetRuntimePlatform(RuntimePlatform&& value) { m_runtimePlatformHasBeenSet = true; m_runtimePlatform = std::move(value); }
    inline ContainerDetail& WithRuntimePlatform(const RuntimePlatform& value) { SetRuntimePlatform(value); return *this;}
    inline ContainerDetail& WithRuntimePlatform(RuntimePlatform&& value) { SetRuntimePlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private repository authentication credentials to use.</p>
     */
    inline const RepositoryCredentials& GetRepositoryCredentials() const{ return m_repositoryCredentials; }
    inline bool RepositoryCredentialsHasBeenSet() const { return m_repositoryCredentialsHasBeenSet; }
    inline void SetRepositoryCredentials(const RepositoryCredentials& value) { m_repositoryCredentialsHasBeenSet = true; m_repositoryCredentials = value; }
    inline void SetRepositoryCredentials(RepositoryCredentials&& value) { m_repositoryCredentialsHasBeenSet = true; m_repositoryCredentials = std::move(value); }
    inline ContainerDetail& WithRepositoryCredentials(const RepositoryCredentials& value) { SetRepositoryCredentials(value); return *this;}
    inline ContainerDetail& WithRepositoryCredentials(RepositoryCredentials&& value) { SetRepositoryCredentials(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    int m_vcpus;
    bool m_vcpusHasBeenSet = false;

    int m_memory;
    bool m_memoryHasBeenSet = false;

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;

    Aws::String m_jobRoleArn;
    bool m_jobRoleArnHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::Vector<Volume> m_volumes;
    bool m_volumesHasBeenSet = false;

    Aws::Vector<KeyValuePair> m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::Vector<MountPoint> m_mountPoints;
    bool m_mountPointsHasBeenSet = false;

    bool m_readonlyRootFilesystem;
    bool m_readonlyRootFilesystemHasBeenSet = false;

    Aws::Vector<Ulimit> m_ulimits;
    bool m_ulimitsHasBeenSet = false;

    bool m_privileged;
    bool m_privilegedHasBeenSet = false;

    Aws::String m_user;
    bool m_userHasBeenSet = false;

    int m_exitCode;
    bool m_exitCodeHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_containerInstanceArn;
    bool m_containerInstanceArnHasBeenSet = false;

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet = false;

    Aws::String m_logStreamName;
    bool m_logStreamNameHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::Vector<NetworkInterface> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;

    Aws::Vector<ResourceRequirement> m_resourceRequirements;
    bool m_resourceRequirementsHasBeenSet = false;

    LinuxParameters m_linuxParameters;
    bool m_linuxParametersHasBeenSet = false;

    LogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    Aws::Vector<Secret> m_secrets;
    bool m_secretsHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    FargatePlatformConfiguration m_fargatePlatformConfiguration;
    bool m_fargatePlatformConfigurationHasBeenSet = false;

    EphemeralStorage m_ephemeralStorage;
    bool m_ephemeralStorageHasBeenSet = false;

    RuntimePlatform m_runtimePlatform;
    bool m_runtimePlatformHasBeenSet = false;

    RepositoryCredentials m_repositoryCredentials;
    bool m_repositoryCredentialsHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
