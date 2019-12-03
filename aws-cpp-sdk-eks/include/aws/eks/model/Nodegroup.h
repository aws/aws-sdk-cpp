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
#include <aws/eks/model/NodegroupStatus.h>
#include <aws/eks/model/NodegroupScalingConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/RemoteAccessConfig.h>
#include <aws/eks/model/AMITypes.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/eks/model/NodegroupResources.h>
#include <aws/eks/model/NodegroupHealth.h>
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
   * <p>An object representing an Amazon EKS managed node group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/Nodegroup">AWS API
   * Reference</a></p>
   */
  class AWS_EKS_API Nodegroup
  {
  public:
    Nodegroup();
    Nodegroup(Aws::Utils::Json::JsonView jsonValue);
    Nodegroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name associated with an Amazon EKS managed node group.</p>
     */
    inline const Aws::String& GetNodegroupName() const{ return m_nodegroupName; }

    /**
     * <p>The name associated with an Amazon EKS managed node group.</p>
     */
    inline bool NodegroupNameHasBeenSet() const { return m_nodegroupNameHasBeenSet; }

    /**
     * <p>The name associated with an Amazon EKS managed node group.</p>
     */
    inline void SetNodegroupName(const Aws::String& value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName = value; }

    /**
     * <p>The name associated with an Amazon EKS managed node group.</p>
     */
    inline void SetNodegroupName(Aws::String&& value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName = std::move(value); }

    /**
     * <p>The name associated with an Amazon EKS managed node group.</p>
     */
    inline void SetNodegroupName(const char* value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName.assign(value); }

    /**
     * <p>The name associated with an Amazon EKS managed node group.</p>
     */
    inline Nodegroup& WithNodegroupName(const Aws::String& value) { SetNodegroupName(value); return *this;}

    /**
     * <p>The name associated with an Amazon EKS managed node group.</p>
     */
    inline Nodegroup& WithNodegroupName(Aws::String&& value) { SetNodegroupName(std::move(value)); return *this;}

    /**
     * <p>The name associated with an Amazon EKS managed node group.</p>
     */
    inline Nodegroup& WithNodegroupName(const char* value) { SetNodegroupName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) associated with the managed node group.</p>
     */
    inline const Aws::String& GetNodegroupArn() const{ return m_nodegroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the managed node group.</p>
     */
    inline bool NodegroupArnHasBeenSet() const { return m_nodegroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the managed node group.</p>
     */
    inline void SetNodegroupArn(const Aws::String& value) { m_nodegroupArnHasBeenSet = true; m_nodegroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the managed node group.</p>
     */
    inline void SetNodegroupArn(Aws::String&& value) { m_nodegroupArnHasBeenSet = true; m_nodegroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the managed node group.</p>
     */
    inline void SetNodegroupArn(const char* value) { m_nodegroupArnHasBeenSet = true; m_nodegroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the managed node group.</p>
     */
    inline Nodegroup& WithNodegroupArn(const Aws::String& value) { SetNodegroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the managed node group.</p>
     */
    inline Nodegroup& WithNodegroupArn(Aws::String&& value) { SetNodegroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the managed node group.</p>
     */
    inline Nodegroup& WithNodegroupArn(const char* value) { SetNodegroupArn(value); return *this;}


    /**
     * <p>The name of the cluster that the managed node group resides in.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the cluster that the managed node group resides in.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the cluster that the managed node group resides in.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the cluster that the managed node group resides in.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the cluster that the managed node group resides in.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the cluster that the managed node group resides in.</p>
     */
    inline Nodegroup& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the cluster that the managed node group resides in.</p>
     */
    inline Nodegroup& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster that the managed node group resides in.</p>
     */
    inline Nodegroup& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The Kubernetes version of the managed node group.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The Kubernetes version of the managed node group.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The Kubernetes version of the managed node group.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The Kubernetes version of the managed node group.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The Kubernetes version of the managed node group.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The Kubernetes version of the managed node group.</p>
     */
    inline Nodegroup& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The Kubernetes version of the managed node group.</p>
     */
    inline Nodegroup& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The Kubernetes version of the managed node group.</p>
     */
    inline Nodegroup& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The AMI version of the managed node group. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS-Optimized Linux AMI Versions </a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const Aws::String& GetReleaseVersion() const{ return m_releaseVersion; }

    /**
     * <p>The AMI version of the managed node group. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS-Optimized Linux AMI Versions </a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline bool ReleaseVersionHasBeenSet() const { return m_releaseVersionHasBeenSet; }

    /**
     * <p>The AMI version of the managed node group. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS-Optimized Linux AMI Versions </a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetReleaseVersion(const Aws::String& value) { m_releaseVersionHasBeenSet = true; m_releaseVersion = value; }

    /**
     * <p>The AMI version of the managed node group. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS-Optimized Linux AMI Versions </a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetReleaseVersion(Aws::String&& value) { m_releaseVersionHasBeenSet = true; m_releaseVersion = std::move(value); }

    /**
     * <p>The AMI version of the managed node group. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS-Optimized Linux AMI Versions </a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetReleaseVersion(const char* value) { m_releaseVersionHasBeenSet = true; m_releaseVersion.assign(value); }

    /**
     * <p>The AMI version of the managed node group. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS-Optimized Linux AMI Versions </a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline Nodegroup& WithReleaseVersion(const Aws::String& value) { SetReleaseVersion(value); return *this;}

    /**
     * <p>The AMI version of the managed node group. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS-Optimized Linux AMI Versions </a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline Nodegroup& WithReleaseVersion(Aws::String&& value) { SetReleaseVersion(std::move(value)); return *this;}

    /**
     * <p>The AMI version of the managed node group. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS-Optimized Linux AMI Versions </a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline Nodegroup& WithReleaseVersion(const char* value) { SetReleaseVersion(value); return *this;}


    /**
     * <p>The Unix epoch timestamp in seconds for when the managed node group was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the managed node group was
     * created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the managed node group was
     * created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the managed node group was
     * created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The Unix epoch timestamp in seconds for when the managed node group was
     * created.</p>
     */
    inline Nodegroup& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix epoch timestamp in seconds for when the managed node group was
     * created.</p>
     */
    inline Nodegroup& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Unix epoch timestamp in seconds for when the managed node group was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the managed node group was last
     * modified.</p>
     */
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the managed node group was last
     * modified.</p>
     */
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the managed node group was last
     * modified.</p>
     */
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }

    /**
     * <p>The Unix epoch timestamp in seconds for when the managed node group was last
     * modified.</p>
     */
    inline Nodegroup& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    /**
     * <p>The Unix epoch timestamp in seconds for when the managed node group was last
     * modified.</p>
     */
    inline Nodegroup& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}


    /**
     * <p>The current status of the managed node group.</p>
     */
    inline const NodegroupStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the managed node group.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the managed node group.</p>
     */
    inline void SetStatus(const NodegroupStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the managed node group.</p>
     */
    inline void SetStatus(NodegroupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the managed node group.</p>
     */
    inline Nodegroup& WithStatus(const NodegroupStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the managed node group.</p>
     */
    inline Nodegroup& WithStatus(NodegroupStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The scaling configuration details for the Auto Scaling group that is
     * associated with your node group.</p>
     */
    inline const NodegroupScalingConfig& GetScalingConfig() const{ return m_scalingConfig; }

    /**
     * <p>The scaling configuration details for the Auto Scaling group that is
     * associated with your node group.</p>
     */
    inline bool ScalingConfigHasBeenSet() const { return m_scalingConfigHasBeenSet; }

    /**
     * <p>The scaling configuration details for the Auto Scaling group that is
     * associated with your node group.</p>
     */
    inline void SetScalingConfig(const NodegroupScalingConfig& value) { m_scalingConfigHasBeenSet = true; m_scalingConfig = value; }

    /**
     * <p>The scaling configuration details for the Auto Scaling group that is
     * associated with your node group.</p>
     */
    inline void SetScalingConfig(NodegroupScalingConfig&& value) { m_scalingConfigHasBeenSet = true; m_scalingConfig = std::move(value); }

    /**
     * <p>The scaling configuration details for the Auto Scaling group that is
     * associated with your node group.</p>
     */
    inline Nodegroup& WithScalingConfig(const NodegroupScalingConfig& value) { SetScalingConfig(value); return *this;}

    /**
     * <p>The scaling configuration details for the Auto Scaling group that is
     * associated with your node group.</p>
     */
    inline Nodegroup& WithScalingConfig(NodegroupScalingConfig&& value) { SetScalingConfig(std::move(value)); return *this;}


    /**
     * <p>The instance types associated with your node group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTypes() const{ return m_instanceTypes; }

    /**
     * <p>The instance types associated with your node group.</p>
     */
    inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }

    /**
     * <p>The instance types associated with your node group.</p>
     */
    inline void SetInstanceTypes(const Aws::Vector<Aws::String>& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = value; }

    /**
     * <p>The instance types associated with your node group.</p>
     */
    inline void SetInstanceTypes(Aws::Vector<Aws::String>&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::move(value); }

    /**
     * <p>The instance types associated with your node group.</p>
     */
    inline Nodegroup& WithInstanceTypes(const Aws::Vector<Aws::String>& value) { SetInstanceTypes(value); return *this;}

    /**
     * <p>The instance types associated with your node group.</p>
     */
    inline Nodegroup& WithInstanceTypes(Aws::Vector<Aws::String>&& value) { SetInstanceTypes(std::move(value)); return *this;}

    /**
     * <p>The instance types associated with your node group.</p>
     */
    inline Nodegroup& AddInstanceTypes(const Aws::String& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }

    /**
     * <p>The instance types associated with your node group.</p>
     */
    inline Nodegroup& AddInstanceTypes(Aws::String&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The instance types associated with your node group.</p>
     */
    inline Nodegroup& AddInstanceTypes(const char* value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }


    /**
     * <p>The subnets allowed for the Auto Scaling group that is associated with your
     * node group. These subnets must have the following tag:
     * <code>kubernetes.io/cluster/CLUSTER_NAME</code>, where <code>CLUSTER_NAME</code>
     * is replaced with the name of your cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The subnets allowed for the Auto Scaling group that is associated with your
     * node group. These subnets must have the following tag:
     * <code>kubernetes.io/cluster/CLUSTER_NAME</code>, where <code>CLUSTER_NAME</code>
     * is replaced with the name of your cluster.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>The subnets allowed for the Auto Scaling group that is associated with your
     * node group. These subnets must have the following tag:
     * <code>kubernetes.io/cluster/CLUSTER_NAME</code>, where <code>CLUSTER_NAME</code>
     * is replaced with the name of your cluster.</p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The subnets allowed for the Auto Scaling group that is associated with your
     * node group. These subnets must have the following tag:
     * <code>kubernetes.io/cluster/CLUSTER_NAME</code>, where <code>CLUSTER_NAME</code>
     * is replaced with the name of your cluster.</p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>The subnets allowed for the Auto Scaling group that is associated with your
     * node group. These subnets must have the following tag:
     * <code>kubernetes.io/cluster/CLUSTER_NAME</code>, where <code>CLUSTER_NAME</code>
     * is replaced with the name of your cluster.</p>
     */
    inline Nodegroup& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The subnets allowed for the Auto Scaling group that is associated with your
     * node group. These subnets must have the following tag:
     * <code>kubernetes.io/cluster/CLUSTER_NAME</code>, where <code>CLUSTER_NAME</code>
     * is replaced with the name of your cluster.</p>
     */
    inline Nodegroup& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>The subnets allowed for the Auto Scaling group that is associated with your
     * node group. These subnets must have the following tag:
     * <code>kubernetes.io/cluster/CLUSTER_NAME</code>, where <code>CLUSTER_NAME</code>
     * is replaced with the name of your cluster.</p>
     */
    inline Nodegroup& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The subnets allowed for the Auto Scaling group that is associated with your
     * node group. These subnets must have the following tag:
     * <code>kubernetes.io/cluster/CLUSTER_NAME</code>, where <code>CLUSTER_NAME</code>
     * is replaced with the name of your cluster.</p>
     */
    inline Nodegroup& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>The subnets allowed for the Auto Scaling group that is associated with your
     * node group. These subnets must have the following tag:
     * <code>kubernetes.io/cluster/CLUSTER_NAME</code>, where <code>CLUSTER_NAME</code>
     * is replaced with the name of your cluster.</p>
     */
    inline Nodegroup& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }


    /**
     * <p>The remote access (SSH) configuration that is associated with the node
     * group.</p>
     */
    inline const RemoteAccessConfig& GetRemoteAccess() const{ return m_remoteAccess; }

    /**
     * <p>The remote access (SSH) configuration that is associated with the node
     * group.</p>
     */
    inline bool RemoteAccessHasBeenSet() const { return m_remoteAccessHasBeenSet; }

    /**
     * <p>The remote access (SSH) configuration that is associated with the node
     * group.</p>
     */
    inline void SetRemoteAccess(const RemoteAccessConfig& value) { m_remoteAccessHasBeenSet = true; m_remoteAccess = value; }

    /**
     * <p>The remote access (SSH) configuration that is associated with the node
     * group.</p>
     */
    inline void SetRemoteAccess(RemoteAccessConfig&& value) { m_remoteAccessHasBeenSet = true; m_remoteAccess = std::move(value); }

    /**
     * <p>The remote access (SSH) configuration that is associated with the node
     * group.</p>
     */
    inline Nodegroup& WithRemoteAccess(const RemoteAccessConfig& value) { SetRemoteAccess(value); return *this;}

    /**
     * <p>The remote access (SSH) configuration that is associated with the node
     * group.</p>
     */
    inline Nodegroup& WithRemoteAccess(RemoteAccessConfig&& value) { SetRemoteAccess(std::move(value)); return *this;}


    /**
     * <p>The AMI type associated with your node group. GPU instance types should use
     * the <code>AL2_x86_64_GPU</code> AMI type, which uses the Amazon EKS-optimized
     * Linux AMI with GPU support. Non-GPU instances should use the
     * <code>AL2_x86_64</code> AMI type, which uses the Amazon EKS-optimized Linux
     * AMI.</p>
     */
    inline const AMITypes& GetAmiType() const{ return m_amiType; }

    /**
     * <p>The AMI type associated with your node group. GPU instance types should use
     * the <code>AL2_x86_64_GPU</code> AMI type, which uses the Amazon EKS-optimized
     * Linux AMI with GPU support. Non-GPU instances should use the
     * <code>AL2_x86_64</code> AMI type, which uses the Amazon EKS-optimized Linux
     * AMI.</p>
     */
    inline bool AmiTypeHasBeenSet() const { return m_amiTypeHasBeenSet; }

    /**
     * <p>The AMI type associated with your node group. GPU instance types should use
     * the <code>AL2_x86_64_GPU</code> AMI type, which uses the Amazon EKS-optimized
     * Linux AMI with GPU support. Non-GPU instances should use the
     * <code>AL2_x86_64</code> AMI type, which uses the Amazon EKS-optimized Linux
     * AMI.</p>
     */
    inline void SetAmiType(const AMITypes& value) { m_amiTypeHasBeenSet = true; m_amiType = value; }

    /**
     * <p>The AMI type associated with your node group. GPU instance types should use
     * the <code>AL2_x86_64_GPU</code> AMI type, which uses the Amazon EKS-optimized
     * Linux AMI with GPU support. Non-GPU instances should use the
     * <code>AL2_x86_64</code> AMI type, which uses the Amazon EKS-optimized Linux
     * AMI.</p>
     */
    inline void SetAmiType(AMITypes&& value) { m_amiTypeHasBeenSet = true; m_amiType = std::move(value); }

    /**
     * <p>The AMI type associated with your node group. GPU instance types should use
     * the <code>AL2_x86_64_GPU</code> AMI type, which uses the Amazon EKS-optimized
     * Linux AMI with GPU support. Non-GPU instances should use the
     * <code>AL2_x86_64</code> AMI type, which uses the Amazon EKS-optimized Linux
     * AMI.</p>
     */
    inline Nodegroup& WithAmiType(const AMITypes& value) { SetAmiType(value); return *this;}

    /**
     * <p>The AMI type associated with your node group. GPU instance types should use
     * the <code>AL2_x86_64_GPU</code> AMI type, which uses the Amazon EKS-optimized
     * Linux AMI with GPU support. Non-GPU instances should use the
     * <code>AL2_x86_64</code> AMI type, which uses the Amazon EKS-optimized Linux
     * AMI.</p>
     */
    inline Nodegroup& WithAmiType(AMITypes&& value) { SetAmiType(std::move(value)); return *this;}


    /**
     * <p>The IAM role associated with your node group. The Amazon EKS worker node
     * <code>kubelet</code> daemon makes calls to AWS APIs on your behalf. Worker nodes
     * receive permissions for these API calls through an IAM instance profile and
     * associated policies. Before you can launch worker nodes and register them into a
     * cluster, you must create an IAM role for those worker nodes to use when they are
     * launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/worker_node_IAM_role.html">Amazon
     * EKS Worker Node IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline const Aws::String& GetNodeRole() const{ return m_nodeRole; }

    /**
     * <p>The IAM role associated with your node group. The Amazon EKS worker node
     * <code>kubelet</code> daemon makes calls to AWS APIs on your behalf. Worker nodes
     * receive permissions for these API calls through an IAM instance profile and
     * associated policies. Before you can launch worker nodes and register them into a
     * cluster, you must create an IAM role for those worker nodes to use when they are
     * launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/worker_node_IAM_role.html">Amazon
     * EKS Worker Node IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline bool NodeRoleHasBeenSet() const { return m_nodeRoleHasBeenSet; }

    /**
     * <p>The IAM role associated with your node group. The Amazon EKS worker node
     * <code>kubelet</code> daemon makes calls to AWS APIs on your behalf. Worker nodes
     * receive permissions for these API calls through an IAM instance profile and
     * associated policies. Before you can launch worker nodes and register them into a
     * cluster, you must create an IAM role for those worker nodes to use when they are
     * launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/worker_node_IAM_role.html">Amazon
     * EKS Worker Node IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline void SetNodeRole(const Aws::String& value) { m_nodeRoleHasBeenSet = true; m_nodeRole = value; }

    /**
     * <p>The IAM role associated with your node group. The Amazon EKS worker node
     * <code>kubelet</code> daemon makes calls to AWS APIs on your behalf. Worker nodes
     * receive permissions for these API calls through an IAM instance profile and
     * associated policies. Before you can launch worker nodes and register them into a
     * cluster, you must create an IAM role for those worker nodes to use when they are
     * launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/worker_node_IAM_role.html">Amazon
     * EKS Worker Node IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline void SetNodeRole(Aws::String&& value) { m_nodeRoleHasBeenSet = true; m_nodeRole = std::move(value); }

    /**
     * <p>The IAM role associated with your node group. The Amazon EKS worker node
     * <code>kubelet</code> daemon makes calls to AWS APIs on your behalf. Worker nodes
     * receive permissions for these API calls through an IAM instance profile and
     * associated policies. Before you can launch worker nodes and register them into a
     * cluster, you must create an IAM role for those worker nodes to use when they are
     * launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/worker_node_IAM_role.html">Amazon
     * EKS Worker Node IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline void SetNodeRole(const char* value) { m_nodeRoleHasBeenSet = true; m_nodeRole.assign(value); }

    /**
     * <p>The IAM role associated with your node group. The Amazon EKS worker node
     * <code>kubelet</code> daemon makes calls to AWS APIs on your behalf. Worker nodes
     * receive permissions for these API calls through an IAM instance profile and
     * associated policies. Before you can launch worker nodes and register them into a
     * cluster, you must create an IAM role for those worker nodes to use when they are
     * launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/worker_node_IAM_role.html">Amazon
     * EKS Worker Node IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline Nodegroup& WithNodeRole(const Aws::String& value) { SetNodeRole(value); return *this;}

    /**
     * <p>The IAM role associated with your node group. The Amazon EKS worker node
     * <code>kubelet</code> daemon makes calls to AWS APIs on your behalf. Worker nodes
     * receive permissions for these API calls through an IAM instance profile and
     * associated policies. Before you can launch worker nodes and register them into a
     * cluster, you must create an IAM role for those worker nodes to use when they are
     * launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/worker_node_IAM_role.html">Amazon
     * EKS Worker Node IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline Nodegroup& WithNodeRole(Aws::String&& value) { SetNodeRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role associated with your node group. The Amazon EKS worker node
     * <code>kubelet</code> daemon makes calls to AWS APIs on your behalf. Worker nodes
     * receive permissions for these API calls through an IAM instance profile and
     * associated policies. Before you can launch worker nodes and register them into a
     * cluster, you must create an IAM role for those worker nodes to use when they are
     * launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/worker_node_IAM_role.html">Amazon
     * EKS Worker Node IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline Nodegroup& WithNodeRole(const char* value) { SetNodeRole(value); return *this;}


    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> <note>
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> </note>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLabels() const{ return m_labels; }

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> <note>
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> </note>
     */
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> <note>
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> </note>
     */
    inline void SetLabels(const Aws::Map<Aws::String, Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> <note>
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> </note>
     */
    inline void SetLabels(Aws::Map<Aws::String, Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> <note>
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> </note>
     */
    inline Nodegroup& WithLabels(const Aws::Map<Aws::String, Aws::String>& value) { SetLabels(value); return *this;}

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> <note>
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> </note>
     */
    inline Nodegroup& WithLabels(Aws::Map<Aws::String, Aws::String>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> <note>
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> </note>
     */
    inline Nodegroup& AddLabels(const Aws::String& key, const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, value); return *this; }

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> <note>
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> </note>
     */
    inline Nodegroup& AddLabels(Aws::String&& key, const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> <note>
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> </note>
     */
    inline Nodegroup& AddLabels(const Aws::String& key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> <note>
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> </note>
     */
    inline Nodegroup& AddLabels(Aws::String&& key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> <note>
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> </note>
     */
    inline Nodegroup& AddLabels(const char* key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> <note>
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> </note>
     */
    inline Nodegroup& AddLabels(Aws::String&& key, const char* value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> <note>
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> </note>
     */
    inline Nodegroup& AddLabels(const char* key, const char* value) { m_labelsHasBeenSet = true; m_labels.emplace(key, value); return *this; }


    /**
     * <p>The resources associated with the node group, such as Auto Scaling groups and
     * security groups for remote access.</p>
     */
    inline const NodegroupResources& GetResources() const{ return m_resources; }

    /**
     * <p>The resources associated with the node group, such as Auto Scaling groups and
     * security groups for remote access.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>The resources associated with the node group, such as Auto Scaling groups and
     * security groups for remote access.</p>
     */
    inline void SetResources(const NodegroupResources& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>The resources associated with the node group, such as Auto Scaling groups and
     * security groups for remote access.</p>
     */
    inline void SetResources(NodegroupResources&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>The resources associated with the node group, such as Auto Scaling groups and
     * security groups for remote access.</p>
     */
    inline Nodegroup& WithResources(const NodegroupResources& value) { SetResources(value); return *this;}

    /**
     * <p>The resources associated with the node group, such as Auto Scaling groups and
     * security groups for remote access.</p>
     */
    inline Nodegroup& WithResources(NodegroupResources&& value) { SetResources(std::move(value)); return *this;}


    /**
     * <p>The root device disk size (in GiB) for your node group instances. The default
     * disk size is 20 GiB.</p>
     */
    inline int GetDiskSize() const{ return m_diskSize; }

    /**
     * <p>The root device disk size (in GiB) for your node group instances. The default
     * disk size is 20 GiB.</p>
     */
    inline bool DiskSizeHasBeenSet() const { return m_diskSizeHasBeenSet; }

    /**
     * <p>The root device disk size (in GiB) for your node group instances. The default
     * disk size is 20 GiB.</p>
     */
    inline void SetDiskSize(int value) { m_diskSizeHasBeenSet = true; m_diskSize = value; }

    /**
     * <p>The root device disk size (in GiB) for your node group instances. The default
     * disk size is 20 GiB.</p>
     */
    inline Nodegroup& WithDiskSize(int value) { SetDiskSize(value); return *this;}


    /**
     * <p>The health status of the node group. If there are issues with your node
     * group's health, they are listed here.</p>
     */
    inline const NodegroupHealth& GetHealth() const{ return m_health; }

    /**
     * <p>The health status of the node group. If there are issues with your node
     * group's health, they are listed here.</p>
     */
    inline bool HealthHasBeenSet() const { return m_healthHasBeenSet; }

    /**
     * <p>The health status of the node group. If there are issues with your node
     * group's health, they are listed here.</p>
     */
    inline void SetHealth(const NodegroupHealth& value) { m_healthHasBeenSet = true; m_health = value; }

    /**
     * <p>The health status of the node group. If there are issues with your node
     * group's health, they are listed here.</p>
     */
    inline void SetHealth(NodegroupHealth&& value) { m_healthHasBeenSet = true; m_health = std::move(value); }

    /**
     * <p>The health status of the node group. If there are issues with your node
     * group's health, they are listed here.</p>
     */
    inline Nodegroup& WithHealth(const NodegroupHealth& value) { SetHealth(value); return *this;}

    /**
     * <p>The health status of the node group. If there are issues with your node
     * group's health, they are listed here.</p>
     */
    inline Nodegroup& WithHealth(NodegroupHealth&& value) { SetHealth(std::move(value)); return *this;}


    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline Nodegroup& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline Nodegroup& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline Nodegroup& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline Nodegroup& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline Nodegroup& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline Nodegroup& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline Nodegroup& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline Nodegroup& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline Nodegroup& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_nodegroupName;
    bool m_nodegroupNameHasBeenSet;

    Aws::String m_nodegroupArn;
    bool m_nodegroupArnHasBeenSet;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    Aws::String m_releaseVersion;
    bool m_releaseVersionHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet;

    NodegroupStatus m_status;
    bool m_statusHasBeenSet;

    NodegroupScalingConfig m_scalingConfig;
    bool m_scalingConfigHasBeenSet;

    Aws::Vector<Aws::String> m_instanceTypes;
    bool m_instanceTypesHasBeenSet;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet;

    RemoteAccessConfig m_remoteAccess;
    bool m_remoteAccessHasBeenSet;

    AMITypes m_amiType;
    bool m_amiTypeHasBeenSet;

    Aws::String m_nodeRole;
    bool m_nodeRoleHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_labels;
    bool m_labelsHasBeenSet;

    NodegroupResources m_resources;
    bool m_resourcesHasBeenSet;

    int m_diskSize;
    bool m_diskSizeHasBeenSet;

    NodegroupHealth m_health;
    bool m_healthHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
