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
   * container group definition. For properties of a deployed container, see <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_GameServerContainerDefinition.html">GameServerContainerDefinition</a>.
   * A game server container is automatically considered essential; if an essential
   * container fails, the entire container group restarts.</p> <p> <b>Use with: </b>
   * <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreateContainerGroupDefinition.html">CreateContainerGroupDefinition</a>,
   * <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateContainerGroupDefinition.html">UpdateContainerGroupDefinition</a>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameServerContainerDefinitionInput">AWS
   * API Reference</a></p>
   */
  class GameServerContainerDefinitionInput
  {
  public:
    AWS_GAMELIFT_API GameServerContainerDefinitionInput() = default;
    AWS_GAMELIFT_API GameServerContainerDefinitionInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API GameServerContainerDefinitionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string that uniquely identifies the container definition within a container
     * group.</p>
     */
    inline const Aws::String& GetContainerName() const { return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    template<typename ContainerNameT = Aws::String>
    void SetContainerName(ContainerNameT&& value) { m_containerNameHasBeenSet = true; m_containerName = std::forward<ContainerNameT>(value); }
    template<typename ContainerNameT = Aws::String>
    GameServerContainerDefinitionInput& WithContainerName(ContainerNameT&& value) { SetContainerName(std::forward<ContainerNameT>(value)); return *this;}
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
    inline const Aws::Vector<ContainerDependency>& GetDependsOn() const { return m_dependsOn; }
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }
    template<typename DependsOnT = Aws::Vector<ContainerDependency>>
    void SetDependsOn(DependsOnT&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::forward<DependsOnT>(value); }
    template<typename DependsOnT = Aws::Vector<ContainerDependency>>
    GameServerContainerDefinitionInput& WithDependsOn(DependsOnT&& value) { SetDependsOn(std::forward<DependsOnT>(value)); return *this;}
    template<typename DependsOnT = ContainerDependency>
    GameServerContainerDefinitionInput& AddDependsOn(DependsOnT&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.emplace_back(std::forward<DependsOnT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A mount point that binds a path inside the container to a file or directory
     * on the host system and lets it access the file or directory.</p>
     */
    inline const Aws::Vector<ContainerMountPoint>& GetMountPoints() const { return m_mountPoints; }
    inline bool MountPointsHasBeenSet() const { return m_mountPointsHasBeenSet; }
    template<typename MountPointsT = Aws::Vector<ContainerMountPoint>>
    void SetMountPoints(MountPointsT&& value) { m_mountPointsHasBeenSet = true; m_mountPoints = std::forward<MountPointsT>(value); }
    template<typename MountPointsT = Aws::Vector<ContainerMountPoint>>
    GameServerContainerDefinitionInput& WithMountPoints(MountPointsT&& value) { SetMountPoints(std::forward<MountPointsT>(value)); return *this;}
    template<typename MountPointsT = ContainerMountPoint>
    GameServerContainerDefinitionInput& AddMountPoints(MountPointsT&& value) { m_mountPointsHasBeenSet = true; m_mountPoints.emplace_back(std::forward<MountPointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A set of environment variables to pass to the container on startup. See the
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-environment">ContainerDefinition::environment</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>. </p>
     */
    inline const Aws::Vector<ContainerEnvironment>& GetEnvironmentOverride() const { return m_environmentOverride; }
    inline bool EnvironmentOverrideHasBeenSet() const { return m_environmentOverrideHasBeenSet; }
    template<typename EnvironmentOverrideT = Aws::Vector<ContainerEnvironment>>
    void SetEnvironmentOverride(EnvironmentOverrideT&& value) { m_environmentOverrideHasBeenSet = true; m_environmentOverride = std::forward<EnvironmentOverrideT>(value); }
    template<typename EnvironmentOverrideT = Aws::Vector<ContainerEnvironment>>
    GameServerContainerDefinitionInput& WithEnvironmentOverride(EnvironmentOverrideT&& value) { SetEnvironmentOverride(std::forward<EnvironmentOverrideT>(value)); return *this;}
    template<typename EnvironmentOverrideT = ContainerEnvironment>
    GameServerContainerDefinitionInput& AddEnvironmentOverride(EnvironmentOverrideT&& value) { m_environmentOverrideHasBeenSet = true; m_environmentOverride.emplace_back(std::forward<EnvironmentOverrideT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The location of the container image to deploy to a container fleet. Provide
     * an image in an Amazon Elastic Container Registry public or private repository.
     * The repository must be in the same Amazon Web Services account and Amazon Web
     * Services Region where you're creating the container group definition. For limits
     * on image size, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/gamelift.html">Amazon
     * GameLift Servers endpoints and quotas</a>. You can use any of the following
     * image URI formats: </p> <ul> <li> <p>Image ID only: <code>[AWS
     * account].dkr.ecr.[AWS region].amazonaws.com/[repository ID]</code> </p> </li>
     * <li> <p>Image ID and digest: <code>[AWS account].dkr.ecr.[AWS
     * region].amazonaws.com/[repository ID]@[digest]</code> </p> </li> <li> <p>Image
     * ID and tag: <code>[AWS account].dkr.ecr.[AWS region].amazonaws.com/[repository
     * ID]:[tag]</code> </p> </li> </ul>
     */
    inline const Aws::String& GetImageUri() const { return m_imageUri; }
    inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }
    template<typename ImageUriT = Aws::String>
    void SetImageUri(ImageUriT&& value) { m_imageUriHasBeenSet = true; m_imageUri = std::forward<ImageUriT>(value); }
    template<typename ImageUriT = Aws::String>
    GameServerContainerDefinitionInput& WithImageUri(ImageUriT&& value) { SetImageUri(std::forward<ImageUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of ports that Amazon GameLift Servers can assign to processes in a
     * container. The container port configuration must have enough ports for each
     * container process that accepts inbound traffic connections. For example, a game
     * server process requires a container port to allow game clients to connect to it.
     * A container port configuration can have can have one or more container port
     * ranges. Each range specifies starting and ending values as well as the supported
     * network protocol.</p> <p>Container ports aren't directly accessed by inbound
     * traffic. Amazon GameLift Servers maps each container port to an externally
     * accessible connection port (see the container fleet property
     * <code>ConnectionPortRange</code>). </p>
     */
    inline const ContainerPortConfiguration& GetPortConfiguration() const { return m_portConfiguration; }
    inline bool PortConfigurationHasBeenSet() const { return m_portConfigurationHasBeenSet; }
    template<typename PortConfigurationT = ContainerPortConfiguration>
    void SetPortConfiguration(PortConfigurationT&& value) { m_portConfigurationHasBeenSet = true; m_portConfiguration = std::forward<PortConfigurationT>(value); }
    template<typename PortConfigurationT = ContainerPortConfiguration>
    GameServerContainerDefinitionInput& WithPortConfiguration(PortConfigurationT&& value) { SetPortConfiguration(std::forward<PortConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon GameLift Servers server SDK version that the game server is
     * integrated with. Only game servers using 5.2.0 or higher are compatible with
     * container fleets.</p>
     */
    inline const Aws::String& GetServerSdkVersion() const { return m_serverSdkVersion; }
    inline bool ServerSdkVersionHasBeenSet() const { return m_serverSdkVersionHasBeenSet; }
    template<typename ServerSdkVersionT = Aws::String>
    void SetServerSdkVersion(ServerSdkVersionT&& value) { m_serverSdkVersionHasBeenSet = true; m_serverSdkVersion = std::forward<ServerSdkVersionT>(value); }
    template<typename ServerSdkVersionT = Aws::String>
    GameServerContainerDefinitionInput& WithServerSdkVersion(ServerSdkVersionT&& value) { SetServerSdkVersion(std::forward<ServerSdkVersionT>(value)); return *this;}
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
