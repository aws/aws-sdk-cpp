/**
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
    AWS_BATCH_API ContainerDetail() = default;
    AWS_BATCH_API ContainerDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ContainerDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The image used to start the container.</p>
     */
    inline const Aws::String& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = Aws::String>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = Aws::String>
    ContainerDetail& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
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
    inline int GetVcpus() const { return m_vcpus; }
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
    inline int GetMemory() const { return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    inline void SetMemory(int value) { m_memoryHasBeenSet = true; m_memory = value; }
    inline ContainerDetail& WithMemory(int value) { SetMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command that's passed to the container.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const { return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    template<typename CommandT = Aws::Vector<Aws::String>>
    void SetCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command = std::forward<CommandT>(value); }
    template<typename CommandT = Aws::Vector<Aws::String>>
    ContainerDetail& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    template<typename CommandT = Aws::String>
    ContainerDetail& AddCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command.emplace_back(std::forward<CommandT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that's associated with the job when run.</p>
     */
    inline const Aws::String& GetJobRoleArn() const { return m_jobRoleArn; }
    inline bool JobRoleArnHasBeenSet() const { return m_jobRoleArnHasBeenSet; }
    template<typename JobRoleArnT = Aws::String>
    void SetJobRoleArn(JobRoleArnT&& value) { m_jobRoleArnHasBeenSet = true; m_jobRoleArn = std::forward<JobRoleArnT>(value); }
    template<typename JobRoleArnT = Aws::String>
    ContainerDetail& WithJobRoleArn(JobRoleArnT&& value) { SetJobRoleArn(std::forward<JobRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    ContainerDetail& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of volumes that are associated with the job.</p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const { return m_volumes; }
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }
    template<typename VolumesT = Aws::Vector<Volume>>
    void SetVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes = std::forward<VolumesT>(value); }
    template<typename VolumesT = Aws::Vector<Volume>>
    ContainerDetail& WithVolumes(VolumesT&& value) { SetVolumes(std::forward<VolumesT>(value)); return *this;}
    template<typename VolumesT = Volume>
    ContainerDetail& AddVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes.emplace_back(std::forward<VolumesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The environment variables to pass to a container.</p>  <p>Environment
     * variables cannot start with "<code>AWS_BATCH</code>". This naming convention is
     * reserved for variables that Batch sets.</p> 
     */
    inline const Aws::Vector<KeyValuePair>& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Aws::Vector<KeyValuePair>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Vector<KeyValuePair>>
    ContainerDetail& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentT = KeyValuePair>
    ContainerDetail& AddEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment.emplace_back(std::forward<EnvironmentT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The mount points for data volumes in your container.</p>
     */
    inline const Aws::Vector<MountPoint>& GetMountPoints() const { return m_mountPoints; }
    inline bool MountPointsHasBeenSet() const { return m_mountPointsHasBeenSet; }
    template<typename MountPointsT = Aws::Vector<MountPoint>>
    void SetMountPoints(MountPointsT&& value) { m_mountPointsHasBeenSet = true; m_mountPoints = std::forward<MountPointsT>(value); }
    template<typename MountPointsT = Aws::Vector<MountPoint>>
    ContainerDetail& WithMountPoints(MountPointsT&& value) { SetMountPoints(std::forward<MountPointsT>(value)); return *this;}
    template<typename MountPointsT = MountPoint>
    ContainerDetail& AddMountPoints(MountPointsT&& value) { m_mountPointsHasBeenSet = true; m_mountPoints.emplace_back(std::forward<MountPointsT>(value)); return *this; }
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
    inline bool GetReadonlyRootFilesystem() const { return m_readonlyRootFilesystem; }
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
    inline const Aws::Vector<Ulimit>& GetUlimits() const { return m_ulimits; }
    inline bool UlimitsHasBeenSet() const { return m_ulimitsHasBeenSet; }
    template<typename UlimitsT = Aws::Vector<Ulimit>>
    void SetUlimits(UlimitsT&& value) { m_ulimitsHasBeenSet = true; m_ulimits = std::forward<UlimitsT>(value); }
    template<typename UlimitsT = Aws::Vector<Ulimit>>
    ContainerDetail& WithUlimits(UlimitsT&& value) { SetUlimits(std::forward<UlimitsT>(value)); return *this;}
    template<typename UlimitsT = Ulimit>
    ContainerDetail& AddUlimits(UlimitsT&& value) { m_ulimitsHasBeenSet = true; m_ulimits.emplace_back(std::forward<UlimitsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When this parameter is true, the container is given elevated permissions on
     * the host container instance (similar to the <code>root</code> user). The default
     * value is <code>false</code>.</p>  <p>This parameter isn't applicable to
     * jobs that are running on Fargate resources and shouldn't be provided, or
     * specified as <code>false</code>.</p> 
     */
    inline bool GetPrivileged() const { return m_privileged; }
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
    inline const Aws::String& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = Aws::String>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = Aws::String>
    ContainerDetail& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exit code returned upon completion.</p>
     */
    inline int GetExitCode() const { return m_exitCode; }
    inline bool ExitCodeHasBeenSet() const { return m_exitCodeHasBeenSet; }
    inline void SetExitCode(int value) { m_exitCodeHasBeenSet = true; m_exitCode = value; }
    inline ContainerDetail& WithExitCode(int value) { SetExitCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details for a running or stopped container.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    ContainerDetail& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the container instance that the container
     * is running on.</p>
     */
    inline const Aws::String& GetContainerInstanceArn() const { return m_containerInstanceArn; }
    inline bool ContainerInstanceArnHasBeenSet() const { return m_containerInstanceArnHasBeenSet; }
    template<typename ContainerInstanceArnT = Aws::String>
    void SetContainerInstanceArn(ContainerInstanceArnT&& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = std::forward<ContainerInstanceArnT>(value); }
    template<typename ContainerInstanceArnT = Aws::String>
    ContainerDetail& WithContainerInstanceArn(ContainerInstanceArnT&& value) { SetContainerInstanceArn(std::forward<ContainerInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that's associated with
     * the container job. Each container attempt receives a task ARN when they reach
     * the <code>STARTING</code> status.</p>
     */
    inline const Aws::String& GetTaskArn() const { return m_taskArn; }
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }
    template<typename TaskArnT = Aws::String>
    void SetTaskArn(TaskArnT&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::forward<TaskArnT>(value); }
    template<typename TaskArnT = Aws::String>
    ContainerDetail& WithTaskArn(TaskArnT&& value) { SetTaskArn(std::forward<TaskArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon CloudWatch Logs log stream that's associated with the
     * container. The log group for Batch jobs is <code>/aws/batch/job</code>. Each
     * container attempt receives a log stream name when they reach the
     * <code>RUNNING</code> status.</p>
     */
    inline const Aws::String& GetLogStreamName() const { return m_logStreamName; }
    inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }
    template<typename LogStreamNameT = Aws::String>
    void SetLogStreamName(LogStreamNameT&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = std::forward<LogStreamNameT>(value); }
    template<typename LogStreamNameT = Aws::String>
    ContainerDetail& WithLogStreamName(LogStreamNameT&& value) { SetLogStreamName(std::forward<LogStreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of the underlying host infrastructure of a multi-node
     * parallel job.</p>  <p>This parameter isn't applicable to jobs that are
     * running on Fargate resources.</p> 
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    ContainerDetail& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interfaces that are associated with the job.</p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfaces() const { return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    template<typename NetworkInterfacesT = Aws::Vector<NetworkInterface>>
    void SetNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::forward<NetworkInterfacesT>(value); }
    template<typename NetworkInterfacesT = Aws::Vector<NetworkInterface>>
    ContainerDetail& WithNetworkInterfaces(NetworkInterfacesT&& value) { SetNetworkInterfaces(std::forward<NetworkInterfacesT>(value)); return *this;}
    template<typename NetworkInterfacesT = NetworkInterface>
    ContainerDetail& AddNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.emplace_back(std::forward<NetworkInterfacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type and amount of resources to assign to a container. The supported
     * resources include <code>GPU</code>, <code>MEMORY</code>, and
     * <code>VCPU</code>.</p>
     */
    inline const Aws::Vector<ResourceRequirement>& GetResourceRequirements() const { return m_resourceRequirements; }
    inline bool ResourceRequirementsHasBeenSet() const { return m_resourceRequirementsHasBeenSet; }
    template<typename ResourceRequirementsT = Aws::Vector<ResourceRequirement>>
    void SetResourceRequirements(ResourceRequirementsT&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = std::forward<ResourceRequirementsT>(value); }
    template<typename ResourceRequirementsT = Aws::Vector<ResourceRequirement>>
    ContainerDetail& WithResourceRequirements(ResourceRequirementsT&& value) { SetResourceRequirements(std::forward<ResourceRequirementsT>(value)); return *this;}
    template<typename ResourceRequirementsT = ResourceRequirement>
    ContainerDetail& AddResourceRequirements(ResourceRequirementsT&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.emplace_back(std::forward<ResourceRequirementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Linux-specific modifications that are applied to the container, such as
     * details for device mappings.</p>
     */
    inline const LinuxParameters& GetLinuxParameters() const { return m_linuxParameters; }
    inline bool LinuxParametersHasBeenSet() const { return m_linuxParametersHasBeenSet; }
    template<typename LinuxParametersT = LinuxParameters>
    void SetLinuxParameters(LinuxParametersT&& value) { m_linuxParametersHasBeenSet = true; m_linuxParameters = std::forward<LinuxParametersT>(value); }
    template<typename LinuxParametersT = LinuxParameters>
    ContainerDetail& WithLinuxParameters(LinuxParametersT&& value) { SetLinuxParameters(std::forward<LinuxParametersT>(value)); return *this;}
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
    inline const LogConfiguration& GetLogConfiguration() const { return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    template<typename LogConfigurationT = LogConfiguration>
    void SetLogConfiguration(LogConfigurationT&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::forward<LogConfigurationT>(value); }
    template<typename LogConfigurationT = LogConfiguration>
    ContainerDetail& WithLogConfiguration(LogConfigurationT&& value) { SetLogConfiguration(std::forward<LogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secrets to pass to the container. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/specifying-sensitive-data.html">Specifying
     * sensitive data</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const Aws::Vector<Secret>& GetSecrets() const { return m_secrets; }
    inline bool SecretsHasBeenSet() const { return m_secretsHasBeenSet; }
    template<typename SecretsT = Aws::Vector<Secret>>
    void SetSecrets(SecretsT&& value) { m_secretsHasBeenSet = true; m_secrets = std::forward<SecretsT>(value); }
    template<typename SecretsT = Aws::Vector<Secret>>
    ContainerDetail& WithSecrets(SecretsT&& value) { SetSecrets(std::forward<SecretsT>(value)); return *this;}
    template<typename SecretsT = Secret>
    ContainerDetail& AddSecrets(SecretsT&& value) { m_secretsHasBeenSet = true; m_secrets.emplace_back(std::forward<SecretsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The network configuration for jobs that are running on Fargate resources.
     * Jobs that are running on Amazon EC2 resources must not specify this
     * parameter.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    void SetNetworkConfiguration(NetworkConfigurationT&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::forward<NetworkConfigurationT>(value); }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    ContainerDetail& WithNetworkConfiguration(NetworkConfigurationT&& value) { SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform configuration for jobs that are running on Fargate resources.
     * Jobs that are running on Amazon EC2 resources must not specify this
     * parameter.</p>
     */
    inline const FargatePlatformConfiguration& GetFargatePlatformConfiguration() const { return m_fargatePlatformConfiguration; }
    inline bool FargatePlatformConfigurationHasBeenSet() const { return m_fargatePlatformConfigurationHasBeenSet; }
    template<typename FargatePlatformConfigurationT = FargatePlatformConfiguration>
    void SetFargatePlatformConfiguration(FargatePlatformConfigurationT&& value) { m_fargatePlatformConfigurationHasBeenSet = true; m_fargatePlatformConfiguration = std::forward<FargatePlatformConfigurationT>(value); }
    template<typename FargatePlatformConfigurationT = FargatePlatformConfiguration>
    ContainerDetail& WithFargatePlatformConfiguration(FargatePlatformConfigurationT&& value) { SetFargatePlatformConfiguration(std::forward<FargatePlatformConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of ephemeral storage allocated for the task. This parameter is
     * used to expand the total amount of ephemeral storage available, beyond the
     * default amount, for tasks hosted on Fargate.</p>
     */
    inline const EphemeralStorage& GetEphemeralStorage() const { return m_ephemeralStorage; }
    inline bool EphemeralStorageHasBeenSet() const { return m_ephemeralStorageHasBeenSet; }
    template<typename EphemeralStorageT = EphemeralStorage>
    void SetEphemeralStorage(EphemeralStorageT&& value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = std::forward<EphemeralStorageT>(value); }
    template<typename EphemeralStorageT = EphemeralStorage>
    ContainerDetail& WithEphemeralStorage(EphemeralStorageT&& value) { SetEphemeralStorage(std::forward<EphemeralStorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents the compute environment architecture for Batch jobs
     * on Fargate.</p>
     */
    inline const RuntimePlatform& GetRuntimePlatform() const { return m_runtimePlatform; }
    inline bool RuntimePlatformHasBeenSet() const { return m_runtimePlatformHasBeenSet; }
    template<typename RuntimePlatformT = RuntimePlatform>
    void SetRuntimePlatform(RuntimePlatformT&& value) { m_runtimePlatformHasBeenSet = true; m_runtimePlatform = std::forward<RuntimePlatformT>(value); }
    template<typename RuntimePlatformT = RuntimePlatform>
    ContainerDetail& WithRuntimePlatform(RuntimePlatformT&& value) { SetRuntimePlatform(std::forward<RuntimePlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private repository authentication credentials to use.</p>
     */
    inline const RepositoryCredentials& GetRepositoryCredentials() const { return m_repositoryCredentials; }
    inline bool RepositoryCredentialsHasBeenSet() const { return m_repositoryCredentialsHasBeenSet; }
    template<typename RepositoryCredentialsT = RepositoryCredentials>
    void SetRepositoryCredentials(RepositoryCredentialsT&& value) { m_repositoryCredentialsHasBeenSet = true; m_repositoryCredentials = std::forward<RepositoryCredentialsT>(value); }
    template<typename RepositoryCredentialsT = RepositoryCredentials>
    ContainerDetail& WithRepositoryCredentials(RepositoryCredentialsT&& value) { SetRepositoryCredentials(std::forward<RepositoryCredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether execute command functionality is turned on for this task.
     * If <code>true</code>, execute command functionality is turned on all the
     * containers in the task.</p>
     */
    inline bool GetEnableExecuteCommand() const { return m_enableExecuteCommand; }
    inline bool EnableExecuteCommandHasBeenSet() const { return m_enableExecuteCommandHasBeenSet; }
    inline void SetEnableExecuteCommand(bool value) { m_enableExecuteCommandHasBeenSet = true; m_enableExecuteCommand = value; }
    inline ContainerDetail& WithEnableExecuteCommand(bool value) { SetEnableExecuteCommand(value); return *this;}
    ///@}
  private:

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    int m_vcpus{0};
    bool m_vcpusHasBeenSet = false;

    int m_memory{0};
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

    bool m_readonlyRootFilesystem{false};
    bool m_readonlyRootFilesystemHasBeenSet = false;

    Aws::Vector<Ulimit> m_ulimits;
    bool m_ulimitsHasBeenSet = false;

    bool m_privileged{false};
    bool m_privilegedHasBeenSet = false;

    Aws::String m_user;
    bool m_userHasBeenSet = false;

    int m_exitCode{0};
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

    bool m_enableExecuteCommand{false};
    bool m_enableExecuteCommandHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
