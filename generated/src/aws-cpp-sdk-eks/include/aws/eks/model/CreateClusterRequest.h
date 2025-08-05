/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/VpcConfigRequest.h>
#include <aws/eks/model/KubernetesNetworkConfigRequest.h>
#include <aws/eks/model/Logging.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/OutpostConfigRequest.h>
#include <aws/eks/model/CreateAccessConfigRequest.h>
#include <aws/eks/model/UpgradePolicyRequest.h>
#include <aws/eks/model/ZonalShiftConfigRequest.h>
#include <aws/eks/model/RemoteNetworkConfigRequest.h>
#include <aws/eks/model/ComputeConfigRequest.h>
#include <aws/eks/model/StorageConfigRequest.h>
#include <aws/eks/model/EncryptionConfig.h>
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
  class CreateClusterRequest : public EKSRequest
  {
  public:
    AWS_EKS_API CreateClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCluster"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique name to give to your cluster. The name can contain only
     * alphanumeric characters (case-sensitive), hyphens, and underscores. It must
     * start with an alphanumeric character and can't be longer than 100 characters.
     * The name must be unique within the Amazon Web Services Region and Amazon Web
     * Services account that you're creating the cluster in.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateClusterRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired Kubernetes version for your cluster. If you don't specify a value
     * here, the default version available in Amazon EKS is used.</p>  <p>The
     * default version might not be the latest version available.</p> 
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    CreateClusterRequest& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to Amazon Web Services API operations
     * on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/service_IAM_role.html">Amazon
     * EKS Service IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateClusterRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC configuration that's used by the cluster control plane. Amazon EKS
     * VPC resources have specific requirements to work properly with Kubernetes. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/network_reqs.html">Cluster
     * VPC Considerations</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/sec-group-reqs.html">Cluster
     * Security Group Considerations</a> in the <i>Amazon EKS User Guide</i>. You must
     * specify at least two subnets. You can specify up to five security groups.
     * However, we recommend that you use a dedicated security group for your cluster
     * control plane.</p>
     */
    inline const VpcConfigRequest& GetResourcesVpcConfig() const { return m_resourcesVpcConfig; }
    inline bool ResourcesVpcConfigHasBeenSet() const { return m_resourcesVpcConfigHasBeenSet; }
    template<typename ResourcesVpcConfigT = VpcConfigRequest>
    void SetResourcesVpcConfig(ResourcesVpcConfigT&& value) { m_resourcesVpcConfigHasBeenSet = true; m_resourcesVpcConfig = std::forward<ResourcesVpcConfigT>(value); }
    template<typename ResourcesVpcConfigT = VpcConfigRequest>
    CreateClusterRequest& WithResourcesVpcConfig(ResourcesVpcConfigT&& value) { SetResourcesVpcConfig(std::forward<ResourcesVpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes network configuration for the cluster.</p>
     */
    inline const KubernetesNetworkConfigRequest& GetKubernetesNetworkConfig() const { return m_kubernetesNetworkConfig; }
    inline bool KubernetesNetworkConfigHasBeenSet() const { return m_kubernetesNetworkConfigHasBeenSet; }
    template<typename KubernetesNetworkConfigT = KubernetesNetworkConfigRequest>
    void SetKubernetesNetworkConfig(KubernetesNetworkConfigT&& value) { m_kubernetesNetworkConfigHasBeenSet = true; m_kubernetesNetworkConfig = std::forward<KubernetesNetworkConfigT>(value); }
    template<typename KubernetesNetworkConfigT = KubernetesNetworkConfigRequest>
    CreateClusterRequest& WithKubernetesNetworkConfig(KubernetesNetworkConfigT&& value) { SetKubernetesNetworkConfig(std::forward<KubernetesNetworkConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable or disable exporting the Kubernetes control plane logs for your
     * cluster to CloudWatch Logs . By default, cluster control plane logs aren't
     * exported to CloudWatch Logs . For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon
     * EKS Cluster control plane logs</a> in the <i> <i>Amazon EKS User Guide</i>
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
    CreateClusterRequest& WithLogging(LoggingT&& value) { SetLogging(std::forward<LoggingT>(value)); return *this;}
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
    CreateClusterRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateClusterRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateClusterRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The encryption configuration for the cluster.</p>
     */
    inline const Aws::Vector<EncryptionConfig>& GetEncryptionConfig() const { return m_encryptionConfig; }
    inline bool EncryptionConfigHasBeenSet() const { return m_encryptionConfigHasBeenSet; }
    template<typename EncryptionConfigT = Aws::Vector<EncryptionConfig>>
    void SetEncryptionConfig(EncryptionConfigT&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = std::forward<EncryptionConfigT>(value); }
    template<typename EncryptionConfigT = Aws::Vector<EncryptionConfig>>
    CreateClusterRequest& WithEncryptionConfig(EncryptionConfigT&& value) { SetEncryptionConfig(std::forward<EncryptionConfigT>(value)); return *this;}
    template<typename EncryptionConfigT = EncryptionConfig>
    CreateClusterRequest& AddEncryptionConfig(EncryptionConfigT&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig.emplace_back(std::forward<EncryptionConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object representing the configuration of your local Amazon EKS cluster on
     * an Amazon Web Services Outpost. Before creating a local cluster on an Outpost,
     * review <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-outposts-local-cluster-overview.html">Local
     * clusters for Amazon EKS on Amazon Web Services Outposts</a> in the <i>Amazon EKS
     * User Guide</i>. This object isn't available for creating Amazon EKS clusters on
     * the Amazon Web Services cloud.</p>
     */
    inline const OutpostConfigRequest& GetOutpostConfig() const { return m_outpostConfig; }
    inline bool OutpostConfigHasBeenSet() const { return m_outpostConfigHasBeenSet; }
    template<typename OutpostConfigT = OutpostConfigRequest>
    void SetOutpostConfig(OutpostConfigT&& value) { m_outpostConfigHasBeenSet = true; m_outpostConfig = std::forward<OutpostConfigT>(value); }
    template<typename OutpostConfigT = OutpostConfigRequest>
    CreateClusterRequest& WithOutpostConfig(OutpostConfigT&& value) { SetOutpostConfig(std::forward<OutpostConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access configuration for the cluster.</p>
     */
    inline const CreateAccessConfigRequest& GetAccessConfig() const { return m_accessConfig; }
    inline bool AccessConfigHasBeenSet() const { return m_accessConfigHasBeenSet; }
    template<typename AccessConfigT = CreateAccessConfigRequest>
    void SetAccessConfig(AccessConfigT&& value) { m_accessConfigHasBeenSet = true; m_accessConfig = std::forward<AccessConfigT>(value); }
    template<typename AccessConfigT = CreateAccessConfigRequest>
    CreateClusterRequest& WithAccessConfig(AccessConfigT&& value) { SetAccessConfig(std::forward<AccessConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you set this value to <code>False</code> when creating a cluster, the
     * default networking add-ons will not be installed.</p> <p>The default networking
     * add-ons include <code>vpc-cni</code>, <code>coredns</code>, and
     * <code>kube-proxy</code>.</p> <p>Use this option when you plan to install
     * third-party alternative add-ons or self-manage the default networking
     * add-ons.</p>
     */
    inline bool GetBootstrapSelfManagedAddons() const { return m_bootstrapSelfManagedAddons; }
    inline bool BootstrapSelfManagedAddonsHasBeenSet() const { return m_bootstrapSelfManagedAddonsHasBeenSet; }
    inline void SetBootstrapSelfManagedAddons(bool value) { m_bootstrapSelfManagedAddonsHasBeenSet = true; m_bootstrapSelfManagedAddons = value; }
    inline CreateClusterRequest& WithBootstrapSelfManagedAddons(bool value) { SetBootstrapSelfManagedAddons(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>New clusters, by default, have extended support enabled. You can disable
     * extended support when creating a cluster by setting this value to
     * <code>STANDARD</code>.</p>
     */
    inline const UpgradePolicyRequest& GetUpgradePolicy() const { return m_upgradePolicy; }
    inline bool UpgradePolicyHasBeenSet() const { return m_upgradePolicyHasBeenSet; }
    template<typename UpgradePolicyT = UpgradePolicyRequest>
    void SetUpgradePolicy(UpgradePolicyT&& value) { m_upgradePolicyHasBeenSet = true; m_upgradePolicy = std::forward<UpgradePolicyT>(value); }
    template<typename UpgradePolicyT = UpgradePolicyRequest>
    CreateClusterRequest& WithUpgradePolicy(UpgradePolicyT&& value) { SetUpgradePolicy(std::forward<UpgradePolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable or disable ARC zonal shift for the cluster. If zonal shift is enabled,
     * Amazon Web Services configures zonal autoshift for the cluster.</p> <p>Zonal
     * shift is a feature of Amazon Application Recovery Controller (ARC). ARC zonal
     * shift is designed to be a temporary measure that allows you to move traffic for
     * a resource away from an impaired AZ until the zonal shift expires or you cancel
     * it. You can extend the zonal shift if necessary.</p> <p>You can start a zonal
     * shift for an Amazon EKS cluster, or you can allow Amazon Web Services to do it
     * for you by enabling <i>zonal autoshift</i>. This shift updates the flow of
     * east-to-west network traffic in your cluster to only consider network endpoints
     * for Pods running on worker nodes in healthy AZs. Additionally, any ALB or NLB
     * handling ingress traffic for applications in your Amazon EKS cluster will
     * automatically route traffic to targets in the healthy AZs. For more information
     * about zonal shift in EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/zone-shift.html">Learn
     * about Amazon Application Recovery Controller (ARC) Zonal Shift in Amazon EKS</a>
     * in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline const ZonalShiftConfigRequest& GetZonalShiftConfig() const { return m_zonalShiftConfig; }
    inline bool ZonalShiftConfigHasBeenSet() const { return m_zonalShiftConfigHasBeenSet; }
    template<typename ZonalShiftConfigT = ZonalShiftConfigRequest>
    void SetZonalShiftConfig(ZonalShiftConfigT&& value) { m_zonalShiftConfigHasBeenSet = true; m_zonalShiftConfig = std::forward<ZonalShiftConfigT>(value); }
    template<typename ZonalShiftConfigT = ZonalShiftConfigRequest>
    CreateClusterRequest& WithZonalShiftConfig(ZonalShiftConfigT&& value) { SetZonalShiftConfig(std::forward<ZonalShiftConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration in the cluster for EKS Hybrid Nodes. You can add, change,
     * or remove this configuration after the cluster is created.</p>
     */
    inline const RemoteNetworkConfigRequest& GetRemoteNetworkConfig() const { return m_remoteNetworkConfig; }
    inline bool RemoteNetworkConfigHasBeenSet() const { return m_remoteNetworkConfigHasBeenSet; }
    template<typename RemoteNetworkConfigT = RemoteNetworkConfigRequest>
    void SetRemoteNetworkConfig(RemoteNetworkConfigT&& value) { m_remoteNetworkConfigHasBeenSet = true; m_remoteNetworkConfig = std::forward<RemoteNetworkConfigT>(value); }
    template<typename RemoteNetworkConfigT = RemoteNetworkConfigRequest>
    CreateClusterRequest& WithRemoteNetworkConfig(RemoteNetworkConfigT&& value) { SetRemoteNetworkConfig(std::forward<RemoteNetworkConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable or disable the compute capability of EKS Auto Mode when creating your
     * EKS Auto Mode cluster. If the compute capability is enabled, EKS Auto Mode will
     * create and delete EC2 Managed Instances in your Amazon Web Services account</p>
     */
    inline const ComputeConfigRequest& GetComputeConfig() const { return m_computeConfig; }
    inline bool ComputeConfigHasBeenSet() const { return m_computeConfigHasBeenSet; }
    template<typename ComputeConfigT = ComputeConfigRequest>
    void SetComputeConfig(ComputeConfigT&& value) { m_computeConfigHasBeenSet = true; m_computeConfig = std::forward<ComputeConfigT>(value); }
    template<typename ComputeConfigT = ComputeConfigRequest>
    CreateClusterRequest& WithComputeConfig(ComputeConfigT&& value) { SetComputeConfig(std::forward<ComputeConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable or disable the block storage capability of EKS Auto Mode when creating
     * your EKS Auto Mode cluster. If the block storage capability is enabled, EKS Auto
     * Mode will create and delete EBS volumes in your Amazon Web Services account.</p>
     */
    inline const StorageConfigRequest& GetStorageConfig() const { return m_storageConfig; }
    inline bool StorageConfigHasBeenSet() const { return m_storageConfigHasBeenSet; }
    template<typename StorageConfigT = StorageConfigRequest>
    void SetStorageConfig(StorageConfigT&& value) { m_storageConfigHasBeenSet = true; m_storageConfig = std::forward<StorageConfigT>(value); }
    template<typename StorageConfigT = StorageConfigRequest>
    CreateClusterRequest& WithStorageConfig(StorageConfigT&& value) { SetStorageConfig(std::forward<StorageConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to enable deletion protection for the cluster. When
     * enabled, the cluster cannot be deleted unless deletion protection is first
     * disabled. This helps prevent accidental cluster deletion. Default value is
     * <code>false</code>.</p>
     */
    inline bool GetDeletionProtection() const { return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline CreateClusterRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    VpcConfigRequest m_resourcesVpcConfig;
    bool m_resourcesVpcConfigHasBeenSet = false;

    KubernetesNetworkConfigRequest m_kubernetesNetworkConfig;
    bool m_kubernetesNetworkConfigHasBeenSet = false;

    Logging m_logging;
    bool m_loggingHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<EncryptionConfig> m_encryptionConfig;
    bool m_encryptionConfigHasBeenSet = false;

    OutpostConfigRequest m_outpostConfig;
    bool m_outpostConfigHasBeenSet = false;

    CreateAccessConfigRequest m_accessConfig;
    bool m_accessConfigHasBeenSet = false;

    bool m_bootstrapSelfManagedAddons{false};
    bool m_bootstrapSelfManagedAddonsHasBeenSet = false;

    UpgradePolicyRequest m_upgradePolicy;
    bool m_upgradePolicyHasBeenSet = false;

    ZonalShiftConfigRequest m_zonalShiftConfig;
    bool m_zonalShiftConfigHasBeenSet = false;

    RemoteNetworkConfigRequest m_remoteNetworkConfig;
    bool m_remoteNetworkConfigHasBeenSet = false;

    ComputeConfigRequest m_computeConfig;
    bool m_computeConfigHasBeenSet = false;

    StorageConfigRequest m_storageConfig;
    bool m_storageConfigHasBeenSet = false;

    bool m_deletionProtection{false};
    bool m_deletionProtectionHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
