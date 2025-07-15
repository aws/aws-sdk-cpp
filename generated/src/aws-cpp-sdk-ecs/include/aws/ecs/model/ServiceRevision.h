/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/LaunchType.h>
#include <aws/ecs/model/NetworkConfiguration.h>
#include <aws/ecs/model/ServiceConnectConfiguration.h>
#include <aws/ecs/model/DeploymentEphemeralStorage.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ecs/model/ResolvedConfiguration.h>
#include <aws/ecs/model/CapacityProviderStrategyItem.h>
#include <aws/ecs/model/LoadBalancer.h>
#include <aws/ecs/model/ServiceRegistry.h>
#include <aws/ecs/model/ContainerImage.h>
#include <aws/ecs/model/ServiceVolumeConfiguration.h>
#include <aws/ecs/model/VpcLatticeConfiguration.h>
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
   * <p>Information about the service revision.</p> <p>A service revision contains a
   * record of the workload configuration Amazon ECS is attempting to deploy.
   * Whenever you create or deploy a service, Amazon ECS automatically creates and
   * captures the configuration that you're trying to deploy in the service revision.
   * For information about service revisions, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-revision.html">Amazon
   * ECS service revisions</a> in the <i> <i>Amazon Elastic Container Service
   * Developer Guide</i> </i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceRevision">AWS
   * API Reference</a></p>
   */
  class ServiceRevision
  {
  public:
    AWS_ECS_API ServiceRevision() = default;
    AWS_ECS_API ServiceRevision(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceRevision& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the service revision.</p>
     */
    inline const Aws::String& GetServiceRevisionArn() const { return m_serviceRevisionArn; }
    inline bool ServiceRevisionArnHasBeenSet() const { return m_serviceRevisionArnHasBeenSet; }
    template<typename ServiceRevisionArnT = Aws::String>
    void SetServiceRevisionArn(ServiceRevisionArnT&& value) { m_serviceRevisionArnHasBeenSet = true; m_serviceRevisionArn = std::forward<ServiceRevisionArnT>(value); }
    template<typename ServiceRevisionArnT = Aws::String>
    ServiceRevision& WithServiceRevisionArn(ServiceRevisionArnT&& value) { SetServiceRevisionArn(std::forward<ServiceRevisionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the service for the service revision.</p>
     */
    inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
    template<typename ServiceArnT = Aws::String>
    void SetServiceArn(ServiceArnT&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::forward<ServiceArnT>(value); }
    template<typename ServiceArnT = Aws::String>
    ServiceRevision& WithServiceArn(ServiceArnT&& value) { SetServiceArn(std::forward<ServiceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the cluster that hosts the service.</p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    ServiceRevision& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task definition the service revision uses.</p>
     */
    inline const Aws::String& GetTaskDefinition() const { return m_taskDefinition; }
    inline bool TaskDefinitionHasBeenSet() const { return m_taskDefinitionHasBeenSet; }
    template<typename TaskDefinitionT = Aws::String>
    void SetTaskDefinition(TaskDefinitionT&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = std::forward<TaskDefinitionT>(value); }
    template<typename TaskDefinitionT = Aws::String>
    ServiceRevision& WithTaskDefinition(TaskDefinitionT&& value) { SetTaskDefinition(std::forward<TaskDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity provider strategy the service revision uses.</p>
     */
    inline const Aws::Vector<CapacityProviderStrategyItem>& GetCapacityProviderStrategy() const { return m_capacityProviderStrategy; }
    inline bool CapacityProviderStrategyHasBeenSet() const { return m_capacityProviderStrategyHasBeenSet; }
    template<typename CapacityProviderStrategyT = Aws::Vector<CapacityProviderStrategyItem>>
    void SetCapacityProviderStrategy(CapacityProviderStrategyT&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = std::forward<CapacityProviderStrategyT>(value); }
    template<typename CapacityProviderStrategyT = Aws::Vector<CapacityProviderStrategyItem>>
    ServiceRevision& WithCapacityProviderStrategy(CapacityProviderStrategyT&& value) { SetCapacityProviderStrategy(std::forward<CapacityProviderStrategyT>(value)); return *this;}
    template<typename CapacityProviderStrategyT = CapacityProviderStrategyItem>
    ServiceRevision& AddCapacityProviderStrategy(CapacityProviderStrategyT&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.emplace_back(std::forward<CapacityProviderStrategyT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The launch type the service revision uses.</p>
     */
    inline LaunchType GetLaunchType() const { return m_launchType; }
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }
    inline void SetLaunchType(LaunchType value) { m_launchTypeHasBeenSet = true; m_launchType = value; }
    inline ServiceRevision& WithLaunchType(LaunchType value) { SetLaunchType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For the Fargate launch type, the platform version the service revision
     * uses.</p>
     */
    inline const Aws::String& GetPlatformVersion() const { return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    template<typename PlatformVersionT = Aws::String>
    void SetPlatformVersion(PlatformVersionT&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::forward<PlatformVersionT>(value); }
    template<typename PlatformVersionT = Aws::String>
    ServiceRevision& WithPlatformVersion(PlatformVersionT&& value) { SetPlatformVersion(std::forward<PlatformVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform family the service revision uses.</p>
     */
    inline const Aws::String& GetPlatformFamily() const { return m_platformFamily; }
    inline bool PlatformFamilyHasBeenSet() const { return m_platformFamilyHasBeenSet; }
    template<typename PlatformFamilyT = Aws::String>
    void SetPlatformFamily(PlatformFamilyT&& value) { m_platformFamilyHasBeenSet = true; m_platformFamily = std::forward<PlatformFamilyT>(value); }
    template<typename PlatformFamilyT = Aws::String>
    ServiceRevision& WithPlatformFamily(PlatformFamilyT&& value) { SetPlatformFamily(std::forward<PlatformFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The load balancers the service revision uses.</p>
     */
    inline const Aws::Vector<LoadBalancer>& GetLoadBalancers() const { return m_loadBalancers; }
    inline bool LoadBalancersHasBeenSet() const { return m_loadBalancersHasBeenSet; }
    template<typename LoadBalancersT = Aws::Vector<LoadBalancer>>
    void SetLoadBalancers(LoadBalancersT&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = std::forward<LoadBalancersT>(value); }
    template<typename LoadBalancersT = Aws::Vector<LoadBalancer>>
    ServiceRevision& WithLoadBalancers(LoadBalancersT&& value) { SetLoadBalancers(std::forward<LoadBalancersT>(value)); return *this;}
    template<typename LoadBalancersT = LoadBalancer>
    ServiceRevision& AddLoadBalancers(LoadBalancersT&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.emplace_back(std::forward<LoadBalancersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The service registries (for Service Discovery) the service revision uses.</p>
     */
    inline const Aws::Vector<ServiceRegistry>& GetServiceRegistries() const { return m_serviceRegistries; }
    inline bool ServiceRegistriesHasBeenSet() const { return m_serviceRegistriesHasBeenSet; }
    template<typename ServiceRegistriesT = Aws::Vector<ServiceRegistry>>
    void SetServiceRegistries(ServiceRegistriesT&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries = std::forward<ServiceRegistriesT>(value); }
    template<typename ServiceRegistriesT = Aws::Vector<ServiceRegistry>>
    ServiceRevision& WithServiceRegistries(ServiceRegistriesT&& value) { SetServiceRegistries(std::forward<ServiceRegistriesT>(value)); return *this;}
    template<typename ServiceRegistriesT = ServiceRegistry>
    ServiceRevision& AddServiceRegistries(ServiceRegistriesT&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries.emplace_back(std::forward<ServiceRegistriesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const NetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    void SetNetworkConfiguration(NetworkConfigurationT&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::forward<NetworkConfigurationT>(value); }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    ServiceRevision& WithNetworkConfiguration(NetworkConfigurationT&& value) { SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container images the service revision uses.</p>
     */
    inline const Aws::Vector<ContainerImage>& GetContainerImages() const { return m_containerImages; }
    inline bool ContainerImagesHasBeenSet() const { return m_containerImagesHasBeenSet; }
    template<typename ContainerImagesT = Aws::Vector<ContainerImage>>
    void SetContainerImages(ContainerImagesT&& value) { m_containerImagesHasBeenSet = true; m_containerImages = std::forward<ContainerImagesT>(value); }
    template<typename ContainerImagesT = Aws::Vector<ContainerImage>>
    ServiceRevision& WithContainerImages(ContainerImagesT&& value) { SetContainerImages(std::forward<ContainerImagesT>(value)); return *this;}
    template<typename ContainerImagesT = ContainerImage>
    ServiceRevision& AddContainerImages(ContainerImagesT&& value) { m_containerImagesHasBeenSet = true; m_containerImages.emplace_back(std::forward<ContainerImagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether Runtime Monitoring is turned on.</p>
     */
    inline bool GetGuardDutyEnabled() const { return m_guardDutyEnabled; }
    inline bool GuardDutyEnabledHasBeenSet() const { return m_guardDutyEnabledHasBeenSet; }
    inline void SetGuardDutyEnabled(bool value) { m_guardDutyEnabledHasBeenSet = true; m_guardDutyEnabled = value; }
    inline ServiceRevision& WithGuardDutyEnabled(bool value) { SetGuardDutyEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const ServiceConnectConfiguration& GetServiceConnectConfiguration() const { return m_serviceConnectConfiguration; }
    inline bool ServiceConnectConfigurationHasBeenSet() const { return m_serviceConnectConfigurationHasBeenSet; }
    template<typename ServiceConnectConfigurationT = ServiceConnectConfiguration>
    void SetServiceConnectConfiguration(ServiceConnectConfigurationT&& value) { m_serviceConnectConfigurationHasBeenSet = true; m_serviceConnectConfiguration = std::forward<ServiceConnectConfigurationT>(value); }
    template<typename ServiceConnectConfigurationT = ServiceConnectConfiguration>
    ServiceRevision& WithServiceConnectConfiguration(ServiceConnectConfigurationT&& value) { SetServiceConnectConfiguration(std::forward<ServiceConnectConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volumes that are configured at deployment that the service revision
     * uses.</p>
     */
    inline const Aws::Vector<ServiceVolumeConfiguration>& GetVolumeConfigurations() const { return m_volumeConfigurations; }
    inline bool VolumeConfigurationsHasBeenSet() const { return m_volumeConfigurationsHasBeenSet; }
    template<typename VolumeConfigurationsT = Aws::Vector<ServiceVolumeConfiguration>>
    void SetVolumeConfigurations(VolumeConfigurationsT&& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations = std::forward<VolumeConfigurationsT>(value); }
    template<typename VolumeConfigurationsT = Aws::Vector<ServiceVolumeConfiguration>>
    ServiceRevision& WithVolumeConfigurations(VolumeConfigurationsT&& value) { SetVolumeConfigurations(std::forward<VolumeConfigurationsT>(value)); return *this;}
    template<typename VolumeConfigurationsT = ServiceVolumeConfiguration>
    ServiceRevision& AddVolumeConfigurations(VolumeConfigurationsT&& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations.emplace_back(std::forward<VolumeConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const DeploymentEphemeralStorage& GetFargateEphemeralStorage() const { return m_fargateEphemeralStorage; }
    inline bool FargateEphemeralStorageHasBeenSet() const { return m_fargateEphemeralStorageHasBeenSet; }
    template<typename FargateEphemeralStorageT = DeploymentEphemeralStorage>
    void SetFargateEphemeralStorage(FargateEphemeralStorageT&& value) { m_fargateEphemeralStorageHasBeenSet = true; m_fargateEphemeralStorage = std::forward<FargateEphemeralStorageT>(value); }
    template<typename FargateEphemeralStorageT = DeploymentEphemeralStorage>
    ServiceRevision& WithFargateEphemeralStorage(FargateEphemeralStorageT&& value) { SetFargateEphemeralStorage(std::forward<FargateEphemeralStorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the service revision was created. The format is yyyy-mm-dd
     * HH:mm:ss.SSSSS.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ServiceRevision& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC Lattice configuration for the service revision.</p>
     */
    inline const Aws::Vector<VpcLatticeConfiguration>& GetVpcLatticeConfigurations() const { return m_vpcLatticeConfigurations; }
    inline bool VpcLatticeConfigurationsHasBeenSet() const { return m_vpcLatticeConfigurationsHasBeenSet; }
    template<typename VpcLatticeConfigurationsT = Aws::Vector<VpcLatticeConfiguration>>
    void SetVpcLatticeConfigurations(VpcLatticeConfigurationsT&& value) { m_vpcLatticeConfigurationsHasBeenSet = true; m_vpcLatticeConfigurations = std::forward<VpcLatticeConfigurationsT>(value); }
    template<typename VpcLatticeConfigurationsT = Aws::Vector<VpcLatticeConfiguration>>
    ServiceRevision& WithVpcLatticeConfigurations(VpcLatticeConfigurationsT&& value) { SetVpcLatticeConfigurations(std::forward<VpcLatticeConfigurationsT>(value)); return *this;}
    template<typename VpcLatticeConfigurationsT = VpcLatticeConfiguration>
    ServiceRevision& AddVpcLatticeConfigurations(VpcLatticeConfigurationsT&& value) { m_vpcLatticeConfigurationsHasBeenSet = true; m_vpcLatticeConfigurations.emplace_back(std::forward<VpcLatticeConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resolved configuration for the service revision which contains the actual
     * resources your service revision uses, such as which target groups serve
     * traffic.</p>
     */
    inline const ResolvedConfiguration& GetResolvedConfiguration() const { return m_resolvedConfiguration; }
    inline bool ResolvedConfigurationHasBeenSet() const { return m_resolvedConfigurationHasBeenSet; }
    template<typename ResolvedConfigurationT = ResolvedConfiguration>
    void SetResolvedConfiguration(ResolvedConfigurationT&& value) { m_resolvedConfigurationHasBeenSet = true; m_resolvedConfiguration = std::forward<ResolvedConfigurationT>(value); }
    template<typename ResolvedConfigurationT = ResolvedConfiguration>
    ServiceRevision& WithResolvedConfiguration(ResolvedConfigurationT&& value) { SetResolvedConfiguration(std::forward<ResolvedConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceRevisionArn;
    bool m_serviceRevisionArnHasBeenSet = false;

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_taskDefinition;
    bool m_taskDefinitionHasBeenSet = false;

    Aws::Vector<CapacityProviderStrategyItem> m_capacityProviderStrategy;
    bool m_capacityProviderStrategyHasBeenSet = false;

    LaunchType m_launchType{LaunchType::NOT_SET};
    bool m_launchTypeHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    Aws::String m_platformFamily;
    bool m_platformFamilyHasBeenSet = false;

    Aws::Vector<LoadBalancer> m_loadBalancers;
    bool m_loadBalancersHasBeenSet = false;

    Aws::Vector<ServiceRegistry> m_serviceRegistries;
    bool m_serviceRegistriesHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    Aws::Vector<ContainerImage> m_containerImages;
    bool m_containerImagesHasBeenSet = false;

    bool m_guardDutyEnabled{false};
    bool m_guardDutyEnabledHasBeenSet = false;

    ServiceConnectConfiguration m_serviceConnectConfiguration;
    bool m_serviceConnectConfigurationHasBeenSet = false;

    Aws::Vector<ServiceVolumeConfiguration> m_volumeConfigurations;
    bool m_volumeConfigurationsHasBeenSet = false;

    DeploymentEphemeralStorage m_fargateEphemeralStorage;
    bool m_fargateEphemeralStorageHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Vector<VpcLatticeConfiguration> m_vpcLatticeConfigurations;
    bool m_vpcLatticeConfigurationsHasBeenSet = false;

    ResolvedConfiguration m_resolvedConfiguration;
    bool m_resolvedConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
