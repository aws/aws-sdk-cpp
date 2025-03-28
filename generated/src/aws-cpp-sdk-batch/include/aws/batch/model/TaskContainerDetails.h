/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/FirelensConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/LinuxParameters.h>
#include <aws/batch/model/LogConfiguration.h>
#include <aws/batch/model/RepositoryCredentials.h>
#include <aws/batch/model/TaskContainerDependency.h>
#include <aws/batch/model/KeyValuePair.h>
#include <aws/batch/model/MountPoint.h>
#include <aws/batch/model/ResourceRequirement.h>
#include <aws/batch/model/Secret.h>
#include <aws/batch/model/Ulimit.h>
#include <aws/batch/model/NetworkInterface.h>
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
   * <p>The details for the container in this task attempt.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/TaskContainerDetails">AWS
   * API Reference</a></p>
   */
  class TaskContainerDetails
  {
  public:
    AWS_BATCH_API TaskContainerDetails() = default;
    AWS_BATCH_API TaskContainerDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API TaskContainerDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The command that's passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const { return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    template<typename CommandT = Aws::Vector<Aws::String>>
    void SetCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command = std::forward<CommandT>(value); }
    template<typename CommandT = Aws::Vector<Aws::String>>
    TaskContainerDetails& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    template<typename CommandT = Aws::String>
    TaskContainerDetails& AddCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command.emplace_back(std::forward<CommandT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of containers that this container depends on.</p>
     */
    inline const Aws::Vector<TaskContainerDependency>& GetDependsOn() const { return m_dependsOn; }
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }
    template<typename DependsOnT = Aws::Vector<TaskContainerDependency>>
    void SetDependsOn(DependsOnT&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::forward<DependsOnT>(value); }
    template<typename DependsOnT = Aws::Vector<TaskContainerDependency>>
    TaskContainerDetails& WithDependsOn(DependsOnT&& value) { SetDependsOn(std::forward<DependsOnT>(value)); return *this;}
    template<typename DependsOnT = TaskContainerDependency>
    TaskContainerDetails& AddDependsOn(DependsOnT&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.emplace_back(std::forward<DependsOnT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     *  <p>We don't recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p> 
     */
    inline const Aws::Vector<KeyValuePair>& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Aws::Vector<KeyValuePair>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Vector<KeyValuePair>>
    TaskContainerDetails& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentT = KeyValuePair>
    TaskContainerDetails& AddEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment.emplace_back(std::forward<EnvironmentT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the essential parameter of a container is marked as <code>true</code>, and
     * that container fails or stops for any reason, all other containers that are part
     * of the task are stopped. If the <code>essential</code> parameter of a container
     * is marked as false, its failure doesn't affect the rest of the containers in a
     * task. If this parameter is omitted, a container is assumed to be essential.</p>
     * <p>All jobs must have at least one essential container. If you have an
     * application that's composed of multiple containers, group containers that are
     * used for a common purpose into components, and separate the different components
     * into multiple task definitions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/application_architecture.html">Application
     * Architecture</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool GetEssential() const { return m_essential; }
    inline bool EssentialHasBeenSet() const { return m_essentialHasBeenSet; }
    inline void SetEssential(bool value) { m_essentialHasBeenSet = true; m_essential = value; }
    inline TaskContainerDetails& WithEssential(bool value) { SetEssential(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The FireLens configuration for the container. This is used to specify and
     * configure a log router for container logs. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_firelens.html">Custom
     * log</a> routing in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const FirelensConfiguration& GetFirelensConfiguration() const { return m_firelensConfiguration; }
    inline bool FirelensConfigurationHasBeenSet() const { return m_firelensConfigurationHasBeenSet; }
    template<typename FirelensConfigurationT = FirelensConfiguration>
    void SetFirelensConfiguration(FirelensConfigurationT&& value) { m_firelensConfigurationHasBeenSet = true; m_firelensConfiguration = std::forward<FirelensConfigurationT>(value); }
    template<typename FirelensConfigurationT = FirelensConfiguration>
    TaskContainerDetails& WithFirelensConfiguration(FirelensConfigurationT&& value) { SetFirelensConfiguration(std::forward<FirelensConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. By default, images in the Docker Hub registry are available.
     * Other repositories are specified with either
     * <code>repository-url/image:tag</code> or
     * <code>repository-url/image@digest</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, underscores, colons, periods, forward slashes, and
     * number signs are allowed. This parameter maps to <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of the <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">
     * <i>docker run</i> </a>.</p>
     */
    inline const Aws::String& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = Aws::String>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = Aws::String>
    TaskContainerDetails& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Linux-specific modifications that are applied to the container, such as Linux
     * kernel capabilities. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_KernelCapabilities.html">KernelCapabilities</a>.</p>
     *  <p>This parameter is not supported for Windows containers.</p> 
     */
    inline const LinuxParameters& GetLinuxParameters() const { return m_linuxParameters; }
    inline bool LinuxParametersHasBeenSet() const { return m_linuxParametersHasBeenSet; }
    template<typename LinuxParametersT = LinuxParameters>
    void SetLinuxParameters(LinuxParametersT&& value) { m_linuxParametersHasBeenSet = true; m_linuxParameters = std::forward<LinuxParametersT>(value); }
    template<typename LinuxParametersT = LinuxParameters>
    TaskContainerDetails& WithLinuxParameters(LinuxParametersT&& value) { SetLinuxParameters(std::forward<LinuxParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log configuration specification for the container.</p> <p>This parameter
     * maps to <code>LogConfig</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>By default, containers use the same logging driver that the
     * Docker daemon uses. However the container can use a different logging driver
     * than the Docker daemon by specifying a log driver with this parameter in the
     * container definition. To use a different logging driver for a container, the log
     * system must be configured properly on the container instance (or on a different
     * log server for remote logging options). For more information about the options
     * for different supported log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers </a> in the <i>Docker documentation</i>.</p>  <p>Amazon ECS
     * currently supports a subset of the logging drivers available to the Docker
     * daemon (shown in the <code>LogConfiguration</code> data type). Additional log
     * drivers may be available in future releases of the Amazon ECS container
     * agent.</p>  <p>This parameter requires version 1.18 of the Docker Remote
     * API or greater on your container instance. To check the Docker Remote API
     * version on your container instance, log in to your container instance and run
     * the following command: sudo docker version <code>--format
     * '{{.Server.APIVersion}}'</code> </p>  <p>The Amazon ECS container agent
     * running on a container instance must register the logging drivers available on
     * that instance with the <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment
     * variable before containers placed on that instance can use these log
     * configuration options. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS container agent configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> 
     */
    inline const LogConfiguration& GetLogConfiguration() const { return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    template<typename LogConfigurationT = LogConfiguration>
    void SetLogConfiguration(LogConfigurationT&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::forward<LogConfigurationT>(value); }
    template<typename LogConfigurationT = LogConfiguration>
    TaskContainerDetails& WithLogConfiguration(LogConfigurationT&& value) { SetLogConfiguration(std::forward<LogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mount points for data volumes in your container.</p> <p>This parameter
     * maps to <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <a href="">--volume</a> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>Windows containers can mount whole directories on the same drive
     * as <code>$env:ProgramData</code>. Windows containers can't mount directories on
     * a different drive, and mount point can't be across drives.</p>
     */
    inline const Aws::Vector<MountPoint>& GetMountPoints() const { return m_mountPoints; }
    inline bool MountPointsHasBeenSet() const { return m_mountPointsHasBeenSet; }
    template<typename MountPointsT = Aws::Vector<MountPoint>>
    void SetMountPoints(MountPointsT&& value) { m_mountPointsHasBeenSet = true; m_mountPoints = std::forward<MountPointsT>(value); }
    template<typename MountPointsT = Aws::Vector<MountPoint>>
    TaskContainerDetails& WithMountPoints(MountPointsT&& value) { SetMountPoints(std::forward<MountPointsT>(value)); return *this;}
    template<typename MountPointsT = MountPoint>
    TaskContainerDetails& AddMountPoints(MountPointsT&& value) { m_mountPointsHasBeenSet = true; m_mountPoints.emplace_back(std::forward<MountPointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of a container.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TaskContainerDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When this parameter is <code>true</code>, the container is given elevated
     * privileges on the host container instance (similar to the <code>root</code>
     * user). This parameter maps to <code>Privileged</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--privileged</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows containers or
     * tasks run on Fargate.</p> 
     */
    inline bool GetPrivileged() const { return m_privileged; }
    inline bool PrivilegedHasBeenSet() const { return m_privilegedHasBeenSet; }
    inline void SetPrivileged(bool value) { m_privilegedHasBeenSet = true; m_privileged = value; }
    inline TaskContainerDetails& WithPrivileged(bool value) { SetPrivileged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When this parameter is true, the container is given read-only access to its
     * root file system. This parameter maps to <code>ReadonlyRootfs</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--read-only</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline bool GetReadonlyRootFilesystem() const { return m_readonlyRootFilesystem; }
    inline bool ReadonlyRootFilesystemHasBeenSet() const { return m_readonlyRootFilesystemHasBeenSet; }
    inline void SetReadonlyRootFilesystem(bool value) { m_readonlyRootFilesystemHasBeenSet = true; m_readonlyRootFilesystem = value; }
    inline TaskContainerDetails& WithReadonlyRootFilesystem(bool value) { SetReadonlyRootFilesystem(value); return *this;}
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
    TaskContainerDetails& WithRepositoryCredentials(RepositoryCredentialsT&& value) { SetRepositoryCredentials(std::forward<RepositoryCredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type and amount of a resource to assign to a container. The only
     * supported resource is a GPU.</p>
     */
    inline const Aws::Vector<ResourceRequirement>& GetResourceRequirements() const { return m_resourceRequirements; }
    inline bool ResourceRequirementsHasBeenSet() const { return m_resourceRequirementsHasBeenSet; }
    template<typename ResourceRequirementsT = Aws::Vector<ResourceRequirement>>
    void SetResourceRequirements(ResourceRequirementsT&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = std::forward<ResourceRequirementsT>(value); }
    template<typename ResourceRequirementsT = Aws::Vector<ResourceRequirement>>
    TaskContainerDetails& WithResourceRequirements(ResourceRequirementsT&& value) { SetResourceRequirements(std::forward<ResourceRequirementsT>(value)); return *this;}
    template<typename ResourceRequirementsT = ResourceRequirement>
    TaskContainerDetails& AddResourceRequirements(ResourceRequirementsT&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.emplace_back(std::forward<ResourceRequirementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The secrets to pass to the container. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * Sensitive Data</a> in the Amazon Elastic Container Service Developer Guide.</p>
     */
    inline const Aws::Vector<Secret>& GetSecrets() const { return m_secrets; }
    inline bool SecretsHasBeenSet() const { return m_secretsHasBeenSet; }
    template<typename SecretsT = Aws::Vector<Secret>>
    void SetSecrets(SecretsT&& value) { m_secretsHasBeenSet = true; m_secrets = std::forward<SecretsT>(value); }
    template<typename SecretsT = Aws::Vector<Secret>>
    TaskContainerDetails& WithSecrets(SecretsT&& value) { SetSecrets(std::forward<SecretsT>(value)); return *this;}
    template<typename SecretsT = Secret>
    TaskContainerDetails& AddSecrets(SecretsT&& value) { m_secretsHasBeenSet = true; m_secrets.emplace_back(std::forward<SecretsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>ulimits</code> to set in the container. If a
     * <code>ulimit</code> value is specified in a task definition, it overrides the
     * default values set by Docker. This parameter maps to <code>Ulimits</code> in the
     * <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>Amazon ECS tasks hosted on Fargate use the default resource
     * limit values set by the operating system with the exception of the nofile
     * resource limit parameter which Fargate overrides. The <code>nofile</code>
     * resource limit sets a restriction on the number of open files that a container
     * can use. The default <code>nofile</code> soft limit is <code>1024</code> and the
     * default hard limit is <code>65535</code>.</p> <p>This parameter requires version
     * 1.18 of the Docker Remote API or greater on your container instance. To check
     * the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: sudo docker version
     * <code>--format '{{.Server.APIVersion}}'</code> </p>  <p>This parameter is
     * not supported for Windows containers.</p> 
     */
    inline const Aws::Vector<Ulimit>& GetUlimits() const { return m_ulimits; }
    inline bool UlimitsHasBeenSet() const { return m_ulimitsHasBeenSet; }
    template<typename UlimitsT = Aws::Vector<Ulimit>>
    void SetUlimits(UlimitsT&& value) { m_ulimitsHasBeenSet = true; m_ulimits = std::forward<UlimitsT>(value); }
    template<typename UlimitsT = Aws::Vector<Ulimit>>
    TaskContainerDetails& WithUlimits(UlimitsT&& value) { SetUlimits(std::forward<UlimitsT>(value)); return *this;}
    template<typename UlimitsT = Ulimit>
    TaskContainerDetails& AddUlimits(UlimitsT&& value) { m_ulimitsHasBeenSet = true; m_ulimits.emplace_back(std::forward<UlimitsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user to use inside the container. This parameter maps to User in the
     * Create a container section of the Docker Remote API and the --user option to
     * docker run.</p>  <p>When running tasks using the <code>host</code> network
     * mode, don't run containers using the <code>root user (UID 0)</code>. We
     * recommend using a non-root user for better security.</p>  <p>You can
     * specify the <code>user</code> using the following formats. If specifying a UID
     * or GID, you must specify it as a positive integer.</p> <ul> <li> <p>
     * <code>user</code> </p> </li> <li> <p> <code>user:group</code> </p> </li> <li>
     * <p> <code>uid</code> </p> </li> <li> <p> <code>uid:gid</code> </p> </li> <li>
     * <p> <code>user:gi</code> </p> </li> <li> <p> <code>uid:group</code> </p> </li>
     * <li> <p> <code/> </p> </li> </ul>  <p>This parameter is not supported for
     * Windows containers.</p> 
     */
    inline const Aws::String& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = Aws::String>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = Aws::String>
    TaskContainerDetails& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exit code returned upon completion.</p>
     */
    inline int GetExitCode() const { return m_exitCode; }
    inline bool ExitCodeHasBeenSet() const { return m_exitCodeHasBeenSet; }
    inline void SetExitCode(int value) { m_exitCodeHasBeenSet = true; m_exitCode = value; }
    inline TaskContainerDetails& WithExitCode(int value) { SetExitCode(value); return *this;}
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
    TaskContainerDetails& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the CloudWatch Logs log stream that's associated with the
     * container. The log group for Batch jobs is /aws/batch/job. Each container
     * attempt receives a log stream name when they reach the <code>RUNNING</code>
     * status. </p>
     */
    inline const Aws::String& GetLogStreamName() const { return m_logStreamName; }
    inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }
    template<typename LogStreamNameT = Aws::String>
    void SetLogStreamName(LogStreamNameT&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = std::forward<LogStreamNameT>(value); }
    template<typename LogStreamNameT = Aws::String>
    TaskContainerDetails& WithLogStreamName(LogStreamNameT&& value) { SetLogStreamName(std::forward<LogStreamNameT>(value)); return *this;}
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
    TaskContainerDetails& WithNetworkInterfaces(NetworkInterfacesT&& value) { SetNetworkInterfaces(std::forward<NetworkInterfacesT>(value)); return *this;}
    template<typename NetworkInterfacesT = NetworkInterface>
    TaskContainerDetails& AddNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.emplace_back(std::forward<NetworkInterfacesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;

    Aws::Vector<TaskContainerDependency> m_dependsOn;
    bool m_dependsOnHasBeenSet = false;

    Aws::Vector<KeyValuePair> m_environment;
    bool m_environmentHasBeenSet = false;

    bool m_essential{false};
    bool m_essentialHasBeenSet = false;

    FirelensConfiguration m_firelensConfiguration;
    bool m_firelensConfigurationHasBeenSet = false;

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    LinuxParameters m_linuxParameters;
    bool m_linuxParametersHasBeenSet = false;

    LogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    Aws::Vector<MountPoint> m_mountPoints;
    bool m_mountPointsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_privileged{false};
    bool m_privilegedHasBeenSet = false;

    bool m_readonlyRootFilesystem{false};
    bool m_readonlyRootFilesystemHasBeenSet = false;

    RepositoryCredentials m_repositoryCredentials;
    bool m_repositoryCredentialsHasBeenSet = false;

    Aws::Vector<ResourceRequirement> m_resourceRequirements;
    bool m_resourceRequirementsHasBeenSet = false;

    Aws::Vector<Secret> m_secrets;
    bool m_secretsHasBeenSet = false;

    Aws::Vector<Ulimit> m_ulimits;
    bool m_ulimitsHasBeenSet = false;

    Aws::String m_user;
    bool m_userHasBeenSet = false;

    int m_exitCode{0};
    bool m_exitCodeHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_logStreamName;
    bool m_logStreamNameHasBeenSet = false;

    Aws::Vector<NetworkInterface> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
