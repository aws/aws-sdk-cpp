/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/ContainerPortConfiguration.h>
#include <aws/gamelift/model/ContainerDependency.h>
#include <aws/gamelift/model/ContainerMountPoint.h>
#include <aws/gamelift/model/ContainerEnvironment.h>
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
   * <p>Describes the configuration for a container that runs your game server
   * executable. This definition includes container configuration, resources, and
   * start instructions. Use this data type when creating or updating a game server
   * container group definition. For properties of a deployed container, see
   * <a>GameServerContainerDefinition</a>. A game server container is automatically
   * considered essential; if an essential container fails, the entire container
   * group restarts.</p> <p> <b>Use with: </b> <a>CreateContainerGroupDefinition</a>,
   * <a>UpdateContainerGroupDefinition</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameServerContainerDefinitionInput">AWS
   * API Reference</a></p>
   */
  class GameServerContainerDefinitionInput
  {
  public:
    AWS_GAMELIFT_API GameServerContainerDefinitionInput();
    AWS_GAMELIFT_API GameServerContainerDefinitionInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API GameServerContainerDefinitionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string that uniquely identifies the container definition within a container
     * group.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }
    inline GameServerContainerDefinitionInput& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}
    inline GameServerContainerDefinitionInput& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}
    inline GameServerContainerDefinitionInput& WithContainerName(const char* value) { SetContainerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Establishes dependencies between this container and the status of other
     * containers in the same container group. A container can have dependencies on
     * multiple different containers. </p> <p>You can use dependencies to establish a
     * startup/shutdown sequence across the container group. For example, you might
     * specify that <i>ContainerB</i> has a <code>START</code> dependency on
     * <i>ContainerA</i>. This dependency means that <i>ContainerB</i> can't start
     * until after <i>ContainerA</i> has started. This dependency is reversed on
     * shutdown, which means that <i>ContainerB</i> must shut down before
     * <i>ContainerA</i> can shut down. </p>
     */
    inline const Aws::Vector<ContainerDependency>& GetDependsOn() const{ return m_dependsOn; }
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }
    inline void SetDependsOn(const Aws::Vector<ContainerDependency>& value) { m_dependsOnHasBeenSet = true; m_dependsOn = value; }
    inline void SetDependsOn(Aws::Vector<ContainerDependency>&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::move(value); }
    inline GameServerContainerDefinitionInput& WithDependsOn(const Aws::Vector<ContainerDependency>& value) { SetDependsOn(value); return *this;}
    inline GameServerContainerDefinitionInput& WithDependsOn(Aws::Vector<ContainerDependency>&& value) { SetDependsOn(std::move(value)); return *this;}
    inline GameServerContainerDefinitionInput& AddDependsOn(const ContainerDependency& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(value); return *this; }
    inline GameServerContainerDefinitionInput& AddDependsOn(ContainerDependency&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A mount point that binds a path inside the container to a file or directory
     * on the host system and lets it access the file or directory.</p>
     */
    inline const Aws::Vector<ContainerMountPoint>& GetMountPoints() const{ return m_mountPoints; }
    inline bool MountPointsHasBeenSet() const { return m_mountPointsHasBeenSet; }
    inline void SetMountPoints(const Aws::Vector<ContainerMountPoint>& value) { m_mountPointsHasBeenSet = true; m_mountPoints = value; }
    inline void SetMountPoints(Aws::Vector<ContainerMountPoint>&& value) { m_mountPointsHasBeenSet = true; m_mountPoints = std::move(value); }
    inline GameServerContainerDefinitionInput& WithMountPoints(const Aws::Vector<ContainerMountPoint>& value) { SetMountPoints(value); return *this;}
    inline GameServerContainerDefinitionInput& WithMountPoints(Aws::Vector<ContainerMountPoint>&& value) { SetMountPoints(std::move(value)); return *this;}
    inline GameServerContainerDefinitionInput& AddMountPoints(const ContainerMountPoint& value) { m_mountPointsHasBeenSet = true; m_mountPoints.push_back(value); return *this; }
    inline GameServerContainerDefinitionInput& AddMountPoints(ContainerMountPoint&& value) { m_mountPointsHasBeenSet = true; m_mountPoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A set of environment variables to pass to the container on startup. See the
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-environment">ContainerDefinition::environment</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline const Aws::Vector<ContainerEnvironment>& GetEnvironmentOverride() const{ return m_environmentOverride; }
    inline bool EnvironmentOverrideHasBeenSet() const { return m_environmentOverrideHasBeenSet; }
    inline void SetEnvironmentOverride(const Aws::Vector<ContainerEnvironment>& value) { m_environmentOverrideHasBeenSet = true; m_environmentOverride = value; }
    inline void SetEnvironmentOverride(Aws::Vector<ContainerEnvironment>&& value) { m_environmentOverrideHasBeenSet = true; m_environmentOverride = std::move(value); }
    inline GameServerContainerDefinitionInput& WithEnvironmentOverride(const Aws::Vector<ContainerEnvironment>& value) { SetEnvironmentOverride(value); return *this;}
    inline GameServerContainerDefinitionInput& WithEnvironmentOverride(Aws::Vector<ContainerEnvironment>&& value) { SetEnvironmentOverride(std::move(value)); return *this;}
    inline GameServerContainerDefinitionInput& AddEnvironmentOverride(const ContainerEnvironment& value) { m_environmentOverrideHasBeenSet = true; m_environmentOverride.push_back(value); return *this; }
    inline GameServerContainerDefinitionInput& AddEnvironmentOverride(ContainerEnvironment&& value) { m_environmentOverrideHasBeenSet = true; m_environmentOverride.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The location of the container image to deploy to a container fleet. Provide
     * an image in an Amazon Elastic Container Registry public or private repository.
     * The repository must be in the same Amazon Web Services account and Amazon Web
     * Services Region where you're creating the container group definition. For limits
     * on image size, see <a
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
    inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }
    inline void SetImageUri(const Aws::String& value) { m_imageUriHasBeenSet = true; m_imageUri = value; }
    inline void SetImageUri(Aws::String&& value) { m_imageUriHasBeenSet = true; m_imageUri = std::move(value); }
    inline void SetImageUri(const char* value) { m_imageUriHasBeenSet = true; m_imageUri.assign(value); }
    inline GameServerContainerDefinitionInput& WithImageUri(const Aws::String& value) { SetImageUri(value); return *this;}
    inline GameServerContainerDefinitionInput& WithImageUri(Aws::String&& value) { SetImageUri(std::move(value)); return *this;}
    inline GameServerContainerDefinitionInput& WithImageUri(const char* value) { SetImageUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of ports that Amazon GameLift can assign to processes in the container.
     * Processes, must be assigned a container port to accept inbound traffic
     * connections. For example, a game server process requires a container port to
     * allow game clients to connect to it. Container ports aren't directly accessed by
     * inbound traffic. Instead, Amazon GameLift maps container ports to externally
     * accessible connection ports (see the container fleet property
     * <code>ConnectionPortRange</code>). </p>
     */
    inline const ContainerPortConfiguration& GetPortConfiguration() const{ return m_portConfiguration; }
    inline bool PortConfigurationHasBeenSet() const { return m_portConfigurationHasBeenSet; }
    inline void SetPortConfiguration(const ContainerPortConfiguration& value) { m_portConfigurationHasBeenSet = true; m_portConfiguration = value; }
    inline void SetPortConfiguration(ContainerPortConfiguration&& value) { m_portConfigurationHasBeenSet = true; m_portConfiguration = std::move(value); }
    inline GameServerContainerDefinitionInput& WithPortConfiguration(const ContainerPortConfiguration& value) { SetPortConfiguration(value); return *this;}
    inline GameServerContainerDefinitionInput& WithPortConfiguration(ContainerPortConfiguration&& value) { SetPortConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon GameLift server SDK version that the game server is integrated
     * with. Only game servers using 5.2.0 or higher are compatible with container
     * fleets.</p>
     */
    inline const Aws::String& GetServerSdkVersion() const{ return m_serverSdkVersion; }
    inline bool ServerSdkVersionHasBeenSet() const { return m_serverSdkVersionHasBeenSet; }
    inline void SetServerSdkVersion(const Aws::String& value) { m_serverSdkVersionHasBeenSet = true; m_serverSdkVersion = value; }
    inline void SetServerSdkVersion(Aws::String&& value) { m_serverSdkVersionHasBeenSet = true; m_serverSdkVersion = std::move(value); }
    inline void SetServerSdkVersion(const char* value) { m_serverSdkVersionHasBeenSet = true; m_serverSdkVersion.assign(value); }
    inline GameServerContainerDefinitionInput& WithServerSdkVersion(const Aws::String& value) { SetServerSdkVersion(value); return *this;}
    inline GameServerContainerDefinitionInput& WithServerSdkVersion(Aws::String&& value) { SetServerSdkVersion(std::move(value)); return *this;}
    inline GameServerContainerDefinitionInput& WithServerSdkVersion(const char* value) { SetServerSdkVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    Aws::Vector<ContainerDependency> m_dependsOn;
    bool m_dependsOnHasBeenSet = false;

    Aws::Vector<ContainerMountPoint> m_mountPoints;
    bool m_mountPointsHasBeenSet = false;

    Aws::Vector<ContainerEnvironment> m_environmentOverride;
    bool m_environmentOverrideHasBeenSet = false;

    Aws::String m_imageUri;
    bool m_imageUriHasBeenSet = false;

    ContainerPortConfiguration m_portConfiguration;
    bool m_portConfigurationHasBeenSet = false;

    Aws::String m_serverSdkVersion;
    bool m_serverSdkVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
