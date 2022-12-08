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


    /**
     * <p>The unique name to give to your cluster.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The unique name to give to your cluster.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The unique name to give to your cluster.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The unique name to give to your cluster.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The unique name to give to your cluster.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The unique name to give to your cluster.</p>
     */
    inline CreateClusterRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The unique name to give to your cluster.</p>
     */
    inline CreateClusterRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The unique name to give to your cluster.</p>
     */
    inline CreateClusterRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The desired Kubernetes version for your cluster. If you don't specify a value
     * here, the default version available in Amazon EKS is used.</p>  <p>The
     * default version might not be the latest version available.</p> 
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The desired Kubernetes version for your cluster. If you don't specify a value
     * here, the default version available in Amazon EKS is used.</p>  <p>The
     * default version might not be the latest version available.</p> 
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The desired Kubernetes version for your cluster. If you don't specify a value
     * here, the default version available in Amazon EKS is used.</p>  <p>The
     * default version might not be the latest version available.</p> 
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The desired Kubernetes version for your cluster. If you don't specify a value
     * here, the default version available in Amazon EKS is used.</p>  <p>The
     * default version might not be the latest version available.</p> 
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The desired Kubernetes version for your cluster. If you don't specify a value
     * here, the default version available in Amazon EKS is used.</p>  <p>The
     * default version might not be the latest version available.</p> 
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The desired Kubernetes version for your cluster. If you don't specify a value
     * here, the default version available in Amazon EKS is used.</p>  <p>The
     * default version might not be the latest version available.</p> 
     */
    inline CreateClusterRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The desired Kubernetes version for your cluster. If you don't specify a value
     * here, the default version available in Amazon EKS is used.</p>  <p>The
     * default version might not be the latest version available.</p> 
     */
    inline CreateClusterRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The desired Kubernetes version for your cluster. If you don't specify a value
     * here, the default version available in Amazon EKS is used.</p>  <p>The
     * default version might not be the latest version available.</p> 
     */
    inline CreateClusterRequest& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to Amazon Web Services API operations
     * on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/service_IAM_role.html">Amazon
     * EKS Service IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to Amazon Web Services API operations
     * on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/service_IAM_role.html">Amazon
     * EKS Service IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to Amazon Web Services API operations
     * on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/service_IAM_role.html">Amazon
     * EKS Service IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to Amazon Web Services API operations
     * on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/service_IAM_role.html">Amazon
     * EKS Service IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to Amazon Web Services API operations
     * on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/service_IAM_role.html">Amazon
     * EKS Service IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to Amazon Web Services API operations
     * on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/service_IAM_role.html">Amazon
     * EKS Service IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline CreateClusterRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to Amazon Web Services API operations
     * on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/service_IAM_role.html">Amazon
     * EKS Service IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline CreateClusterRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to Amazon Web Services API operations
     * on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/service_IAM_role.html">Amazon
     * EKS Service IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline CreateClusterRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


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
    inline bool ResourcesVpcConfigHasBeenSet() const { return m_resourcesVpcConfigHasBeenSet; }

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
    inline void SetResourcesVpcConfig(const VpcConfigRequest& value) { m_resourcesVpcConfigHasBeenSet = true; m_resourcesVpcConfig = value; }

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
    inline void SetResourcesVpcConfig(VpcConfigRequest&& value) { m_resourcesVpcConfigHasBeenSet = true; m_resourcesVpcConfig = std::move(value); }

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
    inline CreateClusterRequest& WithResourcesVpcConfig(const VpcConfigRequest& value) { SetResourcesVpcConfig(value); return *this;}

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
    inline CreateClusterRequest& WithResourcesVpcConfig(VpcConfigRequest&& value) { SetResourcesVpcConfig(std::move(value)); return *this;}


    /**
     * <p>The Kubernetes network configuration for the cluster.</p>
     */
    inline const KubernetesNetworkConfigRequest& GetKubernetesNetworkConfig() const{ return m_kubernetesNetworkConfig; }

    /**
     * <p>The Kubernetes network configuration for the cluster.</p>
     */
    inline bool KubernetesNetworkConfigHasBeenSet() const { return m_kubernetesNetworkConfigHasBeenSet; }

    /**
     * <p>The Kubernetes network configuration for the cluster.</p>
     */
    inline void SetKubernetesNetworkConfig(const KubernetesNetworkConfigRequest& value) { m_kubernetesNetworkConfigHasBeenSet = true; m_kubernetesNetworkConfig = value; }

    /**
     * <p>The Kubernetes network configuration for the cluster.</p>
     */
    inline void SetKubernetesNetworkConfig(KubernetesNetworkConfigRequest&& value) { m_kubernetesNetworkConfigHasBeenSet = true; m_kubernetesNetworkConfig = std::move(value); }

    /**
     * <p>The Kubernetes network configuration for the cluster.</p>
     */
    inline CreateClusterRequest& WithKubernetesNetworkConfig(const KubernetesNetworkConfigRequest& value) { SetKubernetesNetworkConfig(value); return *this;}

    /**
     * <p>The Kubernetes network configuration for the cluster.</p>
     */
    inline CreateClusterRequest& WithKubernetesNetworkConfig(KubernetesNetworkConfigRequest&& value) { SetKubernetesNetworkConfig(std::move(value)); return *this;}


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
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }

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
    inline void SetLogging(const Logging& value) { m_loggingHasBeenSet = true; m_logging = value; }

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
    inline void SetLogging(Logging&& value) { m_loggingHasBeenSet = true; m_logging = std::move(value); }

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
    inline CreateClusterRequest& WithLogging(const Logging& value) { SetLogging(value); return *this;}

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
    inline CreateClusterRequest& WithLogging(Logging&& value) { SetLogging(std::move(value)); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateClusterRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateClusterRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateClusterRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The metadata to apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata to apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata to apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata to apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata to apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline CreateClusterRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata to apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline CreateClusterRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata to apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline CreateClusterRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The metadata to apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline CreateClusterRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata to apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline CreateClusterRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata to apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline CreateClusterRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The metadata to apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline CreateClusterRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata to apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline CreateClusterRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata to apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline CreateClusterRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The encryption configuration for the cluster.</p>
     */
    inline const Aws::Vector<EncryptionConfig>& GetEncryptionConfig() const{ return m_encryptionConfig; }

    /**
     * <p>The encryption configuration for the cluster.</p>
     */
    inline bool EncryptionConfigHasBeenSet() const { return m_encryptionConfigHasBeenSet; }

    /**
     * <p>The encryption configuration for the cluster.</p>
     */
    inline void SetEncryptionConfig(const Aws::Vector<EncryptionConfig>& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = value; }

    /**
     * <p>The encryption configuration for the cluster.</p>
     */
    inline void SetEncryptionConfig(Aws::Vector<EncryptionConfig>&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = std::move(value); }

    /**
     * <p>The encryption configuration for the cluster.</p>
     */
    inline CreateClusterRequest& WithEncryptionConfig(const Aws::Vector<EncryptionConfig>& value) { SetEncryptionConfig(value); return *this;}

    /**
     * <p>The encryption configuration for the cluster.</p>
     */
    inline CreateClusterRequest& WithEncryptionConfig(Aws::Vector<EncryptionConfig>&& value) { SetEncryptionConfig(std::move(value)); return *this;}

    /**
     * <p>The encryption configuration for the cluster.</p>
     */
    inline CreateClusterRequest& AddEncryptionConfig(const EncryptionConfig& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig.push_back(value); return *this; }

    /**
     * <p>The encryption configuration for the cluster.</p>
     */
    inline CreateClusterRequest& AddEncryptionConfig(EncryptionConfig&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig.push_back(std::move(value)); return *this; }


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

    /**
     * <p>An object representing the configuration of your local Amazon EKS cluster on
     * an Amazon Web Services Outpost. Before creating a local cluster on an Outpost,
     * review <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-outposts-local-cluster-overview.html">Local
     * clusters for Amazon EKS on Amazon Web Services Outposts</a> in the <i>Amazon EKS
     * User Guide</i>. This object isn't available for creating Amazon EKS clusters on
     * the Amazon Web Services cloud.</p>
     */
    inline bool OutpostConfigHasBeenSet() const { return m_outpostConfigHasBeenSet; }

    /**
     * <p>An object representing the configuration of your local Amazon EKS cluster on
     * an Amazon Web Services Outpost. Before creating a local cluster on an Outpost,
     * review <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-outposts-local-cluster-overview.html">Local
     * clusters for Amazon EKS on Amazon Web Services Outposts</a> in the <i>Amazon EKS
     * User Guide</i>. This object isn't available for creating Amazon EKS clusters on
     * the Amazon Web Services cloud.</p>
     */
    inline void SetOutpostConfig(const OutpostConfigRequest& value) { m_outpostConfigHasBeenSet = true; m_outpostConfig = value; }

    /**
     * <p>An object representing the configuration of your local Amazon EKS cluster on
     * an Amazon Web Services Outpost. Before creating a local cluster on an Outpost,
     * review <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-outposts-local-cluster-overview.html">Local
     * clusters for Amazon EKS on Amazon Web Services Outposts</a> in the <i>Amazon EKS
     * User Guide</i>. This object isn't available for creating Amazon EKS clusters on
     * the Amazon Web Services cloud.</p>
     */
    inline void SetOutpostConfig(OutpostConfigRequest&& value) { m_outpostConfigHasBeenSet = true; m_outpostConfig = std::move(value); }

    /**
     * <p>An object representing the configuration of your local Amazon EKS cluster on
     * an Amazon Web Services Outpost. Before creating a local cluster on an Outpost,
     * review <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-outposts-local-cluster-overview.html">Local
     * clusters for Amazon EKS on Amazon Web Services Outposts</a> in the <i>Amazon EKS
     * User Guide</i>. This object isn't available for creating Amazon EKS clusters on
     * the Amazon Web Services cloud.</p>
     */
    inline CreateClusterRequest& WithOutpostConfig(const OutpostConfigRequest& value) { SetOutpostConfig(value); return *this;}

    /**
     * <p>An object representing the configuration of your local Amazon EKS cluster on
     * an Amazon Web Services Outpost. Before creating a local cluster on an Outpost,
     * review <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-outposts-local-cluster-overview.html">Local
     * clusters for Amazon EKS on Amazon Web Services Outposts</a> in the <i>Amazon EKS
     * User Guide</i>. This object isn't available for creating Amazon EKS clusters on
     * the Amazon Web Services cloud.</p>
     */
    inline CreateClusterRequest& WithOutpostConfig(OutpostConfigRequest&& value) { SetOutpostConfig(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
