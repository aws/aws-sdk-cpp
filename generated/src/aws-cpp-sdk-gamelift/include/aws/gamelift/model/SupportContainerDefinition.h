/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/ContainerHealthCheck.h>
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
   * <p>Describes a support container in a container group. A support container might
   * be in a game server container group or a per-instance container group. Support
   * containers don't run game server processes.</p> <p>You can update a support
   * container definition and deploy the updates to an existing fleet. When creating
   * or updating a game server container group definition, use the property <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_GameServerContainerDefinitionInput.html">GameServerContainerDefinitionInput</a>.
   * </p> <p> <b>Part of:</b> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_ContainerGroupDefinition.html">ContainerGroupDefinition</a>
   * </p> <p> <b>Returned by:</b> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeContainerGroupDefinition.html">DescribeContainerGroupDefinition</a>,
   * <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_ListContainerGroupDefinitions.html">ListContainerGroupDefinitions</a>,
   * <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateContainerGroupDefinition.html">UpdateContainerGroupDefinition</a>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/SupportContainerDefinition">AWS
   * API Reference</a></p>
   */
  class SupportContainerDefinition
  {
  public:
    AWS_GAMELIFT_API SupportContainerDefinition() = default;
    AWS_GAMELIFT_API SupportContainerDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API SupportContainerDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The container definition identifier. Container names are unique within a
     * container group definition. </p>
     */
    inline const Aws::String& GetContainerName() const { return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    template<typename ContainerNameT = Aws::String>
    void SetContainerName(ContainerNameT&& value) { m_containerNameHasBeenSet = true; m_containerName = std::forward<ContainerNameT>(value); }
    template<typename ContainerNameT = Aws::String>
    SupportContainerDefinition& WithContainerName(ContainerNameT&& value) { SetContainerName(std::forward<ContainerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that the container relies on the status of other containers in the
     * same container group during its startup and shutdown sequences. A container
     * might have dependencies on multiple containers.</p>
     */
    inline const Aws::Vector<ContainerDependency>& GetDependsOn() const { return m_dependsOn; }
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }
    template<typename DependsOnT = Aws::Vector<ContainerDependency>>
    void SetDependsOn(DependsOnT&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::forward<DependsOnT>(value); }
    template<typename DependsOnT = Aws::Vector<ContainerDependency>>
    SupportContainerDefinition& WithDependsOn(DependsOnT&& value) { SetDependsOn(std::forward<DependsOnT>(value)); return *this;}
    template<typename DependsOnT = ContainerDependency>
    SupportContainerDefinition& AddDependsOn(DependsOnT&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.emplace_back(std::forward<DependsOnT>(value)); return *this; }
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
    SupportContainerDefinition& WithMountPoints(MountPointsT&& value) { SetMountPoints(std::forward<MountPointsT>(value)); return *this;}
    template<typename MountPointsT = ContainerMountPoint>
    SupportContainerDefinition& AddMountPoints(MountPointsT&& value) { m_mountPointsHasBeenSet = true; m_mountPoints.emplace_back(std::forward<MountPointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A set of environment variables that's passed to the container on startup. See
     * the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html#ECS-Type-ContainerDefinition-environment">ContainerDefinition::environment</a>
     * parameter in the <i>Amazon Elastic Container Service API Reference</i>.</p>
     */
    inline const Aws::Vector<ContainerEnvironment>& GetEnvironmentOverride() const { return m_environmentOverride; }
    inline bool EnvironmentOverrideHasBeenSet() const { return m_environmentOverrideHasBeenSet; }
    template<typename EnvironmentOverrideT = Aws::Vector<ContainerEnvironment>>
    void SetEnvironmentOverride(EnvironmentOverrideT&& value) { m_environmentOverrideHasBeenSet = true; m_environmentOverride = std::forward<EnvironmentOverrideT>(value); }
    template<typename EnvironmentOverrideT = Aws::Vector<ContainerEnvironment>>
    SupportContainerDefinition& WithEnvironmentOverride(EnvironmentOverrideT&& value) { SetEnvironmentOverride(std::forward<EnvironmentOverrideT>(value)); return *this;}
    template<typename EnvironmentOverrideT = ContainerEnvironment>
    SupportContainerDefinition& AddEnvironmentOverride(EnvironmentOverrideT&& value) { m_environmentOverrideHasBeenSet = true; m_environmentOverride.emplace_back(std::forward<EnvironmentOverrideT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the container is vital to the container group. If an
     * essential container fails, the entire container group restarts.</p>
     */
    inline bool GetEssential() const { return m_essential; }
    inline bool EssentialHasBeenSet() const { return m_essentialHasBeenSet; }
    inline void SetEssential(bool value) { m_essentialHasBeenSet = true; m_essential = value; }
    inline SupportContainerDefinition& WithEssential(bool value) { SetEssential(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A configuration for a non-terminal health check. A support container
     * automatically restarts if it stops functioning or if it fails this health check.
     * </p>
     */
    inline const ContainerHealthCheck& GetHealthCheck() const { return m_healthCheck; }
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }
    template<typename HealthCheckT = ContainerHealthCheck>
    void SetHealthCheck(HealthCheckT&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::forward<HealthCheckT>(value); }
    template<typename HealthCheckT = ContainerHealthCheck>
    SupportContainerDefinition& WithHealthCheck(HealthCheckT&& value) { SetHealthCheck(std::forward<HealthCheckT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI to the image that Amazon GameLift Servers deploys to a container
     * fleet. For a more specific identifier, see <code>ResolvedImageDigest</code>.
     * </p>
     */
    inline const Aws::String& GetImageUri() const { return m_imageUri; }
    inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }
    template<typename ImageUriT = Aws::String>
    void SetImageUri(ImageUriT&& value) { m_imageUriHasBeenSet = true; m_imageUri = std::forward<ImageUriT>(value); }
    template<typename ImageUriT = Aws::String>
    SupportContainerDefinition& WithImageUri(ImageUriT&& value) { SetImageUri(std::forward<ImageUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of memory that Amazon GameLift Servers makes available to the
     * container. If memory limits aren't set for an individual container, the
     * container shares the container group's total memory allocation.</p> <p>
     * <b>Related data type: </b> <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_ContainerGroupDefinition.html">ContainerGroupDefinition
     * TotalMemoryLimitMebibytes</a> </p>
     */
    inline int GetMemoryHardLimitMebibytes() const { return m_memoryHardLimitMebibytes; }
    inline bool MemoryHardLimitMebibytesHasBeenSet() const { return m_memoryHardLimitMebibytesHasBeenSet; }
    inline void SetMemoryHardLimitMebibytes(int value) { m_memoryHardLimitMebibytesHasBeenSet = true; m_memoryHardLimitMebibytes = value; }
    inline SupportContainerDefinition& WithMemoryHardLimitMebibytes(int value) { SetMemoryHardLimitMebibytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of ports that allow access to the container from external users.
     * Processes running in the container can bind to a one of these ports. Container
     * ports aren't directly accessed by inbound traffic. Amazon GameLift Servers maps
     * these container ports to externally accessible connection ports, which are
     * assigned as needed from the container fleet's
     * <code>ConnectionPortRange</code>.</p>
     */
    inline const ContainerPortConfiguration& GetPortConfiguration() const { return m_portConfiguration; }
    inline bool PortConfigurationHasBeenSet() const { return m_portConfigurationHasBeenSet; }
    template<typename PortConfigurationT = ContainerPortConfiguration>
    void SetPortConfiguration(PortConfigurationT&& value) { m_portConfigurationHasBeenSet = true; m_portConfiguration = std::forward<PortConfigurationT>(value); }
    template<typename PortConfigurationT = ContainerPortConfiguration>
    SupportContainerDefinition& WithPortConfiguration(PortConfigurationT&& value) { SetPortConfiguration(std::forward<PortConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique and immutable identifier for the container image. The digest is a
     * SHA 256 hash of the container image manifest. </p>
     */
    inline const Aws::String& GetResolvedImageDigest() const { return m_resolvedImageDigest; }
    inline bool ResolvedImageDigestHasBeenSet() const { return m_resolvedImageDigestHasBeenSet; }
    template<typename ResolvedImageDigestT = Aws::String>
    void SetResolvedImageDigest(ResolvedImageDigestT&& value) { m_resolvedImageDigestHasBeenSet = true; m_resolvedImageDigest = std::forward<ResolvedImageDigestT>(value); }
    template<typename ResolvedImageDigestT = Aws::String>
    SupportContainerDefinition& WithResolvedImageDigest(ResolvedImageDigestT&& value) { SetResolvedImageDigest(std::forward<ResolvedImageDigestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of vCPU units that are reserved for the container. If no resources
     * are reserved, the container shares the total vCPU limit for the container
     * group.</p> <p> <b>Related data type: </b> <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_ContainerGroupDefinition.html">ContainerGroupDefinition
     * TotalVcpuLimit</a> </p>
     */
    inline double GetVcpu() const { return m_vcpu; }
    inline bool VcpuHasBeenSet() const { return m_vcpuHasBeenSet; }
    inline void SetVcpu(double value) { m_vcpuHasBeenSet = true; m_vcpu = value; }
    inline SupportContainerDefinition& WithVcpu(double value) { SetVcpu(value); return *this;}
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

    bool m_essential{false};
    bool m_essentialHasBeenSet = false;

    ContainerHealthCheck m_healthCheck;
    bool m_healthCheckHasBeenSet = false;

    Aws::String m_imageUri;
    bool m_imageUriHasBeenSet = false;

    int m_memoryHardLimitMebibytes{0};
    bool m_memoryHardLimitMebibytesHasBeenSet = false;

    ContainerPortConfiguration m_portConfiguration;
    bool m_portConfigurationHasBeenSet = false;

    Aws::String m_resolvedImageDigest;
    bool m_resolvedImageDigestHasBeenSet = false;

    double m_vcpu{0.0};
    bool m_vcpuHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
