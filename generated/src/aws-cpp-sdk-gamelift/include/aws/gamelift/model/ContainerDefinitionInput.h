/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/ContainerMemoryLimits.h>
#include <aws/gamelift/model/ContainerPortConfiguration.h>
#include <aws/gamelift/model/ContainerHealthCheck.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/ContainerEnvironment.h>
#include <aws/gamelift/model/ContainerDependency.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p> <b>This data type is used with the Amazon GameLift containers feature, which
   * is currently in public preview.</b> </p> <p>Describes a container's
   * configuration, resources, and start instructions. Use this data type to create a
   * container group definition. For the properties of a container that's been
   * deployed to a fleet, see <a>ContainerDefinition</a>. You can't change these
   * properties after you've created the container group definition. If you need a
   * container group with different properties, then you must create a new one. </p>
   * <p> <b>Used with: </b> <a>CreateContainerGroupDefinition</a> </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerDefinitionInput">AWS
   * API Reference</a></p>
   */
  class ContainerDefinitionInput
  {
  public:
    AWS_GAMELIFT_API ContainerDefinitionInput();
    AWS_GAMELIFT_API ContainerDefinitionInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerDefinitionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string that uniquely identifies the container definition within a container
     * group.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }

    /**
     * <p>A string that uniquely identifies the container definition within a container
     * group.</p>
     */
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }

    /**
     * <p>A string that uniquely identifies the container definition within a container
     * group.</p>
     */
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }

    /**
     * <p>A string that uniquely identifies the container definition within a container
     * group.</p>
     */
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }

    /**
     * <p>A string that uniquely identifies the container definition within a container
     * group.</p>
     */
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }

    /**
     * <p>A string that uniquely identifies the container definition within a container
     * group.</p>
     */
    inline ContainerDefinitionInput& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}

    /**
     * <p>A string that uniquely identifies the container definition within a container
     * group.</p>
     */
    inline ContainerDefinitionInput& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}

    /**
     * <p>A string that uniquely identifies the container definition within a container
     * group.</p>
     */
    inline ContainerDefinitionInput& WithContainerName(const char* value) { SetContainerName(value); return *this;}


    /**
     * <p>The location of a container image that $short; will copy and deploy to a
     * container fleet. Images in Amazon Elastic Container Registry private
     * repositories are supported. The repository must be in the same Amazon Web
     * Services account and Amazon Web Services Region where you're creating the
     * container group definition. For limits on image size, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/gamelift.html">Amazon
     * GameLift endpoints and quotas</a>. You can use any of the following image URI
     * formats: </p> <ul> <li> <p>Image ID only: <code>[AWS account].dkr.ecr.[AWS
     * region].amazonaws.com/[repository ID]</code> </p> </li> <li> <p>Image ID and
     * digest: <code>[AWS account].dkr.ecr.[AWS region].amazonaws.com/[repository
     * ID]@[digest]</code> </p> </li> <li> <p>Image ID and tag: <code>[AWS
     * account].dkr.ecr.[AWS region].amazonaws.com/[repository ID]:[tag]</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetImageUri() const{ return m_imageUri; }

    /**
     * <p>The location of a container image that $short; will copy and deploy to a
     * container fleet. Images in Amazon Elastic Container Registry private
     * repositories are supported. The repository must be in the same Amazon Web
     * Services account and Amazon Web Services Region where you're creating the
     * container group definition. For limits on image size, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/gamelift.html">Amazon
     * GameLift endpoints and quotas</a>. You can use any of the following image URI
     * formats: </p> <ul> <li> <p>Image ID only: <code>[AWS account].dkr.ecr.[AWS
     * region].amazonaws.com/[repository ID]</code> </p> </li> <li> <p>Image ID and
     * digest: <code>[AWS account].dkr.ecr.[AWS region].amazonaws.com/[repository
     * ID]@[digest]</code> </p> </li> <li> <p>Image ID and tag: <code>[AWS
     * account].dkr.ecr.[AWS region].amazonaws.com/[repository ID]:[tag]</code> </p>
     * </li> </ul>
     */
    inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }

    /**
     * <p>The location of a container image that $short; will copy and deploy to a
     * container fleet. Images in Amazon Elastic Container Registry private
     * repositories are supported. The repository must be in the same Amazon Web
     * Services account and Amazon Web Services Region where you're creating the
     * container group definition. For limits on image size, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/gamelift.html">Amazon
     * GameLift endpoints and quotas</a>. You can use any of the following image URI
     * formats: </p> <ul> <li> <p>Image ID only: <code>[AWS account].dkr.ecr.[AWS
     * region].amazonaws.com/[repository ID]</code> </p> </li> <li> <p>Image ID and
     * digest: <code>[AWS account].dkr.ecr.[AWS region].amazonaws.com/[repository
     * ID]@[digest]</code> </p> </li> <li> <p>Image ID and tag: <code>[AWS
     * account].dkr.ecr.[AWS region].amazonaws.com/[repository ID]:[tag]</code> </p>
     * </li> </ul>
     */
    inline void SetImageUri(const Aws::String& value) { m_imageUriHasBeenSet = true; m_imageUri = value; }

    /**
     * <p>The location of a container image that $short; will copy and deploy to a
     * container fleet. Images in Amazon Elastic Container Registry private
     * repositories are supported. The repository must be in the same Amazon Web
     * Services account and Amazon Web Services Region where you're creating the
     * container group definition. For limits on image size, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/gamelift.html">Amazon
     * GameLift endpoints and quotas</a>. You can use any of the following image URI
     * formats: </p> <ul> <li> <p>Image ID only: <code>[AWS account].dkr.ecr.[AWS
     * region].amazonaws.com/[repository ID]</code> </p> </li> <li> <p>Image ID and
     * digest: <code>[AWS account].dkr.ecr.[AWS region].amazonaws.com/[repository
     * ID]@[digest]</code> </p> </li> <li> <p>Image ID and tag: <code>[AWS
     * account].dkr.ecr.[AWS region].amazonaws.com/[repository ID]:[tag]</code> </p>
     * </li> </ul>
     */
    inline void SetImageUri(Aws::String&& value) { m_imageUriHasBeenSet = true; m_imageUri = std::move(value); }

    /**
     * <p>The location of a container image that $short; will copy and deploy to a
     * container fleet. Images in Amazon Elastic Container Registry private
     * repositories are supported. The repository must be in the same Amazon Web
     * Services account and Amazon Web Services Region where you're creating the
     * container group definition. For limits on image size, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/gamelift.html">Amazon
     * GameLift endpoints and quotas</a>. You can use any of the following image URI
     * formats: </p> <ul> <li> <p>Image ID only: <code>[AWS account].dkr.ecr.[AWS
     * region].amazonaws.com/[repository ID]</code> </p> </li> <li> <p>Image ID and
     * digest: <code>[AWS account].dkr.ecr.[AWS region].amazonaws.com/[repository
     * ID]@[digest]</code> </p> </li> <li> <p>Image ID and tag: <code>[AWS
     * account].dkr.ecr.[AWS region].amazonaws.com/[repository ID]:[tag]</code> </p>
     * </li> </ul>
     */
    inline void SetImageUri(const char* value) { m_imageUriHasBeenSet = true; m_imageUri.assign(value); }

    /**
     * <p>The location of a container image that $short; will copy and deploy to a
     * container fleet. Images in Amazon Elastic Container Registry private
     * repositories are supported. The repository must be in the same Amazon Web
     * Services account and Amazon Web Services Region where you're creating the
     * container group definition. For limits on image size, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/gamelift.html">Amazon
     * GameLift endpoints and quotas</a>. You can use any of the following image URI
     * formats: </p> <ul> <li> <p>Image ID only: <code>[AWS account].dkr.ecr.[AWS
     * region].amazonaws.com/[repository ID]</code> </p> </li> <li> <p>Image ID and
     * digest: <code>[AWS account].dkr.ecr.[AWS region].amazonaws.com/[repository
     * ID]@[digest]</code> </p> </li> <li> <p>Image ID and tag: <code>[AWS
     * account].dkr.ecr.[AWS region].amazonaws.com/[repository ID]:[tag]</code> </p>
     * </li> </ul>
     */
    inline ContainerDefinitionInput& WithImageUri(const Aws::String& value) { SetImageUri(value); return *this;}

    /**
     * <p>The location of a container image that $short; will copy and deploy to a
     * container fleet. Images in Amazon Elastic Container Registry private
     * repositories are supported. The repository must be in the same Amazon Web
     * Services account and Amazon Web Services Region where you're creating the
     * container group definition. For limits on image size, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/gamelift.html">Amazon
     * GameLift endpoints and quotas</a>. You can use any of the following image URI
     * formats: </p> <ul> <li> <p>Image ID only: <code>[AWS account].dkr.ecr.[AWS
     * region].amazonaws.com/[repository ID]</code> </p> </li> <li> <p>Image ID and
     * digest: <code>[AWS account].dkr.ecr.[AWS region].amazonaws.com/[repository
     * ID]@[digest]</code> </p> </li> <li> <p>Image ID and tag: <code>[AWS
     * account].dkr.ecr.[AWS region].amazonaws.com/[repository ID]:[tag]</code> </p>
     * </li> </ul>
     */
    inline ContainerDefinitionInput& WithImageUri(Aws::String&& value) { SetImageUri(std::move(value)); return *this;}

    /**
     * <p>The location of a container image that $short; will copy and deploy to a
     * container fleet. Images in Amazon Elastic Container Registry private
     * repositories are supported. The repository must be in the same Amazon Web
     * Services account and Amazon Web Services Region where you're creating the
     * container group definition. For limits on image size, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/gamelift.html">Amazon
     * GameLift endpoints and quotas</a>. You can use any of the following image URI
     * formats: </p> <ul> <li> <p>Image ID only: <code>[AWS account].dkr.ecr.[AWS
     * region].amazonaws.com/[repository ID]</code> </p> </li> <li> <p>Image ID and
     * digest: <code>[AWS account].dkr.ecr.[AWS region].amazonaws.com/[repository
     * ID]@[digest]</code> </p> </li> <li> <p>Image ID and tag: <code>[AWS
     * account].dkr.ecr.[AWS region].amazonaws.com/[repository ID]:[tag]</code> </p>
     * </li> </ul>
     */
    inline ContainerDefinitionInput& WithImageUri(const char* value) { SetImageUri(value); return *this;}


    /**
     * <p>The amount of memory to make available to the container. If you don't specify
     * memory limits for this container, then it shares the container group's total
     * memory allocation. </p> <p> <b>Related data type: </b>
     * <a>ContainerGroupDefinition$TotalMemoryLimit</a> </p>
     */
    inline const ContainerMemoryLimits& GetMemoryLimits() const{ return m_memoryLimits; }

    /**
     * <p>The amount of memory to make available to the container. If you don't specify
     * memory limits for this container, then it shares the container group's total
     * memory allocation. </p> <p> <b>Related data type: </b>
     * <a>ContainerGroupDefinition$TotalMemoryLimit</a> </p>
     */
    inline bool MemoryLimitsHasBeenSet() const { return m_memoryLimitsHasBeenSet; }

    /**
     * <p>The amount of memory to make available to the container. If you don't specify
     * memory limits for this container, then it shares the container group's total
     * memory allocation. </p> <p> <b>Related data type: </b>
     * <a>ContainerGroupDefinition$TotalMemoryLimit</a> </p>
     */
    inline void SetMemoryLimits(const ContainerMemoryLimits& value) { m_memoryLimitsHasBeenSet = true; m_memoryLimits = value; }

    /**
     * <p>The amount of memory to make available to the container. If you don't specify
     * memory limits for this container, then it shares the container group's total
     * memory allocation. </p> <p> <b>Related data type: </b>
     * <a>ContainerGroupDefinition$TotalMemoryLimit</a> </p>
     */
    inline void SetMemoryLimits(ContainerMemoryLimits&& value) { m_memoryLimitsHasBeenSet = true; m_memoryLimits = std::move(value); }

    /**
     * <p>The amount of memory to make available to the container. If you don't specify
     * memory limits for this container, then it shares the container group's total
     * memory allocation. </p> <p> <b>Related data type: </b>
     * <a>ContainerGroupDefinition$TotalMemoryLimit</a> </p>
     */
    inline ContainerDefinitionInput& WithMemoryLimits(const ContainerMemoryLimits& value) { SetMemoryLimits(value); return *this;}

    /**
     * <p>The amount of memory to make available to the container. If you don't specify
     * memory limits for this container, then it shares the container group's total
     * memory allocation. </p> <p> <b>Related data type: </b>
     * <a>ContainerGroupDefinition$TotalMemoryLimit</a> </p>
     */
    inline ContainerDefinitionInput& WithMemoryLimits(ContainerMemoryLimits&& value) { SetMemoryLimits(std::move(value)); return *this;}


    /**
     * <p>A set of ports that Amazon GameLift can assign to processes in the container.
     * All processes that accept inbound traffic connections, including game server
     * processes, must be assigned a port from this set. The set of ports must be large
     * enough to assign one to each process in the container that needs one. If the
     * container includes your game server, include enough ports to assign one port to
     * each concurrent server process (as defined in a container fleet's
     * <a>RuntimeConfiguration</a>). For more details, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/containers-network">Networking
     * for container fleets</a>. </p> <p>Container ports aren't directly accessed by
     * inbound traffic. Amazon GameLift maps these container ports to externally
     * accessible connection ports, which are assigned as needed from the container
     * fleet's <code>ConnectionPortRange</code>.</p>
     */
    inline const ContainerPortConfiguration& GetPortConfiguration() const{ return m_portConfiguration; }

    /**
     * <p>A set of ports that Amazon GameLift can assign to processes in the container.
     * All processes that accept inbound traffic connections, including game server
     * processes, must be assigned a port from this set. The set of ports must be large
     * enough to assign one to each process in the container that needs one. If the
     * container includes your game server, include enough ports to assign one port to
     * each concurrent server process (as defined in a container fleet's
     * <a>RuntimeConfiguration</a>). For more details, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/containers-network">Networking
     * for container fleets</a>. </p> <p>Container ports aren't directly accessed by
     * inbound traffic. Amazon GameLift maps these container ports to externally
     * accessible connection ports, which are assigned as needed from the container
     * fleet's <code>ConnectionPortRange</code>.</p>
     */
    inline bool PortConfigurationHasBeenSet() const { return m_portConfigurationHasBeenSet; }

    /**
     * <p>A set of ports that Amazon GameLift can assign to processes in the container.
     * All processes that accept inbound traffic connections, including game server
     * processes, must be assigned a port from this set. The set of ports must be large
     * enough to assign one to each process in the container that needs one. If the
     * container includes your game server, include enough ports to assign one port to
     * each concurrent server process (as defined in a container fleet's
     * <a>RuntimeConfiguration</a>). For more details, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/containers-network">Networking
     * for container fleets</a>. </p> <p>Container ports aren't directly accessed by
     * inbound traffic. Amazon GameLift maps these container ports to externally
     * accessible connection ports, which are assigned as needed from the container
     * fleet's <code>ConnectionPortRange</code>.</p>
     */
    inline void SetPortConfiguration(const ContainerPortConfiguration& value) { m_portConfigurationHasBeenSet = true; m_portConfiguration = value; }

    /**
     * <p>A set of ports that Amazon GameLift can assign to processes in the container.
     * All processes that accept inbound traffic connections, including game server
     * processes, must be assigned a port from this set. The set of ports must be large
     * enough to assign one to each process in the container that needs one. If the
     * container includes your game server, include enough ports to assign one port to
     * each concurrent server process (as defined in a container fleet's
     * <a>RuntimeConfiguration</a>). For more details, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/containers-network">Networking
     * for container fleets</a>. </p> <p>Container ports aren't directly accessed by
     * inbound traffic. Amazon GameLift maps these container ports to externally
     * accessible connection ports, which are assigned as needed from the container
     * fleet's <code>ConnectionPortRange</code>.</p>
     */
    inline void SetPortConfiguration(ContainerPortConfiguration&& value) { m_portConfigurationHasBeenSet = true; m_portConfiguration = std::move(value); }

    /**
     * <p>A set of ports that Amazon GameLift can assign to processes in the container.
     * All processes that accept inbound traffic connections, including game server
     * processes, must be assigned a port from this set. The set of ports must be large
     * enough to assign one to each process in the container that needs one. If the
     * container includes your game server, include enough ports to assign one port to
     * each concurrent server process (as defined in a container fleet's
     * <a>RuntimeConfiguration</a>). For more details, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/containers-network">Networking
     * for container fleets</a>. </p> <p>Container ports aren't directly accessed by
     * inbound traffic. Amazon GameLift maps these container ports to externally
     * accessible connection ports, which are assigned as needed from the container
     * fleet's <code>ConnectionPortRange</code>.</p>
     */
    inline ContainerDefinitionInput& WithPortConfiguration(const ContainerPortConfiguration& value) { SetPortConfiguration(value); return *this;}

    /**
     * <p>A set of ports that Amazon GameLift can assign to processes in the container.
     * All processes that accept inbound traffic connections, including game server
     * processes, must be assigned a port from this set. The set of ports must be large
     * enough to assign one to each process in the container that needs one. If the
     * container includes your game server, include enough ports to assign one port to
     * each concurrent server process (as defined in a container fleet's
     * <a>RuntimeConfiguration</a>). For more details, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/containers-network">Networking
     * for container fleets</a>. </p> <p>Container ports aren't directly accessed by
     * inbound traffic. Amazon GameLift maps these container ports to externally
     * accessible connection ports, which are assigned as needed from the container
     * fleet's <code>ConnectionPortRange</code>.</p>
     */
    inline ContainerDefinitionInput& WithPortConfiguration(ContainerPortConfiguration&& value) { SetPortConfiguration(std::move(value)); return *this;}


    /**
     * <p>The number of CPU units to reserve for this container. The container can use
     * more resources when needed, if available. Note: 1 vCPU unit equals 1024 CPU
     * units. If you don't reserve CPU units for this container, then it shares the
     * total CPU limit for the container group. This property is similar to the Amazon
     * ECS container definition parameter <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html#container_definition_environment">environment</a>
     * (<i>Amazon Elastic Container Service Developer Guide).</i> </p> <p> <b>Related
     * data type: </b> <a>ContainerGroupDefinition$TotalCpuLimit</a> </p>
     */
    inline int GetCpu() const{ return m_cpu; }

    /**
     * <p>The number of CPU units to reserve for this container. The container can use
     * more resources when needed, if available. Note: 1 vCPU unit equals 1024 CPU
     * units. If you don't reserve CPU units for this container, then it shares the
     * total CPU limit for the container group. This property is similar to the Amazon
     * ECS container definition parameter <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html#container_definition_environment">environment</a>
     * (<i>Amazon Elastic Container Service Developer Guide).</i> </p> <p> <b>Related
     * data type: </b> <a>ContainerGroupDefinition$TotalCpuLimit</a> </p>
     */
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }

    /**
     * <p>The number of CPU units to reserve for this container. The container can use
     * more resources when needed, if available. Note: 1 vCPU unit equals 1024 CPU
     * units. If you don't reserve CPU units for this container, then it shares the
     * total CPU limit for the container group. This property is similar to the Amazon
     * ECS container definition parameter <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html#container_definition_environment">environment</a>
     * (<i>Amazon Elastic Container Service Developer Guide).</i> </p> <p> <b>Related
     * data type: </b> <a>ContainerGroupDefinition$TotalCpuLimit</a> </p>
     */
    inline void SetCpu(int value) { m_cpuHasBeenSet = true; m_cpu = value; }

    /**
     * <p>The number of CPU units to reserve for this container. The container can use
     * more resources when needed, if available. Note: 1 vCPU unit equals 1024 CPU
     * units. If you don't reserve CPU units for this container, then it shares the
     * total CPU limit for the container group. This property is similar to the Amazon
     * ECS container definition parameter <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html#container_definition_environment">environment</a>
     * (<i>Amazon Elastic Container Service Developer Guide).</i> </p> <p> <b>Related
     * data type: </b> <a>ContainerGroupDefinition$TotalCpuLimit</a> </p>
     */
    inline ContainerDefinitionInput& WithCpu(int value) { SetCpu(value); return *this;}


    /**
     * <p>Configuration for a non-terminal health check. A container automatically
     * restarts if it stops functioning. This parameter lets you define additional
     * reasons to consider a container unhealthy and restart it. You can set a health
     * check for any container except for the essential container in the replica
     * container group. If an essential container in the daemon group fails a health
     * check, the entire container group is restarted. </p>
     */
    inline const ContainerHealthCheck& GetHealthCheck() const{ return m_healthCheck; }

    /**
     * <p>Configuration for a non-terminal health check. A container automatically
     * restarts if it stops functioning. This parameter lets you define additional
     * reasons to consider a container unhealthy and restart it. You can set a health
     * check for any container except for the essential container in the replica
     * container group. If an essential container in the daemon group fails a health
     * check, the entire container group is restarted. </p>
     */
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }

    /**
     * <p>Configuration for a non-terminal health check. A container automatically
     * restarts if it stops functioning. This parameter lets you define additional
     * reasons to consider a container unhealthy and restart it. You can set a health
     * check for any container except for the essential container in the replica
     * container group. If an essential container in the daemon group fails a health
     * check, the entire container group is restarted. </p>
     */
    inline void SetHealthCheck(const ContainerHealthCheck& value) { m_healthCheckHasBeenSet = true; m_healthCheck = value; }

    /**
     * <p>Configuration for a non-terminal health check. A container automatically
     * restarts if it stops functioning. This parameter lets you define additional
     * reasons to consider a container unhealthy and restart it. You can set a health
     * check for any container except for the essential container in the replica
     * container group. If an essential container in the daemon group fails a health
     * check, the entire container group is restarted. </p>
     */
    inline void SetHealthCheck(ContainerHealthCheck&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::move(value); }

    /**
     * <p>Configuration for a non-terminal health check. A container automatically
     * restarts if it stops functioning. This parameter lets you define additional
     * reasons to consider a container unhealthy and restart it. You can set a health
     * check for any container except for the essential container in the replica
     * container group. If an essential container in the daemon group fails a health
     * check, the entire container group is restarted. </p>
     */
    inline ContainerDefinitionInput& WithHealthCheck(const ContainerHealthCheck& value) { SetHealthCheck(value); return *this;}

    /**
     * <p>Configuration for a non-terminal health check. A container automatically
     * restarts if it stops functioning. This parameter lets you define additional
     * reasons to consider a container unhealthy and restart it. You can set a health
     * check for any container except for the essential container in the replica
     * container group. If an essential container in the daemon group fails a health
     * check, the entire container group is restarted. </p>
     */
    inline ContainerDefinitionInput& WithHealthCheck(ContainerHealthCheck&& value) { SetHealthCheck(std::move(value)); return *this;}


    /**
     * <p>A command to pass to the container on startup. Add multiple arguments as
     * additional strings in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-command">ContainerDefinition
     * command</a> parameter in the <i>Amazon Elastic Container Service API
     * reference.</i> </p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }

    /**
     * <p>A command to pass to the container on startup. Add multiple arguments as
     * additional strings in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-command">ContainerDefinition
     * command</a> parameter in the <i>Amazon Elastic Container Service API
     * reference.</i> </p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>A command to pass to the container on startup. Add multiple arguments as
     * additional strings in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-command">ContainerDefinition
     * command</a> parameter in the <i>Amazon Elastic Container Service API
     * reference.</i> </p>
     */
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>A command to pass to the container on startup. Add multiple arguments as
     * additional strings in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-command">ContainerDefinition
     * command</a> parameter in the <i>Amazon Elastic Container Service API
     * reference.</i> </p>
     */
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>A command to pass to the container on startup. Add multiple arguments as
     * additional strings in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-command">ContainerDefinition
     * command</a> parameter in the <i>Amazon Elastic Container Service API
     * reference.</i> </p>
     */
    inline ContainerDefinitionInput& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}

    /**
     * <p>A command to pass to the container on startup. Add multiple arguments as
     * additional strings in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-command">ContainerDefinition
     * command</a> parameter in the <i>Amazon Elastic Container Service API
     * reference.</i> </p>
     */
    inline ContainerDefinitionInput& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}

    /**
     * <p>A command to pass to the container on startup. Add multiple arguments as
     * additional strings in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-command">ContainerDefinition
     * command</a> parameter in the <i>Amazon Elastic Container Service API
     * reference.</i> </p>
     */
    inline ContainerDefinitionInput& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>A command to pass to the container on startup. Add multiple arguments as
     * additional strings in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-command">ContainerDefinition
     * command</a> parameter in the <i>Amazon Elastic Container Service API
     * reference.</i> </p>
     */
    inline ContainerDefinitionInput& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }

    /**
     * <p>A command to pass to the container on startup. Add multiple arguments as
     * additional strings in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-command">ContainerDefinition
     * command</a> parameter in the <i>Amazon Elastic Container Service API
     * reference.</i> </p>
     */
    inline ContainerDefinitionInput& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }


    /**
     * <p>Specifies whether the container is vital for the container group to function
     * properly. If an essential container fails, it causes the entire container group
     * to restart. Each container group must have an essential container.</p> <p>
     * <b>Replica container groups</b> - A replica group must have exactly one
     * essential container. Use the following to configure an essential replica
     * container:</p> <ul> <li> <p>Choose a container is running your game server and
     * the Amazon GameLift Agent.</p> </li> <li> <p>Include a port configuration. This
     * container runs your game server processes, and each process requires a container
     * port to allow access to game clients.</p> </li> <li> <p>Don't configure a health
     * check. The Agent handles this task for the essential replica container. </p>
     * </li> </ul> <p> <b>Daemon container groups</b> - A daemon group must have at
     * least one essential container. </p> <p> </p>
     */
    inline bool GetEssential() const{ return m_essential; }

    /**
     * <p>Specifies whether the container is vital for the container group to function
     * properly. If an essential container fails, it causes the entire container group
     * to restart. Each container group must have an essential container.</p> <p>
     * <b>Replica container groups</b> - A replica group must have exactly one
     * essential container. Use the following to configure an essential replica
     * container:</p> <ul> <li> <p>Choose a container is running your game server and
     * the Amazon GameLift Agent.</p> </li> <li> <p>Include a port configuration. This
     * container runs your game server processes, and each process requires a container
     * port to allow access to game clients.</p> </li> <li> <p>Don't configure a health
     * check. The Agent handles this task for the essential replica container. </p>
     * </li> </ul> <p> <b>Daemon container groups</b> - A daemon group must have at
     * least one essential container. </p> <p> </p>
     */
    inline bool EssentialHasBeenSet() const { return m_essentialHasBeenSet; }

    /**
     * <p>Specifies whether the container is vital for the container group to function
     * properly. If an essential container fails, it causes the entire container group
     * to restart. Each container group must have an essential container.</p> <p>
     * <b>Replica container groups</b> - A replica group must have exactly one
     * essential container. Use the following to configure an essential replica
     * container:</p> <ul> <li> <p>Choose a container is running your game server and
     * the Amazon GameLift Agent.</p> </li> <li> <p>Include a port configuration. This
     * container runs your game server processes, and each process requires a container
     * port to allow access to game clients.</p> </li> <li> <p>Don't configure a health
     * check. The Agent handles this task for the essential replica container. </p>
     * </li> </ul> <p> <b>Daemon container groups</b> - A daemon group must have at
     * least one essential container. </p> <p> </p>
     */
    inline void SetEssential(bool value) { m_essentialHasBeenSet = true; m_essential = value; }

    /**
     * <p>Specifies whether the container is vital for the container group to function
     * properly. If an essential container fails, it causes the entire container group
     * to restart. Each container group must have an essential container.</p> <p>
     * <b>Replica container groups</b> - A replica group must have exactly one
     * essential container. Use the following to configure an essential replica
     * container:</p> <ul> <li> <p>Choose a container is running your game server and
     * the Amazon GameLift Agent.</p> </li> <li> <p>Include a port configuration. This
     * container runs your game server processes, and each process requires a container
     * port to allow access to game clients.</p> </li> <li> <p>Don't configure a health
     * check. The Agent handles this task for the essential replica container. </p>
     * </li> </ul> <p> <b>Daemon container groups</b> - A daemon group must have at
     * least one essential container. </p> <p> </p>
     */
    inline ContainerDefinitionInput& WithEssential(bool value) { SetEssential(value); return *this;}


    /**
     * <p>An entry point to pass to the container on startup. Add multiple arguments as
     * additional strings in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-entryPoint">ContainerDefinition::entryPoint</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEntryPoint() const{ return m_entryPoint; }

    /**
     * <p>An entry point to pass to the container on startup. Add multiple arguments as
     * additional strings in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-entryPoint">ContainerDefinition::entryPoint</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }

    /**
     * <p>An entry point to pass to the container on startup. Add multiple arguments as
     * additional strings in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-entryPoint">ContainerDefinition::entryPoint</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline void SetEntryPoint(const Aws::Vector<Aws::String>& value) { m_entryPointHasBeenSet = true; m_entryPoint = value; }

    /**
     * <p>An entry point to pass to the container on startup. Add multiple arguments as
     * additional strings in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-entryPoint">ContainerDefinition::entryPoint</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline void SetEntryPoint(Aws::Vector<Aws::String>&& value) { m_entryPointHasBeenSet = true; m_entryPoint = std::move(value); }

    /**
     * <p>An entry point to pass to the container on startup. Add multiple arguments as
     * additional strings in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-entryPoint">ContainerDefinition::entryPoint</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline ContainerDefinitionInput& WithEntryPoint(const Aws::Vector<Aws::String>& value) { SetEntryPoint(value); return *this;}

    /**
     * <p>An entry point to pass to the container on startup. Add multiple arguments as
     * additional strings in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-entryPoint">ContainerDefinition::entryPoint</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline ContainerDefinitionInput& WithEntryPoint(Aws::Vector<Aws::String>&& value) { SetEntryPoint(std::move(value)); return *this;}

    /**
     * <p>An entry point to pass to the container on startup. Add multiple arguments as
     * additional strings in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-entryPoint">ContainerDefinition::entryPoint</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline ContainerDefinitionInput& AddEntryPoint(const Aws::String& value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(value); return *this; }

    /**
     * <p>An entry point to pass to the container on startup. Add multiple arguments as
     * additional strings in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-entryPoint">ContainerDefinition::entryPoint</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline ContainerDefinitionInput& AddEntryPoint(Aws::String&& value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(std::move(value)); return *this; }

    /**
     * <p>An entry point to pass to the container on startup. Add multiple arguments as
     * additional strings in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-entryPoint">ContainerDefinition::entryPoint</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline ContainerDefinitionInput& AddEntryPoint(const char* value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(value); return *this; }


    /**
     * <p>The directory in the container where commands are run. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-workingDirectory">ContainerDefinition::workingDirectory
     * parameter</a> in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline const Aws::String& GetWorkingDirectory() const{ return m_workingDirectory; }

    /**
     * <p>The directory in the container where commands are run. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-workingDirectory">ContainerDefinition::workingDirectory
     * parameter</a> in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }

    /**
     * <p>The directory in the container where commands are run. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-workingDirectory">ContainerDefinition::workingDirectory
     * parameter</a> in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline void SetWorkingDirectory(const Aws::String& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = value; }

    /**
     * <p>The directory in the container where commands are run. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-workingDirectory">ContainerDefinition::workingDirectory
     * parameter</a> in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline void SetWorkingDirectory(Aws::String&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = std::move(value); }

    /**
     * <p>The directory in the container where commands are run. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-workingDirectory">ContainerDefinition::workingDirectory
     * parameter</a> in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline void SetWorkingDirectory(const char* value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory.assign(value); }

    /**
     * <p>The directory in the container where commands are run. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-workingDirectory">ContainerDefinition::workingDirectory
     * parameter</a> in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline ContainerDefinitionInput& WithWorkingDirectory(const Aws::String& value) { SetWorkingDirectory(value); return *this;}

    /**
     * <p>The directory in the container where commands are run. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-workingDirectory">ContainerDefinition::workingDirectory
     * parameter</a> in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline ContainerDefinitionInput& WithWorkingDirectory(Aws::String&& value) { SetWorkingDirectory(std::move(value)); return *this;}

    /**
     * <p>The directory in the container where commands are run. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-workingDirectory">ContainerDefinition::workingDirectory
     * parameter</a> in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline ContainerDefinitionInput& WithWorkingDirectory(const char* value) { SetWorkingDirectory(value); return *this;}


    /**
     * <p>A set of environment variables to pass to the container on startup. See the
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-environment">ContainerDefinition::environment</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline const Aws::Vector<ContainerEnvironment>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>A set of environment variables to pass to the container on startup. See the
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-environment">ContainerDefinition::environment</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>A set of environment variables to pass to the container on startup. See the
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-environment">ContainerDefinition::environment</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline void SetEnvironment(const Aws::Vector<ContainerEnvironment>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>A set of environment variables to pass to the container on startup. See the
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-environment">ContainerDefinition::environment</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline void SetEnvironment(Aws::Vector<ContainerEnvironment>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>A set of environment variables to pass to the container on startup. See the
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-environment">ContainerDefinition::environment</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline ContainerDefinitionInput& WithEnvironment(const Aws::Vector<ContainerEnvironment>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>A set of environment variables to pass to the container on startup. See the
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-environment">ContainerDefinition::environment</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline ContainerDefinitionInput& WithEnvironment(Aws::Vector<ContainerEnvironment>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>A set of environment variables to pass to the container on startup. See the
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-environment">ContainerDefinition::environment</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline ContainerDefinitionInput& AddEnvironment(const ContainerEnvironment& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }

    /**
     * <p>A set of environment variables to pass to the container on startup. See the
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-environment">ContainerDefinition::environment</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline ContainerDefinitionInput& AddEnvironment(ContainerEnvironment&& value) { m_environmentHasBeenSet = true; m_environment.push_back(std::move(value)); return *this; }


    /**
     * <p>Sets up dependencies between this container and the status of other
     * containers in the same container group. A container can have dependencies on
     * multiple different containers. </p> <p>You can use dependencies to establish a
     * startup/shutdown sequence across the container group. A container startup
     * dependency is reversed on shutdown.</p> <p>For example, you might specify that
     * SideCarContainerB has a <code>START</code> dependency on SideCarContainerA. This
     * dependency means that SideCarContainerB can't start until after
     * SideCarContainerA has started. This dependency is reversed on shutdown, which
     * means that SideCarContainerB must shut down before SideCarContainerA can shut
     * down. </p>
     */
    inline const Aws::Vector<ContainerDependency>& GetDependsOn() const{ return m_dependsOn; }

    /**
     * <p>Sets up dependencies between this container and the status of other
     * containers in the same container group. A container can have dependencies on
     * multiple different containers. </p> <p>You can use dependencies to establish a
     * startup/shutdown sequence across the container group. A container startup
     * dependency is reversed on shutdown.</p> <p>For example, you might specify that
     * SideCarContainerB has a <code>START</code> dependency on SideCarContainerA. This
     * dependency means that SideCarContainerB can't start until after
     * SideCarContainerA has started. This dependency is reversed on shutdown, which
     * means that SideCarContainerB must shut down before SideCarContainerA can shut
     * down. </p>
     */
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }

    /**
     * <p>Sets up dependencies between this container and the status of other
     * containers in the same container group. A container can have dependencies on
     * multiple different containers. </p> <p>You can use dependencies to establish a
     * startup/shutdown sequence across the container group. A container startup
     * dependency is reversed on shutdown.</p> <p>For example, you might specify that
     * SideCarContainerB has a <code>START</code> dependency on SideCarContainerA. This
     * dependency means that SideCarContainerB can't start until after
     * SideCarContainerA has started. This dependency is reversed on shutdown, which
     * means that SideCarContainerB must shut down before SideCarContainerA can shut
     * down. </p>
     */
    inline void SetDependsOn(const Aws::Vector<ContainerDependency>& value) { m_dependsOnHasBeenSet = true; m_dependsOn = value; }

    /**
     * <p>Sets up dependencies between this container and the status of other
     * containers in the same container group. A container can have dependencies on
     * multiple different containers. </p> <p>You can use dependencies to establish a
     * startup/shutdown sequence across the container group. A container startup
     * dependency is reversed on shutdown.</p> <p>For example, you might specify that
     * SideCarContainerB has a <code>START</code> dependency on SideCarContainerA. This
     * dependency means that SideCarContainerB can't start until after
     * SideCarContainerA has started. This dependency is reversed on shutdown, which
     * means that SideCarContainerB must shut down before SideCarContainerA can shut
     * down. </p>
     */
    inline void SetDependsOn(Aws::Vector<ContainerDependency>&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::move(value); }

    /**
     * <p>Sets up dependencies between this container and the status of other
     * containers in the same container group. A container can have dependencies on
     * multiple different containers. </p> <p>You can use dependencies to establish a
     * startup/shutdown sequence across the container group. A container startup
     * dependency is reversed on shutdown.</p> <p>For example, you might specify that
     * SideCarContainerB has a <code>START</code> dependency on SideCarContainerA. This
     * dependency means that SideCarContainerB can't start until after
     * SideCarContainerA has started. This dependency is reversed on shutdown, which
     * means that SideCarContainerB must shut down before SideCarContainerA can shut
     * down. </p>
     */
    inline ContainerDefinitionInput& WithDependsOn(const Aws::Vector<ContainerDependency>& value) { SetDependsOn(value); return *this;}

    /**
     * <p>Sets up dependencies between this container and the status of other
     * containers in the same container group. A container can have dependencies on
     * multiple different containers. </p> <p>You can use dependencies to establish a
     * startup/shutdown sequence across the container group. A container startup
     * dependency is reversed on shutdown.</p> <p>For example, you might specify that
     * SideCarContainerB has a <code>START</code> dependency on SideCarContainerA. This
     * dependency means that SideCarContainerB can't start until after
     * SideCarContainerA has started. This dependency is reversed on shutdown, which
     * means that SideCarContainerB must shut down before SideCarContainerA can shut
     * down. </p>
     */
    inline ContainerDefinitionInput& WithDependsOn(Aws::Vector<ContainerDependency>&& value) { SetDependsOn(std::move(value)); return *this;}

    /**
     * <p>Sets up dependencies between this container and the status of other
     * containers in the same container group. A container can have dependencies on
     * multiple different containers. </p> <p>You can use dependencies to establish a
     * startup/shutdown sequence across the container group. A container startup
     * dependency is reversed on shutdown.</p> <p>For example, you might specify that
     * SideCarContainerB has a <code>START</code> dependency on SideCarContainerA. This
     * dependency means that SideCarContainerB can't start until after
     * SideCarContainerA has started. This dependency is reversed on shutdown, which
     * means that SideCarContainerB must shut down before SideCarContainerA can shut
     * down. </p>
     */
    inline ContainerDefinitionInput& AddDependsOn(const ContainerDependency& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(value); return *this; }

    /**
     * <p>Sets up dependencies between this container and the status of other
     * containers in the same container group. A container can have dependencies on
     * multiple different containers. </p> <p>You can use dependencies to establish a
     * startup/shutdown sequence across the container group. A container startup
     * dependency is reversed on shutdown.</p> <p>For example, you might specify that
     * SideCarContainerB has a <code>START</code> dependency on SideCarContainerA. This
     * dependency means that SideCarContainerB can't start until after
     * SideCarContainerA has started. This dependency is reversed on shutdown, which
     * means that SideCarContainerB must shut down before SideCarContainerA can shut
     * down. </p>
     */
    inline ContainerDefinitionInput& AddDependsOn(ContainerDependency&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    Aws::String m_imageUri;
    bool m_imageUriHasBeenSet = false;

    ContainerMemoryLimits m_memoryLimits;
    bool m_memoryLimitsHasBeenSet = false;

    ContainerPortConfiguration m_portConfiguration;
    bool m_portConfigurationHasBeenSet = false;

    int m_cpu;
    bool m_cpuHasBeenSet = false;

    ContainerHealthCheck m_healthCheck;
    bool m_healthCheckHasBeenSet = false;

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;

    bool m_essential;
    bool m_essentialHasBeenSet = false;

    Aws::Vector<Aws::String> m_entryPoint;
    bool m_entryPointHasBeenSet = false;

    Aws::String m_workingDirectory;
    bool m_workingDirectoryHasBeenSet = false;

    Aws::Vector<ContainerEnvironment> m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::Vector<ContainerDependency> m_dependsOn;
    bool m_dependsOnHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
