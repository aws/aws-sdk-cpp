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
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/VpcConfigRequest.h>
#include <aws/eks/model/Logging.h>
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
  class AWS_EKS_API CreateClusterRequest : public EKSRequest
  {
  public:
    CreateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCluster"; }

    Aws::String SerializePayload() const override;


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
     * here, the latest version available in Amazon EKS is used.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The desired Kubernetes version for your cluster. If you don't specify a value
     * here, the latest version available in Amazon EKS is used.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The desired Kubernetes version for your cluster. If you don't specify a value
     * here, the latest version available in Amazon EKS is used.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The desired Kubernetes version for your cluster. If you don't specify a value
     * here, the latest version available in Amazon EKS is used.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The desired Kubernetes version for your cluster. If you don't specify a value
     * here, the latest version available in Amazon EKS is used.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The desired Kubernetes version for your cluster. If you don't specify a value
     * here, the latest version available in Amazon EKS is used.</p>
     */
    inline CreateClusterRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The desired Kubernetes version for your cluster. If you don't specify a value
     * here, the latest version available in Amazon EKS is used.</p>
     */
    inline CreateClusterRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The desired Kubernetes version for your cluster. If you don't specify a value
     * here, the latest version available in Amazon EKS is used.</p>
     */
    inline CreateClusterRequest& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * Amazon EKS to make calls to other AWS API operations on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/service_IAM_role.html">Amazon
     * EKS Service IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * Amazon EKS to make calls to other AWS API operations on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/service_IAM_role.html">Amazon
     * EKS Service IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * Amazon EKS to make calls to other AWS API operations on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/service_IAM_role.html">Amazon
     * EKS Service IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * Amazon EKS to make calls to other AWS API operations on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/service_IAM_role.html">Amazon
     * EKS Service IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * Amazon EKS to make calls to other AWS API operations on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/service_IAM_role.html">Amazon
     * EKS Service IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * Amazon EKS to make calls to other AWS API operations on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/service_IAM_role.html">Amazon
     * EKS Service IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline CreateClusterRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * Amazon EKS to make calls to other AWS API operations on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/service_IAM_role.html">Amazon
     * EKS Service IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline CreateClusterRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides permissions for
     * Amazon EKS to make calls to other AWS API operations on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/service_IAM_role.html">Amazon
     * EKS Service IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline CreateClusterRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The VPC configuration used by the cluster control plane. Amazon EKS VPC
     * resources have specific requirements to work properly with Kubernetes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/network_reqs.html">Cluster
     * VPC Considerations</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/sec-group-reqs.html">Cluster
     * Security Group Considerations</a> in the <i>Amazon EKS User Guide</i>. You must
     * specify at least two subnets. You can specify up to five security groups, but we
     * recommend that you use a dedicated security group for your cluster control
     * plane.</p>
     */
    inline const VpcConfigRequest& GetResourcesVpcConfig() const{ return m_resourcesVpcConfig; }

    /**
     * <p>The VPC configuration used by the cluster control plane. Amazon EKS VPC
     * resources have specific requirements to work properly with Kubernetes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/network_reqs.html">Cluster
     * VPC Considerations</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/sec-group-reqs.html">Cluster
     * Security Group Considerations</a> in the <i>Amazon EKS User Guide</i>. You must
     * specify at least two subnets. You can specify up to five security groups, but we
     * recommend that you use a dedicated security group for your cluster control
     * plane.</p>
     */
    inline bool ResourcesVpcConfigHasBeenSet() const { return m_resourcesVpcConfigHasBeenSet; }

    /**
     * <p>The VPC configuration used by the cluster control plane. Amazon EKS VPC
     * resources have specific requirements to work properly with Kubernetes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/network_reqs.html">Cluster
     * VPC Considerations</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/sec-group-reqs.html">Cluster
     * Security Group Considerations</a> in the <i>Amazon EKS User Guide</i>. You must
     * specify at least two subnets. You can specify up to five security groups, but we
     * recommend that you use a dedicated security group for your cluster control
     * plane.</p>
     */
    inline void SetResourcesVpcConfig(const VpcConfigRequest& value) { m_resourcesVpcConfigHasBeenSet = true; m_resourcesVpcConfig = value; }

    /**
     * <p>The VPC configuration used by the cluster control plane. Amazon EKS VPC
     * resources have specific requirements to work properly with Kubernetes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/network_reqs.html">Cluster
     * VPC Considerations</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/sec-group-reqs.html">Cluster
     * Security Group Considerations</a> in the <i>Amazon EKS User Guide</i>. You must
     * specify at least two subnets. You can specify up to five security groups, but we
     * recommend that you use a dedicated security group for your cluster control
     * plane.</p>
     */
    inline void SetResourcesVpcConfig(VpcConfigRequest&& value) { m_resourcesVpcConfigHasBeenSet = true; m_resourcesVpcConfig = std::move(value); }

    /**
     * <p>The VPC configuration used by the cluster control plane. Amazon EKS VPC
     * resources have specific requirements to work properly with Kubernetes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/network_reqs.html">Cluster
     * VPC Considerations</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/sec-group-reqs.html">Cluster
     * Security Group Considerations</a> in the <i>Amazon EKS User Guide</i>. You must
     * specify at least two subnets. You can specify up to five security groups, but we
     * recommend that you use a dedicated security group for your cluster control
     * plane.</p>
     */
    inline CreateClusterRequest& WithResourcesVpcConfig(const VpcConfigRequest& value) { SetResourcesVpcConfig(value); return *this;}

    /**
     * <p>The VPC configuration used by the cluster control plane. Amazon EKS VPC
     * resources have specific requirements to work properly with Kubernetes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/network_reqs.html">Cluster
     * VPC Considerations</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/sec-group-reqs.html">Cluster
     * Security Group Considerations</a> in the <i>Amazon EKS User Guide</i>. You must
     * specify at least two subnets. You can specify up to five security groups, but we
     * recommend that you use a dedicated security group for your cluster control
     * plane.</p>
     */
    inline CreateClusterRequest& WithResourcesVpcConfig(VpcConfigRequest&& value) { SetResourcesVpcConfig(std::move(value)); return *this;}


    /**
     * <p>Enable or disable exporting the Kubernetes control plane logs for your
     * cluster to CloudWatch Logs. By default, cluster control plane logs aren't
     * exported to CloudWatch Logs. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon
     * EKS Cluster Control Plane Logs</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p> <note> <p>CloudWatch Logs ingestion, archive storage, and data
     * scanning rates apply to exported control plane logs. For more information, see
     * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
     * Pricing</a>.</p> </note>
     */
    inline const Logging& GetLogging() const{ return m_logging; }

    /**
     * <p>Enable or disable exporting the Kubernetes control plane logs for your
     * cluster to CloudWatch Logs. By default, cluster control plane logs aren't
     * exported to CloudWatch Logs. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon
     * EKS Cluster Control Plane Logs</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p> <note> <p>CloudWatch Logs ingestion, archive storage, and data
     * scanning rates apply to exported control plane logs. For more information, see
     * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
     * Pricing</a>.</p> </note>
     */
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }

    /**
     * <p>Enable or disable exporting the Kubernetes control plane logs for your
     * cluster to CloudWatch Logs. By default, cluster control plane logs aren't
     * exported to CloudWatch Logs. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon
     * EKS Cluster Control Plane Logs</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p> <note> <p>CloudWatch Logs ingestion, archive storage, and data
     * scanning rates apply to exported control plane logs. For more information, see
     * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
     * Pricing</a>.</p> </note>
     */
    inline void SetLogging(const Logging& value) { m_loggingHasBeenSet = true; m_logging = value; }

    /**
     * <p>Enable or disable exporting the Kubernetes control plane logs for your
     * cluster to CloudWatch Logs. By default, cluster control plane logs aren't
     * exported to CloudWatch Logs. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon
     * EKS Cluster Control Plane Logs</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p> <note> <p>CloudWatch Logs ingestion, archive storage, and data
     * scanning rates apply to exported control plane logs. For more information, see
     * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
     * Pricing</a>.</p> </note>
     */
    inline void SetLogging(Logging&& value) { m_loggingHasBeenSet = true; m_logging = std::move(value); }

    /**
     * <p>Enable or disable exporting the Kubernetes control plane logs for your
     * cluster to CloudWatch Logs. By default, cluster control plane logs aren't
     * exported to CloudWatch Logs. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon
     * EKS Cluster Control Plane Logs</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p> <note> <p>CloudWatch Logs ingestion, archive storage, and data
     * scanning rates apply to exported control plane logs. For more information, see
     * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
     * Pricing</a>.</p> </note>
     */
    inline CreateClusterRequest& WithLogging(const Logging& value) { SetLogging(value); return *this;}

    /**
     * <p>Enable or disable exporting the Kubernetes control plane logs for your
     * cluster to CloudWatch Logs. By default, cluster control plane logs aren't
     * exported to CloudWatch Logs. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon
     * EKS Cluster Control Plane Logs</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p> <note> <p>CloudWatch Logs ingestion, archive storage, and data
     * scanning rates apply to exported control plane logs. For more information, see
     * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
     * Pricing</a>.</p> </note>
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

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    VpcConfigRequest m_resourcesVpcConfig;
    bool m_resourcesVpcConfigHasBeenSet;

    Logging m_logging;
    bool m_loggingHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
