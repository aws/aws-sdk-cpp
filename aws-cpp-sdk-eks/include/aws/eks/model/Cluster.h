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


    /**
     * <p>The name of the cluster.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the cluster.</p>
     */
    inline Cluster& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the cluster.</p>
     */
    inline Cluster& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster.</p>
     */
    inline Cluster& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline Cluster& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline Cluster& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline Cluster& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Unix epoch timestamp in seconds for when the cluster was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the cluster was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the cluster was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the cluster was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The Unix epoch timestamp in seconds for when the cluster was created.</p>
     */
    inline Cluster& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix epoch timestamp in seconds for when the cluster was created.</p>
     */
    inline Cluster& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Kubernetes server version for the cluster.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The Kubernetes server version for the cluster.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The Kubernetes server version for the cluster.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The Kubernetes server version for the cluster.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The Kubernetes server version for the cluster.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The Kubernetes server version for the cluster.</p>
     */
    inline Cluster& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The Kubernetes server version for the cluster.</p>
     */
    inline Cluster& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The Kubernetes server version for the cluster.</p>
     */
    inline Cluster& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The endpoint for your Kubernetes API server.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint for your Kubernetes API server.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The endpoint for your Kubernetes API server.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint for your Kubernetes API server.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The endpoint for your Kubernetes API server.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The endpoint for your Kubernetes API server.</p>
     */
    inline Cluster& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint for your Kubernetes API server.</p>
     */
    inline Cluster& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint for your Kubernetes API server.</p>
     */
    inline Cluster& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to Amazon Web Services API operations
     * on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to Amazon Web Services API operations
     * on your behalf.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to Amazon Web Services API operations
     * on your behalf.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to Amazon Web Services API operations
     * on your behalf.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to Amazon Web Services API operations
     * on your behalf.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to Amazon Web Services API operations
     * on your behalf.</p>
     */
    inline Cluster& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to Amazon Web Services API operations
     * on your behalf.</p>
     */
    inline Cluster& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to Amazon Web Services API operations
     * on your behalf.</p>
     */
    inline Cluster& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The VPC configuration used by the cluster control plane. Amazon EKS VPC
     * resources have specific requirements to work properly with Kubernetes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/network_reqs.html">Cluster
     * VPC Considerations</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/sec-group-reqs.html">Cluster
     * Security Group Considerations</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const VpcConfigResponse& GetResourcesVpcConfig() const{ return m_resourcesVpcConfig; }

    /**
     * <p>The VPC configuration used by the cluster control plane. Amazon EKS VPC
     * resources have specific requirements to work properly with Kubernetes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/network_reqs.html">Cluster
     * VPC Considerations</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/sec-group-reqs.html">Cluster
     * Security Group Considerations</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline bool ResourcesVpcConfigHasBeenSet() const { return m_resourcesVpcConfigHasBeenSet; }

    /**
     * <p>The VPC configuration used by the cluster control plane. Amazon EKS VPC
     * resources have specific requirements to work properly with Kubernetes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/network_reqs.html">Cluster
     * VPC Considerations</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/sec-group-reqs.html">Cluster
     * Security Group Considerations</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetResourcesVpcConfig(const VpcConfigResponse& value) { m_resourcesVpcConfigHasBeenSet = true; m_resourcesVpcConfig = value; }

    /**
     * <p>The VPC configuration used by the cluster control plane. Amazon EKS VPC
     * resources have specific requirements to work properly with Kubernetes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/network_reqs.html">Cluster
     * VPC Considerations</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/sec-group-reqs.html">Cluster
     * Security Group Considerations</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetResourcesVpcConfig(VpcConfigResponse&& value) { m_resourcesVpcConfigHasBeenSet = true; m_resourcesVpcConfig = std::move(value); }

    /**
     * <p>The VPC configuration used by the cluster control plane. Amazon EKS VPC
     * resources have specific requirements to work properly with Kubernetes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/network_reqs.html">Cluster
     * VPC Considerations</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/sec-group-reqs.html">Cluster
     * Security Group Considerations</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline Cluster& WithResourcesVpcConfig(const VpcConfigResponse& value) { SetResourcesVpcConfig(value); return *this;}

    /**
     * <p>The VPC configuration used by the cluster control plane. Amazon EKS VPC
     * resources have specific requirements to work properly with Kubernetes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/network_reqs.html">Cluster
     * VPC Considerations</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/sec-group-reqs.html">Cluster
     * Security Group Considerations</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline Cluster& WithResourcesVpcConfig(VpcConfigResponse&& value) { SetResourcesVpcConfig(std::move(value)); return *this;}


    /**
     * <p>The Kubernetes network configuration for the cluster.</p>
     */
    inline const KubernetesNetworkConfigResponse& GetKubernetesNetworkConfig() const{ return m_kubernetesNetworkConfig; }

    /**
     * <p>The Kubernetes network configuration for the cluster.</p>
     */
    inline bool KubernetesNetworkConfigHasBeenSet() const { return m_kubernetesNetworkConfigHasBeenSet; }

    /**
     * <p>The Kubernetes network configuration for the cluster.</p>
     */
    inline void SetKubernetesNetworkConfig(const KubernetesNetworkConfigResponse& value) { m_kubernetesNetworkConfigHasBeenSet = true; m_kubernetesNetworkConfig = value; }

    /**
     * <p>The Kubernetes network configuration for the cluster.</p>
     */
    inline void SetKubernetesNetworkConfig(KubernetesNetworkConfigResponse&& value) { m_kubernetesNetworkConfigHasBeenSet = true; m_kubernetesNetworkConfig = std::move(value); }

    /**
     * <p>The Kubernetes network configuration for the cluster.</p>
     */
    inline Cluster& WithKubernetesNetworkConfig(const KubernetesNetworkConfigResponse& value) { SetKubernetesNetworkConfig(value); return *this;}

    /**
     * <p>The Kubernetes network configuration for the cluster.</p>
     */
    inline Cluster& WithKubernetesNetworkConfig(KubernetesNetworkConfigResponse&& value) { SetKubernetesNetworkConfig(std::move(value)); return *this;}


    /**
     * <p>The logging configuration for your cluster.</p>
     */
    inline const Logging& GetLogging() const{ return m_logging; }

    /**
     * <p>The logging configuration for your cluster.</p>
     */
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }

    /**
     * <p>The logging configuration for your cluster.</p>
     */
    inline void SetLogging(const Logging& value) { m_loggingHasBeenSet = true; m_logging = value; }

    /**
     * <p>The logging configuration for your cluster.</p>
     */
    inline void SetLogging(Logging&& value) { m_loggingHasBeenSet = true; m_logging = std::move(value); }

    /**
     * <p>The logging configuration for your cluster.</p>
     */
    inline Cluster& WithLogging(const Logging& value) { SetLogging(value); return *this;}

    /**
     * <p>The logging configuration for your cluster.</p>
     */
    inline Cluster& WithLogging(Logging&& value) { SetLogging(std::move(value)); return *this;}


    /**
     * <p>The identity provider information for the cluster.</p>
     */
    inline const Identity& GetIdentity() const{ return m_identity; }

    /**
     * <p>The identity provider information for the cluster.</p>
     */
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }

    /**
     * <p>The identity provider information for the cluster.</p>
     */
    inline void SetIdentity(const Identity& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>The identity provider information for the cluster.</p>
     */
    inline void SetIdentity(Identity&& value) { m_identityHasBeenSet = true; m_identity = std::move(value); }

    /**
     * <p>The identity provider information for the cluster.</p>
     */
    inline Cluster& WithIdentity(const Identity& value) { SetIdentity(value); return *this;}

    /**
     * <p>The identity provider information for the cluster.</p>
     */
    inline Cluster& WithIdentity(Identity&& value) { SetIdentity(std::move(value)); return *this;}


    /**
     * <p>The current status of the cluster.</p>
     */
    inline const ClusterStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the cluster.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the cluster.</p>
     */
    inline void SetStatus(const ClusterStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the cluster.</p>
     */
    inline void SetStatus(ClusterStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the cluster.</p>
     */
    inline Cluster& WithStatus(const ClusterStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the cluster.</p>
     */
    inline Cluster& WithStatus(ClusterStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The <code>certificate-authority-data</code> for your cluster.</p>
     */
    inline const Certificate& GetCertificateAuthority() const{ return m_certificateAuthority; }

    /**
     * <p>The <code>certificate-authority-data</code> for your cluster.</p>
     */
    inline bool CertificateAuthorityHasBeenSet() const { return m_certificateAuthorityHasBeenSet; }

    /**
     * <p>The <code>certificate-authority-data</code> for your cluster.</p>
     */
    inline void SetCertificateAuthority(const Certificate& value) { m_certificateAuthorityHasBeenSet = true; m_certificateAuthority = value; }

    /**
     * <p>The <code>certificate-authority-data</code> for your cluster.</p>
     */
    inline void SetCertificateAuthority(Certificate&& value) { m_certificateAuthorityHasBeenSet = true; m_certificateAuthority = std::move(value); }

    /**
     * <p>The <code>certificate-authority-data</code> for your cluster.</p>
     */
    inline Cluster& WithCertificateAuthority(const Certificate& value) { SetCertificateAuthority(value); return *this;}

    /**
     * <p>The <code>certificate-authority-data</code> for your cluster.</p>
     */
    inline Cluster& WithCertificateAuthority(Certificate&& value) { SetCertificateAuthority(std::move(value)); return *this;}


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
    inline Cluster& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline Cluster& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline Cluster& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The platform version of your Amazon EKS cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/platform-versions.html">Platform
     * Versions</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }

    /**
     * <p>The platform version of your Amazon EKS cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/platform-versions.html">Platform
     * Versions</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }

    /**
     * <p>The platform version of your Amazon EKS cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/platform-versions.html">Platform
     * Versions</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }

    /**
     * <p>The platform version of your Amazon EKS cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/platform-versions.html">Platform
     * Versions</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }

    /**
     * <p>The platform version of your Amazon EKS cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/platform-versions.html">Platform
     * Versions</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }

    /**
     * <p>The platform version of your Amazon EKS cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/platform-versions.html">Platform
     * Versions</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline Cluster& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}

    /**
     * <p>The platform version of your Amazon EKS cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/platform-versions.html">Platform
     * Versions</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline Cluster& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}

    /**
     * <p>The platform version of your Amazon EKS cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/platform-versions.html">Platform
     * Versions</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline Cluster& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}


    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Cluster tags do not propagate to any other resources associated with the
     * cluster.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Cluster tags do not propagate to any other resources associated with the
     * cluster.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Cluster tags do not propagate to any other resources associated with the
     * cluster.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Cluster tags do not propagate to any other resources associated with the
     * cluster.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Cluster tags do not propagate to any other resources associated with the
     * cluster.</p>
     */
    inline Cluster& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Cluster tags do not propagate to any other resources associated with the
     * cluster.</p>
     */
    inline Cluster& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Cluster tags do not propagate to any other resources associated with the
     * cluster.</p>
     */
    inline Cluster& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Cluster tags do not propagate to any other resources associated with the
     * cluster.</p>
     */
    inline Cluster& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Cluster tags do not propagate to any other resources associated with the
     * cluster.</p>
     */
    inline Cluster& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Cluster tags do not propagate to any other resources associated with the
     * cluster.</p>
     */
    inline Cluster& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Cluster tags do not propagate to any other resources associated with the
     * cluster.</p>
     */
    inline Cluster& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Cluster tags do not propagate to any other resources associated with the
     * cluster.</p>
     */
    inline Cluster& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata that you apply to the cluster to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Cluster tags do not propagate to any other resources associated with the
     * cluster.</p>
     */
    inline Cluster& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


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
    inline Cluster& WithEncryptionConfig(const Aws::Vector<EncryptionConfig>& value) { SetEncryptionConfig(value); return *this;}

    /**
     * <p>The encryption configuration for the cluster.</p>
     */
    inline Cluster& WithEncryptionConfig(Aws::Vector<EncryptionConfig>&& value) { SetEncryptionConfig(std::move(value)); return *this;}

    /**
     * <p>The encryption configuration for the cluster.</p>
     */
    inline Cluster& AddEncryptionConfig(const EncryptionConfig& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig.push_back(value); return *this; }

    /**
     * <p>The encryption configuration for the cluster.</p>
     */
    inline Cluster& AddEncryptionConfig(EncryptionConfig&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>The configuration used to connect to a cluster for registration.</p>
     */
    inline const ConnectorConfigResponse& GetConnectorConfig() const{ return m_connectorConfig; }

    /**
     * <p>The configuration used to connect to a cluster for registration.</p>
     */
    inline bool ConnectorConfigHasBeenSet() const { return m_connectorConfigHasBeenSet; }

    /**
     * <p>The configuration used to connect to a cluster for registration.</p>
     */
    inline void SetConnectorConfig(const ConnectorConfigResponse& value) { m_connectorConfigHasBeenSet = true; m_connectorConfig = value; }

    /**
     * <p>The configuration used to connect to a cluster for registration.</p>
     */
    inline void SetConnectorConfig(ConnectorConfigResponse&& value) { m_connectorConfigHasBeenSet = true; m_connectorConfig = std::move(value); }

    /**
     * <p>The configuration used to connect to a cluster for registration.</p>
     */
    inline Cluster& WithConnectorConfig(const ConnectorConfigResponse& value) { SetConnectorConfig(value); return *this;}

    /**
     * <p>The configuration used to connect to a cluster for registration.</p>
     */
    inline Cluster& WithConnectorConfig(ConnectorConfigResponse&& value) { SetConnectorConfig(std::move(value)); return *this;}


    /**
     * <p>The ID of your local Amazon EKS cluster on an Amazon Web Services Outpost.
     * This property isn't available for an Amazon EKS cluster on the Amazon Web
     * Services cloud.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of your local Amazon EKS cluster on an Amazon Web Services Outpost.
     * This property isn't available for an Amazon EKS cluster on the Amazon Web
     * Services cloud.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of your local Amazon EKS cluster on an Amazon Web Services Outpost.
     * This property isn't available for an Amazon EKS cluster on the Amazon Web
     * Services cloud.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of your local Amazon EKS cluster on an Amazon Web Services Outpost.
     * This property isn't available for an Amazon EKS cluster on the Amazon Web
     * Services cloud.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of your local Amazon EKS cluster on an Amazon Web Services Outpost.
     * This property isn't available for an Amazon EKS cluster on the Amazon Web
     * Services cloud.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of your local Amazon EKS cluster on an Amazon Web Services Outpost.
     * This property isn't available for an Amazon EKS cluster on the Amazon Web
     * Services cloud.</p>
     */
    inline Cluster& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of your local Amazon EKS cluster on an Amazon Web Services Outpost.
     * This property isn't available for an Amazon EKS cluster on the Amazon Web
     * Services cloud.</p>
     */
    inline Cluster& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of your local Amazon EKS cluster on an Amazon Web Services Outpost.
     * This property isn't available for an Amazon EKS cluster on the Amazon Web
     * Services cloud.</p>
     */
    inline Cluster& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>An object representing the health of your local Amazon EKS cluster on an
     * Amazon Web Services Outpost. This object isn't available for clusters on the
     * Amazon Web Services cloud.</p>
     */
    inline const ClusterHealth& GetHealth() const{ return m_health; }

    /**
     * <p>An object representing the health of your local Amazon EKS cluster on an
     * Amazon Web Services Outpost. This object isn't available for clusters on the
     * Amazon Web Services cloud.</p>
     */
    inline bool HealthHasBeenSet() const { return m_healthHasBeenSet; }

    /**
     * <p>An object representing the health of your local Amazon EKS cluster on an
     * Amazon Web Services Outpost. This object isn't available for clusters on the
     * Amazon Web Services cloud.</p>
     */
    inline void SetHealth(const ClusterHealth& value) { m_healthHasBeenSet = true; m_health = value; }

    /**
     * <p>An object representing the health of your local Amazon EKS cluster on an
     * Amazon Web Services Outpost. This object isn't available for clusters on the
     * Amazon Web Services cloud.</p>
     */
    inline void SetHealth(ClusterHealth&& value) { m_healthHasBeenSet = true; m_health = std::move(value); }

    /**
     * <p>An object representing the health of your local Amazon EKS cluster on an
     * Amazon Web Services Outpost. This object isn't available for clusters on the
     * Amazon Web Services cloud.</p>
     */
    inline Cluster& WithHealth(const ClusterHealth& value) { SetHealth(value); return *this;}

    /**
     * <p>An object representing the health of your local Amazon EKS cluster on an
     * Amazon Web Services Outpost. This object isn't available for clusters on the
     * Amazon Web Services cloud.</p>
     */
    inline Cluster& WithHealth(ClusterHealth&& value) { SetHealth(std::move(value)); return *this;}


    /**
     * <p>An object representing the configuration of your local Amazon EKS cluster on
     * an Amazon Web Services Outpost. This object isn't available for clusters on the
     * Amazon Web Services cloud.</p>
     */
    inline const OutpostConfigResponse& GetOutpostConfig() const{ return m_outpostConfig; }

    /**
     * <p>An object representing the configuration of your local Amazon EKS cluster on
     * an Amazon Web Services Outpost. This object isn't available for clusters on the
     * Amazon Web Services cloud.</p>
     */
    inline bool OutpostConfigHasBeenSet() const { return m_outpostConfigHasBeenSet; }

    /**
     * <p>An object representing the configuration of your local Amazon EKS cluster on
     * an Amazon Web Services Outpost. This object isn't available for clusters on the
     * Amazon Web Services cloud.</p>
     */
    inline void SetOutpostConfig(const OutpostConfigResponse& value) { m_outpostConfigHasBeenSet = true; m_outpostConfig = value; }

    /**
     * <p>An object representing the configuration of your local Amazon EKS cluster on
     * an Amazon Web Services Outpost. This object isn't available for clusters on the
     * Amazon Web Services cloud.</p>
     */
    inline void SetOutpostConfig(OutpostConfigResponse&& value) { m_outpostConfigHasBeenSet = true; m_outpostConfig = std::move(value); }

    /**
     * <p>An object representing the configuration of your local Amazon EKS cluster on
     * an Amazon Web Services Outpost. This object isn't available for clusters on the
     * Amazon Web Services cloud.</p>
     */
    inline Cluster& WithOutpostConfig(const OutpostConfigResponse& value) { SetOutpostConfig(value); return *this;}

    /**
     * <p>An object representing the configuration of your local Amazon EKS cluster on
     * an Amazon Web Services Outpost. This object isn't available for clusters on the
     * Amazon Web Services cloud.</p>
     */
    inline Cluster& WithOutpostConfig(OutpostConfigResponse&& value) { SetOutpostConfig(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
