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
   * is currently in public preview.</b> </p> <p>Describes a container in a container
   * fleet, the resources available to the container, and the commands that are run
   * when the container starts. Container properties can't be updated. To change a
   * property, create a new container group definition. See also
   * <a>ContainerDefinitionInput</a>. </p> <p> <b>Part of:</b>
   * <a>ContainerGroupDefinition</a> </p> <p> <b>Returned by:</b>
   * <a>DescribeContainerGroupDefinition</a>, <a>ListContainerGroupDefinitions</a>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerDefinition">AWS
   * API Reference</a></p>
   */
  class ContainerDefinition
  {
  public:
    AWS_GAMELIFT_API ContainerDefinition();
    AWS_GAMELIFT_API ContainerDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The container definition identifier. Container names are unique within a
     * container group definition. </p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }

    /**
     * <p>The container definition identifier. Container names are unique within a
     * container group definition. </p>
     */
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }

    /**
     * <p>The container definition identifier. Container names are unique within a
     * container group definition. </p>
     */
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }

    /**
     * <p>The container definition identifier. Container names are unique within a
     * container group definition. </p>
     */
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }

    /**
     * <p>The container definition identifier. Container names are unique within a
     * container group definition. </p>
     */
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }

    /**
     * <p>The container definition identifier. Container names are unique within a
     * container group definition. </p>
     */
    inline ContainerDefinition& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}

    /**
     * <p>The container definition identifier. Container names are unique within a
     * container group definition. </p>
     */
    inline ContainerDefinition& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}

    /**
     * <p>The container definition identifier. Container names are unique within a
     * container group definition. </p>
     */
    inline ContainerDefinition& WithContainerName(const char* value) { SetContainerName(value); return *this;}


    /**
     * <p>The URI to the image that $short; copied and deployed to a container fleet.
     * For a more specific identifier, see <code>ResolvedImageDigest</code>. </p>
     */
    inline const Aws::String& GetImageUri() const{ return m_imageUri; }

    /**
     * <p>The URI to the image that $short; copied and deployed to a container fleet.
     * For a more specific identifier, see <code>ResolvedImageDigest</code>. </p>
     */
    inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }

    /**
     * <p>The URI to the image that $short; copied and deployed to a container fleet.
     * For a more specific identifier, see <code>ResolvedImageDigest</code>. </p>
     */
    inline void SetImageUri(const Aws::String& value) { m_imageUriHasBeenSet = true; m_imageUri = value; }

    /**
     * <p>The URI to the image that $short; copied and deployed to a container fleet.
     * For a more specific identifier, see <code>ResolvedImageDigest</code>. </p>
     */
    inline void SetImageUri(Aws::String&& value) { m_imageUriHasBeenSet = true; m_imageUri = std::move(value); }

    /**
     * <p>The URI to the image that $short; copied and deployed to a container fleet.
     * For a more specific identifier, see <code>ResolvedImageDigest</code>. </p>
     */
    inline void SetImageUri(const char* value) { m_imageUriHasBeenSet = true; m_imageUri.assign(value); }

    /**
     * <p>The URI to the image that $short; copied and deployed to a container fleet.
     * For a more specific identifier, see <code>ResolvedImageDigest</code>. </p>
     */
    inline ContainerDefinition& WithImageUri(const Aws::String& value) { SetImageUri(value); return *this;}

    /**
     * <p>The URI to the image that $short; copied and deployed to a container fleet.
     * For a more specific identifier, see <code>ResolvedImageDigest</code>. </p>
     */
    inline ContainerDefinition& WithImageUri(Aws::String&& value) { SetImageUri(std::move(value)); return *this;}

    /**
     * <p>The URI to the image that $short; copied and deployed to a container fleet.
     * For a more specific identifier, see <code>ResolvedImageDigest</code>. </p>
     */
    inline ContainerDefinition& WithImageUri(const char* value) { SetImageUri(value); return *this;}


    /**
     * <p>A unique and immutable identifier for the container image that is deployed to
     * a container fleet. The digest is a SHA 256 hash of the container image manifest.
     * </p>
     */
    inline const Aws::String& GetResolvedImageDigest() const{ return m_resolvedImageDigest; }

    /**
     * <p>A unique and immutable identifier for the container image that is deployed to
     * a container fleet. The digest is a SHA 256 hash of the container image manifest.
     * </p>
     */
    inline bool ResolvedImageDigestHasBeenSet() const { return m_resolvedImageDigestHasBeenSet; }

    /**
     * <p>A unique and immutable identifier for the container image that is deployed to
     * a container fleet. The digest is a SHA 256 hash of the container image manifest.
     * </p>
     */
    inline void SetResolvedImageDigest(const Aws::String& value) { m_resolvedImageDigestHasBeenSet = true; m_resolvedImageDigest = value; }

    /**
     * <p>A unique and immutable identifier for the container image that is deployed to
     * a container fleet. The digest is a SHA 256 hash of the container image manifest.
     * </p>
     */
    inline void SetResolvedImageDigest(Aws::String&& value) { m_resolvedImageDigestHasBeenSet = true; m_resolvedImageDigest = std::move(value); }

    /**
     * <p>A unique and immutable identifier for the container image that is deployed to
     * a container fleet. The digest is a SHA 256 hash of the container image manifest.
     * </p>
     */
    inline void SetResolvedImageDigest(const char* value) { m_resolvedImageDigestHasBeenSet = true; m_resolvedImageDigest.assign(value); }

    /**
     * <p>A unique and immutable identifier for the container image that is deployed to
     * a container fleet. The digest is a SHA 256 hash of the container image manifest.
     * </p>
     */
    inline ContainerDefinition& WithResolvedImageDigest(const Aws::String& value) { SetResolvedImageDigest(value); return *this;}

    /**
     * <p>A unique and immutable identifier for the container image that is deployed to
     * a container fleet. The digest is a SHA 256 hash of the container image manifest.
     * </p>
     */
    inline ContainerDefinition& WithResolvedImageDigest(Aws::String&& value) { SetResolvedImageDigest(std::move(value)); return *this;}

    /**
     * <p>A unique and immutable identifier for the container image that is deployed to
     * a container fleet. The digest is a SHA 256 hash of the container image manifest.
     * </p>
     */
    inline ContainerDefinition& WithResolvedImageDigest(const char* value) { SetResolvedImageDigest(value); return *this;}


    /**
     * <p>The amount of memory that Amazon GameLift makes available to the container.
     * If memory limits aren't set for an individual container, the container shares
     * the container group's total memory allocation.</p> <p> <b>Related data type:
     * </b> <a>ContainerGroupDefinition$TotalMemoryLimit</a> </p>
     */
    inline const ContainerMemoryLimits& GetMemoryLimits() const{ return m_memoryLimits; }

    /**
     * <p>The amount of memory that Amazon GameLift makes available to the container.
     * If memory limits aren't set for an individual container, the container shares
     * the container group's total memory allocation.</p> <p> <b>Related data type:
     * </b> <a>ContainerGroupDefinition$TotalMemoryLimit</a> </p>
     */
    inline bool MemoryLimitsHasBeenSet() const { return m_memoryLimitsHasBeenSet; }

    /**
     * <p>The amount of memory that Amazon GameLift makes available to the container.
     * If memory limits aren't set for an individual container, the container shares
     * the container group's total memory allocation.</p> <p> <b>Related data type:
     * </b> <a>ContainerGroupDefinition$TotalMemoryLimit</a> </p>
     */
    inline void SetMemoryLimits(const ContainerMemoryLimits& value) { m_memoryLimitsHasBeenSet = true; m_memoryLimits = value; }

    /**
     * <p>The amount of memory that Amazon GameLift makes available to the container.
     * If memory limits aren't set for an individual container, the container shares
     * the container group's total memory allocation.</p> <p> <b>Related data type:
     * </b> <a>ContainerGroupDefinition$TotalMemoryLimit</a> </p>
     */
    inline void SetMemoryLimits(ContainerMemoryLimits&& value) { m_memoryLimitsHasBeenSet = true; m_memoryLimits = std::move(value); }

    /**
     * <p>The amount of memory that Amazon GameLift makes available to the container.
     * If memory limits aren't set for an individual container, the container shares
     * the container group's total memory allocation.</p> <p> <b>Related data type:
     * </b> <a>ContainerGroupDefinition$TotalMemoryLimit</a> </p>
     */
    inline ContainerDefinition& WithMemoryLimits(const ContainerMemoryLimits& value) { SetMemoryLimits(value); return *this;}

    /**
     * <p>The amount of memory that Amazon GameLift makes available to the container.
     * If memory limits aren't set for an individual container, the container shares
     * the container group's total memory allocation.</p> <p> <b>Related data type:
     * </b> <a>ContainerGroupDefinition$TotalMemoryLimit</a> </p>
     */
    inline ContainerDefinition& WithMemoryLimits(ContainerMemoryLimits&& value) { SetMemoryLimits(std::move(value)); return *this;}


    /**
     * <p>Defines the ports that are available to assign to processes in the container.
     * For example, a game server process requires a container port to allow game
     * clients to connect to it. Container ports aren't directly accessed by inbound
     * traffic. Amazon GameLift maps these container ports to externally accessible
     * connection ports, which are assigned as needed from the container fleet's
     * <code>ConnectionPortRange</code>. </p>
     */
    inline const ContainerPortConfiguration& GetPortConfiguration() const{ return m_portConfiguration; }

    /**
     * <p>Defines the ports that are available to assign to processes in the container.
     * For example, a game server process requires a container port to allow game
     * clients to connect to it. Container ports aren't directly accessed by inbound
     * traffic. Amazon GameLift maps these container ports to externally accessible
     * connection ports, which are assigned as needed from the container fleet's
     * <code>ConnectionPortRange</code>. </p>
     */
    inline bool PortConfigurationHasBeenSet() const { return m_portConfigurationHasBeenSet; }

    /**
     * <p>Defines the ports that are available to assign to processes in the container.
     * For example, a game server process requires a container port to allow game
     * clients to connect to it. Container ports aren't directly accessed by inbound
     * traffic. Amazon GameLift maps these container ports to externally accessible
     * connection ports, which are assigned as needed from the container fleet's
     * <code>ConnectionPortRange</code>. </p>
     */
    inline void SetPortConfiguration(const ContainerPortConfiguration& value) { m_portConfigurationHasBeenSet = true; m_portConfiguration = value; }

    /**
     * <p>Defines the ports that are available to assign to processes in the container.
     * For example, a game server process requires a container port to allow game
     * clients to connect to it. Container ports aren't directly accessed by inbound
     * traffic. Amazon GameLift maps these container ports to externally accessible
     * connection ports, which are assigned as needed from the container fleet's
     * <code>ConnectionPortRange</code>. </p>
     */
    inline void SetPortConfiguration(ContainerPortConfiguration&& value) { m_portConfigurationHasBeenSet = true; m_portConfiguration = std::move(value); }

    /**
     * <p>Defines the ports that are available to assign to processes in the container.
     * For example, a game server process requires a container port to allow game
     * clients to connect to it. Container ports aren't directly accessed by inbound
     * traffic. Amazon GameLift maps these container ports to externally accessible
     * connection ports, which are assigned as needed from the container fleet's
     * <code>ConnectionPortRange</code>. </p>
     */
    inline ContainerDefinition& WithPortConfiguration(const ContainerPortConfiguration& value) { SetPortConfiguration(value); return *this;}

    /**
     * <p>Defines the ports that are available to assign to processes in the container.
     * For example, a game server process requires a container port to allow game
     * clients to connect to it. Container ports aren't directly accessed by inbound
     * traffic. Amazon GameLift maps these container ports to externally accessible
     * connection ports, which are assigned as needed from the container fleet's
     * <code>ConnectionPortRange</code>. </p>
     */
    inline ContainerDefinition& WithPortConfiguration(ContainerPortConfiguration&& value) { SetPortConfiguration(std::move(value)); return *this;}


    /**
     * <p>The number of CPU units that are reserved for the container. Note: 1 vCPU
     * unit equals 1024 CPU units. If no resources are reserved, the container shares
     * the total CPU limit for the container group.</p> <p> <b>Related data type: </b>
     * <a>ContainerGroupDefinition$TotalCpuLimit</a> </p>
     */
    inline int GetCpu() const{ return m_cpu; }

    /**
     * <p>The number of CPU units that are reserved for the container. Note: 1 vCPU
     * unit equals 1024 CPU units. If no resources are reserved, the container shares
     * the total CPU limit for the container group.</p> <p> <b>Related data type: </b>
     * <a>ContainerGroupDefinition$TotalCpuLimit</a> </p>
     */
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }

    /**
     * <p>The number of CPU units that are reserved for the container. Note: 1 vCPU
     * unit equals 1024 CPU units. If no resources are reserved, the container shares
     * the total CPU limit for the container group.</p> <p> <b>Related data type: </b>
     * <a>ContainerGroupDefinition$TotalCpuLimit</a> </p>
     */
    inline void SetCpu(int value) { m_cpuHasBeenSet = true; m_cpu = value; }

    /**
     * <p>The number of CPU units that are reserved for the container. Note: 1 vCPU
     * unit equals 1024 CPU units. If no resources are reserved, the container shares
     * the total CPU limit for the container group.</p> <p> <b>Related data type: </b>
     * <a>ContainerGroupDefinition$TotalCpuLimit</a> </p>
     */
    inline ContainerDefinition& WithCpu(int value) { SetCpu(value); return *this;}


    /**
     * <p>A configuration for a non-terminal health check. A container, which
     * automatically restarts if it stops functioning, also restarts if it fails this
     * health check. If an essential container in the daemon group fails a health
     * check, the entire container group is restarted. The essential container in the
     * replica group doesn't use this health check mechanism, because the Amazon
     * GameLift Agent automatically handles the task.</p>
     */
    inline const ContainerHealthCheck& GetHealthCheck() const{ return m_healthCheck; }

    /**
     * <p>A configuration for a non-terminal health check. A container, which
     * automatically restarts if it stops functioning, also restarts if it fails this
     * health check. If an essential container in the daemon group fails a health
     * check, the entire container group is restarted. The essential container in the
     * replica group doesn't use this health check mechanism, because the Amazon
     * GameLift Agent automatically handles the task.</p>
     */
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }

    /**
     * <p>A configuration for a non-terminal health check. A container, which
     * automatically restarts if it stops functioning, also restarts if it fails this
     * health check. If an essential container in the daemon group fails a health
     * check, the entire container group is restarted. The essential container in the
     * replica group doesn't use this health check mechanism, because the Amazon
     * GameLift Agent automatically handles the task.</p>
     */
    inline void SetHealthCheck(const ContainerHealthCheck& value) { m_healthCheckHasBeenSet = true; m_healthCheck = value; }

    /**
     * <p>A configuration for a non-terminal health check. A container, which
     * automatically restarts if it stops functioning, also restarts if it fails this
     * health check. If an essential container in the daemon group fails a health
     * check, the entire container group is restarted. The essential container in the
     * replica group doesn't use this health check mechanism, because the Amazon
     * GameLift Agent automatically handles the task.</p>
     */
    inline void SetHealthCheck(ContainerHealthCheck&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::move(value); }

    /**
     * <p>A configuration for a non-terminal health check. A container, which
     * automatically restarts if it stops functioning, also restarts if it fails this
     * health check. If an essential container in the daemon group fails a health
     * check, the entire container group is restarted. The essential container in the
     * replica group doesn't use this health check mechanism, because the Amazon
     * GameLift Agent automatically handles the task.</p>
     */
    inline ContainerDefinition& WithHealthCheck(const ContainerHealthCheck& value) { SetHealthCheck(value); return *this;}

    /**
     * <p>A configuration for a non-terminal health check. A container, which
     * automatically restarts if it stops functioning, also restarts if it fails this
     * health check. If an essential container in the daemon group fails a health
     * check, the entire container group is restarted. The essential container in the
     * replica group doesn't use this health check mechanism, because the Amazon
     * GameLift Agent automatically handles the task.</p>
     */
    inline ContainerDefinition& WithHealthCheck(ContainerHealthCheck&& value) { SetHealthCheck(std::move(value)); return *this;}


    /**
     * <p>A command that's passed to the container on startup. Each argument for the
     * command is an additional string in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-command">ContainerDefinition::command</a>
     * parameter in the <i>Amazon Elastic Container Service API reference.</i> </p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }

    /**
     * <p>A command that's passed to the container on startup. Each argument for the
     * command is an additional string in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-command">ContainerDefinition::command</a>
     * parameter in the <i>Amazon Elastic Container Service API reference.</i> </p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>A command that's passed to the container on startup. Each argument for the
     * command is an additional string in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-command">ContainerDefinition::command</a>
     * parameter in the <i>Amazon Elastic Container Service API reference.</i> </p>
     */
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>A command that's passed to the container on startup. Each argument for the
     * command is an additional string in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-command">ContainerDefinition::command</a>
     * parameter in the <i>Amazon Elastic Container Service API reference.</i> </p>
     */
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>A command that's passed to the container on startup. Each argument for the
     * command is an additional string in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-command">ContainerDefinition::command</a>
     * parameter in the <i>Amazon Elastic Container Service API reference.</i> </p>
     */
    inline ContainerDefinition& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}

    /**
     * <p>A command that's passed to the container on startup. Each argument for the
     * command is an additional string in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-command">ContainerDefinition::command</a>
     * parameter in the <i>Amazon Elastic Container Service API reference.</i> </p>
     */
    inline ContainerDefinition& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}

    /**
     * <p>A command that's passed to the container on startup. Each argument for the
     * command is an additional string in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-command">ContainerDefinition::command</a>
     * parameter in the <i>Amazon Elastic Container Service API reference.</i> </p>
     */
    inline ContainerDefinition& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>A command that's passed to the container on startup. Each argument for the
     * command is an additional string in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-command">ContainerDefinition::command</a>
     * parameter in the <i>Amazon Elastic Container Service API reference.</i> </p>
     */
    inline ContainerDefinition& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }

    /**
     * <p>A command that's passed to the container on startup. Each argument for the
     * command is an additional string in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-command">ContainerDefinition::command</a>
     * parameter in the <i>Amazon Elastic Container Service API reference.</i> </p>
     */
    inline ContainerDefinition& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }


    /**
     * <p>Indicates whether the container is vital to the container group. If an
     * essential container fails, the entire container group is restarted.</p>
     */
    inline bool GetEssential() const{ return m_essential; }

    /**
     * <p>Indicates whether the container is vital to the container group. If an
     * essential container fails, the entire container group is restarted.</p>
     */
    inline bool EssentialHasBeenSet() const { return m_essentialHasBeenSet; }

    /**
     * <p>Indicates whether the container is vital to the container group. If an
     * essential container fails, the entire container group is restarted.</p>
     */
    inline void SetEssential(bool value) { m_essentialHasBeenSet = true; m_essential = value; }

    /**
     * <p>Indicates whether the container is vital to the container group. If an
     * essential container fails, the entire container group is restarted.</p>
     */
    inline ContainerDefinition& WithEssential(bool value) { SetEssential(value); return *this;}


    /**
     * <p>The entry point that's passed to the container on startup. If there are
     * multiple arguments, each argument is an additional string in the array. See the
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-entryPoint">ContainerDefinition::entryPoint</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEntryPoint() const{ return m_entryPoint; }

    /**
     * <p>The entry point that's passed to the container on startup. If there are
     * multiple arguments, each argument is an additional string in the array. See the
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-entryPoint">ContainerDefinition::entryPoint</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }

    /**
     * <p>The entry point that's passed to the container on startup. If there are
     * multiple arguments, each argument is an additional string in the array. See the
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-entryPoint">ContainerDefinition::entryPoint</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline void SetEntryPoint(const Aws::Vector<Aws::String>& value) { m_entryPointHasBeenSet = true; m_entryPoint = value; }

    /**
     * <p>The entry point that's passed to the container on startup. If there are
     * multiple arguments, each argument is an additional string in the array. See the
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-entryPoint">ContainerDefinition::entryPoint</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline void SetEntryPoint(Aws::Vector<Aws::String>&& value) { m_entryPointHasBeenSet = true; m_entryPoint = std::move(value); }

    /**
     * <p>The entry point that's passed to the container on startup. If there are
     * multiple arguments, each argument is an additional string in the array. See the
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-entryPoint">ContainerDefinition::entryPoint</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline ContainerDefinition& WithEntryPoint(const Aws::Vector<Aws::String>& value) { SetEntryPoint(value); return *this;}

    /**
     * <p>The entry point that's passed to the container on startup. If there are
     * multiple arguments, each argument is an additional string in the array. See the
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-entryPoint">ContainerDefinition::entryPoint</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline ContainerDefinition& WithEntryPoint(Aws::Vector<Aws::String>&& value) { SetEntryPoint(std::move(value)); return *this;}

    /**
     * <p>The entry point that's passed to the container on startup. If there are
     * multiple arguments, each argument is an additional string in the array. See the
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-entryPoint">ContainerDefinition::entryPoint</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline ContainerDefinition& AddEntryPoint(const Aws::String& value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(value); return *this; }

    /**
     * <p>The entry point that's passed to the container on startup. If there are
     * multiple arguments, each argument is an additional string in the array. See the
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-entryPoint">ContainerDefinition::entryPoint</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline ContainerDefinition& AddEntryPoint(Aws::String&& value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(std::move(value)); return *this; }

    /**
     * <p>The entry point that's passed to the container on startup. If there are
     * multiple arguments, each argument is an additional string in the array. See the
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-entryPoint">ContainerDefinition::entryPoint</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline ContainerDefinition& AddEntryPoint(const char* value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(value); return *this; }


    /**
     * <p>The directory in the container where commands are run. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-workingDirectory">ContainerDefinition::workingDirectory</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline const Aws::String& GetWorkingDirectory() const{ return m_workingDirectory; }

    /**
     * <p>The directory in the container where commands are run. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-workingDirectory">ContainerDefinition::workingDirectory</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }

    /**
     * <p>The directory in the container where commands are run. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-workingDirectory">ContainerDefinition::workingDirectory</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline void SetWorkingDirectory(const Aws::String& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = value; }

    /**
     * <p>The directory in the container where commands are run. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-workingDirectory">ContainerDefinition::workingDirectory</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline void SetWorkingDirectory(Aws::String&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = std::move(value); }

    /**
     * <p>The directory in the container where commands are run. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-workingDirectory">ContainerDefinition::workingDirectory</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline void SetWorkingDirectory(const char* value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory.assign(value); }

    /**
     * <p>The directory in the container where commands are run. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-workingDirectory">ContainerDefinition::workingDirectory</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline ContainerDefinition& WithWorkingDirectory(const Aws::String& value) { SetWorkingDirectory(value); return *this;}

    /**
     * <p>The directory in the container where commands are run. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-workingDirectory">ContainerDefinition::workingDirectory</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline ContainerDefinition& WithWorkingDirectory(Aws::String&& value) { SetWorkingDirectory(std::move(value)); return *this;}

    /**
     * <p>The directory in the container where commands are run. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-workingDirectory">ContainerDefinition::workingDirectory</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline ContainerDefinition& WithWorkingDirectory(const char* value) { SetWorkingDirectory(value); return *this;}


    /**
     * <p>A set of environment variables that's passed to the container on startup. See
     * the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-environment">ContainerDefinition::environment</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>.</p>
     */
    inline const Aws::Vector<ContainerEnvironment>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>A set of environment variables that's passed to the container on startup. See
     * the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-environment">ContainerDefinition::environment</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>.</p>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>A set of environment variables that's passed to the container on startup. See
     * the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-environment">ContainerDefinition::environment</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>.</p>
     */
    inline void SetEnvironment(const Aws::Vector<ContainerEnvironment>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>A set of environment variables that's passed to the container on startup. See
     * the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-environment">ContainerDefinition::environment</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>.</p>
     */
    inline void SetEnvironment(Aws::Vector<ContainerEnvironment>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>A set of environment variables that's passed to the container on startup. See
     * the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-environment">ContainerDefinition::environment</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>.</p>
     */
    inline ContainerDefinition& WithEnvironment(const Aws::Vector<ContainerEnvironment>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>A set of environment variables that's passed to the container on startup. See
     * the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-environment">ContainerDefinition::environment</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>.</p>
     */
    inline ContainerDefinition& WithEnvironment(Aws::Vector<ContainerEnvironment>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>A set of environment variables that's passed to the container on startup. See
     * the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-environment">ContainerDefinition::environment</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>.</p>
     */
    inline ContainerDefinition& AddEnvironment(const ContainerEnvironment& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }

    /**
     * <p>A set of environment variables that's passed to the container on startup. See
     * the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-environment">ContainerDefinition::environment</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>.</p>
     */
    inline ContainerDefinition& AddEnvironment(ContainerEnvironment&& value) { m_environmentHasBeenSet = true; m_environment.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates that the container relies on the status of other containers in the
     * same container group during its startup and shutdown sequences. A container
     * might have dependencies on multiple containers.</p>
     */
    inline const Aws::Vector<ContainerDependency>& GetDependsOn() const{ return m_dependsOn; }

    /**
     * <p>Indicates that the container relies on the status of other containers in the
     * same container group during its startup and shutdown sequences. A container
     * might have dependencies on multiple containers.</p>
     */
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }

    /**
     * <p>Indicates that the container relies on the status of other containers in the
     * same container group during its startup and shutdown sequences. A container
     * might have dependencies on multiple containers.</p>
     */
    inline void SetDependsOn(const Aws::Vector<ContainerDependency>& value) { m_dependsOnHasBeenSet = true; m_dependsOn = value; }

    /**
     * <p>Indicates that the container relies on the status of other containers in the
     * same container group during its startup and shutdown sequences. A container
     * might have dependencies on multiple containers.</p>
     */
    inline void SetDependsOn(Aws::Vector<ContainerDependency>&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::move(value); }

    /**
     * <p>Indicates that the container relies on the status of other containers in the
     * same container group during its startup and shutdown sequences. A container
     * might have dependencies on multiple containers.</p>
     */
    inline ContainerDefinition& WithDependsOn(const Aws::Vector<ContainerDependency>& value) { SetDependsOn(value); return *this;}

    /**
     * <p>Indicates that the container relies on the status of other containers in the
     * same container group during its startup and shutdown sequences. A container
     * might have dependencies on multiple containers.</p>
     */
    inline ContainerDefinition& WithDependsOn(Aws::Vector<ContainerDependency>&& value) { SetDependsOn(std::move(value)); return *this;}

    /**
     * <p>Indicates that the container relies on the status of other containers in the
     * same container group during its startup and shutdown sequences. A container
     * might have dependencies on multiple containers.</p>
     */
    inline ContainerDefinition& AddDependsOn(const ContainerDependency& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(value); return *this; }

    /**
     * <p>Indicates that the container relies on the status of other containers in the
     * same container group during its startup and shutdown sequences. A container
     * might have dependencies on multiple containers.</p>
     */
    inline ContainerDefinition& AddDependsOn(ContainerDependency&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    Aws::String m_imageUri;
    bool m_imageUriHasBeenSet = false;

    Aws::String m_resolvedImageDigest;
    bool m_resolvedImageDigestHasBeenSet = false;

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
