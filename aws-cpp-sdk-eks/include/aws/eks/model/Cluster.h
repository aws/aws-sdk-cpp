/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/eks/model/VpcConfigResponse.h>
#include <aws/eks/model/Logging.h>
#include <aws/eks/model/ClusterStatus.h>
#include <aws/eks/model/Certificate.h>
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
  class AWS_EKS_API Cluster
  {
  public:
    Cluster();
    Cluster(Aws::Utils::Json::JsonView jsonValue);
    Cluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * the Kubernetes control plane to make calls to AWS API operations on your
     * behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to AWS API operations on your
     * behalf.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to AWS API operations on your
     * behalf.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to AWS API operations on your
     * behalf.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to AWS API operations on your
     * behalf.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to AWS API operations on your
     * behalf.</p>
     */
    inline Cluster& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to AWS API operations on your
     * behalf.</p>
     */
    inline Cluster& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * the Kubernetes control plane to make calls to AWS API operations on your
     * behalf.</p>
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

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    VpcConfigResponse m_resourcesVpcConfig;
    bool m_resourcesVpcConfigHasBeenSet;

    Logging m_logging;
    bool m_loggingHasBeenSet;

    ClusterStatus m_status;
    bool m_statusHasBeenSet;

    Certificate m_certificateAuthority;
    bool m_certificateAuthorityHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
