/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/eks/model/VpcConfigResponse.h>
#include <aws/eks/model/KubernetesNetworkConfigResponse.h>
#include <aws/eks/model/Logging.h>
#include <aws/eks/model/Identity.h>
#include <aws/eks/model/ClusterStatus.h>
#include <aws/eks/model/Certificate.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/ConnectorConfigResponse.h>
#include <aws/eks/model/ClusterHealth.h>
#include <aws/eks/model/OutpostConfigResponse.h>
#include <aws/eks/model/AccessConfigResponse.h>
#include <aws/eks/model/UpgradePolicyResponse.h>
#include <aws/eks/model/ZonalShiftConfigResponse.h>
#include <aws/eks/model/RemoteNetworkConfigResponse.h>
#include <aws/eks/model/ComputeConfigResponse.h>
#include <aws/eks/model/StorageConfigResponse.h>
#include <aws/eks/model/EncryptionConfig.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>An object representing an Amazon EKS cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/Cluster">AWS API
   * Reference</a></p>
   */
  class Cluster
  {
  public:
    AWS_EKS_API Cluster() = default;
    AWS_EKS_API Cluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Cluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of your cluster.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Cluster& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Cluster& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix epoch timestamp at object creation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Cluster& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes server version for the cluster.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    Cluster& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint for your Kubernetes API server.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    Cluster& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to Amazon Web Services API operations
     * on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    Cluster& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC configuration used by the cluster control plane. Amazon EKS VPC
     * resources have specific requirements to work properly with Kubernetes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/network_reqs.html">Cluster
     * VPC considerations</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/sec-group-reqs.html">Cluster
     * security group considerations</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const VpcConfigResponse& GetResourcesVpcConfig() const { return m_resourcesVpcConfig; }
    inline bool ResourcesVpcConfigHasBeenSet() const { return m_resourcesVpcConfigHasBeenSet; }
    template<typename ResourcesVpcConfigT = VpcConfigResponse>
    void SetResourcesVpcConfig(ResourcesVpcConfigT&& value) { m_resourcesVpcConfigHasBeenSet = true; m_resourcesVpcConfig = std::forward<ResourcesVpcConfigT>(value); }
    template<typename ResourcesVpcConfigT = VpcConfigResponse>
    Cluster& WithResourcesVpcConfig(ResourcesVpcConfigT&& value) { SetResourcesVpcConfig(std::forward<ResourcesVpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes network configuration for the cluster.</p>
     */
    inline const KubernetesNetworkConfigResponse& GetKubernetesNetworkConfig() const { return m_kubernetesNetworkConfig; }
    inline bool KubernetesNetworkConfigHasBeenSet() const { return m_kubernetesNetworkConfigHasBeenSet; }
    template<typename KubernetesNetworkConfigT = KubernetesNetworkConfigResponse>
    void SetKubernetesNetworkConfig(KubernetesNetworkConfigT&& value) { m_kubernetesNetworkConfigHasBeenSet = true; m_kubernetesNetworkConfig = std::forward<KubernetesNetworkConfigT>(value); }
    template<typename KubernetesNetworkConfigT = KubernetesNetworkConfigResponse>
    Cluster& WithKubernetesNetworkConfig(KubernetesNetworkConfigT&& value) { SetKubernetesNetworkConfig(std::forward<KubernetesNetworkConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging configuration for your cluster.</p>
     */
    inline const Logging& GetLogging() const { return m_logging; }
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }
    template<typename LoggingT = Logging>
    void SetLogging(LoggingT&& value) { m_loggingHasBeenSet = true; m_logging = std::forward<LoggingT>(value); }
    template<typename LoggingT = Logging>
    Cluster& WithLogging(LoggingT&& value) { SetLogging(std::forward<LoggingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity provider information for the cluster.</p>
     */
    inline const Identity& GetIdentity() const { return m_identity; }
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }
    template<typename IdentityT = Identity>
    void SetIdentity(IdentityT&& value) { m_identityHasBeenSet = true; m_identity = std::forward<IdentityT>(value); }
    template<typename IdentityT = Identity>
    Cluster& WithIdentity(IdentityT&& value) { SetIdentity(std::forward<IdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the cluster.</p>
     */
    inline ClusterStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ClusterStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Cluster& WithStatus(ClusterStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>certificate-authority-data</code> for your cluster.</p>
     */
    inline const Certificate& GetCertificateAuthority() const { return m_certificateAuthority; }
    inline bool CertificateAuthorityHasBeenSet() const { return m_certificateAuthorityHasBeenSet; }
    template<typename CertificateAuthorityT = Certificate>
    void SetCertificateAuthority(CertificateAuthorityT&& value) { m_certificateAuthorityHasBeenSet = true; m_certificateAuthority = std::forward<CertificateAuthorityT>(value); }
    template<typename CertificateAuthorityT = Certificate>
    Cluster& WithCertificateAuthority(CertificateAuthorityT&& value) { SetCertificateAuthority(std::forward<CertificateAuthorityT>(value)); return *this;}
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
    Cluster& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform version of your Amazon EKS cluster. For more information about
     * clusters deployed on the Amazon Web Services Cloud, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/platform-versions.html">Platform
     * versions</a> in the <i> <i>Amazon EKS User Guide</i> </i>. For more information
     * about local clusters deployed on an Outpost, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-outposts-platform-versions.html">Amazon
     * EKS local cluster platform versions</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p>
     */
    inline const Aws::String& GetPlatformVersion() const { return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    template<typename PlatformVersionT = Aws::String>
    void SetPlatformVersion(PlatformVersionT&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::forward<PlatformVersionT>(value); }
    template<typename PlatformVersionT = Aws::String>
    Cluster& WithPlatformVersion(PlatformVersionT&& value) { SetPlatformVersion(std::forward<PlatformVersionT>(value)); return *this;}
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
    Cluster& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Cluster& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
    Cluster& WithEncryptionConfig(EncryptionConfigT&& value) { SetEncryptionConfig(std::forward<EncryptionConfigT>(value)); return *this;}
    template<typename EncryptionConfigT = EncryptionConfig>
    Cluster& AddEncryptionConfig(EncryptionConfigT&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig.emplace_back(std::forward<EncryptionConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration used to connect to a cluster for registration.</p>
     */
    inline const ConnectorConfigResponse& GetConnectorConfig() const { return m_connectorConfig; }
    inline bool ConnectorConfigHasBeenSet() const { return m_connectorConfigHasBeenSet; }
    template<typename ConnectorConfigT = ConnectorConfigResponse>
    void SetConnectorConfig(ConnectorConfigT&& value) { m_connectorConfigHasBeenSet = true; m_connectorConfig = std::forward<ConnectorConfigT>(value); }
    template<typename ConnectorConfigT = ConnectorConfigResponse>
    Cluster& WithConnectorConfig(ConnectorConfigT&& value) { SetConnectorConfig(std::forward<ConnectorConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of your local Amazon EKS cluster on an Amazon Web Services Outpost.
     * This property isn't available for an Amazon EKS cluster on the Amazon Web
     * Services cloud.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Cluster& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object representing the health of your Amazon EKS cluster.</p>
     */
    inline const ClusterHealth& GetHealth() const { return m_health; }
    inline bool HealthHasBeenSet() const { return m_healthHasBeenSet; }
    template<typename HealthT = ClusterHealth>
    void SetHealth(HealthT&& value) { m_healthHasBeenSet = true; m_health = std::forward<HealthT>(value); }
    template<typename HealthT = ClusterHealth>
    Cluster& WithHealth(HealthT&& value) { SetHealth(std::forward<HealthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object representing the configuration of your local Amazon EKS cluster on
     * an Amazon Web Services Outpost. This object isn't available for clusters on the
     * Amazon Web Services cloud.</p>
     */
    inline const OutpostConfigResponse& GetOutpostConfig() const { return m_outpostConfig; }
    inline bool OutpostConfigHasBeenSet() const { return m_outpostConfigHasBeenSet; }
    template<typename OutpostConfigT = OutpostConfigResponse>
    void SetOutpostConfig(OutpostConfigT&& value) { m_outpostConfigHasBeenSet = true; m_outpostConfig = std::forward<OutpostConfigT>(value); }
    template<typename OutpostConfigT = OutpostConfigResponse>
    Cluster& WithOutpostConfig(OutpostConfigT&& value) { SetOutpostConfig(std::forward<OutpostConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access configuration for the cluster.</p>
     */
    inline const AccessConfigResponse& GetAccessConfig() const { return m_accessConfig; }
    inline bool AccessConfigHasBeenSet() const { return m_accessConfigHasBeenSet; }
    template<typename AccessConfigT = AccessConfigResponse>
    void SetAccessConfig(AccessConfigT&& value) { m_accessConfigHasBeenSet = true; m_accessConfig = std::forward<AccessConfigT>(value); }
    template<typename AccessConfigT = AccessConfigResponse>
    Cluster& WithAccessConfig(AccessConfigT&& value) { SetAccessConfig(std::forward<AccessConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value indicates if extended support is enabled or disabled for the
     * cluster.</p> <p> <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/extended-support-control.html">Learn
     * more about EKS Extended Support in the <i>Amazon EKS User Guide</i>.</a> </p>
     */
    inline const UpgradePolicyResponse& GetUpgradePolicy() const { return m_upgradePolicy; }
    inline bool UpgradePolicyHasBeenSet() const { return m_upgradePolicyHasBeenSet; }
    template<typename UpgradePolicyT = UpgradePolicyResponse>
    void SetUpgradePolicy(UpgradePolicyT&& value) { m_upgradePolicyHasBeenSet = true; m_upgradePolicy = std::forward<UpgradePolicyT>(value); }
    template<typename UpgradePolicyT = UpgradePolicyResponse>
    Cluster& WithUpgradePolicy(UpgradePolicyT&& value) { SetUpgradePolicy(std::forward<UpgradePolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for zonal shift for the cluster.</p>
     */
    inline const ZonalShiftConfigResponse& GetZonalShiftConfig() const { return m_zonalShiftConfig; }
    inline bool ZonalShiftConfigHasBeenSet() const { return m_zonalShiftConfigHasBeenSet; }
    template<typename ZonalShiftConfigT = ZonalShiftConfigResponse>
    void SetZonalShiftConfig(ZonalShiftConfigT&& value) { m_zonalShiftConfigHasBeenSet = true; m_zonalShiftConfig = std::forward<ZonalShiftConfigT>(value); }
    template<typename ZonalShiftConfigT = ZonalShiftConfigResponse>
    Cluster& WithZonalShiftConfig(ZonalShiftConfigT&& value) { SetZonalShiftConfig(std::forward<ZonalShiftConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration in the cluster for EKS Hybrid Nodes. You can add, change,
     * or remove this configuration after the cluster is created.</p>
     */
    inline const RemoteNetworkConfigResponse& GetRemoteNetworkConfig() const { return m_remoteNetworkConfig; }
    inline bool RemoteNetworkConfigHasBeenSet() const { return m_remoteNetworkConfigHasBeenSet; }
    template<typename RemoteNetworkConfigT = RemoteNetworkConfigResponse>
    void SetRemoteNetworkConfig(RemoteNetworkConfigT&& value) { m_remoteNetworkConfigHasBeenSet = true; m_remoteNetworkConfig = std::forward<RemoteNetworkConfigT>(value); }
    template<typename RemoteNetworkConfigT = RemoteNetworkConfigResponse>
    Cluster& WithRemoteNetworkConfig(RemoteNetworkConfigT&& value) { SetRemoteNetworkConfig(std::forward<RemoteNetworkConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the current configuration of the compute capability on your EKS
     * Auto Mode cluster. For example, if the capability is enabled or disabled. If the
     * compute capability is enabled, EKS Auto Mode will create and delete EC2 Managed
     * Instances in your Amazon Web Services account. For more information, see EKS
     * Auto Mode compute capability in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const ComputeConfigResponse& GetComputeConfig() const { return m_computeConfig; }
    inline bool ComputeConfigHasBeenSet() const { return m_computeConfigHasBeenSet; }
    template<typename ComputeConfigT = ComputeConfigResponse>
    void SetComputeConfig(ComputeConfigT&& value) { m_computeConfigHasBeenSet = true; m_computeConfig = std::forward<ComputeConfigT>(value); }
    template<typename ComputeConfigT = ComputeConfigResponse>
    Cluster& WithComputeConfig(ComputeConfigT&& value) { SetComputeConfig(std::forward<ComputeConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the current configuration of the block storage capability on your
     * EKS Auto Mode cluster. For example, if the capability is enabled or disabled. If
     * the block storage capability is enabled, EKS Auto Mode will create and delete
     * EBS volumes in your Amazon Web Services account. For more information, see EKS
     * Auto Mode block storage capability in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const StorageConfigResponse& GetStorageConfig() const { return m_storageConfig; }
    inline bool StorageConfigHasBeenSet() const { return m_storageConfigHasBeenSet; }
    template<typename StorageConfigT = StorageConfigResponse>
    void SetStorageConfig(StorageConfigT&& value) { m_storageConfigHasBeenSet = true; m_storageConfig = std::forward<StorageConfigT>(value); }
    template<typename StorageConfigT = StorageConfigResponse>
    Cluster& WithStorageConfig(StorageConfigT&& value) { SetStorageConfig(std::forward<StorageConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current deletion protection setting for the cluster. When
     * <code>true</code>, deletion protection is enabled and the cluster cannot be
     * deleted until protection is disabled. When <code>false</code>, the cluster can
     * be deleted normally. This setting only applies to clusters in an active
     * state.</p>
     */
    inline bool GetDeletionProtection() const { return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline Cluster& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    VpcConfigResponse m_resourcesVpcConfig;
    bool m_resourcesVpcConfigHasBeenSet = false;

    KubernetesNetworkConfigResponse m_kubernetesNetworkConfig;
    bool m_kubernetesNetworkConfigHasBeenSet = false;

    Logging m_logging;
    bool m_loggingHasBeenSet = false;

    Identity m_identity;
    bool m_identityHasBeenSet = false;

    ClusterStatus m_status{ClusterStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Certificate m_certificateAuthority;
    bool m_certificateAuthorityHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<EncryptionConfig> m_encryptionConfig;
    bool m_encryptionConfigHasBeenSet = false;

    ConnectorConfigResponse m_connectorConfig;
    bool m_connectorConfigHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ClusterHealth m_health;
    bool m_healthHasBeenSet = false;

    OutpostConfigResponse m_outpostConfig;
    bool m_outpostConfigHasBeenSet = false;

    AccessConfigResponse m_accessConfig;
    bool m_accessConfigHasBeenSet = false;

    UpgradePolicyResponse m_upgradePolicy;
    bool m_upgradePolicyHasBeenSet = false;

    ZonalShiftConfigResponse m_zonalShiftConfig;
    bool m_zonalShiftConfigHasBeenSet = false;

    RemoteNetworkConfigResponse m_remoteNetworkConfig;
    bool m_remoteNetworkConfigHasBeenSet = false;

    ComputeConfigResponse m_computeConfig;
    bool m_computeConfigHasBeenSet = false;

    StorageConfigResponse m_storageConfig;
    bool m_storageConfigHasBeenSet = false;

    bool m_deletionProtection{false};
    bool m_deletionProtectionHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
