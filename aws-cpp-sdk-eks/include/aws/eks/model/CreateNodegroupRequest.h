/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/NodegroupScalingConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/AMITypes.h>
#include <aws/eks/model/RemoteAccessConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/eks/model/LaunchTemplateSpecification.h>
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
  class AWS_EKS_API CreateNodegroupRequest : public EKSRequest
  {
  public:
    CreateNodegroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNodegroup"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the cluster to create the node group in.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the cluster to create the node group in.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the cluster to create the node group in.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the cluster to create the node group in.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the cluster to create the node group in.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the cluster to create the node group in.</p>
     */
    inline CreateNodegroupRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the cluster to create the node group in.</p>
     */
    inline CreateNodegroupRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster to create the node group in.</p>
     */
    inline CreateNodegroupRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The unique name to give your node group.</p>
     */
    inline const Aws::String& GetNodegroupName() const{ return m_nodegroupName; }

    /**
     * <p>The unique name to give your node group.</p>
     */
    inline bool NodegroupNameHasBeenSet() const { return m_nodegroupNameHasBeenSet; }

    /**
     * <p>The unique name to give your node group.</p>
     */
    inline void SetNodegroupName(const Aws::String& value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName = value; }

    /**
     * <p>The unique name to give your node group.</p>
     */
    inline void SetNodegroupName(Aws::String&& value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName = std::move(value); }

    /**
     * <p>The unique name to give your node group.</p>
     */
    inline void SetNodegroupName(const char* value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName.assign(value); }

    /**
     * <p>The unique name to give your node group.</p>
     */
    inline CreateNodegroupRequest& WithNodegroupName(const Aws::String& value) { SetNodegroupName(value); return *this;}

    /**
     * <p>The unique name to give your node group.</p>
     */
    inline CreateNodegroupRequest& WithNodegroupName(Aws::String&& value) { SetNodegroupName(std::move(value)); return *this;}

    /**
     * <p>The unique name to give your node group.</p>
     */
    inline CreateNodegroupRequest& WithNodegroupName(const char* value) { SetNodegroupName(value); return *this;}


    /**
     * <p>The scaling configuration details for the Auto Scaling group that is created
     * for your node group.</p>
     */
    inline const NodegroupScalingConfig& GetScalingConfig() const{ return m_scalingConfig; }

    /**
     * <p>The scaling configuration details for the Auto Scaling group that is created
     * for your node group.</p>
     */
    inline bool ScalingConfigHasBeenSet() const { return m_scalingConfigHasBeenSet; }

    /**
     * <p>The scaling configuration details for the Auto Scaling group that is created
     * for your node group.</p>
     */
    inline void SetScalingConfig(const NodegroupScalingConfig& value) { m_scalingConfigHasBeenSet = true; m_scalingConfig = value; }

    /**
     * <p>The scaling configuration details for the Auto Scaling group that is created
     * for your node group.</p>
     */
    inline void SetScalingConfig(NodegroupScalingConfig&& value) { m_scalingConfigHasBeenSet = true; m_scalingConfig = std::move(value); }

    /**
     * <p>The scaling configuration details for the Auto Scaling group that is created
     * for your node group.</p>
     */
    inline CreateNodegroupRequest& WithScalingConfig(const NodegroupScalingConfig& value) { SetScalingConfig(value); return *this;}

    /**
     * <p>The scaling configuration details for the Auto Scaling group that is created
     * for your node group.</p>
     */
    inline CreateNodegroupRequest& WithScalingConfig(NodegroupScalingConfig&& value) { SetScalingConfig(std::move(value)); return *this;}


    /**
     * <p>The root device disk size (in GiB) for your node group instances. The default
     * disk size is 20 GiB. If you specify <code>launchTemplate</code>, then don't
     * specify <code>diskSize</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline int GetDiskSize() const{ return m_diskSize; }

    /**
     * <p>The root device disk size (in GiB) for your node group instances. The default
     * disk size is 20 GiB. If you specify <code>launchTemplate</code>, then don't
     * specify <code>diskSize</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline bool DiskSizeHasBeenSet() const { return m_diskSizeHasBeenSet; }

    /**
     * <p>The root device disk size (in GiB) for your node group instances. The default
     * disk size is 20 GiB. If you specify <code>launchTemplate</code>, then don't
     * specify <code>diskSize</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline void SetDiskSize(int value) { m_diskSizeHasBeenSet = true; m_diskSize = value; }

    /**
     * <p>The root device disk size (in GiB) for your node group instances. The default
     * disk size is 20 GiB. If you specify <code>launchTemplate</code>, then don't
     * specify <code>diskSize</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& WithDiskSize(int value) { SetDiskSize(value); return *this;}


    /**
     * <p>The subnets to use for the Auto Scaling group that is created for your node
     * group. These subnets must have the tag key
     * <code>kubernetes.io/cluster/CLUSTER_NAME</code> with a value of
     * <code>shared</code>, where <code>CLUSTER_NAME</code> is replaced with the name
     * of your cluster. If you specify <code>launchTemplate</code>, then don't specify
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateNetworkInterface.html">
     * <code>SubnetId</code> </a> in your launch template, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The subnets to use for the Auto Scaling group that is created for your node
     * group. These subnets must have the tag key
     * <code>kubernetes.io/cluster/CLUSTER_NAME</code> with a value of
     * <code>shared</code>, where <code>CLUSTER_NAME</code> is replaced with the name
     * of your cluster. If you specify <code>launchTemplate</code>, then don't specify
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateNetworkInterface.html">
     * <code>SubnetId</code> </a> in your launch template, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>The subnets to use for the Auto Scaling group that is created for your node
     * group. These subnets must have the tag key
     * <code>kubernetes.io/cluster/CLUSTER_NAME</code> with a value of
     * <code>shared</code>, where <code>CLUSTER_NAME</code> is replaced with the name
     * of your cluster. If you specify <code>launchTemplate</code>, then don't specify
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateNetworkInterface.html">
     * <code>SubnetId</code> </a> in your launch template, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The subnets to use for the Auto Scaling group that is created for your node
     * group. These subnets must have the tag key
     * <code>kubernetes.io/cluster/CLUSTER_NAME</code> with a value of
     * <code>shared</code>, where <code>CLUSTER_NAME</code> is replaced with the name
     * of your cluster. If you specify <code>launchTemplate</code>, then don't specify
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateNetworkInterface.html">
     * <code>SubnetId</code> </a> in your launch template, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>The subnets to use for the Auto Scaling group that is created for your node
     * group. These subnets must have the tag key
     * <code>kubernetes.io/cluster/CLUSTER_NAME</code> with a value of
     * <code>shared</code>, where <code>CLUSTER_NAME</code> is replaced with the name
     * of your cluster. If you specify <code>launchTemplate</code>, then don't specify
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateNetworkInterface.html">
     * <code>SubnetId</code> </a> in your launch template, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The subnets to use for the Auto Scaling group that is created for your node
     * group. These subnets must have the tag key
     * <code>kubernetes.io/cluster/CLUSTER_NAME</code> with a value of
     * <code>shared</code>, where <code>CLUSTER_NAME</code> is replaced with the name
     * of your cluster. If you specify <code>launchTemplate</code>, then don't specify
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateNetworkInterface.html">
     * <code>SubnetId</code> </a> in your launch template, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>The subnets to use for the Auto Scaling group that is created for your node
     * group. These subnets must have the tag key
     * <code>kubernetes.io/cluster/CLUSTER_NAME</code> with a value of
     * <code>shared</code>, where <code>CLUSTER_NAME</code> is replaced with the name
     * of your cluster. If you specify <code>launchTemplate</code>, then don't specify
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateNetworkInterface.html">
     * <code>SubnetId</code> </a> in your launch template, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The subnets to use for the Auto Scaling group that is created for your node
     * group. These subnets must have the tag key
     * <code>kubernetes.io/cluster/CLUSTER_NAME</code> with a value of
     * <code>shared</code>, where <code>CLUSTER_NAME</code> is replaced with the name
     * of your cluster. If you specify <code>launchTemplate</code>, then don't specify
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateNetworkInterface.html">
     * <code>SubnetId</code> </a> in your launch template, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>The subnets to use for the Auto Scaling group that is created for your node
     * group. These subnets must have the tag key
     * <code>kubernetes.io/cluster/CLUSTER_NAME</code> with a value of
     * <code>shared</code>, where <code>CLUSTER_NAME</code> is replaced with the name
     * of your cluster. If you specify <code>launchTemplate</code>, then don't specify
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateNetworkInterface.html">
     * <code>SubnetId</code> </a> in your launch template, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }


    /**
     * <p>The instance type to use for your node group. You can specify a single
     * instance type for a node group. The default value for <code>instanceTypes</code>
     * is <code>t3.medium</code>. If you choose a GPU instance type, be sure to specify
     * <code>AL2_x86_64_GPU</code> with the <code>amiType</code> parameter. If you
     * specify <code>launchTemplate</code>, then don't specify
     * <code>instanceTypes</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTypes() const{ return m_instanceTypes; }

    /**
     * <p>The instance type to use for your node group. You can specify a single
     * instance type for a node group. The default value for <code>instanceTypes</code>
     * is <code>t3.medium</code>. If you choose a GPU instance type, be sure to specify
     * <code>AL2_x86_64_GPU</code> with the <code>amiType</code> parameter. If you
     * specify <code>launchTemplate</code>, then don't specify
     * <code>instanceTypes</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }

    /**
     * <p>The instance type to use for your node group. You can specify a single
     * instance type for a node group. The default value for <code>instanceTypes</code>
     * is <code>t3.medium</code>. If you choose a GPU instance type, be sure to specify
     * <code>AL2_x86_64_GPU</code> with the <code>amiType</code> parameter. If you
     * specify <code>launchTemplate</code>, then don't specify
     * <code>instanceTypes</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline void SetInstanceTypes(const Aws::Vector<Aws::String>& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = value; }

    /**
     * <p>The instance type to use for your node group. You can specify a single
     * instance type for a node group. The default value for <code>instanceTypes</code>
     * is <code>t3.medium</code>. If you choose a GPU instance type, be sure to specify
     * <code>AL2_x86_64_GPU</code> with the <code>amiType</code> parameter. If you
     * specify <code>launchTemplate</code>, then don't specify
     * <code>instanceTypes</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline void SetInstanceTypes(Aws::Vector<Aws::String>&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::move(value); }

    /**
     * <p>The instance type to use for your node group. You can specify a single
     * instance type for a node group. The default value for <code>instanceTypes</code>
     * is <code>t3.medium</code>. If you choose a GPU instance type, be sure to specify
     * <code>AL2_x86_64_GPU</code> with the <code>amiType</code> parameter. If you
     * specify <code>launchTemplate</code>, then don't specify
     * <code>instanceTypes</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& WithInstanceTypes(const Aws::Vector<Aws::String>& value) { SetInstanceTypes(value); return *this;}

    /**
     * <p>The instance type to use for your node group. You can specify a single
     * instance type for a node group. The default value for <code>instanceTypes</code>
     * is <code>t3.medium</code>. If you choose a GPU instance type, be sure to specify
     * <code>AL2_x86_64_GPU</code> with the <code>amiType</code> parameter. If you
     * specify <code>launchTemplate</code>, then don't specify
     * <code>instanceTypes</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& WithInstanceTypes(Aws::Vector<Aws::String>&& value) { SetInstanceTypes(std::move(value)); return *this;}

    /**
     * <p>The instance type to use for your node group. You can specify a single
     * instance type for a node group. The default value for <code>instanceTypes</code>
     * is <code>t3.medium</code>. If you choose a GPU instance type, be sure to specify
     * <code>AL2_x86_64_GPU</code> with the <code>amiType</code> parameter. If you
     * specify <code>launchTemplate</code>, then don't specify
     * <code>instanceTypes</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& AddInstanceTypes(const Aws::String& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }

    /**
     * <p>The instance type to use for your node group. You can specify a single
     * instance type for a node group. The default value for <code>instanceTypes</code>
     * is <code>t3.medium</code>. If you choose a GPU instance type, be sure to specify
     * <code>AL2_x86_64_GPU</code> with the <code>amiType</code> parameter. If you
     * specify <code>launchTemplate</code>, then don't specify
     * <code>instanceTypes</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& AddInstanceTypes(Aws::String&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The instance type to use for your node group. You can specify a single
     * instance type for a node group. The default value for <code>instanceTypes</code>
     * is <code>t3.medium</code>. If you choose a GPU instance type, be sure to specify
     * <code>AL2_x86_64_GPU</code> with the <code>amiType</code> parameter. If you
     * specify <code>launchTemplate</code>, then don't specify
     * <code>instanceTypes</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& AddInstanceTypes(const char* value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }


    /**
     * <p>The AMI type for your node group. GPU instance types should use the
     * <code>AL2_x86_64_GPU</code> AMI type. Non-GPU instances should use the
     * <code>AL2_x86_64</code> AMI type. Arm instances should use the
     * <code>AL2_ARM_64</code> AMI type. All types use the Amazon EKS-optimized Amazon
     * Linux 2 AMI. If you specify <code>launchTemplate</code>, and your launch
     * template uses a custom AMI, then don't specify <code>amiType</code>, or the node
     * group deployment will fail. For more information about using launch templates
     * with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline const AMITypes& GetAmiType() const{ return m_amiType; }

    /**
     * <p>The AMI type for your node group. GPU instance types should use the
     * <code>AL2_x86_64_GPU</code> AMI type. Non-GPU instances should use the
     * <code>AL2_x86_64</code> AMI type. Arm instances should use the
     * <code>AL2_ARM_64</code> AMI type. All types use the Amazon EKS-optimized Amazon
     * Linux 2 AMI. If you specify <code>launchTemplate</code>, and your launch
     * template uses a custom AMI, then don't specify <code>amiType</code>, or the node
     * group deployment will fail. For more information about using launch templates
     * with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline bool AmiTypeHasBeenSet() const { return m_amiTypeHasBeenSet; }

    /**
     * <p>The AMI type for your node group. GPU instance types should use the
     * <code>AL2_x86_64_GPU</code> AMI type. Non-GPU instances should use the
     * <code>AL2_x86_64</code> AMI type. Arm instances should use the
     * <code>AL2_ARM_64</code> AMI type. All types use the Amazon EKS-optimized Amazon
     * Linux 2 AMI. If you specify <code>launchTemplate</code>, and your launch
     * template uses a custom AMI, then don't specify <code>amiType</code>, or the node
     * group deployment will fail. For more information about using launch templates
     * with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline void SetAmiType(const AMITypes& value) { m_amiTypeHasBeenSet = true; m_amiType = value; }

    /**
     * <p>The AMI type for your node group. GPU instance types should use the
     * <code>AL2_x86_64_GPU</code> AMI type. Non-GPU instances should use the
     * <code>AL2_x86_64</code> AMI type. Arm instances should use the
     * <code>AL2_ARM_64</code> AMI type. All types use the Amazon EKS-optimized Amazon
     * Linux 2 AMI. If you specify <code>launchTemplate</code>, and your launch
     * template uses a custom AMI, then don't specify <code>amiType</code>, or the node
     * group deployment will fail. For more information about using launch templates
     * with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline void SetAmiType(AMITypes&& value) { m_amiTypeHasBeenSet = true; m_amiType = std::move(value); }

    /**
     * <p>The AMI type for your node group. GPU instance types should use the
     * <code>AL2_x86_64_GPU</code> AMI type. Non-GPU instances should use the
     * <code>AL2_x86_64</code> AMI type. Arm instances should use the
     * <code>AL2_ARM_64</code> AMI type. All types use the Amazon EKS-optimized Amazon
     * Linux 2 AMI. If you specify <code>launchTemplate</code>, and your launch
     * template uses a custom AMI, then don't specify <code>amiType</code>, or the node
     * group deployment will fail. For more information about using launch templates
     * with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& WithAmiType(const AMITypes& value) { SetAmiType(value); return *this;}

    /**
     * <p>The AMI type for your node group. GPU instance types should use the
     * <code>AL2_x86_64_GPU</code> AMI type. Non-GPU instances should use the
     * <code>AL2_x86_64</code> AMI type. Arm instances should use the
     * <code>AL2_ARM_64</code> AMI type. All types use the Amazon EKS-optimized Amazon
     * Linux 2 AMI. If you specify <code>launchTemplate</code>, and your launch
     * template uses a custom AMI, then don't specify <code>amiType</code>, or the node
     * group deployment will fail. For more information about using launch templates
     * with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& WithAmiType(AMITypes&& value) { SetAmiType(std::move(value)); return *this;}


    /**
     * <p>The remote access (SSH) configuration to use with your node group. If you
     * specify <code>launchTemplate</code>, then don't specify
     * <code>remoteAccess</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline const RemoteAccessConfig& GetRemoteAccess() const{ return m_remoteAccess; }

    /**
     * <p>The remote access (SSH) configuration to use with your node group. If you
     * specify <code>launchTemplate</code>, then don't specify
     * <code>remoteAccess</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline bool RemoteAccessHasBeenSet() const { return m_remoteAccessHasBeenSet; }

    /**
     * <p>The remote access (SSH) configuration to use with your node group. If you
     * specify <code>launchTemplate</code>, then don't specify
     * <code>remoteAccess</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline void SetRemoteAccess(const RemoteAccessConfig& value) { m_remoteAccessHasBeenSet = true; m_remoteAccess = value; }

    /**
     * <p>The remote access (SSH) configuration to use with your node group. If you
     * specify <code>launchTemplate</code>, then don't specify
     * <code>remoteAccess</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline void SetRemoteAccess(RemoteAccessConfig&& value) { m_remoteAccessHasBeenSet = true; m_remoteAccess = std::move(value); }

    /**
     * <p>The remote access (SSH) configuration to use with your node group. If you
     * specify <code>launchTemplate</code>, then don't specify
     * <code>remoteAccess</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& WithRemoteAccess(const RemoteAccessConfig& value) { SetRemoteAccess(value); return *this;}

    /**
     * <p>The remote access (SSH) configuration to use with your node group. If you
     * specify <code>launchTemplate</code>, then don't specify
     * <code>remoteAccess</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& WithRemoteAccess(RemoteAccessConfig&& value) { SetRemoteAccess(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to associate with your node
     * group. The Amazon EKS worker node <code>kubelet</code> daemon makes calls to AWS
     * APIs on your behalf. Worker nodes receive permissions for these API calls
     * through an IAM instance profile and associated policies. Before you can launch
     * worker nodes and register them into a cluster, you must create an IAM role for
     * those worker nodes to use when they are launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/worker_node_IAM_role.html">Amazon
     * EKS Worker Node IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>. If
     * you specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_IamInstanceProfile.html">
     * <code>IamInstanceProfile</code> </a> in your launch template, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline const Aws::String& GetNodeRole() const{ return m_nodeRole; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to associate with your node
     * group. The Amazon EKS worker node <code>kubelet</code> daemon makes calls to AWS
     * APIs on your behalf. Worker nodes receive permissions for these API calls
     * through an IAM instance profile and associated policies. Before you can launch
     * worker nodes and register them into a cluster, you must create an IAM role for
     * those worker nodes to use when they are launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/worker_node_IAM_role.html">Amazon
     * EKS Worker Node IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>. If
     * you specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_IamInstanceProfile.html">
     * <code>IamInstanceProfile</code> </a> in your launch template, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline bool NodeRoleHasBeenSet() const { return m_nodeRoleHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to associate with your node
     * group. The Amazon EKS worker node <code>kubelet</code> daemon makes calls to AWS
     * APIs on your behalf. Worker nodes receive permissions for these API calls
     * through an IAM instance profile and associated policies. Before you can launch
     * worker nodes and register them into a cluster, you must create an IAM role for
     * those worker nodes to use when they are launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/worker_node_IAM_role.html">Amazon
     * EKS Worker Node IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>. If
     * you specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_IamInstanceProfile.html">
     * <code>IamInstanceProfile</code> </a> in your launch template, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline void SetNodeRole(const Aws::String& value) { m_nodeRoleHasBeenSet = true; m_nodeRole = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to associate with your node
     * group. The Amazon EKS worker node <code>kubelet</code> daemon makes calls to AWS
     * APIs on your behalf. Worker nodes receive permissions for these API calls
     * through an IAM instance profile and associated policies. Before you can launch
     * worker nodes and register them into a cluster, you must create an IAM role for
     * those worker nodes to use when they are launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/worker_node_IAM_role.html">Amazon
     * EKS Worker Node IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>. If
     * you specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_IamInstanceProfile.html">
     * <code>IamInstanceProfile</code> </a> in your launch template, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline void SetNodeRole(Aws::String&& value) { m_nodeRoleHasBeenSet = true; m_nodeRole = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to associate with your node
     * group. The Amazon EKS worker node <code>kubelet</code> daemon makes calls to AWS
     * APIs on your behalf. Worker nodes receive permissions for these API calls
     * through an IAM instance profile and associated policies. Before you can launch
     * worker nodes and register them into a cluster, you must create an IAM role for
     * those worker nodes to use when they are launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/worker_node_IAM_role.html">Amazon
     * EKS Worker Node IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>. If
     * you specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_IamInstanceProfile.html">
     * <code>IamInstanceProfile</code> </a> in your launch template, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline void SetNodeRole(const char* value) { m_nodeRoleHasBeenSet = true; m_nodeRole.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to associate with your node
     * group. The Amazon EKS worker node <code>kubelet</code> daemon makes calls to AWS
     * APIs on your behalf. Worker nodes receive permissions for these API calls
     * through an IAM instance profile and associated policies. Before you can launch
     * worker nodes and register them into a cluster, you must create an IAM role for
     * those worker nodes to use when they are launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/worker_node_IAM_role.html">Amazon
     * EKS Worker Node IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>. If
     * you specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_IamInstanceProfile.html">
     * <code>IamInstanceProfile</code> </a> in your launch template, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& WithNodeRole(const Aws::String& value) { SetNodeRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to associate with your node
     * group. The Amazon EKS worker node <code>kubelet</code> daemon makes calls to AWS
     * APIs on your behalf. Worker nodes receive permissions for these API calls
     * through an IAM instance profile and associated policies. Before you can launch
     * worker nodes and register them into a cluster, you must create an IAM role for
     * those worker nodes to use when they are launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/worker_node_IAM_role.html">Amazon
     * EKS Worker Node IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>. If
     * you specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_IamInstanceProfile.html">
     * <code>IamInstanceProfile</code> </a> in your launch template, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& WithNodeRole(Aws::String&& value) { SetNodeRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to associate with your node
     * group. The Amazon EKS worker node <code>kubelet</code> daemon makes calls to AWS
     * APIs on your behalf. Worker nodes receive permissions for these API calls
     * through an IAM instance profile and associated policies. Before you can launch
     * worker nodes and register them into a cluster, you must create an IAM role for
     * those worker nodes to use when they are launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/worker_node_IAM_role.html">Amazon
     * EKS Worker Node IAM Role</a> in the <i> <i>Amazon EKS User Guide</i> </i>. If
     * you specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_IamInstanceProfile.html">
     * <code>IamInstanceProfile</code> </a> in your launch template, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& WithNodeRole(const char* value) { SetNodeRole(value); return *this;}


    /**
     * <p>The Kubernetes labels to be applied to the nodes in the node group when they
     * are created.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLabels() const{ return m_labels; }

    /**
     * <p>The Kubernetes labels to be applied to the nodes in the node group when they
     * are created.</p>
     */
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }

    /**
     * <p>The Kubernetes labels to be applied to the nodes in the node group when they
     * are created.</p>
     */
    inline void SetLabels(const Aws::Map<Aws::String, Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }

    /**
     * <p>The Kubernetes labels to be applied to the nodes in the node group when they
     * are created.</p>
     */
    inline void SetLabels(Aws::Map<Aws::String, Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }

    /**
     * <p>The Kubernetes labels to be applied to the nodes in the node group when they
     * are created.</p>
     */
    inline CreateNodegroupRequest& WithLabels(const Aws::Map<Aws::String, Aws::String>& value) { SetLabels(value); return *this;}

    /**
     * <p>The Kubernetes labels to be applied to the nodes in the node group when they
     * are created.</p>
     */
    inline CreateNodegroupRequest& WithLabels(Aws::Map<Aws::String, Aws::String>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>The Kubernetes labels to be applied to the nodes in the node group when they
     * are created.</p>
     */
    inline CreateNodegroupRequest& AddLabels(const Aws::String& key, const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, value); return *this; }

    /**
     * <p>The Kubernetes labels to be applied to the nodes in the node group when they
     * are created.</p>
     */
    inline CreateNodegroupRequest& AddLabels(Aws::String&& key, const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Kubernetes labels to be applied to the nodes in the node group when they
     * are created.</p>
     */
    inline CreateNodegroupRequest& AddLabels(const Aws::String& key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Kubernetes labels to be applied to the nodes in the node group when they
     * are created.</p>
     */
    inline CreateNodegroupRequest& AddLabels(Aws::String&& key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The Kubernetes labels to be applied to the nodes in the node group when they
     * are created.</p>
     */
    inline CreateNodegroupRequest& AddLabels(const char* key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Kubernetes labels to be applied to the nodes in the node group when they
     * are created.</p>
     */
    inline CreateNodegroupRequest& AddLabels(Aws::String&& key, const char* value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Kubernetes labels to be applied to the nodes in the node group when they
     * are created.</p>
     */
    inline CreateNodegroupRequest& AddLabels(const char* key, const char* value) { m_labelsHasBeenSet = true; m_labels.emplace(key, value); return *this; }


    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline CreateNodegroupRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline CreateNodegroupRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline CreateNodegroupRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline CreateNodegroupRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline CreateNodegroupRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline CreateNodegroupRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline CreateNodegroupRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline CreateNodegroupRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value, both of which
     * you define. Node group tags do not propagate to any other resources associated
     * with the node group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline CreateNodegroupRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


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
    inline CreateNodegroupRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateNodegroupRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateNodegroupRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>An object representing a node group's launch template specification. If
     * specified, then do not specify <code>instanceTypes</code>,
     * <code>diskSize</code>, or <code>remoteAccess</code> and make sure that the
     * launch template meets the requirements in
     * <code>launchTemplateSpecification</code>.</p>
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplate() const{ return m_launchTemplate; }

    /**
     * <p>An object representing a node group's launch template specification. If
     * specified, then do not specify <code>instanceTypes</code>,
     * <code>diskSize</code>, or <code>remoteAccess</code> and make sure that the
     * launch template meets the requirements in
     * <code>launchTemplateSpecification</code>.</p>
     */
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }

    /**
     * <p>An object representing a node group's launch template specification. If
     * specified, then do not specify <code>instanceTypes</code>,
     * <code>diskSize</code>, or <code>remoteAccess</code> and make sure that the
     * launch template meets the requirements in
     * <code>launchTemplateSpecification</code>.</p>
     */
    inline void SetLaunchTemplate(const LaunchTemplateSpecification& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = value; }

    /**
     * <p>An object representing a node group's launch template specification. If
     * specified, then do not specify <code>instanceTypes</code>,
     * <code>diskSize</code>, or <code>remoteAccess</code> and make sure that the
     * launch template meets the requirements in
     * <code>launchTemplateSpecification</code>.</p>
     */
    inline void SetLaunchTemplate(LaunchTemplateSpecification&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::move(value); }

    /**
     * <p>An object representing a node group's launch template specification. If
     * specified, then do not specify <code>instanceTypes</code>,
     * <code>diskSize</code>, or <code>remoteAccess</code> and make sure that the
     * launch template meets the requirements in
     * <code>launchTemplateSpecification</code>.</p>
     */
    inline CreateNodegroupRequest& WithLaunchTemplate(const LaunchTemplateSpecification& value) { SetLaunchTemplate(value); return *this;}

    /**
     * <p>An object representing a node group's launch template specification. If
     * specified, then do not specify <code>instanceTypes</code>,
     * <code>diskSize</code>, or <code>remoteAccess</code> and make sure that the
     * launch template meets the requirements in
     * <code>launchTemplateSpecification</code>.</p>
     */
    inline CreateNodegroupRequest& WithLaunchTemplate(LaunchTemplateSpecification&& value) { SetLaunchTemplate(std::move(value)); return *this;}


    /**
     * <p>The Kubernetes version to use for your managed nodes. By default, the
     * Kubernetes version of the cluster is used, and this is the only accepted
     * specified value. If you specify <code>launchTemplate</code>, and your launch
     * template uses a custom AMI, then don't specify <code>version</code>, or the node
     * group deployment will fail. For more information about using launch templates
     * with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The Kubernetes version to use for your managed nodes. By default, the
     * Kubernetes version of the cluster is used, and this is the only accepted
     * specified value. If you specify <code>launchTemplate</code>, and your launch
     * template uses a custom AMI, then don't specify <code>version</code>, or the node
     * group deployment will fail. For more information about using launch templates
     * with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The Kubernetes version to use for your managed nodes. By default, the
     * Kubernetes version of the cluster is used, and this is the only accepted
     * specified value. If you specify <code>launchTemplate</code>, and your launch
     * template uses a custom AMI, then don't specify <code>version</code>, or the node
     * group deployment will fail. For more information about using launch templates
     * with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The Kubernetes version to use for your managed nodes. By default, the
     * Kubernetes version of the cluster is used, and this is the only accepted
     * specified value. If you specify <code>launchTemplate</code>, and your launch
     * template uses a custom AMI, then don't specify <code>version</code>, or the node
     * group deployment will fail. For more information about using launch templates
     * with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The Kubernetes version to use for your managed nodes. By default, the
     * Kubernetes version of the cluster is used, and this is the only accepted
     * specified value. If you specify <code>launchTemplate</code>, and your launch
     * template uses a custom AMI, then don't specify <code>version</code>, or the node
     * group deployment will fail. For more information about using launch templates
     * with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The Kubernetes version to use for your managed nodes. By default, the
     * Kubernetes version of the cluster is used, and this is the only accepted
     * specified value. If you specify <code>launchTemplate</code>, and your launch
     * template uses a custom AMI, then don't specify <code>version</code>, or the node
     * group deployment will fail. For more information about using launch templates
     * with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The Kubernetes version to use for your managed nodes. By default, the
     * Kubernetes version of the cluster is used, and this is the only accepted
     * specified value. If you specify <code>launchTemplate</code>, and your launch
     * template uses a custom AMI, then don't specify <code>version</code>, or the node
     * group deployment will fail. For more information about using launch templates
     * with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The Kubernetes version to use for your managed nodes. By default, the
     * Kubernetes version of the cluster is used, and this is the only accepted
     * specified value. If you specify <code>launchTemplate</code>, and your launch
     * template uses a custom AMI, then don't specify <code>version</code>, or the node
     * group deployment will fail. For more information about using launch templates
     * with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The AMI version of the Amazon EKS-optimized AMI to use with your node group.
     * By default, the latest available AMI version for the node group's current
     * Kubernetes version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS-Optimized Linux AMI Versions</a> in the <i>Amazon EKS User Guide</i>. If you
     * specify <code>launchTemplate</code>, and your launch template uses a custom AMI,
     * then don't specify <code>releaseVersion</code>, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline const Aws::String& GetReleaseVersion() const{ return m_releaseVersion; }

    /**
     * <p>The AMI version of the Amazon EKS-optimized AMI to use with your node group.
     * By default, the latest available AMI version for the node group's current
     * Kubernetes version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS-Optimized Linux AMI Versions</a> in the <i>Amazon EKS User Guide</i>. If you
     * specify <code>launchTemplate</code>, and your launch template uses a custom AMI,
     * then don't specify <code>releaseVersion</code>, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline bool ReleaseVersionHasBeenSet() const { return m_releaseVersionHasBeenSet; }

    /**
     * <p>The AMI version of the Amazon EKS-optimized AMI to use with your node group.
     * By default, the latest available AMI version for the node group's current
     * Kubernetes version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS-Optimized Linux AMI Versions</a> in the <i>Amazon EKS User Guide</i>. If you
     * specify <code>launchTemplate</code>, and your launch template uses a custom AMI,
     * then don't specify <code>releaseVersion</code>, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline void SetReleaseVersion(const Aws::String& value) { m_releaseVersionHasBeenSet = true; m_releaseVersion = value; }

    /**
     * <p>The AMI version of the Amazon EKS-optimized AMI to use with your node group.
     * By default, the latest available AMI version for the node group's current
     * Kubernetes version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS-Optimized Linux AMI Versions</a> in the <i>Amazon EKS User Guide</i>. If you
     * specify <code>launchTemplate</code>, and your launch template uses a custom AMI,
     * then don't specify <code>releaseVersion</code>, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline void SetReleaseVersion(Aws::String&& value) { m_releaseVersionHasBeenSet = true; m_releaseVersion = std::move(value); }

    /**
     * <p>The AMI version of the Amazon EKS-optimized AMI to use with your node group.
     * By default, the latest available AMI version for the node group's current
     * Kubernetes version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS-Optimized Linux AMI Versions</a> in the <i>Amazon EKS User Guide</i>. If you
     * specify <code>launchTemplate</code>, and your launch template uses a custom AMI,
     * then don't specify <code>releaseVersion</code>, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline void SetReleaseVersion(const char* value) { m_releaseVersionHasBeenSet = true; m_releaseVersion.assign(value); }

    /**
     * <p>The AMI version of the Amazon EKS-optimized AMI to use with your node group.
     * By default, the latest available AMI version for the node group's current
     * Kubernetes version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS-Optimized Linux AMI Versions</a> in the <i>Amazon EKS User Guide</i>. If you
     * specify <code>launchTemplate</code>, and your launch template uses a custom AMI,
     * then don't specify <code>releaseVersion</code>, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& WithReleaseVersion(const Aws::String& value) { SetReleaseVersion(value); return *this;}

    /**
     * <p>The AMI version of the Amazon EKS-optimized AMI to use with your node group.
     * By default, the latest available AMI version for the node group's current
     * Kubernetes version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS-Optimized Linux AMI Versions</a> in the <i>Amazon EKS User Guide</i>. If you
     * specify <code>launchTemplate</code>, and your launch template uses a custom AMI,
     * then don't specify <code>releaseVersion</code>, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& WithReleaseVersion(Aws::String&& value) { SetReleaseVersion(std::move(value)); return *this;}

    /**
     * <p>The AMI version of the Amazon EKS-optimized AMI to use with your node group.
     * By default, the latest available AMI version for the node group's current
     * Kubernetes version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS-Optimized Linux AMI Versions</a> in the <i>Amazon EKS User Guide</i>. If you
     * specify <code>launchTemplate</code>, and your launch template uses a custom AMI,
     * then don't specify <code>releaseVersion</code>, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the Amazon EKS User Guide.</p>
     */
    inline CreateNodegroupRequest& WithReleaseVersion(const char* value) { SetReleaseVersion(value); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet;

    Aws::String m_nodegroupName;
    bool m_nodegroupNameHasBeenSet;

    NodegroupScalingConfig m_scalingConfig;
    bool m_scalingConfigHasBeenSet;

    int m_diskSize;
    bool m_diskSizeHasBeenSet;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet;

    Aws::Vector<Aws::String> m_instanceTypes;
    bool m_instanceTypesHasBeenSet;

    AMITypes m_amiType;
    bool m_amiTypeHasBeenSet;

    RemoteAccessConfig m_remoteAccess;
    bool m_remoteAccessHasBeenSet;

    Aws::String m_nodeRole;
    bool m_nodeRoleHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_labels;
    bool m_labelsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    LaunchTemplateSpecification m_launchTemplate;
    bool m_launchTemplateHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    Aws::String m_releaseVersion;
    bool m_releaseVersionHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
