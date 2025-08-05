/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/VpcConfigRequest.h>
#include <aws/eks/model/Logging.h>
#include <aws/eks/model/UpdateAccessConfigRequest.h>
#include <aws/eks/model/UpgradePolicyRequest.h>
#include <aws/eks/model/ZonalShiftConfigRequest.h>
#include <aws/eks/model/ComputeConfigRequest.h>
#include <aws/eks/model/KubernetesNetworkConfigRequest.h>
#include <aws/eks/model/StorageConfigRequest.h>
#include <aws/eks/model/RemoteNetworkConfigRequest.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EKS
{
namespace Model
{

  /**
   */
  class UpdateClusterConfigRequest : public EKSRequest
  {
  public:
    AWS_EKS_API UpdateClusterConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateClusterConfig"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the Amazon EKS cluster to update.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateClusterConfigRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcConfigRequest& GetResourcesVpcConfig() const { return m_resourcesVpcConfig; }
    inline bool ResourcesVpcConfigHasBeenSet() const { return m_resourcesVpcConfigHasBeenSet; }
    template<typename ResourcesVpcConfigT = VpcConfigRequest>
    void SetResourcesVpcConfig(ResourcesVpcConfigT&& value) { m_resourcesVpcConfigHasBeenSet = true; m_resourcesVpcConfig = std::forward<ResourcesVpcConfigT>(value); }
    template<typename ResourcesVpcConfigT = VpcConfigRequest>
    UpdateClusterConfigRequest& WithResourcesVpcConfig(ResourcesVpcConfigT&& value) { SetResourcesVpcConfig(std::forward<ResourcesVpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable or disable exporting the Kubernetes control plane logs for your
     * cluster to CloudWatch Logs . By default, cluster control plane logs aren't
     * exported to CloudWatch Logs . For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon
     * EKS cluster control plane logs</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p>  <p>CloudWatch Logs ingestion, archive storage, and data
     * scanning rates apply to exported control plane logs. For more information, see
     * <a href="http://aws.amazon.com/cloudwatch/pricing/">CloudWatch Pricing</a>.</p>
     * 
     */
    inline const Logging& GetLogging() const { return m_logging; }
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }
    template<typename LoggingT = Logging>
    void SetLogging(LoggingT&& value) { m_loggingHasBeenSet = true; m_logging = std::forward<LoggingT>(value); }
    template<typename LoggingT = Logging>
    UpdateClusterConfigRequest& WithLogging(LoggingT&& value) { SetLogging(std::forward<LoggingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    UpdateClusterConfigRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access configuration for the cluster.</p>
     */
    inline const UpdateAccessConfigRequest& GetAccessConfig() const { return m_accessConfig; }
    inline bool AccessConfigHasBeenSet() const { return m_accessConfigHasBeenSet; }
    template<typename AccessConfigT = UpdateAccessConfigRequest>
    void SetAccessConfig(AccessConfigT&& value) { m_accessConfigHasBeenSet = true; m_accessConfig = std::forward<AccessConfigT>(value); }
    template<typename AccessConfigT = UpdateAccessConfigRequest>
    UpdateClusterConfigRequest& WithAccessConfig(AccessConfigT&& value) { SetAccessConfig(std::forward<AccessConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can enable or disable extended support for clusters currently on standard
     * support. You cannot disable extended support once it starts. You must enable
     * extended support before your cluster exits standard support.</p>
     */
    inline const UpgradePolicyRequest& GetUpgradePolicy() const { return m_upgradePolicy; }
    inline bool UpgradePolicyHasBeenSet() const { return m_upgradePolicyHasBeenSet; }
    template<typename UpgradePolicyT = UpgradePolicyRequest>
    void SetUpgradePolicy(UpgradePolicyT&& value) { m_upgradePolicyHasBeenSet = true; m_upgradePolicy = std::forward<UpgradePolicyT>(value); }
    template<typename UpgradePolicyT = UpgradePolicyRequest>
    UpdateClusterConfigRequest& WithUpgradePolicy(UpgradePolicyT&& value) { SetUpgradePolicy(std::forward<UpgradePolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable or disable ARC zonal shift for the cluster. If zonal shift is enabled,
     * Amazon Web Services configures zonal autoshift for the cluster.</p> <p>Zonal
     * shift is a feature of Amazon Application Recovery Controller (ARC). ARC zonal
     * shift is designed to be a temporary measure that allows you to move traffic for
     * a resource away from an impaired AZ until the zonal shift expires or you cancel
     * it. You can extend the zonal shift if necessary.</p> <p>You can start a zonal
     * shift for an EKS cluster, or you can allow Amazon Web Services to do it for you
     * by enabling <i>zonal autoshift</i>. This shift updates the flow of east-to-west
     * network traffic in your cluster to only consider network endpoints for Pods
     * running on worker nodes in healthy AZs. Additionally, any ALB or NLB handling
     * ingress traffic for applications in your EKS cluster will automatically route
     * traffic to targets in the healthy AZs. For more information about zonal shift in
     * EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/zone-shift.html">Learn
     * about Amazon Application Recovery Controller (ARC) Zonal Shift in Amazon EKS</a>
     * in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline const ZonalShiftConfigRequest& GetZonalShiftConfig() const { return m_zonalShiftConfig; }
    inline bool ZonalShiftConfigHasBeenSet() const { return m_zonalShiftConfigHasBeenSet; }
    template<typename ZonalShiftConfigT = ZonalShiftConfigRequest>
    void SetZonalShiftConfig(ZonalShiftConfigT&& value) { m_zonalShiftConfigHasBeenSet = true; m_zonalShiftConfig = std::forward<ZonalShiftConfigT>(value); }
    template<typename ZonalShiftConfigT = ZonalShiftConfigRequest>
    UpdateClusterConfigRequest& WithZonalShiftConfig(ZonalShiftConfigT&& value) { SetZonalShiftConfig(std::forward<ZonalShiftConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update the configuration of the compute capability of your EKS Auto Mode
     * cluster. For example, enable the capability.</p>
     */
    inline const ComputeConfigRequest& GetComputeConfig() const { return m_computeConfig; }
    inline bool ComputeConfigHasBeenSet() const { return m_computeConfigHasBeenSet; }
    template<typename ComputeConfigT = ComputeConfigRequest>
    void SetComputeConfig(ComputeConfigT&& value) { m_computeConfigHasBeenSet = true; m_computeConfig = std::forward<ComputeConfigT>(value); }
    template<typename ComputeConfigT = ComputeConfigRequest>
    UpdateClusterConfigRequest& WithComputeConfig(ComputeConfigT&& value) { SetComputeConfig(std::forward<ComputeConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const KubernetesNetworkConfigRequest& GetKubernetesNetworkConfig() const { return m_kubernetesNetworkConfig; }
    inline bool KubernetesNetworkConfigHasBeenSet() const { return m_kubernetesNetworkConfigHasBeenSet; }
    template<typename KubernetesNetworkConfigT = KubernetesNetworkConfigRequest>
    void SetKubernetesNetworkConfig(KubernetesNetworkConfigT&& value) { m_kubernetesNetworkConfigHasBeenSet = true; m_kubernetesNetworkConfig = std::forward<KubernetesNetworkConfigT>(value); }
    template<typename KubernetesNetworkConfigT = KubernetesNetworkConfigRequest>
    UpdateClusterConfigRequest& WithKubernetesNetworkConfig(KubernetesNetworkConfigT&& value) { SetKubernetesNetworkConfig(std::forward<KubernetesNetworkConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update the configuration of the block storage capability of your EKS Auto
     * Mode cluster. For example, enable the capability.</p>
     */
    inline const StorageConfigRequest& GetStorageConfig() const { return m_storageConfig; }
    inline bool StorageConfigHasBeenSet() const { return m_storageConfigHasBeenSet; }
    template<typename StorageConfigT = StorageConfigRequest>
    void SetStorageConfig(StorageConfigT&& value) { m_storageConfigHasBeenSet = true; m_storageConfig = std::forward<StorageConfigT>(value); }
    template<typename StorageConfigT = StorageConfigRequest>
    UpdateClusterConfigRequest& WithStorageConfig(StorageConfigT&& value) { SetStorageConfig(std::forward<StorageConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RemoteNetworkConfigRequest& GetRemoteNetworkConfig() const { return m_remoteNetworkConfig; }
    inline bool RemoteNetworkConfigHasBeenSet() const { return m_remoteNetworkConfigHasBeenSet; }
    template<typename RemoteNetworkConfigT = RemoteNetworkConfigRequest>
    void SetRemoteNetworkConfig(RemoteNetworkConfigT&& value) { m_remoteNetworkConfigHasBeenSet = true; m_remoteNetworkConfig = std::forward<RemoteNetworkConfigT>(value); }
    template<typename RemoteNetworkConfigT = RemoteNetworkConfigRequest>
    UpdateClusterConfigRequest& WithRemoteNetworkConfig(RemoteNetworkConfigT&& value) { SetRemoteNetworkConfig(std::forward<RemoteNetworkConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable or disable deletion protection for the cluster.
     * When enabled (<code>true</code>), the cluster cannot be deleted until deletion
     * protection is explicitly disabled. When disabled (<code>false</code>), the
     * cluster can be deleted normally.</p>
     */
    inline bool GetDeletionProtection() const { return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline UpdateClusterConfigRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    VpcConfigRequest m_resourcesVpcConfig;
    bool m_resourcesVpcConfigHasBeenSet = false;

    Logging m_logging;
    bool m_loggingHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    UpdateAccessConfigRequest m_accessConfig;
    bool m_accessConfigHasBeenSet = false;

    UpgradePolicyRequest m_upgradePolicy;
    bool m_upgradePolicyHasBeenSet = false;

    ZonalShiftConfigRequest m_zonalShiftConfig;
    bool m_zonalShiftConfigHasBeenSet = false;

    ComputeConfigRequest m_computeConfig;
    bool m_computeConfigHasBeenSet = false;

    KubernetesNetworkConfigRequest m_kubernetesNetworkConfig;
    bool m_kubernetesNetworkConfigHasBeenSet = false;

    StorageConfigRequest m_storageConfig;
    bool m_storageConfigHasBeenSet = false;

    RemoteNetworkConfigRequest m_remoteNetworkConfig;
    bool m_remoteNetworkConfigHasBeenSet = false;

    bool m_deletionProtection{false};
    bool m_deletionProtectionHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
