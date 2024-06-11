﻿/**
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
    AWS_EKS_API CreateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCluster"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique name to give to your cluster.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateClusterRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateClusterRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateClusterRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired Kubernetes version for your cluster. If you don't specify a value
     * here, the default version available in Amazon EKS is used.</p>  <p>The
     * default version might not be the latest version available.</p> 
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline CreateClusterRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline CreateClusterRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline CreateClusterRequest& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to Amazon Web Services API operations
     * on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/service_IAM_role.html">Amazon
     * EKS Service IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateClusterRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateClusterRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateClusterRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
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
    inline const VpcConfigRequest& GetResourcesVpcConfig() const{ return m_resourcesVpcConfig; }
    inline bool ResourcesVpcConfigHasBeenSet() const { return m_resourcesVpcConfigHasBeenSet; }
    inline void SetResourcesVpcConfig(const VpcConfigRequest& value) { m_resourcesVpcConfigHasBeenSet = true; m_resourcesVpcConfig = value; }
    inline void SetResourcesVpcConfig(VpcConfigRequest&& value) { m_resourcesVpcConfigHasBeenSet = true; m_resourcesVpcConfig = std::move(value); }
    inline CreateClusterRequest& WithResourcesVpcConfig(const VpcConfigRequest& value) { SetResourcesVpcConfig(value); return *this;}
    inline CreateClusterRequest& WithResourcesVpcConfig(VpcConfigRequest&& value) { SetResourcesVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes network configuration for the cluster.</p>
     */
    inline const KubernetesNetworkConfigRequest& GetKubernetesNetworkConfig() const{ return m_kubernetesNetworkConfig; }
    inline bool KubernetesNetworkConfigHasBeenSet() const { return m_kubernetesNetworkConfigHasBeenSet; }
    inline void SetKubernetesNetworkConfig(const KubernetesNetworkConfigRequest& value) { m_kubernetesNetworkConfigHasBeenSet = true; m_kubernetesNetworkConfig = value; }
    inline void SetKubernetesNetworkConfig(KubernetesNetworkConfigRequest&& value) { m_kubernetesNetworkConfigHasBeenSet = true; m_kubernetesNetworkConfig = std::move(value); }
    inline CreateClusterRequest& WithKubernetesNetworkConfig(const KubernetesNetworkConfigRequest& value) { SetKubernetesNetworkConfig(value); return *this;}
    inline CreateClusterRequest& WithKubernetesNetworkConfig(KubernetesNetworkConfigRequest&& value) { SetKubernetesNetworkConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable or disable exporting the Kubernetes control plane logs for your
     * cluster to CloudWatch Logs. By default, cluster control plane logs aren't
     * exported to CloudWatch Logs. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon
     * EKS Cluster control plane logs</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p>  <p>CloudWatch Logs ingestion, archive storage, and data
     * scanning rates apply to exported control plane logs. For more information, see
     * <a href="http://aws.amazon.com/cloudwatch/pricing/">CloudWatch Pricing</a>.</p>
     * 
     */
    inline const Logging& GetLogging() const{ return m_logging; }
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }
    inline void SetLogging(const Logging& value) { m_loggingHasBeenSet = true; m_logging = value; }
    inline void SetLogging(Logging&& value) { m_loggingHasBeenSet = true; m_logging = std::move(value); }
    inline CreateClusterRequest& WithLogging(const Logging& value) { SetLogging(value); return *this;}
    inline CreateClusterRequest& WithLogging(Logging&& value) { SetLogging(std::move(value)); return *this;}
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
    inline CreateClusterRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateClusterRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateClusterRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
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
    inline CreateClusterRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateClusterRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateClusterRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateClusterRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateClusterRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateClusterRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateClusterRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateClusterRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateClusterRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The encryption configuration for the cluster.</p>
     */
    inline const Aws::Vector<EncryptionConfig>& GetEncryptionConfig() const{ return m_encryptionConfig; }
    inline bool EncryptionConfigHasBeenSet() const { return m_encryptionConfigHasBeenSet; }
    inline void SetEncryptionConfig(const Aws::Vector<EncryptionConfig>& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = value; }
    inline void SetEncryptionConfig(Aws::Vector<EncryptionConfig>&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = std::move(value); }
    inline CreateClusterRequest& WithEncryptionConfig(const Aws::Vector<EncryptionConfig>& value) { SetEncryptionConfig(value); return *this;}
    inline CreateClusterRequest& WithEncryptionConfig(Aws::Vector<EncryptionConfig>&& value) { SetEncryptionConfig(std::move(value)); return *this;}
    inline CreateClusterRequest& AddEncryptionConfig(const EncryptionConfig& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig.push_back(value); return *this; }
    inline CreateClusterRequest& AddEncryptionConfig(EncryptionConfig&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig.push_back(std::move(value)); return *this; }
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
    inline const OutpostConfigRequest& GetOutpostConfig() const{ return m_outpostConfig; }
    inline bool OutpostConfigHasBeenSet() const { return m_outpostConfigHasBeenSet; }
    inline void SetOutpostConfig(const OutpostConfigRequest& value) { m_outpostConfigHasBeenSet = true; m_outpostConfig = value; }
    inline void SetOutpostConfig(OutpostConfigRequest&& value) { m_outpostConfigHasBeenSet = true; m_outpostConfig = std::move(value); }
    inline CreateClusterRequest& WithOutpostConfig(const OutpostConfigRequest& value) { SetOutpostConfig(value); return *this;}
    inline CreateClusterRequest& WithOutpostConfig(OutpostConfigRequest&& value) { SetOutpostConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access configuration for the cluster.</p>
     */
    inline const CreateAccessConfigRequest& GetAccessConfig() const{ return m_accessConfig; }
    inline bool AccessConfigHasBeenSet() const { return m_accessConfigHasBeenSet; }
    inline void SetAccessConfig(const CreateAccessConfigRequest& value) { m_accessConfigHasBeenSet = true; m_accessConfig = value; }
    inline void SetAccessConfig(CreateAccessConfigRequest&& value) { m_accessConfigHasBeenSet = true; m_accessConfig = std::move(value); }
    inline CreateClusterRequest& WithAccessConfig(const CreateAccessConfigRequest& value) { SetAccessConfig(value); return *this;}
    inline CreateClusterRequest& WithAccessConfig(CreateAccessConfigRequest&& value) { SetAccessConfig(std::move(value)); return *this;}
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

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<EncryptionConfig> m_encryptionConfig;
    bool m_encryptionConfigHasBeenSet = false;

    OutpostConfigRequest m_outpostConfig;
    bool m_outpostConfigHasBeenSet = false;

    CreateAccessConfigRequest m_accessConfig;
    bool m_accessConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
