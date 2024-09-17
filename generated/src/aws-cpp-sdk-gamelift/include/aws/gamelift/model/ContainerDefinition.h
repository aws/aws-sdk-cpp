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


    ///@{
    /**
     * <p>The container definition identifier. Container names are unique within a
     * container group definition. </p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }
    inline ContainerDefinition& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}
    inline ContainerDefinition& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}
    inline ContainerDefinition& WithContainerName(const char* value) { SetContainerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI to the image that $short; copied and deployed to a container fleet.
     * For a more specific identifier, see <code>ResolvedImageDigest</code>. </p>
     */
    inline const Aws::String& GetImageUri() const{ return m_imageUri; }
    inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }
    inline void SetImageUri(const Aws::String& value) { m_imageUriHasBeenSet = true; m_imageUri = value; }
    inline void SetImageUri(Aws::String&& value) { m_imageUriHasBeenSet = true; m_imageUri = std::move(value); }
    inline void SetImageUri(const char* value) { m_imageUriHasBeenSet = true; m_imageUri.assign(value); }
    inline ContainerDefinition& WithImageUri(const Aws::String& value) { SetImageUri(value); return *this;}
    inline ContainerDefinition& WithImageUri(Aws::String&& value) { SetImageUri(std::move(value)); return *this;}
    inline ContainerDefinition& WithImageUri(const char* value) { SetImageUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique and immutable identifier for the container image that is deployed to
     * a container fleet. The digest is a SHA 256 hash of the container image manifest.
     * </p>
     */
    inline const Aws::String& GetResolvedImageDigest() const{ return m_resolvedImageDigest; }
    inline bool ResolvedImageDigestHasBeenSet() const { return m_resolvedImageDigestHasBeenSet; }
    inline void SetResolvedImageDigest(const Aws::String& value) { m_resolvedImageDigestHasBeenSet = true; m_resolvedImageDigest = value; }
    inline void SetResolvedImageDigest(Aws::String&& value) { m_resolvedImageDigestHasBeenSet = true; m_resolvedImageDigest = std::move(value); }
    inline void SetResolvedImageDigest(const char* value) { m_resolvedImageDigestHasBeenSet = true; m_resolvedImageDigest.assign(value); }
    inline ContainerDefinition& WithResolvedImageDigest(const Aws::String& value) { SetResolvedImageDigest(value); return *this;}
    inline ContainerDefinition& WithResolvedImageDigest(Aws::String&& value) { SetResolvedImageDigest(std::move(value)); return *this;}
    inline ContainerDefinition& WithResolvedImageDigest(const char* value) { SetResolvedImageDigest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of memory that Amazon GameLift makes available to the container.
     * If memory limits aren't set for an individual container, the container shares
     * the container group's total memory allocation.</p> <p> <b>Related data type:
     * </b> <a>ContainerGroupDefinition$TotalMemoryLimit</a> </p>
     */
    inline const ContainerMemoryLimits& GetMemoryLimits() const{ return m_memoryLimits; }
    inline bool MemoryLimitsHasBeenSet() const { return m_memoryLimitsHasBeenSet; }
    inline void SetMemoryLimits(const ContainerMemoryLimits& value) { m_memoryLimitsHasBeenSet = true; m_memoryLimits = value; }
    inline void SetMemoryLimits(ContainerMemoryLimits&& value) { m_memoryLimitsHasBeenSet = true; m_memoryLimits = std::move(value); }
    inline ContainerDefinition& WithMemoryLimits(const ContainerMemoryLimits& value) { SetMemoryLimits(value); return *this;}
    inline ContainerDefinition& WithMemoryLimits(ContainerMemoryLimits&& value) { SetMemoryLimits(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the ports that are available to assign to processes in the container.
     * For example, a game server process requires a container port to allow game
     * clients to connect to it. Container ports aren't directly accessed by inbound
     * traffic. Amazon GameLift maps these container ports to externally accessible
     * connection ports, which are assigned as needed from the container fleet's
     * <code>ConnectionPortRange</code>. </p>
     */
    inline const ContainerPortConfiguration& GetPortConfiguration() const{ return m_portConfiguration; }
    inline bool PortConfigurationHasBeenSet() const { return m_portConfigurationHasBeenSet; }
    inline void SetPortConfiguration(const ContainerPortConfiguration& value) { m_portConfigurationHasBeenSet = true; m_portConfiguration = value; }
    inline void SetPortConfiguration(ContainerPortConfiguration&& value) { m_portConfigurationHasBeenSet = true; m_portConfiguration = std::move(value); }
    inline ContainerDefinition& WithPortConfiguration(const ContainerPortConfiguration& value) { SetPortConfiguration(value); return *this;}
    inline ContainerDefinition& WithPortConfiguration(ContainerPortConfiguration&& value) { SetPortConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of CPU units that are reserved for the container. Note: 1 vCPU
     * unit equals 1024 CPU units. If no resources are reserved, the container shares
     * the total CPU limit for the container group.</p> <p> <b>Related data type: </b>
     * <a>ContainerGroupDefinition$TotalCpuLimit</a> </p>
     */
    inline int GetCpu() const{ return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    inline void SetCpu(int value) { m_cpuHasBeenSet = true; m_cpu = value; }
    inline ContainerDefinition& WithCpu(int value) { SetCpu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A configuration for a non-terminal health check. A container, which
     * automatically restarts if it stops functioning, also restarts if it fails this
     * health check. If an essential container in the daemon group fails a health
     * check, the entire container group is restarted. The essential container in the
     * replica group doesn't use this health check mechanism, because the Amazon
     * GameLift Agent automatically handles the task.</p>
     */
    inline const ContainerHealthCheck& GetHealthCheck() const{ return m_healthCheck; }
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }
    inline void SetHealthCheck(const ContainerHealthCheck& value) { m_healthCheckHasBeenSet = true; m_healthCheck = value; }
    inline void SetHealthCheck(ContainerHealthCheck&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::move(value); }
    inline ContainerDefinition& WithHealthCheck(const ContainerHealthCheck& value) { SetHealthCheck(value); return *this;}
    inline ContainerDefinition& WithHealthCheck(ContainerHealthCheck&& value) { SetHealthCheck(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A command that's passed to the container on startup. Each argument for the
     * command is an additional string in the array. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-command">ContainerDefinition::command</a>
     * parameter in the <i>Amazon Elastic Container Service API reference.</i> </p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }
    inline ContainerDefinition& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}
    inline ContainerDefinition& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}
    inline ContainerDefinition& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }
    inline ContainerDefinition& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }
    inline ContainerDefinition& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the container is vital to the container group. If an
     * essential container fails, the entire container group is restarted.</p>
     */
    inline bool GetEssential() const{ return m_essential; }
    inline bool EssentialHasBeenSet() const { return m_essentialHasBeenSet; }
    inline void SetEssential(bool value) { m_essentialHasBeenSet = true; m_essential = value; }
    inline ContainerDefinition& WithEssential(bool value) { SetEssential(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entry point that's passed to the container on startup. If there are
     * multiple arguments, each argument is an additional string in the array. See the
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-entryPoint">ContainerDefinition::entryPoint</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEntryPoint() const{ return m_entryPoint; }
    inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }
    inline void SetEntryPoint(const Aws::Vector<Aws::String>& value) { m_entryPointHasBeenSet = true; m_entryPoint = value; }
    inline void SetEntryPoint(Aws::Vector<Aws::String>&& value) { m_entryPointHasBeenSet = true; m_entryPoint = std::move(value); }
    inline ContainerDefinition& WithEntryPoint(const Aws::Vector<Aws::String>& value) { SetEntryPoint(value); return *this;}
    inline ContainerDefinition& WithEntryPoint(Aws::Vector<Aws::String>&& value) { SetEntryPoint(std::move(value)); return *this;}
    inline ContainerDefinition& AddEntryPoint(const Aws::String& value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(value); return *this; }
    inline ContainerDefinition& AddEntryPoint(Aws::String&& value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(std::move(value)); return *this; }
    inline ContainerDefinition& AddEntryPoint(const char* value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The directory in the container where commands are run. See the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-workingDirectory">ContainerDefinition::workingDirectory</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline const Aws::String& GetWorkingDirectory() const{ return m_workingDirectory; }
    inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }
    inline void SetWorkingDirectory(const Aws::String& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = value; }
    inline void SetWorkingDirectory(Aws::String&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = std::move(value); }
    inline void SetWorkingDirectory(const char* value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory.assign(value); }
    inline ContainerDefinition& WithWorkingDirectory(const Aws::String& value) { SetWorkingDirectory(value); return *this;}
    inline ContainerDefinition& WithWorkingDirectory(Aws::String&& value) { SetWorkingDirectory(std::move(value)); return *this;}
    inline ContainerDefinition& WithWorkingDirectory(const char* value) { SetWorkingDirectory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of environment variables that's passed to the container on startup. See
     * the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-environment">ContainerDefinition::environment</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>.</p>
     */
    inline const Aws::Vector<ContainerEnvironment>& GetEnvironment() const{ return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    inline void SetEnvironment(const Aws::Vector<ContainerEnvironment>& value) { m_environmentHasBeenSet = true; m_environment = value; }
    inline void SetEnvironment(Aws::Vector<ContainerEnvironment>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }
    inline ContainerDefinition& WithEnvironment(const Aws::Vector<ContainerEnvironment>& value) { SetEnvironment(value); return *this;}
    inline ContainerDefinition& WithEnvironment(Aws::Vector<ContainerEnvironment>&& value) { SetEnvironment(std::move(value)); return *this;}
    inline ContainerDefinition& AddEnvironment(const ContainerEnvironment& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }
    inline ContainerDefinition& AddEnvironment(ContainerEnvironment&& value) { m_environmentHasBeenSet = true; m_environment.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates that the container relies on the status of other containers in the
     * same container group during its startup and shutdown sequences. A container
     * might have dependencies on multiple containers.</p>
     */
    inline const Aws::Vector<ContainerDependency>& GetDependsOn() const{ return m_dependsOn; }
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }
    inline void SetDependsOn(const Aws::Vector<ContainerDependency>& value) { m_dependsOnHasBeenSet = true; m_dependsOn = value; }
    inline void SetDependsOn(Aws::Vector<ContainerDependency>&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::move(value); }
    inline ContainerDefinition& WithDependsOn(const Aws::Vector<ContainerDependency>& value) { SetDependsOn(value); return *this;}
    inline ContainerDefinition& WithDependsOn(Aws::Vector<ContainerDependency>&& value) { SetDependsOn(std::move(value)); return *this;}
    inline ContainerDefinition& AddDependsOn(const ContainerDependency& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(value); return *this; }
    inline ContainerDefinition& AddDependsOn(ContainerDependency&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(std::move(value)); return *this; }
    ///@}
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
