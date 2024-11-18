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
    AWS_ECS_API ServiceRevision();
    AWS_ECS_API ServiceRevision(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceRevision& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the service revision.</p>
     */
    inline const Aws::String& GetServiceRevisionArn() const{ return m_serviceRevisionArn; }
    inline bool ServiceRevisionArnHasBeenSet() const { return m_serviceRevisionArnHasBeenSet; }
    inline void SetServiceRevisionArn(const Aws::String& value) { m_serviceRevisionArnHasBeenSet = true; m_serviceRevisionArn = value; }
    inline void SetServiceRevisionArn(Aws::String&& value) { m_serviceRevisionArnHasBeenSet = true; m_serviceRevisionArn = std::move(value); }
    inline void SetServiceRevisionArn(const char* value) { m_serviceRevisionArnHasBeenSet = true; m_serviceRevisionArn.assign(value); }
    inline ServiceRevision& WithServiceRevisionArn(const Aws::String& value) { SetServiceRevisionArn(value); return *this;}
    inline ServiceRevision& WithServiceRevisionArn(Aws::String&& value) { SetServiceRevisionArn(std::move(value)); return *this;}
    inline ServiceRevision& WithServiceRevisionArn(const char* value) { SetServiceRevisionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the service for the service revision.</p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
    inline void SetServiceArn(const Aws::String& value) { m_serviceArnHasBeenSet = true; m_serviceArn = value; }
    inline void SetServiceArn(Aws::String&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::move(value); }
    inline void SetServiceArn(const char* value) { m_serviceArnHasBeenSet = true; m_serviceArn.assign(value); }
    inline ServiceRevision& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}
    inline ServiceRevision& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}
    inline ServiceRevision& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the cluster that hosts the service.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }
    inline ServiceRevision& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline ServiceRevision& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline ServiceRevision& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task definition the service revision uses.</p>
     */
    inline const Aws::String& GetTaskDefinition() const{ return m_taskDefinition; }
    inline bool TaskDefinitionHasBeenSet() const { return m_taskDefinitionHasBeenSet; }
    inline void SetTaskDefinition(const Aws::String& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }
    inline void SetTaskDefinition(Aws::String&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = std::move(value); }
    inline void SetTaskDefinition(const char* value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition.assign(value); }
    inline ServiceRevision& WithTaskDefinition(const Aws::String& value) { SetTaskDefinition(value); return *this;}
    inline ServiceRevision& WithTaskDefinition(Aws::String&& value) { SetTaskDefinition(std::move(value)); return *this;}
    inline ServiceRevision& WithTaskDefinition(const char* value) { SetTaskDefinition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity provider strategy the service revision uses.</p>
     */
    inline const Aws::Vector<CapacityProviderStrategyItem>& GetCapacityProviderStrategy() const{ return m_capacityProviderStrategy; }
    inline bool CapacityProviderStrategyHasBeenSet() const { return m_capacityProviderStrategyHasBeenSet; }
    inline void SetCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = value; }
    inline void SetCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = std::move(value); }
    inline ServiceRevision& WithCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { SetCapacityProviderStrategy(value); return *this;}
    inline ServiceRevision& WithCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { SetCapacityProviderStrategy(std::move(value)); return *this;}
    inline ServiceRevision& AddCapacityProviderStrategy(const CapacityProviderStrategyItem& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.push_back(value); return *this; }
    inline ServiceRevision& AddCapacityProviderStrategy(CapacityProviderStrategyItem&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The launch type the service revision uses.</p>
     */
    inline const LaunchType& GetLaunchType() const{ return m_launchType; }
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }
    inline void SetLaunchType(const LaunchType& value) { m_launchTypeHasBeenSet = true; m_launchType = value; }
    inline void SetLaunchType(LaunchType&& value) { m_launchTypeHasBeenSet = true; m_launchType = std::move(value); }
    inline ServiceRevision& WithLaunchType(const LaunchType& value) { SetLaunchType(value); return *this;}
    inline ServiceRevision& WithLaunchType(LaunchType&& value) { SetLaunchType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For the Fargate launch type, the platform version the service revision
     * uses.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }
    inline ServiceRevision& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}
    inline ServiceRevision& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}
    inline ServiceRevision& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform family the service revision uses.</p>
     */
    inline const Aws::String& GetPlatformFamily() const{ return m_platformFamily; }
    inline bool PlatformFamilyHasBeenSet() const { return m_platformFamilyHasBeenSet; }
    inline void SetPlatformFamily(const Aws::String& value) { m_platformFamilyHasBeenSet = true; m_platformFamily = value; }
    inline void SetPlatformFamily(Aws::String&& value) { m_platformFamilyHasBeenSet = true; m_platformFamily = std::move(value); }
    inline void SetPlatformFamily(const char* value) { m_platformFamilyHasBeenSet = true; m_platformFamily.assign(value); }
    inline ServiceRevision& WithPlatformFamily(const Aws::String& value) { SetPlatformFamily(value); return *this;}
    inline ServiceRevision& WithPlatformFamily(Aws::String&& value) { SetPlatformFamily(std::move(value)); return *this;}
    inline ServiceRevision& WithPlatformFamily(const char* value) { SetPlatformFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The load balancers the service revision uses.</p>
     */
    inline const Aws::Vector<LoadBalancer>& GetLoadBalancers() const{ return m_loadBalancers; }
    inline bool LoadBalancersHasBeenSet() const { return m_loadBalancersHasBeenSet; }
    inline void SetLoadBalancers(const Aws::Vector<LoadBalancer>& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = value; }
    inline void SetLoadBalancers(Aws::Vector<LoadBalancer>&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = std::move(value); }
    inline ServiceRevision& WithLoadBalancers(const Aws::Vector<LoadBalancer>& value) { SetLoadBalancers(value); return *this;}
    inline ServiceRevision& WithLoadBalancers(Aws::Vector<LoadBalancer>&& value) { SetLoadBalancers(std::move(value)); return *this;}
    inline ServiceRevision& AddLoadBalancers(const LoadBalancer& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(value); return *this; }
    inline ServiceRevision& AddLoadBalancers(LoadBalancer&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The service registries (for Service Discovery) the service revision uses.</p>
     */
    inline const Aws::Vector<ServiceRegistry>& GetServiceRegistries() const{ return m_serviceRegistries; }
    inline bool ServiceRegistriesHasBeenSet() const { return m_serviceRegistriesHasBeenSet; }
    inline void SetServiceRegistries(const Aws::Vector<ServiceRegistry>& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries = value; }
    inline void SetServiceRegistries(Aws::Vector<ServiceRegistry>&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries = std::move(value); }
    inline ServiceRevision& WithServiceRegistries(const Aws::Vector<ServiceRegistry>& value) { SetServiceRegistries(value); return *this;}
    inline ServiceRevision& WithServiceRegistries(Aws::Vector<ServiceRegistry>&& value) { SetServiceRegistries(std::move(value)); return *this;}
    inline ServiceRevision& AddServiceRegistries(const ServiceRegistry& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries.push_back(value); return *this; }
    inline ServiceRevision& AddServiceRegistries(ServiceRegistry&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }
    inline ServiceRevision& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}
    inline ServiceRevision& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container images the service revision uses.</p>
     */
    inline const Aws::Vector<ContainerImage>& GetContainerImages() const{ return m_containerImages; }
    inline bool ContainerImagesHasBeenSet() const { return m_containerImagesHasBeenSet; }
    inline void SetContainerImages(const Aws::Vector<ContainerImage>& value) { m_containerImagesHasBeenSet = true; m_containerImages = value; }
    inline void SetContainerImages(Aws::Vector<ContainerImage>&& value) { m_containerImagesHasBeenSet = true; m_containerImages = std::move(value); }
    inline ServiceRevision& WithContainerImages(const Aws::Vector<ContainerImage>& value) { SetContainerImages(value); return *this;}
    inline ServiceRevision& WithContainerImages(Aws::Vector<ContainerImage>&& value) { SetContainerImages(std::move(value)); return *this;}
    inline ServiceRevision& AddContainerImages(const ContainerImage& value) { m_containerImagesHasBeenSet = true; m_containerImages.push_back(value); return *this; }
    inline ServiceRevision& AddContainerImages(ContainerImage&& value) { m_containerImagesHasBeenSet = true; m_containerImages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether Runtime Monitoring is turned on.</p>
     */
    inline bool GetGuardDutyEnabled() const{ return m_guardDutyEnabled; }
    inline bool GuardDutyEnabledHasBeenSet() const { return m_guardDutyEnabledHasBeenSet; }
    inline void SetGuardDutyEnabled(bool value) { m_guardDutyEnabledHasBeenSet = true; m_guardDutyEnabled = value; }
    inline ServiceRevision& WithGuardDutyEnabled(bool value) { SetGuardDutyEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const ServiceConnectConfiguration& GetServiceConnectConfiguration() const{ return m_serviceConnectConfiguration; }
    inline bool ServiceConnectConfigurationHasBeenSet() const { return m_serviceConnectConfigurationHasBeenSet; }
    inline void SetServiceConnectConfiguration(const ServiceConnectConfiguration& value) { m_serviceConnectConfigurationHasBeenSet = true; m_serviceConnectConfiguration = value; }
    inline void SetServiceConnectConfiguration(ServiceConnectConfiguration&& value) { m_serviceConnectConfigurationHasBeenSet = true; m_serviceConnectConfiguration = std::move(value); }
    inline ServiceRevision& WithServiceConnectConfiguration(const ServiceConnectConfiguration& value) { SetServiceConnectConfiguration(value); return *this;}
    inline ServiceRevision& WithServiceConnectConfiguration(ServiceConnectConfiguration&& value) { SetServiceConnectConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volumes that are configured at deployment that the service revision
     * uses.</p>
     */
    inline const Aws::Vector<ServiceVolumeConfiguration>& GetVolumeConfigurations() const{ return m_volumeConfigurations; }
    inline bool VolumeConfigurationsHasBeenSet() const { return m_volumeConfigurationsHasBeenSet; }
    inline void SetVolumeConfigurations(const Aws::Vector<ServiceVolumeConfiguration>& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations = value; }
    inline void SetVolumeConfigurations(Aws::Vector<ServiceVolumeConfiguration>&& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations = std::move(value); }
    inline ServiceRevision& WithVolumeConfigurations(const Aws::Vector<ServiceVolumeConfiguration>& value) { SetVolumeConfigurations(value); return *this;}
    inline ServiceRevision& WithVolumeConfigurations(Aws::Vector<ServiceVolumeConfiguration>&& value) { SetVolumeConfigurations(std::move(value)); return *this;}
    inline ServiceRevision& AddVolumeConfigurations(const ServiceVolumeConfiguration& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations.push_back(value); return *this; }
    inline ServiceRevision& AddVolumeConfigurations(ServiceVolumeConfiguration&& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const DeploymentEphemeralStorage& GetFargateEphemeralStorage() const{ return m_fargateEphemeralStorage; }
    inline bool FargateEphemeralStorageHasBeenSet() const { return m_fargateEphemeralStorageHasBeenSet; }
    inline void SetFargateEphemeralStorage(const DeploymentEphemeralStorage& value) { m_fargateEphemeralStorageHasBeenSet = true; m_fargateEphemeralStorage = value; }
    inline void SetFargateEphemeralStorage(DeploymentEphemeralStorage&& value) { m_fargateEphemeralStorageHasBeenSet = true; m_fargateEphemeralStorage = std::move(value); }
    inline ServiceRevision& WithFargateEphemeralStorage(const DeploymentEphemeralStorage& value) { SetFargateEphemeralStorage(value); return *this;}
    inline ServiceRevision& WithFargateEphemeralStorage(DeploymentEphemeralStorage&& value) { SetFargateEphemeralStorage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the service revision was created. The format is yyyy-mm-dd
     * HH:mm:ss.SSSSS.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ServiceRevision& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ServiceRevision& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC Lattice configuration for the service revision.</p>
     */
    inline const Aws::Vector<VpcLatticeConfiguration>& GetVpcLatticeConfigurations() const{ return m_vpcLatticeConfigurations; }
    inline bool VpcLatticeConfigurationsHasBeenSet() const { return m_vpcLatticeConfigurationsHasBeenSet; }
    inline void SetVpcLatticeConfigurations(const Aws::Vector<VpcLatticeConfiguration>& value) { m_vpcLatticeConfigurationsHasBeenSet = true; m_vpcLatticeConfigurations = value; }
    inline void SetVpcLatticeConfigurations(Aws::Vector<VpcLatticeConfiguration>&& value) { m_vpcLatticeConfigurationsHasBeenSet = true; m_vpcLatticeConfigurations = std::move(value); }
    inline ServiceRevision& WithVpcLatticeConfigurations(const Aws::Vector<VpcLatticeConfiguration>& value) { SetVpcLatticeConfigurations(value); return *this;}
    inline ServiceRevision& WithVpcLatticeConfigurations(Aws::Vector<VpcLatticeConfiguration>&& value) { SetVpcLatticeConfigurations(std::move(value)); return *this;}
    inline ServiceRevision& AddVpcLatticeConfigurations(const VpcLatticeConfiguration& value) { m_vpcLatticeConfigurationsHasBeenSet = true; m_vpcLatticeConfigurations.push_back(value); return *this; }
    inline ServiceRevision& AddVpcLatticeConfigurations(VpcLatticeConfiguration&& value) { m_vpcLatticeConfigurationsHasBeenSet = true; m_vpcLatticeConfigurations.push_back(std::move(value)); return *this; }
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

    LaunchType m_launchType;
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

    bool m_guardDutyEnabled;
    bool m_guardDutyEnabledHasBeenSet = false;

    ServiceConnectConfiguration m_serviceConnectConfiguration;
    bool m_serviceConnectConfigurationHasBeenSet = false;

    Aws::Vector<ServiceVolumeConfiguration> m_volumeConfigurations;
    bool m_volumeConfigurationsHasBeenSet = false;

    DeploymentEphemeralStorage m_fargateEphemeralStorage;
    bool m_fargateEphemeralStorageHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Vector<VpcLatticeConfiguration> m_vpcLatticeConfigurations;
    bool m_vpcLatticeConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
