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
    AWS_EKS_API Cluster();
    AWS_EKS_API Cluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Cluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of your cluster.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Cluster& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Cluster& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Cluster& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Cluster& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Cluster& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Cluster& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix epoch timestamp at object creation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Cluster& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Cluster& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes server version for the cluster.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline Cluster& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline Cluster& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline Cluster& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint for your Kubernetes API server.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }
    inline Cluster& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline Cluster& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline Cluster& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to Amazon Web Services API operations
     * on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline Cluster& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline Cluster& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline Cluster& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
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
    inline const VpcConfigResponse& GetResourcesVpcConfig() const{ return m_resourcesVpcConfig; }
    inline bool ResourcesVpcConfigHasBeenSet() const { return m_resourcesVpcConfigHasBeenSet; }
    inline void SetResourcesVpcConfig(const VpcConfigResponse& value) { m_resourcesVpcConfigHasBeenSet = true; m_resourcesVpcConfig = value; }
    inline void SetResourcesVpcConfig(VpcConfigResponse&& value) { m_resourcesVpcConfigHasBeenSet = true; m_resourcesVpcConfig = std::move(value); }
    inline Cluster& WithResourcesVpcConfig(const VpcConfigResponse& value) { SetResourcesVpcConfig(value); return *this;}
    inline Cluster& WithResourcesVpcConfig(VpcConfigResponse&& value) { SetResourcesVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes network configuration for the cluster.</p>
     */
    inline const KubernetesNetworkConfigResponse& GetKubernetesNetworkConfig() const{ return m_kubernetesNetworkConfig; }
    inline bool KubernetesNetworkConfigHasBeenSet() const { return m_kubernetesNetworkConfigHasBeenSet; }
    inline void SetKubernetesNetworkConfig(const KubernetesNetworkConfigResponse& value) { m_kubernetesNetworkConfigHasBeenSet = true; m_kubernetesNetworkConfig = value; }
    inline void SetKubernetesNetworkConfig(KubernetesNetworkConfigResponse&& value) { m_kubernetesNetworkConfigHasBeenSet = true; m_kubernetesNetworkConfig = std::move(value); }
    inline Cluster& WithKubernetesNetworkConfig(const KubernetesNetworkConfigResponse& value) { SetKubernetesNetworkConfig(value); return *this;}
    inline Cluster& WithKubernetesNetworkConfig(KubernetesNetworkConfigResponse&& value) { SetKubernetesNetworkConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging configuration for your cluster.</p>
     */
    inline const Logging& GetLogging() const{ return m_logging; }
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }
    inline void SetLogging(const Logging& value) { m_loggingHasBeenSet = true; m_logging = value; }
    inline void SetLogging(Logging&& value) { m_loggingHasBeenSet = true; m_logging = std::move(value); }
    inline Cluster& WithLogging(const Logging& value) { SetLogging(value); return *this;}
    inline Cluster& WithLogging(Logging&& value) { SetLogging(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity provider information for the cluster.</p>
     */
    inline const Identity& GetIdentity() const{ return m_identity; }
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }
    inline void SetIdentity(const Identity& value) { m_identityHasBeenSet = true; m_identity = value; }
    inline void SetIdentity(Identity&& value) { m_identityHasBeenSet = true; m_identity = std::move(value); }
    inline Cluster& WithIdentity(const Identity& value) { SetIdentity(value); return *this;}
    inline Cluster& WithIdentity(Identity&& value) { SetIdentity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the cluster.</p>
     */
    inline const ClusterStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ClusterStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ClusterStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Cluster& WithStatus(const ClusterStatus& value) { SetStatus(value); return *this;}
    inline Cluster& WithStatus(ClusterStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>certificate-authority-data</code> for your cluster.</p>
     */
    inline const Certificate& GetCertificateAuthority() const{ return m_certificateAuthority; }
    inline bool CertificateAuthorityHasBeenSet() const { return m_certificateAuthorityHasBeenSet; }
    inline void SetCertificateAuthority(const Certificate& value) { m_certificateAuthorityHasBeenSet = true; m_certificateAuthority = value; }
    inline void SetCertificateAuthority(Certificate&& value) { m_certificateAuthorityHasBeenSet = true; m_certificateAuthority = std::move(value); }
    inline Cluster& WithCertificateAuthority(const Certificate& value) { SetCertificateAuthority(value); return *this;}
    inline Cluster& WithCertificateAuthority(Certificate&& value) { SetCertificateAuthority(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline Cluster& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline Cluster& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline Cluster& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
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
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }
    inline Cluster& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}
    inline Cluster& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}
    inline Cluster& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Cluster& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Cluster& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Cluster& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Cluster& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Cluster& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Cluster& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Cluster& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Cluster& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Cluster& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The encryption configuration for the cluster.</p>
     */
    inline const Aws::Vector<EncryptionConfig>& GetEncryptionConfig() const{ return m_encryptionConfig; }
    inline bool EncryptionConfigHasBeenSet() const { return m_encryptionConfigHasBeenSet; }
    inline void SetEncryptionConfig(const Aws::Vector<EncryptionConfig>& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = value; }
    inline void SetEncryptionConfig(Aws::Vector<EncryptionConfig>&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = std::move(value); }
    inline Cluster& WithEncryptionConfig(const Aws::Vector<EncryptionConfig>& value) { SetEncryptionConfig(value); return *this;}
    inline Cluster& WithEncryptionConfig(Aws::Vector<EncryptionConfig>&& value) { SetEncryptionConfig(std::move(value)); return *this;}
    inline Cluster& AddEncryptionConfig(const EncryptionConfig& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig.push_back(value); return *this; }
    inline Cluster& AddEncryptionConfig(EncryptionConfig&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration used to connect to a cluster for registration.</p>
     */
    inline const ConnectorConfigResponse& GetConnectorConfig() const{ return m_connectorConfig; }
    inline bool ConnectorConfigHasBeenSet() const { return m_connectorConfigHasBeenSet; }
    inline void SetConnectorConfig(const ConnectorConfigResponse& value) { m_connectorConfigHasBeenSet = true; m_connectorConfig = value; }
    inline void SetConnectorConfig(ConnectorConfigResponse&& value) { m_connectorConfigHasBeenSet = true; m_connectorConfig = std::move(value); }
    inline Cluster& WithConnectorConfig(const ConnectorConfigResponse& value) { SetConnectorConfig(value); return *this;}
    inline Cluster& WithConnectorConfig(ConnectorConfigResponse&& value) { SetConnectorConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of your local Amazon EKS cluster on an Amazon Web Services Outpost.
     * This property isn't available for an Amazon EKS cluster on the Amazon Web
     * Services cloud.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Cluster& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Cluster& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Cluster& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object representing the health of your Amazon EKS cluster.</p>
     */
    inline const ClusterHealth& GetHealth() const{ return m_health; }
    inline bool HealthHasBeenSet() const { return m_healthHasBeenSet; }
    inline void SetHealth(const ClusterHealth& value) { m_healthHasBeenSet = true; m_health = value; }
    inline void SetHealth(ClusterHealth&& value) { m_healthHasBeenSet = true; m_health = std::move(value); }
    inline Cluster& WithHealth(const ClusterHealth& value) { SetHealth(value); return *this;}
    inline Cluster& WithHealth(ClusterHealth&& value) { SetHealth(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object representing the configuration of your local Amazon EKS cluster on
     * an Amazon Web Services Outpost. This object isn't available for clusters on the
     * Amazon Web Services cloud.</p>
     */
    inline const OutpostConfigResponse& GetOutpostConfig() const{ return m_outpostConfig; }
    inline bool OutpostConfigHasBeenSet() const { return m_outpostConfigHasBeenSet; }
    inline void SetOutpostConfig(const OutpostConfigResponse& value) { m_outpostConfigHasBeenSet = true; m_outpostConfig = value; }
    inline void SetOutpostConfig(OutpostConfigResponse&& value) { m_outpostConfigHasBeenSet = true; m_outpostConfig = std::move(value); }
    inline Cluster& WithOutpostConfig(const OutpostConfigResponse& value) { SetOutpostConfig(value); return *this;}
    inline Cluster& WithOutpostConfig(OutpostConfigResponse&& value) { SetOutpostConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access configuration for the cluster.</p>
     */
    inline const AccessConfigResponse& GetAccessConfig() const{ return m_accessConfig; }
    inline bool AccessConfigHasBeenSet() const { return m_accessConfigHasBeenSet; }
    inline void SetAccessConfig(const AccessConfigResponse& value) { m_accessConfigHasBeenSet = true; m_accessConfig = value; }
    inline void SetAccessConfig(AccessConfigResponse&& value) { m_accessConfigHasBeenSet = true; m_accessConfig = std::move(value); }
    inline Cluster& WithAccessConfig(const AccessConfigResponse& value) { SetAccessConfig(value); return *this;}
    inline Cluster& WithAccessConfig(AccessConfigResponse&& value) { SetAccessConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value indicates if extended support is enabled or disabled for the
     * cluster.</p> <p> <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/extended-support-control.html">Learn
     * more about EKS Extended Support in the EKS User Guide.</a> </p>
     */
    inline const UpgradePolicyResponse& GetUpgradePolicy() const{ return m_upgradePolicy; }
    inline bool UpgradePolicyHasBeenSet() const { return m_upgradePolicyHasBeenSet; }
    inline void SetUpgradePolicy(const UpgradePolicyResponse& value) { m_upgradePolicyHasBeenSet = true; m_upgradePolicy = value; }
    inline void SetUpgradePolicy(UpgradePolicyResponse&& value) { m_upgradePolicyHasBeenSet = true; m_upgradePolicy = std::move(value); }
    inline Cluster& WithUpgradePolicy(const UpgradePolicyResponse& value) { SetUpgradePolicy(value); return *this;}
    inline Cluster& WithUpgradePolicy(UpgradePolicyResponse&& value) { SetUpgradePolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for zonal shift for the cluster.</p>
     */
    inline const ZonalShiftConfigResponse& GetZonalShiftConfig() const{ return m_zonalShiftConfig; }
    inline bool ZonalShiftConfigHasBeenSet() const { return m_zonalShiftConfigHasBeenSet; }
    inline void SetZonalShiftConfig(const ZonalShiftConfigResponse& value) { m_zonalShiftConfigHasBeenSet = true; m_zonalShiftConfig = value; }
    inline void SetZonalShiftConfig(ZonalShiftConfigResponse&& value) { m_zonalShiftConfigHasBeenSet = true; m_zonalShiftConfig = std::move(value); }
    inline Cluster& WithZonalShiftConfig(const ZonalShiftConfigResponse& value) { SetZonalShiftConfig(value); return *this;}
    inline Cluster& WithZonalShiftConfig(ZonalShiftConfigResponse&& value) { SetZonalShiftConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration in the cluster for EKS Hybrid Nodes. You can't change or
     * update this configuration after the cluster is created.</p>
     */
    inline const RemoteNetworkConfigResponse& GetRemoteNetworkConfig() const{ return m_remoteNetworkConfig; }
    inline bool RemoteNetworkConfigHasBeenSet() const { return m_remoteNetworkConfigHasBeenSet; }
    inline void SetRemoteNetworkConfig(const RemoteNetworkConfigResponse& value) { m_remoteNetworkConfigHasBeenSet = true; m_remoteNetworkConfig = value; }
    inline void SetRemoteNetworkConfig(RemoteNetworkConfigResponse&& value) { m_remoteNetworkConfigHasBeenSet = true; m_remoteNetworkConfig = std::move(value); }
    inline Cluster& WithRemoteNetworkConfig(const RemoteNetworkConfigResponse& value) { SetRemoteNetworkConfig(value); return *this;}
    inline Cluster& WithRemoteNetworkConfig(RemoteNetworkConfigResponse&& value) { SetRemoteNetworkConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the current configuration of the compute capability on your EKS
     * Auto Mode cluster. For example, if the capability is enabled or disabled. If the
     * compute capability is enabled, EKS Auto Mode will create and delete EC2 Managed
     * Instances in your Amazon Web Services account. For more information, see EKS
     * Auto Mode compute capability in the EKS User Guide.</p>
     */
    inline const ComputeConfigResponse& GetComputeConfig() const{ return m_computeConfig; }
    inline bool ComputeConfigHasBeenSet() const { return m_computeConfigHasBeenSet; }
    inline void SetComputeConfig(const ComputeConfigResponse& value) { m_computeConfigHasBeenSet = true; m_computeConfig = value; }
    inline void SetComputeConfig(ComputeConfigResponse&& value) { m_computeConfigHasBeenSet = true; m_computeConfig = std::move(value); }
    inline Cluster& WithComputeConfig(const ComputeConfigResponse& value) { SetComputeConfig(value); return *this;}
    inline Cluster& WithComputeConfig(ComputeConfigResponse&& value) { SetComputeConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the current configuration of the block storage capability on your
     * EKS Auto Mode cluster. For example, if the capability is enabled or disabled. If
     * the block storage capability is enabled, EKS Auto Mode will create and delete
     * EBS volumes in your Amazon Web Services account. For more information, see EKS
     * Auto Mode block storage capability in the EKS User Guide.</p>
     */
    inline const StorageConfigResponse& GetStorageConfig() const{ return m_storageConfig; }
    inline bool StorageConfigHasBeenSet() const { return m_storageConfigHasBeenSet; }
    inline void SetStorageConfig(const StorageConfigResponse& value) { m_storageConfigHasBeenSet = true; m_storageConfig = value; }
    inline void SetStorageConfig(StorageConfigResponse&& value) { m_storageConfigHasBeenSet = true; m_storageConfig = std::move(value); }
    inline Cluster& WithStorageConfig(const StorageConfigResponse& value) { SetStorageConfig(value); return *this;}
    inline Cluster& WithStorageConfig(StorageConfigResponse&& value) { SetStorageConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
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

    ClusterStatus m_status;
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
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
