/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/EngineType.h>
#include <aws/m2/model/HighAvailabilityConfig.h>
#include <aws/m2/model/NetworkType.h>
#include <aws/m2/model/PendingMaintenance.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/m2/model/EnvironmentLifecycle.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/m2/model/StorageConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MainframeModernization
{
namespace Model
{
  class GetEnvironmentResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API GetEnvironmentResult() = default;
    AWS_MAINFRAMEMODERNIZATION_API GetEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API GetEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of instances included in the runtime environment. A standalone
     * runtime environment has a maximum of one instance. Currently, a high
     * availability runtime environment has a maximum of two instances. </p>
     */
    inline int GetActualCapacity() const { return m_actualCapacity; }
    inline void SetActualCapacity(int value) { m_actualCapacityHasBeenSet = true; m_actualCapacity = value; }
    inline GetEnvironmentResult& WithActualCapacity(int value) { SetActualCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the runtime environment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetEnvironmentResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the runtime environment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetEnvironmentResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target platform for the runtime environment.</p>
     */
    inline EngineType GetEngineType() const { return m_engineType; }
    inline void SetEngineType(EngineType value) { m_engineTypeHasBeenSet = true; m_engineType = value; }
    inline GetEnvironmentResult& WithEngineType(EngineType value) { SetEngineType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the runtime engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    GetEnvironmentResult& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the runtime environment.</p>
     */
    inline const Aws::String& GetEnvironmentArn() const { return m_environmentArn; }
    template<typename EnvironmentArnT = Aws::String>
    void SetEnvironmentArn(EnvironmentArnT&& value) { m_environmentArnHasBeenSet = true; m_environmentArn = std::forward<EnvironmentArnT>(value); }
    template<typename EnvironmentArnT = Aws::String>
    GetEnvironmentResult& WithEnvironmentArn(EnvironmentArnT&& value) { SetEnvironmentArn(std::forward<EnvironmentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the runtime environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    GetEnvironmentResult& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired capacity of the high availability configuration for the runtime
     * environment.</p>
     */
    inline const HighAvailabilityConfig& GetHighAvailabilityConfig() const { return m_highAvailabilityConfig; }
    template<typename HighAvailabilityConfigT = HighAvailabilityConfig>
    void SetHighAvailabilityConfig(HighAvailabilityConfigT&& value) { m_highAvailabilityConfigHasBeenSet = true; m_highAvailabilityConfig = std::forward<HighAvailabilityConfigT>(value); }
    template<typename HighAvailabilityConfigT = HighAvailabilityConfig>
    GetEnvironmentResult& WithHighAvailabilityConfig(HighAvailabilityConfigT&& value) { SetHighAvailabilityConfig(std::forward<HighAvailabilityConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance underlying the runtime environment.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    GetEnvironmentResult& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a customer managed key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    GetEnvironmentResult& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the load balancer used with the runtime
     * environment.</p>
     */
    inline const Aws::String& GetLoadBalancerArn() const { return m_loadBalancerArn; }
    template<typename LoadBalancerArnT = Aws::String>
    void SetLoadBalancerArn(LoadBalancerArnT&& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = std::forward<LoadBalancerArnT>(value); }
    template<typename LoadBalancerArnT = Aws::String>
    GetEnvironmentResult& WithLoadBalancerArn(LoadBalancerArnT&& value) { SetLoadBalancerArn(std::forward<LoadBalancerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the runtime environment. Must be unique within the account.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetEnvironmentResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network type supported by the runtime environment.</p>
     */
    inline NetworkType GetNetworkType() const { return m_networkType; }
    inline void SetNetworkType(NetworkType value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline GetEnvironmentResult& WithNetworkType(NetworkType value) { SetNetworkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the pending maintenance scheduled on this environment.</p>
     */
    inline const PendingMaintenance& GetPendingMaintenance() const { return m_pendingMaintenance; }
    template<typename PendingMaintenanceT = PendingMaintenance>
    void SetPendingMaintenance(PendingMaintenanceT&& value) { m_pendingMaintenanceHasBeenSet = true; m_pendingMaintenance = std::forward<PendingMaintenanceT>(value); }
    template<typename PendingMaintenanceT = PendingMaintenance>
    GetEnvironmentResult& WithPendingMaintenance(PendingMaintenanceT&& value) { SetPendingMaintenance(std::forward<PendingMaintenanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maintenance window for the runtime environment. If you don't provide a
     * value for the maintenance window, the service assigns a random value.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    GetEnvironmentResult& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether applications running in this runtime environment are publicly
     * accessible. </p>
     */
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline GetEnvironmentResult& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifiers of the security groups assigned to this runtime
     * environment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    GetEnvironmentResult& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    GetEnvironmentResult& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the runtime environment. If the Amazon Web Services Mainframe
     * Modernization environment is missing a connection to the customer owned
     * dependent resource, the status will be <code>Unhealthy</code>.</p>
     */
    inline EnvironmentLifecycle GetStatus() const { return m_status; }
    inline void SetStatus(EnvironmentLifecycle value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetEnvironmentResult& WithStatus(EnvironmentLifecycle value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the reported status.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    GetEnvironmentResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage configurations defined for the runtime environment.</p>
     */
    inline const Aws::Vector<StorageConfiguration>& GetStorageConfigurations() const { return m_storageConfigurations; }
    template<typename StorageConfigurationsT = Aws::Vector<StorageConfiguration>>
    void SetStorageConfigurations(StorageConfigurationsT&& value) { m_storageConfigurationsHasBeenSet = true; m_storageConfigurations = std::forward<StorageConfigurationsT>(value); }
    template<typename StorageConfigurationsT = Aws::Vector<StorageConfiguration>>
    GetEnvironmentResult& WithStorageConfigurations(StorageConfigurationsT&& value) { SetStorageConfigurations(std::forward<StorageConfigurationsT>(value)); return *this;}
    template<typename StorageConfigurationsT = StorageConfiguration>
    GetEnvironmentResult& AddStorageConfigurations(StorageConfigurationsT&& value) { m_storageConfigurationsHasBeenSet = true; m_storageConfigurations.emplace_back(std::forward<StorageConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifiers of the subnets assigned to this runtime
     * environment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    GetEnvironmentResult& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    GetEnvironmentResult& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags defined for this runtime environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetEnvironmentResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetEnvironmentResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the VPC used with this runtime environment.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    GetEnvironmentResult& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEnvironmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_actualCapacity{0};
    bool m_actualCapacityHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EngineType m_engineType{EngineType::NOT_SET};
    bool m_engineTypeHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_environmentArn;
    bool m_environmentArnHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    HighAvailabilityConfig m_highAvailabilityConfig;
    bool m_highAvailabilityConfigHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_loadBalancerArn;
    bool m_loadBalancerArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    NetworkType m_networkType{NetworkType::NOT_SET};
    bool m_networkTypeHasBeenSet = false;

    PendingMaintenance m_pendingMaintenance;
    bool m_pendingMaintenanceHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    EnvironmentLifecycle m_status{EnvironmentLifecycle::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Vector<StorageConfiguration> m_storageConfigurations;
    bool m_storageConfigurationsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
