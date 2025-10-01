/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/RepositoryCredentials.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/ContainerRestartPolicy.h>
#include <aws/ecs/model/LinuxParameters.h>
#include <aws/ecs/model/VersionConsistency.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ecs/model/LogConfiguration.h>
#include <aws/ecs/model/HealthCheck.h>
#include <aws/ecs/model/FirelensConfiguration.h>
#include <aws/ecs/model/PortMapping.h>
#include <aws/ecs/model/KeyValuePair.h>
#include <aws/ecs/model/EnvironmentFile.h>
#include <aws/ecs/model/MountPoint.h>
#include <aws/ecs/model/VolumeFrom.h>
#include <aws/ecs/model/Secret.h>
#include <aws/ecs/model/ContainerDependency.h>
#include <aws/ecs/model/HostEntry.h>
#include <aws/ecs/model/Ulimit.h>
#include <aws/ecs/model/SystemControl.h>
#include <aws/ecs/model/ResourceRequirement.h>
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
   * <p>Container definitions are used in task definitions to describe the different
   * containers that are launched as part of a task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ContainerDefinition">AWS
   * API Reference</a></p>
   */
  class ContainerDefinition
  {
  public:
    AWS_ECS_API ContainerDefinition() = default;
    AWS_ECS_API ContainerDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ContainerDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a container. If you're linking multiple containers together in a
     * task definition, the <code>name</code> of one container can be entered in the
     * <code>links</code> of another container to connect the containers. Up to 255
     * letters (uppercase and lowercase), numbers, underscores, and hyphens are
     * allowed. This parameter maps to <code>name</code> in the docker container create
     * command and the <code>--name</code> option to docker run. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ContainerDefinition& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. By default, images in the Docker Hub registry are available.
     * Other repositories are specified with either <code>
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code> or <code>
     * <i>repository-url</i>/<i>image</i>@<i>digest</i> </code>. For images using tags
     * (repository-url/image:tag), up to 255 characters total are allowed, including
     * letters (uppercase and lowercase), numbers, hyphens, underscores, colons,
     * periods, forward slashes, and number signs (#). For images using digests
     * (repository-url/image@digest), the 255 character limit applies only to the
     * repository URL and image name (everything before the @ sign). The only supported
     * hash function is sha256, and the hash value after sha256: must be exactly 64
     * characters (only letters A-F, a-f, and numbers 0-9 are allowed). This parameter
     * maps to <code>Image</code> in the docker container create command and the
     * <code>IMAGE</code> parameter of docker run.</p> <ul> <li> <p>When a new task
     * starts, the Amazon ECS container agent pulls the latest version of the specified
     * image and tag for the container to use. However, subsequent updates to a
     * repository image aren't propagated to already running tasks.</p> </li> <li>
     * <p>Images in Amazon ECR repositories can be specified by either using the full
     * <code>registry/repository:tag</code> or <code>registry/repository@digest</code>.
     * For example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;:latest</code>
     * or
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;@sha256:94afd1f2e64d908bc90dbca0035a5b567EXAMPLE</code>.
     * </p> </li> <li> <p>Images in official repositories on Docker Hub use a single
     * name (for example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li>
     * <p>Images in other repositories on Docker Hub are qualified with an organization
     * name (for example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li>
     * <p>Images in other online repositories are qualified further by a domain name
     * (for example, <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
     */
    inline const Aws::String& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = Aws::String>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = Aws::String>
    ContainerDefinition& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
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
    ContainerDefinition& WithRepositoryCredentials(RepositoryCredentialsT&& value) { SetRepositoryCredentials(std::forward<RepositoryCredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of <code>cpu</code> units reserved for the container. This
     * parameter maps to <code>CpuShares</code> in the docker container create
     * commandand the <code>--cpu-shares</code> option to docker run.</p> <p>This field
     * is optional for tasks using the Fargate launch type, and the only requirement is
     * that the total amount of CPU reserved for all containers within a task be lower
     * than the task-level <code>cpu</code> value.</p>  <p>You can determine the
     * number of CPU units that are available per EC2 instance type by multiplying the
     * vCPUs listed for that instance type on the <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instances</a> detail
     * page by 1,024.</p>  <p>Linux containers share unallocated CPU units with
     * other containers on the container instance with the same ratio as their
     * allocated amount. For example, if you run a single-container task on a
     * single-core instance type with 512 CPU units specified for that container, and
     * that's the only task running on the container instance, that container could use
     * the full 1,024 CPU unit share at any given time. However, if you launched
     * another copy of the same task on that container instance, each task is
     * guaranteed a minimum of 512 CPU units when needed. Moreover, each container
     * could float to higher CPU usage if the other container was not using it. If both
     * tasks were 100% active all of the time, they would be limited to 512 CPU
     * units.</p> <p>On Linux container instances, the Docker daemon on the container
     * instance uses the CPU value to calculate the relative CPU share ratios for
     * running containers. The minimum valid CPU share value that the Linux kernel
     * allows is 2, and the maximum valid CPU share value that the Linux kernel allows
     * is 262144. However, the CPU parameter isn't required, and you can use CPU values
     * below 2 or above 262144 in your container definitions. For CPU values below 2
     * (including null) or above 262144, the behavior varies based on your Amazon ECS
     * container agent version:</p> <ul> <li> <p> <b>Agent versions less than or equal
     * to 1.1.0:</b> Null and zero CPU values are passed to Docker as 0, which Docker
     * then converts to 1,024 CPU shares. CPU values of 1 are passed to Docker as 1,
     * which the Linux kernel converts to two CPU shares.</p> </li> <li> <p> <b>Agent
     * versions greater than or equal to 1.2.0:</b> Null, zero, and CPU values of 1 are
     * passed to Docker as 2.</p> </li> <li> <p> <b>Agent versions greater than or
     * equal to 1.84.0:</b> CPU values greater than 256 vCPU are passed to Docker as
     * 256, which is equivalent to 262144 CPU shares.</p> </li> </ul> <p>On Windows
     * container instances, the CPU limit is enforced as an absolute limit, or a quota.
     * Windows containers only have access to the specified amount of CPU that's
     * described in the task definition. A null or zero CPU value is passed to Docker
     * as <code>0</code>, which Windows interprets as 1% of one CPU.</p>
     */
    inline int GetCpu() const { return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    inline void SetCpu(int value) { m_cpuHasBeenSet = true; m_cpu = value; }
    inline ContainerDefinition& WithCpu(int value) { SetCpu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount (in MiB) of memory to present to the container. If your container
     * attempts to exceed the memory specified here, the container is killed. The total
     * amount of memory reserved for all containers within a task must be lower than
     * the task <code>memory</code> value, if one is specified. This parameter maps to
     * <code>Memory</code> in the docker container create command and the
     * <code>--memory</code> option to docker run.</p> <p>If using the Fargate launch
     * type, this parameter is optional.</p> <p>If using the EC2 launch type, you must
     * specify either a task-level memory value or a container-level memory value. If
     * you specify both a container-level <code>memory</code> and
     * <code>memoryReservation</code> value, <code>memory</code> must be greater than
     * <code>memoryReservation</code>. If you specify <code>memoryReservation</code>,
     * then that value is subtracted from the available memory resources for the
     * container instance where the container is placed. Otherwise, the value of
     * <code>memory</code> is used.</p> <p>The Docker 20.10.0 or later daemon reserves
     * a minimum of 6 MiB of memory for a container. So, don't specify less than 6 MiB
     * of memory for your containers. </p> <p>The Docker 19.03.13-ce or earlier daemon
     * reserves a minimum of 4 MiB of memory for a container. So, don't specify less
     * than 4 MiB of memory for your containers.</p>
     */
    inline int GetMemory() const { return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    inline void SetMemory(int value) { m_memoryHasBeenSet = true; m_memory = value; }
    inline ContainerDefinition& WithMemory(int value) { SetMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The soft limit (in MiB) of memory to reserve for the container. When system
     * memory is under heavy contention, Docker attempts to keep the container memory
     * to this soft limit. However, your container can consume more memory when it
     * needs to, up to either the hard limit specified with the <code>memory</code>
     * parameter (if applicable), or all of the available memory on the container
     * instance, whichever comes first. This parameter maps to
     * <code>MemoryReservation</code> in the docker container create command and the
     * <code>--memory-reservation</code> option to docker run.</p> <p>If a task-level
     * memory value is not specified, you must specify a non-zero integer for one or
     * both of <code>memory</code> or <code>memoryReservation</code> in a container
     * definition. If you specify both, <code>memory</code> must be greater than
     * <code>memoryReservation</code>. If you specify <code>memoryReservation</code>,
     * then that value is subtracted from the available memory resources for the
     * container instance where the container is placed. Otherwise, the value of
     * <code>memory</code> is used.</p> <p>For example, if your container normally uses
     * 128 MiB of memory, but occasionally bursts to 256 MiB of memory for short
     * periods of time, you can set a <code>memoryReservation</code> of 128 MiB, and a
     * <code>memory</code> hard limit of 300 MiB. This configuration would allow the
     * container to only reserve 128 MiB of memory from the remaining resources on the
     * container instance, but also allow the container to consume more memory
     * resources when needed.</p> <p>The Docker 20.10.0 or later daemon reserves a
     * minimum of 6 MiB of memory for a container. So, don't specify less than 6 MiB of
     * memory for your containers. </p> <p>The Docker 19.03.13-ce or earlier daemon
     * reserves a minimum of 4 MiB of memory for a container. So, don't specify less
     * than 4 MiB of memory for your containers.</p>
     */
    inline int GetMemoryReservation() const { return m_memoryReservation; }
    inline bool MemoryReservationHasBeenSet() const { return m_memoryReservationHasBeenSet; }
    inline void SetMemoryReservation(int value) { m_memoryReservationHasBeenSet = true; m_memoryReservation = value; }
    inline ContainerDefinition& WithMemoryReservation(int value) { SetMemoryReservation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>links</code> parameter allows containers to communicate with each
     * other without the need for port mappings. This parameter is only supported if
     * the network mode of a task definition is <code>bridge</code>. The
     * <code>name:internalName</code> construct is analogous to <code>name:alias</code>
     * in Docker links. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed.. This parameter maps to <code>Links</code>
     * in the docker container create command and the <code>--link</code> option to
     * docker run.</p>  <p>This parameter is not supported for Windows
     * containers.</p>   <p>Containers that are collocated on a
     * single container instance may be able to communicate with each other without
     * requiring links or host port mappings. Network isolation is achieved on the
     * container instance using security groups and VPC settings.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetLinks() const { return m_links; }
    inline bool LinksHasBeenSet() const { return m_linksHasBeenSet; }
    template<typename LinksT = Aws::Vector<Aws::String>>
    void SetLinks(LinksT&& value) { m_linksHasBeenSet = true; m_links = std::forward<LinksT>(value); }
    template<typename LinksT = Aws::Vector<Aws::String>>
    ContainerDefinition& WithLinks(LinksT&& value) { SetLinks(std::forward<LinksT>(value)); return *this;}
    template<typename LinksT = Aws::String>
    ContainerDefinition& AddLinks(LinksT&& value) { m_linksHasBeenSet = true; m_links.emplace_back(std::forward<LinksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of port mappings for the container. Port mappings allow containers
     * to access ports on the host container instance to send or receive traffic.</p>
     * <p>For task definitions that use the <code>awsvpc</code> network mode, only
     * specify the <code>containerPort</code>. The <code>hostPort</code> can be left
     * blank or it must be the same value as the <code>containerPort</code>.</p>
     * <p>Port mappings on Windows use the <code>NetNAT</code> gateway address rather
     * than <code>localhost</code>. There's no loopback for port mappings on Windows,
     * so you can't access a container's mapped port from the host itself. </p> <p>This
     * parameter maps to <code>PortBindings</code> in the docker container create
     * command and the <code>--publish</code> option to docker run. If the network mode
     * of a task definition is set to <code>none</code>, then you can't specify port
     * mappings. If the network mode of a task definition is set to <code>host</code>,
     * then host ports must either be undefined or they must match the container port
     * in the port mapping.</p>  <p>After a task reaches the <code>RUNNING</code>
     * status, manual and automatic host and container port assignments are visible in
     * the <b>Network Bindings</b> section of a container description for a selected
     * task in the Amazon ECS console. The assignments are also visible in the
     * <code>networkBindings</code> section <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_DescribeTasks.html">DescribeTasks</a>
     * responses.</p> 
     */
    inline const Aws::Vector<PortMapping>& GetPortMappings() const { return m_portMappings; }
    inline bool PortMappingsHasBeenSet() const { return m_portMappingsHasBeenSet; }
    template<typename PortMappingsT = Aws::Vector<PortMapping>>
    void SetPortMappings(PortMappingsT&& value) { m_portMappingsHasBeenSet = true; m_portMappings = std::forward<PortMappingsT>(value); }
    template<typename PortMappingsT = Aws::Vector<PortMapping>>
    ContainerDefinition& WithPortMappings(PortMappingsT&& value) { SetPortMappings(std::forward<PortMappingsT>(value)); return *this;}
    template<typename PortMappingsT = PortMapping>
    ContainerDefinition& AddPortMappings(PortMappingsT&& value) { m_portMappingsHasBeenSet = true; m_portMappings.emplace_back(std::forward<PortMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the <code>essential</code> parameter of a container is marked as
     * <code>true</code>, and that container fails or stops for any reason, all other
     * containers that are part of the task are stopped. If the <code>essential</code>
     * parameter of a container is marked as <code>false</code>, its failure doesn't
     * affect the rest of the containers in a task. If this parameter is omitted, a
     * container is assumed to be essential.</p> <p>All tasks must have at least one
     * essential container. If you have an application that's composed of multiple
     * containers, group containers that are used for a common purpose into components,
     * and separate the different components into multiple task definitions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/application_architecture.html">Application
     * Architecture</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool GetEssential() const { return m_essential; }
    inline bool EssentialHasBeenSet() const { return m_essentialHasBeenSet; }
    inline void SetEssential(bool value) { m_essentialHasBeenSet = true; m_essential = value; }
    inline ContainerDefinition& WithEssential(bool value) { SetEssential(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The restart policy for a container. When you set up a restart policy, Amazon
     * ECS can restart the container without needing to replace the task. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/container-restart-policy.html">Restart
     * individual containers in Amazon ECS tasks with container restart policies</a> in
     * the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline const ContainerRestartPolicy& GetRestartPolicy() const { return m_restartPolicy; }
    inline bool RestartPolicyHasBeenSet() const { return m_restartPolicyHasBeenSet; }
    template<typename RestartPolicyT = ContainerRestartPolicy>
    void SetRestartPolicy(RestartPolicyT&& value) { m_restartPolicyHasBeenSet = true; m_restartPolicy = std::forward<RestartPolicyT>(value); }
    template<typename RestartPolicyT = ContainerRestartPolicy>
    ContainerDefinition& WithRestartPolicy(RestartPolicyT&& value) { SetRestartPolicy(std::forward<RestartPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>Early versions of the Amazon ECS container agent don't properly
     * handle <code>entryPoint</code> parameters. If you have problems using
     * <code>entryPoint</code>, update your container agent or enter your commands and
     * arguments as <code>command</code> array items instead.</p>  <p>The
     * entry point that's passed to the container. This parameter maps to
     * <code>Entrypoint</code> in the docker container create command and the
     * <code>--entrypoint</code> option to docker run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntryPoint() const { return m_entryPoint; }
    inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }
    template<typename EntryPointT = Aws::Vector<Aws::String>>
    void SetEntryPoint(EntryPointT&& value) { m_entryPointHasBeenSet = true; m_entryPoint = std::forward<EntryPointT>(value); }
    template<typename EntryPointT = Aws::Vector<Aws::String>>
    ContainerDefinition& WithEntryPoint(EntryPointT&& value) { SetEntryPoint(std::forward<EntryPointT>(value)); return *this;}
    template<typename EntryPointT = Aws::String>
    ContainerDefinition& AddEntryPoint(EntryPointT&& value) { m_entryPointHasBeenSet = true; m_entryPoint.emplace_back(std::forward<EntryPointT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The command that's passed to the container. This parameter maps to
     * <code>Cmd</code> in the docker container create command and the
     * <code>COMMAND</code> parameter to docker run. If there are multiple arguments,
     * each argument is a separated string in the array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const { return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    template<typename CommandT = Aws::Vector<Aws::String>>
    void SetCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command = std::forward<CommandT>(value); }
    template<typename CommandT = Aws::Vector<Aws::String>>
    ContainerDefinition& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    template<typename CommandT = Aws::String>
    ContainerDefinition& AddCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command.emplace_back(std::forward<CommandT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the docker container create command and the
     * <code>--env</code> option to docker run.</p>  <p>We don't recommend
     * that you use plaintext environment variables for sensitive information, such as
     * credential data.</p> 
     */
    inline const Aws::Vector<KeyValuePair>& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Aws::Vector<KeyValuePair>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Vector<KeyValuePair>>
    ContainerDefinition& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentT = KeyValuePair>
    ContainerDefinition& AddEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment.emplace_back(std::forward<EnvironmentT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of files containing the environment variables to pass to a container.
     * This parameter maps to the <code>--env-file</code> option to docker run.</p>
     * <p>You can specify up to ten environment files. The file must have a
     * <code>.env</code> file extension. Each line in an environment file contains an
     * environment variable in <code>VARIABLE=VALUE</code> format. Lines beginning with
     * <code>#</code> are treated as comments and are ignored.</p> <p>If there are
     * environment variables specified using the <code>environment</code> parameter in
     * a container definition, they take precedence over the variables contained within
     * an environment file. If multiple environment files are specified that contain
     * the same variable, they're processed from the top down. We recommend that you
     * use unique variable names. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/taskdef-envfiles.html">Specifying
     * Environment Variables</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<EnvironmentFile>& GetEnvironmentFiles() const { return m_environmentFiles; }
    inline bool EnvironmentFilesHasBeenSet() const { return m_environmentFilesHasBeenSet; }
    template<typename EnvironmentFilesT = Aws::Vector<EnvironmentFile>>
    void SetEnvironmentFiles(EnvironmentFilesT&& value) { m_environmentFilesHasBeenSet = true; m_environmentFiles = std::forward<EnvironmentFilesT>(value); }
    template<typename EnvironmentFilesT = Aws::Vector<EnvironmentFile>>
    ContainerDefinition& WithEnvironmentFiles(EnvironmentFilesT&& value) { SetEnvironmentFiles(std::forward<EnvironmentFilesT>(value)); return *this;}
    template<typename EnvironmentFilesT = EnvironmentFile>
    ContainerDefinition& AddEnvironmentFiles(EnvironmentFilesT&& value) { m_environmentFilesHasBeenSet = true; m_environmentFiles.emplace_back(std::forward<EnvironmentFilesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The mount points for data volumes in your container.</p> <p>This parameter
     * maps to <code>Volumes</code> in the docker container create command and the
     * <code>--volume</code> option to docker run.</p> <p>Windows containers can mount
     * whole directories on the same drive as <code>$env:ProgramData</code>. Windows
     * containers can't mount directories on a different drive, and mount point can't
     * be across drives.</p>
     */
    inline const Aws::Vector<MountPoint>& GetMountPoints() const { return m_mountPoints; }
    inline bool MountPointsHasBeenSet() const { return m_mountPointsHasBeenSet; }
    template<typename MountPointsT = Aws::Vector<MountPoint>>
    void SetMountPoints(MountPointsT&& value) { m_mountPointsHasBeenSet = true; m_mountPoints = std::forward<MountPointsT>(value); }
    template<typename MountPointsT = Aws::Vector<MountPoint>>
    ContainerDefinition& WithMountPoints(MountPointsT&& value) { SetMountPoints(std::forward<MountPointsT>(value)); return *this;}
    template<typename MountPointsT = MountPoint>
    ContainerDefinition& AddMountPoints(MountPointsT&& value) { m_mountPointsHasBeenSet = true; m_mountPoints.emplace_back(std::forward<MountPointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Data volumes to mount from another container. This parameter maps to
     * <code>VolumesFrom</code> in the docker container create command and the
     * <code>--volumes-from</code> option to docker run.</p>
     */
    inline const Aws::Vector<VolumeFrom>& GetVolumesFrom() const { return m_volumesFrom; }
    inline bool VolumesFromHasBeenSet() const { return m_volumesFromHasBeenSet; }
    template<typename VolumesFromT = Aws::Vector<VolumeFrom>>
    void SetVolumesFrom(VolumesFromT&& value) { m_volumesFromHasBeenSet = true; m_volumesFrom = std::forward<VolumesFromT>(value); }
    template<typename VolumesFromT = Aws::Vector<VolumeFrom>>
    ContainerDefinition& WithVolumesFrom(VolumesFromT&& value) { SetVolumesFrom(std::forward<VolumesFromT>(value)); return *this;}
    template<typename VolumesFromT = VolumeFrom>
    ContainerDefinition& AddVolumesFrom(VolumesFromT&& value) { m_volumesFromHasBeenSet = true; m_volumesFrom.emplace_back(std::forward<VolumesFromT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Linux-specific modifications that are applied to the default Docker container
     * configuration, such as Linux kernel capabilities. For more information see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_KernelCapabilities.html">KernelCapabilities</a>.</p>
     *  <p>This parameter is not supported for Windows containers.</p> 
     */
    inline const LinuxParameters& GetLinuxParameters() const { return m_linuxParameters; }
    inline bool LinuxParametersHasBeenSet() const { return m_linuxParametersHasBeenSet; }
    template<typename LinuxParametersT = LinuxParameters>
    void SetLinuxParameters(LinuxParametersT&& value) { m_linuxParametersHasBeenSet = true; m_linuxParameters = std::forward<LinuxParametersT>(value); }
    template<typename LinuxParametersT = LinuxParameters>
    ContainerDefinition& WithLinuxParameters(LinuxParametersT&& value) { SetLinuxParameters(std::forward<LinuxParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secrets to pass to the container. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * Sensitive Data</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Secret>& GetSecrets() const { return m_secrets; }
    inline bool SecretsHasBeenSet() const { return m_secretsHasBeenSet; }
    template<typename SecretsT = Aws::Vector<Secret>>
    void SetSecrets(SecretsT&& value) { m_secretsHasBeenSet = true; m_secrets = std::forward<SecretsT>(value); }
    template<typename SecretsT = Aws::Vector<Secret>>
    ContainerDefinition& WithSecrets(SecretsT&& value) { SetSecrets(std::forward<SecretsT>(value)); return *this;}
    template<typename SecretsT = Secret>
    ContainerDefinition& AddSecrets(SecretsT&& value) { m_secretsHasBeenSet = true; m_secrets.emplace_back(std::forward<SecretsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The dependencies defined for container startup and shutdown. A container can
     * contain multiple dependencies on other containers in a task definition. When a
     * dependency is defined for container startup, for container shutdown it is
     * reversed.</p> <p>For tasks using the EC2 launch type, the container instances
     * require at least version 1.26.0 of the container agent to turn on container
     * dependencies. However, we recommend using the latest container agent version.
     * For information about checking your agent version and updating to the latest
     * version, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html">Updating
     * the Amazon ECS Container Agent</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>. If you're using an Amazon ECS-optimized Linux AMI, your
     * instance needs at least version 1.26.0-1 of the <code>ecs-init</code> package.
     * If your container instances are launched from version <code>20190301</code> or
     * later, then they contain the required versions of the container agent and
     * <code>ecs-init</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>For tasks using the Fargate launch type, the task or service
     * requires the following platforms:</p> <ul> <li> <p>Linux platform version
     * <code>1.3.0</code> or later.</p> </li> <li> <p>Windows platform version
     * <code>1.0.0</code> or later.</p> </li> </ul>
     */
    inline const Aws::Vector<ContainerDependency>& GetDependsOn() const { return m_dependsOn; }
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }
    template<typename DependsOnT = Aws::Vector<ContainerDependency>>
    void SetDependsOn(DependsOnT&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::forward<DependsOnT>(value); }
    template<typename DependsOnT = Aws::Vector<ContainerDependency>>
    ContainerDefinition& WithDependsOn(DependsOnT&& value) { SetDependsOn(std::forward<DependsOnT>(value)); return *this;}
    template<typename DependsOnT = ContainerDependency>
    ContainerDefinition& AddDependsOn(DependsOnT&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.emplace_back(std::forward<DependsOnT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Time duration (in seconds) to wait before giving up on resolving dependencies
     * for a container. For example, you specify two containers in a task definition
     * with containerA having a dependency on containerB reaching a
     * <code>COMPLETE</code>, <code>SUCCESS</code>, or <code>HEALTHY</code> status. If
     * a <code>startTimeout</code> value is specified for containerB and it doesn't
     * reach the desired status within that time then containerA gives up and not
     * start. This results in the task transitioning to a <code>STOPPED</code>
     * state.</p>  <p>When the <code>ECS_CONTAINER_START_TIMEOUT</code> container
     * agent configuration variable is used, it's enforced independently from this
     * start timeout value.</p>  <p>For tasks using the Fargate launch type, the
     * task or service requires the following platforms:</p> <ul> <li> <p>Linux
     * platform version <code>1.3.0</code> or later.</p> </li> <li> <p>Windows platform
     * version <code>1.0.0</code> or later.</p> </li> </ul> <p>For tasks using the EC2
     * launch type, your container instances require at least version
     * <code>1.26.0</code> of the container agent to use a container start timeout
     * value. However, we recommend using the latest container agent version. For
     * information about checking your agent version and updating to the latest
     * version, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html">Updating
     * the Amazon ECS Container Agent</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>. If you're using an Amazon ECS-optimized Linux AMI, your
     * instance needs at least version <code>1.26.0-1</code> of the
     * <code>ecs-init</code> package. If your container instances are launched from
     * version <code>20190301</code> or later, then they contain the required versions
     * of the container agent and <code>ecs-init</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>The valid values for Fargate are 2-120 seconds.</p>
     */
    inline int GetStartTimeout() const { return m_startTimeout; }
    inline bool StartTimeoutHasBeenSet() const { return m_startTimeoutHasBeenSet; }
    inline void SetStartTimeout(int value) { m_startTimeoutHasBeenSet = true; m_startTimeout = value; }
    inline ContainerDefinition& WithStartTimeout(int value) { SetStartTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time duration (in seconds) to wait before the container is forcefully killed
     * if it doesn't exit normally on its own.</p> <p>For tasks using the Fargate
     * launch type, the task or service requires the following platforms:</p> <ul> <li>
     * <p>Linux platform version <code>1.3.0</code> or later.</p> </li> <li> <p>Windows
     * platform version <code>1.0.0</code> or later.</p> </li> </ul> <p>For tasks that
     * use the Fargate launch type, the max stop timeout value is 120 seconds and if
     * the parameter is not specified, the default value of 30 seconds is used.</p>
     * <p>For tasks that use the EC2 launch type, if the <code>stopTimeout</code>
     * parameter isn't specified, the value set for the Amazon ECS container agent
     * configuration variable <code>ECS_CONTAINER_STOP_TIMEOUT</code> is used. If
     * neither the <code>stopTimeout</code> parameter or the
     * <code>ECS_CONTAINER_STOP_TIMEOUT</code> agent configuration variable are set,
     * then the default values of 30 seconds for Linux containers and 30 seconds on
     * Windows containers are used. Your container instances require at least version
     * 1.26.0 of the container agent to use a container stop timeout value. However, we
     * recommend using the latest container agent version. For information about
     * checking your agent version and updating to the latest version, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html">Updating
     * the Amazon ECS Container Agent</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>. If you're using an Amazon ECS-optimized Linux AMI, your
     * instance needs at least version 1.26.0-1 of the <code>ecs-init</code> package.
     * If your container instances are launched from version <code>20190301</code> or
     * later, then they contain the required versions of the container agent and
     * <code>ecs-init</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>The valid values for Fargate are 2-120 seconds.</p>
     */
    inline int GetStopTimeout() const { return m_stopTimeout; }
    inline bool StopTimeoutHasBeenSet() const { return m_stopTimeoutHasBeenSet; }
    inline void SetStopTimeout(int value) { m_stopTimeoutHasBeenSet = true; m_stopTimeout = value; }
    inline ContainerDefinition& WithStopTimeout(int value) { SetStopTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether Amazon ECS will resolve the container image tag provided in
     * the container definition to an image digest. By default, the value is
     * <code>enabled</code>. If you set the value for a container as
     * <code>disabled</code>, Amazon ECS will not resolve the provided container image
     * tag to a digest and will use the original image URI specified in the container
     * definition for deployment. For more information about container image
     * resolution, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-type-ecs.html#deployment-container-image-stability">Container
     * image resolution</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline VersionConsistency GetVersionConsistency() const { return m_versionConsistency; }
    inline bool VersionConsistencyHasBeenSet() const { return m_versionConsistencyHasBeenSet; }
    inline void SetVersionConsistency(VersionConsistency value) { m_versionConsistencyHasBeenSet = true; m_versionConsistency = value; }
    inline ContainerDefinition& WithVersionConsistency(VersionConsistency value) { SetVersionConsistency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hostname to use for your container. This parameter maps to
     * <code>Hostname</code> in the docker container create command and the
     * <code>--hostname</code> option to docker run.</p>  <p>The
     * <code>hostname</code> parameter is not supported if you're using the
     * <code>awsvpc</code> network mode.</p> 
     */
    inline const Aws::String& GetHostname() const { return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    template<typename HostnameT = Aws::String>
    void SetHostname(HostnameT&& value) { m_hostnameHasBeenSet = true; m_hostname = std::forward<HostnameT>(value); }
    template<typename HostnameT = Aws::String>
    ContainerDefinition& WithHostname(HostnameT&& value) { SetHostname(std::forward<HostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user to use inside the container. This parameter maps to
     * <code>User</code> in the docker container create command and the
     * <code>--user</code> option to docker run.</p>  <p>When running tasks
     * using the <code>host</code> network mode, don't run containers using the root
     * user (UID 0). We recommend using a non-root user for better security.</p>
     *  <p>You can specify the <code>user</code> using the following
     * formats. If specifying a UID or GID, you must specify it as a positive
     * integer.</p> <ul> <li> <p> <code>user</code> </p> </li> <li> <p>
     * <code>user:group</code> </p> </li> <li> <p> <code>uid</code> </p> </li> <li> <p>
     * <code>uid:gid</code> </p> </li> <li> <p> <code>user:gid</code> </p> </li> <li>
     * <p> <code>uid:group</code> </p> </li> </ul>  <p>This parameter is not
     * supported for Windows containers.</p> 
     */
    inline const Aws::String& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = Aws::String>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = Aws::String>
    ContainerDefinition& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The working directory to run commands inside the container in. This parameter
     * maps to <code>WorkingDir</code> in the docker container create command and the
     * <code>--workdir</code> option to docker run.</p>
     */
    inline const Aws::String& GetWorkingDirectory() const { return m_workingDirectory; }
    inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }
    template<typename WorkingDirectoryT = Aws::String>
    void SetWorkingDirectory(WorkingDirectoryT&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = std::forward<WorkingDirectoryT>(value); }
    template<typename WorkingDirectoryT = Aws::String>
    ContainerDefinition& WithWorkingDirectory(WorkingDirectoryT&& value) { SetWorkingDirectory(std::forward<WorkingDirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When this parameter is true, networking is off within the container. This
     * parameter maps to <code>NetworkDisabled</code> in the docker container create
     * command.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline bool GetDisableNetworking() const { return m_disableNetworking; }
    inline bool DisableNetworkingHasBeenSet() const { return m_disableNetworkingHasBeenSet; }
    inline void SetDisableNetworking(bool value) { m_disableNetworkingHasBeenSet = true; m_disableNetworking = value; }
    inline ContainerDefinition& WithDisableNetworking(bool value) { SetDisableNetworking(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When this parameter is true, the container is given elevated privileges on
     * the host container instance (similar to the <code>root</code> user). This
     * parameter maps to <code>Privileged</code> in the docker container create command
     * and the <code>--privileged</code> option to docker run</p>  <p>This
     * parameter is not supported for Windows containers or tasks run on Fargate.</p>
     * 
     */
    inline bool GetPrivileged() const { return m_privileged; }
    inline bool PrivilegedHasBeenSet() const { return m_privilegedHasBeenSet; }
    inline void SetPrivileged(bool value) { m_privilegedHasBeenSet = true; m_privileged = value; }
    inline ContainerDefinition& WithPrivileged(bool value) { SetPrivileged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When this parameter is true, the container is given read-only access to its
     * root file system. This parameter maps to <code>ReadonlyRootfs</code> in the
     * docker container create command and the <code>--read-only</code> option to
     * docker run.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline bool GetReadonlyRootFilesystem() const { return m_readonlyRootFilesystem; }
    inline bool ReadonlyRootFilesystemHasBeenSet() const { return m_readonlyRootFilesystemHasBeenSet; }
    inline void SetReadonlyRootFilesystem(bool value) { m_readonlyRootFilesystemHasBeenSet = true; m_readonlyRootFilesystem = value; }
    inline ContainerDefinition& WithReadonlyRootFilesystem(bool value) { SetReadonlyRootFilesystem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of DNS servers that are presented to the container. This parameter
     * maps to <code>Dns</code> in the docker container create command and the
     * <code>--dns</code> option to docker run.</p>  <p>This parameter is not
     * supported for Windows containers.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetDnsServers() const { return m_dnsServers; }
    inline bool DnsServersHasBeenSet() const { return m_dnsServersHasBeenSet; }
    template<typename DnsServersT = Aws::Vector<Aws::String>>
    void SetDnsServers(DnsServersT&& value) { m_dnsServersHasBeenSet = true; m_dnsServers = std::forward<DnsServersT>(value); }
    template<typename DnsServersT = Aws::Vector<Aws::String>>
    ContainerDefinition& WithDnsServers(DnsServersT&& value) { SetDnsServers(std::forward<DnsServersT>(value)); return *this;}
    template<typename DnsServersT = Aws::String>
    ContainerDefinition& AddDnsServers(DnsServersT&& value) { m_dnsServersHasBeenSet = true; m_dnsServers.emplace_back(std::forward<DnsServersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of DNS search domains that are presented to the container. This
     * parameter maps to <code>DnsSearch</code> in the docker container create command
     * and the <code>--dns-search</code> option to docker run.</p>  <p>This
     * parameter is not supported for Windows containers.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetDnsSearchDomains() const { return m_dnsSearchDomains; }
    inline bool DnsSearchDomainsHasBeenSet() const { return m_dnsSearchDomainsHasBeenSet; }
    template<typename DnsSearchDomainsT = Aws::Vector<Aws::String>>
    void SetDnsSearchDomains(DnsSearchDomainsT&& value) { m_dnsSearchDomainsHasBeenSet = true; m_dnsSearchDomains = std::forward<DnsSearchDomainsT>(value); }
    template<typename DnsSearchDomainsT = Aws::Vector<Aws::String>>
    ContainerDefinition& WithDnsSearchDomains(DnsSearchDomainsT&& value) { SetDnsSearchDomains(std::forward<DnsSearchDomainsT>(value)); return *this;}
    template<typename DnsSearchDomainsT = Aws::String>
    ContainerDefinition& AddDnsSearchDomains(DnsSearchDomainsT&& value) { m_dnsSearchDomainsHasBeenSet = true; m_dnsSearchDomains.emplace_back(std::forward<DnsSearchDomainsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of hostnames and IP address mappings to append to the
     * <code>/etc/hosts</code> file on the container. This parameter maps to
     * <code>ExtraHosts</code> in the docker container create command and the
     * <code>--add-host</code> option to docker run.</p>  <p>This parameter isn't
     * supported for Windows containers or tasks that use the <code>awsvpc</code>
     * network mode.</p> 
     */
    inline const Aws::Vector<HostEntry>& GetExtraHosts() const { return m_extraHosts; }
    inline bool ExtraHostsHasBeenSet() const { return m_extraHostsHasBeenSet; }
    template<typename ExtraHostsT = Aws::Vector<HostEntry>>
    void SetExtraHosts(ExtraHostsT&& value) { m_extraHostsHasBeenSet = true; m_extraHosts = std::forward<ExtraHostsT>(value); }
    template<typename ExtraHostsT = Aws::Vector<HostEntry>>
    ContainerDefinition& WithExtraHosts(ExtraHostsT&& value) { SetExtraHosts(std::forward<ExtraHostsT>(value)); return *this;}
    template<typename ExtraHostsT = HostEntry>
    ContainerDefinition& AddExtraHosts(ExtraHostsT&& value) { m_extraHostsHasBeenSet = true; m_extraHosts.emplace_back(std::forward<ExtraHostsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of strings to provide custom configuration for multiple security
     * systems. This field isn't valid for containers in tasks using the Fargate launch
     * type.</p> <p>For Linux tasks on EC2, this parameter can be used to reference
     * custom labels for SELinux and AppArmor multi-level security systems.</p> <p>For
     * any tasks on EC2, this parameter can be used to reference a credential spec file
     * that configures a container for Active Directory authentication. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows-gmsa.html">Using
     * gMSAs for Windows Containers</a> and <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/linux-gmsa.html">Using
     * gMSAs for Linux Containers</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> <p>This parameter maps to <code>SecurityOpt</code> in
     * the docker container create command and the <code>--security-opt</code> option
     * to docker run.</p>  <p>The Amazon ECS container agent running on a
     * container instance must register with the <code>ECS_SELINUX_CAPABLE=true</code>
     * or <code>ECS_APPARMOR_CAPABLE=true</code> environment variables before
     * containers placed on that instance can use these security options. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>  <p>Valid values: "no-new-privileges" |
     * "apparmor:PROFILE" | "label:value" | "credentialspec:CredentialSpecFilePath"</p>
     */
    inline const Aws::Vector<Aws::String>& GetDockerSecurityOptions() const { return m_dockerSecurityOptions; }
    inline bool DockerSecurityOptionsHasBeenSet() const { return m_dockerSecurityOptionsHasBeenSet; }
    template<typename DockerSecurityOptionsT = Aws::Vector<Aws::String>>
    void SetDockerSecurityOptions(DockerSecurityOptionsT&& value) { m_dockerSecurityOptionsHasBeenSet = true; m_dockerSecurityOptions = std::forward<DockerSecurityOptionsT>(value); }
    template<typename DockerSecurityOptionsT = Aws::Vector<Aws::String>>
    ContainerDefinition& WithDockerSecurityOptions(DockerSecurityOptionsT&& value) { SetDockerSecurityOptions(std::forward<DockerSecurityOptionsT>(value)); return *this;}
    template<typename DockerSecurityOptionsT = Aws::String>
    ContainerDefinition& AddDockerSecurityOptions(DockerSecurityOptionsT&& value) { m_dockerSecurityOptionsHasBeenSet = true; m_dockerSecurityOptions.emplace_back(std::forward<DockerSecurityOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When this parameter is <code>true</code>, you can deploy containerized
     * applications that require <code>stdin</code> or a <code>tty</code> to be
     * allocated. This parameter maps to <code>OpenStdin</code> in the docker container
     * create command and the <code>--interactive</code> option to docker run.</p>
     */
    inline bool GetInteractive() const { return m_interactive; }
    inline bool InteractiveHasBeenSet() const { return m_interactiveHasBeenSet; }
    inline void SetInteractive(bool value) { m_interactiveHasBeenSet = true; m_interactive = value; }
    inline ContainerDefinition& WithInteractive(bool value) { SetInteractive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When this parameter is <code>true</code>, a TTY is allocated. This parameter
     * maps to <code>Tty</code> in the docker container create command and the
     * <code>--tty</code> option to docker run.</p>
     */
    inline bool GetPseudoTerminal() const { return m_pseudoTerminal; }
    inline bool PseudoTerminalHasBeenSet() const { return m_pseudoTerminalHasBeenSet; }
    inline void SetPseudoTerminal(bool value) { m_pseudoTerminalHasBeenSet = true; m_pseudoTerminal = value; }
    inline ContainerDefinition& WithPseudoTerminal(bool value) { SetPseudoTerminal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the docker container create command and the
     * <code>--label</code> option to docker run. This parameter requires version 1.18
     * of the Docker Remote API or greater on your container instance. To check the
     * Docker Remote API version on your container instance, log in to your container
     * instance and run the following command: <code>sudo docker version --format
     * '{{.Server.APIVersion}}'</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDockerLabels() const { return m_dockerLabels; }
    inline bool DockerLabelsHasBeenSet() const { return m_dockerLabelsHasBeenSet; }
    template<typename DockerLabelsT = Aws::Map<Aws::String, Aws::String>>
    void SetDockerLabels(DockerLabelsT&& value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels = std::forward<DockerLabelsT>(value); }
    template<typename DockerLabelsT = Aws::Map<Aws::String, Aws::String>>
    ContainerDefinition& WithDockerLabels(DockerLabelsT&& value) { SetDockerLabels(std::forward<DockerLabelsT>(value)); return *this;}
    template<typename DockerLabelsKeyT = Aws::String, typename DockerLabelsValueT = Aws::String>
    ContainerDefinition& AddDockerLabels(DockerLabelsKeyT&& key, DockerLabelsValueT&& value) {
      m_dockerLabelsHasBeenSet = true; m_dockerLabels.emplace(std::forward<DockerLabelsKeyT>(key), std::forward<DockerLabelsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of <code>ulimits</code> to set in the container. If a
     * <code>ulimit</code> value is specified in a task definition, it overrides the
     * default values set by Docker. This parameter maps to <code>Ulimits</code> in the
     * docker container create command and the <code>--ulimit</code> option to docker
     * run. Valid naming values are displayed in the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_Ulimit.html">Ulimit</a>
     * data type.</p> <p>Amazon ECS tasks hosted on Fargate use the default resource
     * limit values set by the operating system with the exception of the
     * <code>nofile</code> resource limit parameter which Fargate overrides. The
     * <code>nofile</code> resource limit sets a restriction on the number of open
     * files that a container can use. The default <code>nofile</code> soft limit is
     * <code> 65535</code> and the default hard limit is <code>65535</code>.</p>
     * <p>This parameter requires version 1.18 of the Docker Remote API or greater on
     * your container instance. To check the Docker Remote API version on your
     * container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     *  <p>This parameter is not supported for Windows containers.</p> 
     */
    inline const Aws::Vector<Ulimit>& GetUlimits() const { return m_ulimits; }
    inline bool UlimitsHasBeenSet() const { return m_ulimitsHasBeenSet; }
    template<typename UlimitsT = Aws::Vector<Ulimit>>
    void SetUlimits(UlimitsT&& value) { m_ulimitsHasBeenSet = true; m_ulimits = std::forward<UlimitsT>(value); }
    template<typename UlimitsT = Aws::Vector<Ulimit>>
    ContainerDefinition& WithUlimits(UlimitsT&& value) { SetUlimits(std::forward<UlimitsT>(value)); return *this;}
    template<typename UlimitsT = Ulimit>
    ContainerDefinition& AddUlimits(UlimitsT&& value) { m_ulimitsHasBeenSet = true; m_ulimits.emplace_back(std::forward<UlimitsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The log configuration specification for the container.</p> <p>This parameter
     * maps to <code>LogConfig</code> in the docker container create command and the
     * <code>--log-driver</code> option to docker run. By default, containers use the
     * same logging driver that the Docker daemon uses. However the container can use a
     * different logging driver than the Docker daemon by specifying a log driver with
     * this parameter in the container definition. To use a different logging driver
     * for a container, the log system must be configured properly on the container
     * instance (or on a different log server for remote logging options). </p> 
     * <p>Amazon ECS currently supports a subset of the logging drivers available to
     * the Docker daemon (shown in the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_LogConfiguration.html">LogConfiguration</a>
     * data type). Additional log drivers may be available in future releases of the
     * Amazon ECS container agent.</p>  <p>This parameter requires version 1.18
     * of the Docker Remote API or greater on your container instance. To check the
     * Docker Remote API version on your container instance, log in to your container
     * instance and run the following command: <code>sudo docker version --format
     * '{{.Server.APIVersion}}'</code> </p>  <p>The Amazon ECS container agent
     * running on a container instance must register the logging drivers available on
     * that instance with the <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment
     * variable before containers placed on that instance can use these log
     * configuration options. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> 
     */
    inline const LogConfiguration& GetLogConfiguration() const { return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    template<typename LogConfigurationT = LogConfiguration>
    void SetLogConfiguration(LogConfigurationT&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::forward<LogConfigurationT>(value); }
    template<typename LogConfigurationT = LogConfiguration>
    ContainerDefinition& WithLogConfiguration(LogConfigurationT&& value) { SetLogConfiguration(std::forward<LogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container health check command and associated configuration parameters
     * for the container. This parameter maps to <code>HealthCheck</code> in the docker
     * container create command and the <code>HEALTHCHECK</code> parameter of docker
     * run.</p>
     */
    inline const HealthCheck& GetHealthCheck() const { return m_healthCheck; }
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }
    template<typename HealthCheckT = HealthCheck>
    void SetHealthCheck(HealthCheckT&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::forward<HealthCheckT>(value); }
    template<typename HealthCheckT = HealthCheck>
    ContainerDefinition& WithHealthCheck(HealthCheckT&& value) { SetHealthCheck(std::forward<HealthCheckT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of namespaced kernel parameters to set in the container. This
     * parameter maps to <code>Sysctls</code> in the docker container create command
     * and the <code>--sysctl</code> option to docker run. For example, you can
     * configure <code>net.ipv4.tcp_keepalive_time</code> setting to maintain longer
     * lived connections.</p>
     */
    inline const Aws::Vector<SystemControl>& GetSystemControls() const { return m_systemControls; }
    inline bool SystemControlsHasBeenSet() const { return m_systemControlsHasBeenSet; }
    template<typename SystemControlsT = Aws::Vector<SystemControl>>
    void SetSystemControls(SystemControlsT&& value) { m_systemControlsHasBeenSet = true; m_systemControls = std::forward<SystemControlsT>(value); }
    template<typename SystemControlsT = Aws::Vector<SystemControl>>
    ContainerDefinition& WithSystemControls(SystemControlsT&& value) { SetSystemControls(std::forward<SystemControlsT>(value)); return *this;}
    template<typename SystemControlsT = SystemControl>
    ContainerDefinition& AddSystemControls(SystemControlsT&& value) { m_systemControlsHasBeenSet = true; m_systemControls.emplace_back(std::forward<SystemControlsT>(value)); return *this; }
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
    ContainerDefinition& WithResourceRequirements(ResourceRequirementsT&& value) { SetResourceRequirements(std::forward<ResourceRequirementsT>(value)); return *this;}
    template<typename ResourceRequirementsT = ResourceRequirement>
    ContainerDefinition& AddResourceRequirements(ResourceRequirementsT&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.emplace_back(std::forward<ResourceRequirementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The FireLens configuration for the container. This is used to specify and
     * configure a log router for container logs. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_firelens.html">Custom
     * Log Routing</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const FirelensConfiguration& GetFirelensConfiguration() const { return m_firelensConfiguration; }
    inline bool FirelensConfigurationHasBeenSet() const { return m_firelensConfigurationHasBeenSet; }
    template<typename FirelensConfigurationT = FirelensConfiguration>
    void SetFirelensConfiguration(FirelensConfigurationT&& value) { m_firelensConfigurationHasBeenSet = true; m_firelensConfiguration = std::forward<FirelensConfigurationT>(value); }
    template<typename FirelensConfigurationT = FirelensConfiguration>
    ContainerDefinition& WithFirelensConfiguration(FirelensConfigurationT&& value) { SetFirelensConfiguration(std::forward<FirelensConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of ARNs in SSM or Amazon S3 to a credential spec
     * (<code>CredSpec</code>) file that configures the container for Active Directory
     * authentication. We recommend that you use this parameter instead of the
     * <code>dockerSecurityOptions</code>. The maximum number of ARNs is 1.</p>
     * <p>There are two formats for each ARN.</p> <dl>
     * <dt>credentialspecdomainless:MyARN</dt> <dd> <p>You use
     * <code>credentialspecdomainless:MyARN</code> to provide a <code>CredSpec</code>
     * with an additional section for a secret in Secrets Manager. You provide the
     * login credentials to the domain in the secret.</p> <p>Each task that runs on any
     * container instance can join different domains.</p> <p>You can use this format
     * without joining the container instance to a domain.</p> </dd>
     * <dt>credentialspec:MyARN</dt> <dd> <p>You use <code>credentialspec:MyARN</code>
     * to provide a <code>CredSpec</code> for a single domain.</p> <p>You must join the
     * container instance to the domain before you start any tasks that use this task
     * definition.</p> </dd> </dl> <p>In both formats, replace <code>MyARN</code> with
     * the ARN in SSM or Amazon S3.</p> <p>If you provide a
     * <code>credentialspecdomainless:MyARN</code>, the <code>credspec</code> must
     * provide a ARN in Secrets Manager for a secret containing the username, password,
     * and the domain to connect to. For better security, the instance isn't joined to
     * the domain for domainless authentication. Other applications on the instance
     * can't use the domainless credentials. You can use this parameter to run tasks on
     * the same instance, even it the tasks need to join different domains. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows-gmsa.html">Using
     * gMSAs for Windows Containers</a> and <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/linux-gmsa.html">Using
     * gMSAs for Linux Containers</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCredentialSpecs() const { return m_credentialSpecs; }
    inline bool CredentialSpecsHasBeenSet() const { return m_credentialSpecsHasBeenSet; }
    template<typename CredentialSpecsT = Aws::Vector<Aws::String>>
    void SetCredentialSpecs(CredentialSpecsT&& value) { m_credentialSpecsHasBeenSet = true; m_credentialSpecs = std::forward<CredentialSpecsT>(value); }
    template<typename CredentialSpecsT = Aws::Vector<Aws::String>>
    ContainerDefinition& WithCredentialSpecs(CredentialSpecsT&& value) { SetCredentialSpecs(std::forward<CredentialSpecsT>(value)); return *this;}
    template<typename CredentialSpecsT = Aws::String>
    ContainerDefinition& AddCredentialSpecs(CredentialSpecsT&& value) { m_credentialSpecsHasBeenSet = true; m_credentialSpecs.emplace_back(std::forward<CredentialSpecsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    RepositoryCredentials m_repositoryCredentials;
    bool m_repositoryCredentialsHasBeenSet = false;

    int m_cpu{0};
    bool m_cpuHasBeenSet = false;

    int m_memory{0};
    bool m_memoryHasBeenSet = false;

    int m_memoryReservation{0};
    bool m_memoryReservationHasBeenSet = false;

    Aws::Vector<Aws::String> m_links;
    bool m_linksHasBeenSet = false;

    Aws::Vector<PortMapping> m_portMappings;
    bool m_portMappingsHasBeenSet = false;

    bool m_essential{false};
    bool m_essentialHasBeenSet = false;

    ContainerRestartPolicy m_restartPolicy;
    bool m_restartPolicyHasBeenSet = false;

    Aws::Vector<Aws::String> m_entryPoint;
    bool m_entryPointHasBeenSet = false;

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;

    Aws::Vector<KeyValuePair> m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::Vector<EnvironmentFile> m_environmentFiles;
    bool m_environmentFilesHasBeenSet = false;

    Aws::Vector<MountPoint> m_mountPoints;
    bool m_mountPointsHasBeenSet = false;

    Aws::Vector<VolumeFrom> m_volumesFrom;
    bool m_volumesFromHasBeenSet = false;

    LinuxParameters m_linuxParameters;
    bool m_linuxParametersHasBeenSet = false;

    Aws::Vector<Secret> m_secrets;
    bool m_secretsHasBeenSet = false;

    Aws::Vector<ContainerDependency> m_dependsOn;
    bool m_dependsOnHasBeenSet = false;

    int m_startTimeout{0};
    bool m_startTimeoutHasBeenSet = false;

    int m_stopTimeout{0};
    bool m_stopTimeoutHasBeenSet = false;

    VersionConsistency m_versionConsistency{VersionConsistency::NOT_SET};
    bool m_versionConsistencyHasBeenSet = false;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::String m_user;
    bool m_userHasBeenSet = false;

    Aws::String m_workingDirectory;
    bool m_workingDirectoryHasBeenSet = false;

    bool m_disableNetworking{false};
    bool m_disableNetworkingHasBeenSet = false;

    bool m_privileged{false};
    bool m_privilegedHasBeenSet = false;

    bool m_readonlyRootFilesystem{false};
    bool m_readonlyRootFilesystemHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsServers;
    bool m_dnsServersHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsSearchDomains;
    bool m_dnsSearchDomainsHasBeenSet = false;

    Aws::Vector<HostEntry> m_extraHosts;
    bool m_extraHostsHasBeenSet = false;

    Aws::Vector<Aws::String> m_dockerSecurityOptions;
    bool m_dockerSecurityOptionsHasBeenSet = false;

    bool m_interactive{false};
    bool m_interactiveHasBeenSet = false;

    bool m_pseudoTerminal{false};
    bool m_pseudoTerminalHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_dockerLabels;
    bool m_dockerLabelsHasBeenSet = false;

    Aws::Vector<Ulimit> m_ulimits;
    bool m_ulimitsHasBeenSet = false;

    LogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    HealthCheck m_healthCheck;
    bool m_healthCheckHasBeenSet = false;

    Aws::Vector<SystemControl> m_systemControls;
    bool m_systemControlsHasBeenSet = false;

    Aws::Vector<ResourceRequirement> m_resourceRequirements;
    bool m_resourceRequirementsHasBeenSet = false;

    FirelensConfiguration m_firelensConfiguration;
    bool m_firelensConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_credentialSpecs;
    bool m_credentialSpecsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
