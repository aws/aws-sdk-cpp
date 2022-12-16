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
#include <aws/eks/model/NodegroupUpdateConfig.h>
#include <aws/eks/model/CapacityTypes.h>
#include <aws/eks/model/Taint.h>
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
  class CreateNodegroupRequest : public EKSRequest
  {
  public:
    AWS_EKS_API CreateNodegroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNodegroup"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


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
     * disk size is 20 GiB for Linux and Bottlerocket. The default disk size is 50 GiB
     * for Windows. If you specify <code>launchTemplate</code>, then don't specify
     * <code>diskSize</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline int GetDiskSize() const{ return m_diskSize; }

    /**
     * <p>The root device disk size (in GiB) for your node group instances. The default
     * disk size is 20 GiB for Linux and Bottlerocket. The default disk size is 50 GiB
     * for Windows. If you specify <code>launchTemplate</code>, then don't specify
     * <code>diskSize</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline bool DiskSizeHasBeenSet() const { return m_diskSizeHasBeenSet; }

    /**
     * <p>The root device disk size (in GiB) for your node group instances. The default
     * disk size is 20 GiB for Linux and Bottlerocket. The default disk size is 50 GiB
     * for Windows. If you specify <code>launchTemplate</code>, then don't specify
     * <code>diskSize</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetDiskSize(int value) { m_diskSizeHasBeenSet = true; m_diskSize = value; }

    /**
     * <p>The root device disk size (in GiB) for your node group instances. The default
     * disk size is 20 GiB for Linux and Bottlerocket. The default disk size is 50 GiB
     * for Windows. If you specify <code>launchTemplate</code>, then don't specify
     * <code>diskSize</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateNodegroupRequest& WithDiskSize(int value) { SetDiskSize(value); return *this;}


    /**
     * <p>The subnets to use for the Auto Scaling group that is created for your node
     * group. If you specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateNetworkInterface.html">
     * <code>SubnetId</code> </a> in your launch template, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The subnets to use for the Auto Scaling group that is created for your node
     * group. If you specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateNetworkInterface.html">
     * <code>SubnetId</code> </a> in your launch template, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>The subnets to use for the Auto Scaling group that is created for your node
     * group. If you specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateNetworkInterface.html">
     * <code>SubnetId</code> </a> in your launch template, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The subnets to use for the Auto Scaling group that is created for your node
     * group. If you specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateNetworkInterface.html">
     * <code>SubnetId</code> </a> in your launch template, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>The subnets to use for the Auto Scaling group that is created for your node
     * group. If you specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateNetworkInterface.html">
     * <code>SubnetId</code> </a> in your launch template, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateNodegroupRequest& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The subnets to use for the Auto Scaling group that is created for your node
     * group. If you specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateNetworkInterface.html">
     * <code>SubnetId</code> </a> in your launch template, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateNodegroupRequest& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>The subnets to use for the Auto Scaling group that is created for your node
     * group. If you specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateNetworkInterface.html">
     * <code>SubnetId</code> </a> in your launch template, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateNodegroupRequest& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The subnets to use for the Auto Scaling group that is created for your node
     * group. If you specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateNetworkInterface.html">
     * <code>SubnetId</code> </a> in your launch template, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateNodegroupRequest& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>The subnets to use for the Auto Scaling group that is created for your node
     * group. If you specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateNetworkInterface.html">
     * <code>SubnetId</code> </a> in your launch template, or the node group deployment
     * will fail. For more information about using launch templates with Amazon EKS,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateNodegroupRequest& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }


    /**
     * <p>Specify the instance types for a node group. If you specify a GPU instance
     * type, make sure to also specify an applicable GPU AMI type with the
     * <code>amiType</code> parameter. If you specify <code>launchTemplate</code>, then
     * you can specify zero or one instance type in your launch template <i>or</i> you
     * can specify 0-20 instance types for <code>instanceTypes</code>. If however, you
     * specify an instance type in your launch template <i>and</i> specify any
     * <code>instanceTypes</code>, the node group deployment will fail. If you don't
     * specify an instance type in a launch template or for <code>instanceTypes</code>,
     * then <code>t3.medium</code> is used, by default. If you specify
     * <code>Spot</code> for <code>capacityType</code>, then we recommend specifying
     * multiple values for <code>instanceTypes</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/managed-node-groups.html#managed-node-group-capacity-types">Managed
     * node group capacity types</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTypes() const{ return m_instanceTypes; }

    /**
     * <p>Specify the instance types for a node group. If you specify a GPU instance
     * type, make sure to also specify an applicable GPU AMI type with the
     * <code>amiType</code> parameter. If you specify <code>launchTemplate</code>, then
     * you can specify zero or one instance type in your launch template <i>or</i> you
     * can specify 0-20 instance types for <code>instanceTypes</code>. If however, you
     * specify an instance type in your launch template <i>and</i> specify any
     * <code>instanceTypes</code>, the node group deployment will fail. If you don't
     * specify an instance type in a launch template or for <code>instanceTypes</code>,
     * then <code>t3.medium</code> is used, by default. If you specify
     * <code>Spot</code> for <code>capacityType</code>, then we recommend specifying
     * multiple values for <code>instanceTypes</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/managed-node-groups.html#managed-node-group-capacity-types">Managed
     * node group capacity types</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }

    /**
     * <p>Specify the instance types for a node group. If you specify a GPU instance
     * type, make sure to also specify an applicable GPU AMI type with the
     * <code>amiType</code> parameter. If you specify <code>launchTemplate</code>, then
     * you can specify zero or one instance type in your launch template <i>or</i> you
     * can specify 0-20 instance types for <code>instanceTypes</code>. If however, you
     * specify an instance type in your launch template <i>and</i> specify any
     * <code>instanceTypes</code>, the node group deployment will fail. If you don't
     * specify an instance type in a launch template or for <code>instanceTypes</code>,
     * then <code>t3.medium</code> is used, by default. If you specify
     * <code>Spot</code> for <code>capacityType</code>, then we recommend specifying
     * multiple values for <code>instanceTypes</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/managed-node-groups.html#managed-node-group-capacity-types">Managed
     * node group capacity types</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetInstanceTypes(const Aws::Vector<Aws::String>& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = value; }

    /**
     * <p>Specify the instance types for a node group. If you specify a GPU instance
     * type, make sure to also specify an applicable GPU AMI type with the
     * <code>amiType</code> parameter. If you specify <code>launchTemplate</code>, then
     * you can specify zero or one instance type in your launch template <i>or</i> you
     * can specify 0-20 instance types for <code>instanceTypes</code>. If however, you
     * specify an instance type in your launch template <i>and</i> specify any
     * <code>instanceTypes</code>, the node group deployment will fail. If you don't
     * specify an instance type in a launch template or for <code>instanceTypes</code>,
     * then <code>t3.medium</code> is used, by default. If you specify
     * <code>Spot</code> for <code>capacityType</code>, then we recommend specifying
     * multiple values for <code>instanceTypes</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/managed-node-groups.html#managed-node-group-capacity-types">Managed
     * node group capacity types</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetInstanceTypes(Aws::Vector<Aws::String>&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::move(value); }

    /**
     * <p>Specify the instance types for a node group. If you specify a GPU instance
     * type, make sure to also specify an applicable GPU AMI type with the
     * <code>amiType</code> parameter. If you specify <code>launchTemplate</code>, then
     * you can specify zero or one instance type in your launch template <i>or</i> you
     * can specify 0-20 instance types for <code>instanceTypes</code>. If however, you
     * specify an instance type in your launch template <i>and</i> specify any
     * <code>instanceTypes</code>, the node group deployment will fail. If you don't
     * specify an instance type in a launch template or for <code>instanceTypes</code>,
     * then <code>t3.medium</code> is used, by default. If you specify
     * <code>Spot</code> for <code>capacityType</code>, then we recommend specifying
     * multiple values for <code>instanceTypes</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/managed-node-groups.html#managed-node-group-capacity-types">Managed
     * node group capacity types</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateNodegroupRequest& WithInstanceTypes(const Aws::Vector<Aws::String>& value) { SetInstanceTypes(value); return *this;}

    /**
     * <p>Specify the instance types for a node group. If you specify a GPU instance
     * type, make sure to also specify an applicable GPU AMI type with the
     * <code>amiType</code> parameter. If you specify <code>launchTemplate</code>, then
     * you can specify zero or one instance type in your launch template <i>or</i> you
     * can specify 0-20 instance types for <code>instanceTypes</code>. If however, you
     * specify an instance type in your launch template <i>and</i> specify any
     * <code>instanceTypes</code>, the node group deployment will fail. If you don't
     * specify an instance type in a launch template or for <code>instanceTypes</code>,
     * then <code>t3.medium</code> is used, by default. If you specify
     * <code>Spot</code> for <code>capacityType</code>, then we recommend specifying
     * multiple values for <code>instanceTypes</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/managed-node-groups.html#managed-node-group-capacity-types">Managed
     * node group capacity types</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateNodegroupRequest& WithInstanceTypes(Aws::Vector<Aws::String>&& value) { SetInstanceTypes(std::move(value)); return *this;}

    /**
     * <p>Specify the instance types for a node group. If you specify a GPU instance
     * type, make sure to also specify an applicable GPU AMI type with the
     * <code>amiType</code> parameter. If you specify <code>launchTemplate</code>, then
     * you can specify zero or one instance type in your launch template <i>or</i> you
     * can specify 0-20 instance types for <code>instanceTypes</code>. If however, you
     * specify an instance type in your launch template <i>and</i> specify any
     * <code>instanceTypes</code>, the node group deployment will fail. If you don't
     * specify an instance type in a launch template or for <code>instanceTypes</code>,
     * then <code>t3.medium</code> is used, by default. If you specify
     * <code>Spot</code> for <code>capacityType</code>, then we recommend specifying
     * multiple values for <code>instanceTypes</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/managed-node-groups.html#managed-node-group-capacity-types">Managed
     * node group capacity types</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateNodegroupRequest& AddInstanceTypes(const Aws::String& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }

    /**
     * <p>Specify the instance types for a node group. If you specify a GPU instance
     * type, make sure to also specify an applicable GPU AMI type with the
     * <code>amiType</code> parameter. If you specify <code>launchTemplate</code>, then
     * you can specify zero or one instance type in your launch template <i>or</i> you
     * can specify 0-20 instance types for <code>instanceTypes</code>. If however, you
     * specify an instance type in your launch template <i>and</i> specify any
     * <code>instanceTypes</code>, the node group deployment will fail. If you don't
     * specify an instance type in a launch template or for <code>instanceTypes</code>,
     * then <code>t3.medium</code> is used, by default. If you specify
     * <code>Spot</code> for <code>capacityType</code>, then we recommend specifying
     * multiple values for <code>instanceTypes</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/managed-node-groups.html#managed-node-group-capacity-types">Managed
     * node group capacity types</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateNodegroupRequest& AddInstanceTypes(Aws::String&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>Specify the instance types for a node group. If you specify a GPU instance
     * type, make sure to also specify an applicable GPU AMI type with the
     * <code>amiType</code> parameter. If you specify <code>launchTemplate</code>, then
     * you can specify zero or one instance type in your launch template <i>or</i> you
     * can specify 0-20 instance types for <code>instanceTypes</code>. If however, you
     * specify an instance type in your launch template <i>and</i> specify any
     * <code>instanceTypes</code>, the node group deployment will fail. If you don't
     * specify an instance type in a launch template or for <code>instanceTypes</code>,
     * then <code>t3.medium</code> is used, by default. If you specify
     * <code>Spot</code> for <code>capacityType</code>, then we recommend specifying
     * multiple values for <code>instanceTypes</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/managed-node-groups.html#managed-node-group-capacity-types">Managed
     * node group capacity types</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateNodegroupRequest& AddInstanceTypes(const char* value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }


    /**
     * <p>The AMI type for your node group. If you specify <code>launchTemplate</code>,
     * and your launch template uses a custom AMI, then don't specify
     * <code>amiType</code>, or the node group deployment will fail. If your launch
     * template uses a Windows custom AMI, then add <code>eks:kube-proxy-windows</code>
     * to your Windows nodes <code>rolearn</code> in the <code>aws-auth</code>
     * <code>ConfigMap</code>. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const AMITypes& GetAmiType() const{ return m_amiType; }

    /**
     * <p>The AMI type for your node group. If you specify <code>launchTemplate</code>,
     * and your launch template uses a custom AMI, then don't specify
     * <code>amiType</code>, or the node group deployment will fail. If your launch
     * template uses a Windows custom AMI, then add <code>eks:kube-proxy-windows</code>
     * to your Windows nodes <code>rolearn</code> in the <code>aws-auth</code>
     * <code>ConfigMap</code>. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline bool AmiTypeHasBeenSet() const { return m_amiTypeHasBeenSet; }

    /**
     * <p>The AMI type for your node group. If you specify <code>launchTemplate</code>,
     * and your launch template uses a custom AMI, then don't specify
     * <code>amiType</code>, or the node group deployment will fail. If your launch
     * template uses a Windows custom AMI, then add <code>eks:kube-proxy-windows</code>
     * to your Windows nodes <code>rolearn</code> in the <code>aws-auth</code>
     * <code>ConfigMap</code>. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetAmiType(const AMITypes& value) { m_amiTypeHasBeenSet = true; m_amiType = value; }

    /**
     * <p>The AMI type for your node group. If you specify <code>launchTemplate</code>,
     * and your launch template uses a custom AMI, then don't specify
     * <code>amiType</code>, or the node group deployment will fail. If your launch
     * template uses a Windows custom AMI, then add <code>eks:kube-proxy-windows</code>
     * to your Windows nodes <code>rolearn</code> in the <code>aws-auth</code>
     * <code>ConfigMap</code>. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetAmiType(AMITypes&& value) { m_amiTypeHasBeenSet = true; m_amiType = std::move(value); }

    /**
     * <p>The AMI type for your node group. If you specify <code>launchTemplate</code>,
     * and your launch template uses a custom AMI, then don't specify
     * <code>amiType</code>, or the node group deployment will fail. If your launch
     * template uses a Windows custom AMI, then add <code>eks:kube-proxy-windows</code>
     * to your Windows nodes <code>rolearn</code> in the <code>aws-auth</code>
     * <code>ConfigMap</code>. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateNodegroupRequest& WithAmiType(const AMITypes& value) { SetAmiType(value); return *this;}

    /**
     * <p>The AMI type for your node group. If you specify <code>launchTemplate</code>,
     * and your launch template uses a custom AMI, then don't specify
     * <code>amiType</code>, or the node group deployment will fail. If your launch
     * template uses a Windows custom AMI, then add <code>eks:kube-proxy-windows</code>
     * to your Windows nodes <code>rolearn</code> in the <code>aws-auth</code>
     * <code>ConfigMap</code>. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateNodegroupRequest& WithAmiType(AMITypes&& value) { SetAmiType(std::move(value)); return *this;}


    /**
     * <p>The remote access configuration to use with your node group. For Linux, the
     * protocol is SSH. For Windows, the protocol is RDP. If you specify
     * <code>launchTemplate</code>, then don't specify <code>remoteAccess</code>, or
     * the node group deployment will fail. For more information about using launch
     * templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const RemoteAccessConfig& GetRemoteAccess() const{ return m_remoteAccess; }

    /**
     * <p>The remote access configuration to use with your node group. For Linux, the
     * protocol is SSH. For Windows, the protocol is RDP. If you specify
     * <code>launchTemplate</code>, then don't specify <code>remoteAccess</code>, or
     * the node group deployment will fail. For more information about using launch
     * templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline bool RemoteAccessHasBeenSet() const { return m_remoteAccessHasBeenSet; }

    /**
     * <p>The remote access configuration to use with your node group. For Linux, the
     * protocol is SSH. For Windows, the protocol is RDP. If you specify
     * <code>launchTemplate</code>, then don't specify <code>remoteAccess</code>, or
     * the node group deployment will fail. For more information about using launch
     * templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetRemoteAccess(const RemoteAccessConfig& value) { m_remoteAccessHasBeenSet = true; m_remoteAccess = value; }

    /**
     * <p>The remote access configuration to use with your node group. For Linux, the
     * protocol is SSH. For Windows, the protocol is RDP. If you specify
     * <code>launchTemplate</code>, then don't specify <code>remoteAccess</code>, or
     * the node group deployment will fail. For more information about using launch
     * templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetRemoteAccess(RemoteAccessConfig&& value) { m_remoteAccessHasBeenSet = true; m_remoteAccess = std::move(value); }

    /**
     * <p>The remote access configuration to use with your node group. For Linux, the
     * protocol is SSH. For Windows, the protocol is RDP. If you specify
     * <code>launchTemplate</code>, then don't specify <code>remoteAccess</code>, or
     * the node group deployment will fail. For more information about using launch
     * templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateNodegroupRequest& WithRemoteAccess(const RemoteAccessConfig& value) { SetRemoteAccess(value); return *this;}

    /**
     * <p>The remote access configuration to use with your node group. For Linux, the
     * protocol is SSH. For Windows, the protocol is RDP. If you specify
     * <code>launchTemplate</code>, then don't specify <code>remoteAccess</code>, or
     * the node group deployment will fail. For more information about using launch
     * templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateNodegroupRequest& WithRemoteAccess(RemoteAccessConfig&& value) { SetRemoteAccess(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to associate with your node
     * group. The Amazon EKS worker node <code>kubelet</code> daemon makes calls to
     * Amazon Web Services APIs on your behalf. Nodes receive permissions for these API
     * calls through an IAM instance profile and associated policies. Before you can
     * launch nodes and register them into a cluster, you must create an IAM role for
     * those nodes to use when they are launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/create-node-role.html">Amazon
     * EKS node IAM role</a> in the <i> <i>Amazon EKS User Guide</i> </i>. If you
     * specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_IamInstanceProfile.html">
     * <code>IamInstanceProfile</code> </a> in your launch template, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const Aws::String& GetNodeRole() const{ return m_nodeRole; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to associate with your node
     * group. The Amazon EKS worker node <code>kubelet</code> daemon makes calls to
     * Amazon Web Services APIs on your behalf. Nodes receive permissions for these API
     * calls through an IAM instance profile and associated policies. Before you can
     * launch nodes and register them into a cluster, you must create an IAM role for
     * those nodes to use when they are launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/create-node-role.html">Amazon
     * EKS node IAM role</a> in the <i> <i>Amazon EKS User Guide</i> </i>. If you
     * specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_IamInstanceProfile.html">
     * <code>IamInstanceProfile</code> </a> in your launch template, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline bool NodeRoleHasBeenSet() const { return m_nodeRoleHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to associate with your node
     * group. The Amazon EKS worker node <code>kubelet</code> daemon makes calls to
     * Amazon Web Services APIs on your behalf. Nodes receive permissions for these API
     * calls through an IAM instance profile and associated policies. Before you can
     * launch nodes and register them into a cluster, you must create an IAM role for
     * those nodes to use when they are launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/create-node-role.html">Amazon
     * EKS node IAM role</a> in the <i> <i>Amazon EKS User Guide</i> </i>. If you
     * specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_IamInstanceProfile.html">
     * <code>IamInstanceProfile</code> </a> in your launch template, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetNodeRole(const Aws::String& value) { m_nodeRoleHasBeenSet = true; m_nodeRole = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to associate with your node
     * group. The Amazon EKS worker node <code>kubelet</code> daemon makes calls to
     * Amazon Web Services APIs on your behalf. Nodes receive permissions for these API
     * calls through an IAM instance profile and associated policies. Before you can
     * launch nodes and register them into a cluster, you must create an IAM role for
     * those nodes to use when they are launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/create-node-role.html">Amazon
     * EKS node IAM role</a> in the <i> <i>Amazon EKS User Guide</i> </i>. If you
     * specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_IamInstanceProfile.html">
     * <code>IamInstanceProfile</code> </a> in your launch template, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetNodeRole(Aws::String&& value) { m_nodeRoleHasBeenSet = true; m_nodeRole = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to associate with your node
     * group. The Amazon EKS worker node <code>kubelet</code> daemon makes calls to
     * Amazon Web Services APIs on your behalf. Nodes receive permissions for these API
     * calls through an IAM instance profile and associated policies. Before you can
     * launch nodes and register them into a cluster, you must create an IAM role for
     * those nodes to use when they are launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/create-node-role.html">Amazon
     * EKS node IAM role</a> in the <i> <i>Amazon EKS User Guide</i> </i>. If you
     * specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_IamInstanceProfile.html">
     * <code>IamInstanceProfile</code> </a> in your launch template, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetNodeRole(const char* value) { m_nodeRoleHasBeenSet = true; m_nodeRole.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to associate with your node
     * group. The Amazon EKS worker node <code>kubelet</code> daemon makes calls to
     * Amazon Web Services APIs on your behalf. Nodes receive permissions for these API
     * calls through an IAM instance profile and associated policies. Before you can
     * launch nodes and register them into a cluster, you must create an IAM role for
     * those nodes to use when they are launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/create-node-role.html">Amazon
     * EKS node IAM role</a> in the <i> <i>Amazon EKS User Guide</i> </i>. If you
     * specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_IamInstanceProfile.html">
     * <code>IamInstanceProfile</code> </a> in your launch template, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateNodegroupRequest& WithNodeRole(const Aws::String& value) { SetNodeRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to associate with your node
     * group. The Amazon EKS worker node <code>kubelet</code> daemon makes calls to
     * Amazon Web Services APIs on your behalf. Nodes receive permissions for these API
     * calls through an IAM instance profile and associated policies. Before you can
     * launch nodes and register them into a cluster, you must create an IAM role for
     * those nodes to use when they are launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/create-node-role.html">Amazon
     * EKS node IAM role</a> in the <i> <i>Amazon EKS User Guide</i> </i>. If you
     * specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_IamInstanceProfile.html">
     * <code>IamInstanceProfile</code> </a> in your launch template, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateNodegroupRequest& WithNodeRole(Aws::String&& value) { SetNodeRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to associate with your node
     * group. The Amazon EKS worker node <code>kubelet</code> daemon makes calls to
     * Amazon Web Services APIs on your behalf. Nodes receive permissions for these API
     * calls through an IAM instance profile and associated policies. Before you can
     * launch nodes and register them into a cluster, you must create an IAM role for
     * those nodes to use when they are launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/create-node-role.html">Amazon
     * EKS node IAM role</a> in the <i> <i>Amazon EKS User Guide</i> </i>. If you
     * specify <code>launchTemplate</code>, then don't specify <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_IamInstanceProfile.html">
     * <code>IamInstanceProfile</code> </a> in your launch template, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
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
     * <p>The Kubernetes taints to be applied to the nodes in the node group. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/node-taints-managed-node-groups.html">Node
     * taints on managed node groups</a>.</p>
     */
    inline const Aws::Vector<Taint>& GetTaints() const{ return m_taints; }

    /**
     * <p>The Kubernetes taints to be applied to the nodes in the node group. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/node-taints-managed-node-groups.html">Node
     * taints on managed node groups</a>.</p>
     */
    inline bool TaintsHasBeenSet() const { return m_taintsHasBeenSet; }

    /**
     * <p>The Kubernetes taints to be applied to the nodes in the node group. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/node-taints-managed-node-groups.html">Node
     * taints on managed node groups</a>.</p>
     */
    inline void SetTaints(const Aws::Vector<Taint>& value) { m_taintsHasBeenSet = true; m_taints = value; }

    /**
     * <p>The Kubernetes taints to be applied to the nodes in the node group. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/node-taints-managed-node-groups.html">Node
     * taints on managed node groups</a>.</p>
     */
    inline void SetTaints(Aws::Vector<Taint>&& value) { m_taintsHasBeenSet = true; m_taints = std::move(value); }

    /**
     * <p>The Kubernetes taints to be applied to the nodes in the node group. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/node-taints-managed-node-groups.html">Node
     * taints on managed node groups</a>.</p>
     */
    inline CreateNodegroupRequest& WithTaints(const Aws::Vector<Taint>& value) { SetTaints(value); return *this;}

    /**
     * <p>The Kubernetes taints to be applied to the nodes in the node group. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/node-taints-managed-node-groups.html">Node
     * taints on managed node groups</a>.</p>
     */
    inline CreateNodegroupRequest& WithTaints(Aws::Vector<Taint>&& value) { SetTaints(std::move(value)); return *this;}

    /**
     * <p>The Kubernetes taints to be applied to the nodes in the node group. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/node-taints-managed-node-groups.html">Node
     * taints on managed node groups</a>.</p>
     */
    inline CreateNodegroupRequest& AddTaints(const Taint& value) { m_taintsHasBeenSet = true; m_taints.push_back(value); return *this; }

    /**
     * <p>The Kubernetes taints to be applied to the nodes in the node group. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/node-taints-managed-node-groups.html">Node
     * taints on managed node groups</a>.</p>
     */
    inline CreateNodegroupRequest& AddTaints(Taint&& value) { m_taintsHasBeenSet = true; m_taints.push_back(std::move(value)); return *this; }


    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline CreateNodegroupRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline CreateNodegroupRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline CreateNodegroupRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline CreateNodegroupRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline CreateNodegroupRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline CreateNodegroupRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline CreateNodegroupRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets.</p>
     */
    inline CreateNodegroupRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata to apply to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets.</p>
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
     * <p>The node group update configuration.</p>
     */
    inline const NodegroupUpdateConfig& GetUpdateConfig() const{ return m_updateConfig; }

    /**
     * <p>The node group update configuration.</p>
     */
    inline bool UpdateConfigHasBeenSet() const { return m_updateConfigHasBeenSet; }

    /**
     * <p>The node group update configuration.</p>
     */
    inline void SetUpdateConfig(const NodegroupUpdateConfig& value) { m_updateConfigHasBeenSet = true; m_updateConfig = value; }

    /**
     * <p>The node group update configuration.</p>
     */
    inline void SetUpdateConfig(NodegroupUpdateConfig&& value) { m_updateConfigHasBeenSet = true; m_updateConfig = std::move(value); }

    /**
     * <p>The node group update configuration.</p>
     */
    inline CreateNodegroupRequest& WithUpdateConfig(const NodegroupUpdateConfig& value) { SetUpdateConfig(value); return *this;}

    /**
     * <p>The node group update configuration.</p>
     */
    inline CreateNodegroupRequest& WithUpdateConfig(NodegroupUpdateConfig&& value) { SetUpdateConfig(std::move(value)); return *this;}


    /**
     * <p>The capacity type for your node group.</p>
     */
    inline const CapacityTypes& GetCapacityType() const{ return m_capacityType; }

    /**
     * <p>The capacity type for your node group.</p>
     */
    inline bool CapacityTypeHasBeenSet() const { return m_capacityTypeHasBeenSet; }

    /**
     * <p>The capacity type for your node group.</p>
     */
    inline void SetCapacityType(const CapacityTypes& value) { m_capacityTypeHasBeenSet = true; m_capacityType = value; }

    /**
     * <p>The capacity type for your node group.</p>
     */
    inline void SetCapacityType(CapacityTypes&& value) { m_capacityTypeHasBeenSet = true; m_capacityType = std::move(value); }

    /**
     * <p>The capacity type for your node group.</p>
     */
    inline CreateNodegroupRequest& WithCapacityType(const CapacityTypes& value) { SetCapacityType(value); return *this;}

    /**
     * <p>The capacity type for your node group.</p>
     */
    inline CreateNodegroupRequest& WithCapacityType(CapacityTypes&& value) { SetCapacityType(std::move(value)); return *this;}


    /**
     * <p>The Kubernetes version to use for your managed nodes. By default, the
     * Kubernetes version of the cluster is used, and this is the only accepted
     * specified value. If you specify <code>launchTemplate</code>, and your launch
     * template uses a custom AMI, then don't specify <code>version</code>, or the node
     * group deployment will fail. For more information about using launch templates
     * with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
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
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
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
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
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
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
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
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
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
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
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
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
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
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateNodegroupRequest& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The AMI version of the Amazon EKS optimized AMI to use with your node group.
     * By default, the latest available AMI version for the node group's current
     * Kubernetes version is used. For information about Linux versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS optimized Amazon Linux AMI versions</a> in the <i>Amazon EKS User Guide</i>.
     * Amazon EKS managed node groups support the November 2022 and later releases of
     * the Windows AMIs. For information about Windows versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-ami-versions-windows.html">Amazon
     * EKS optimized Windows AMI versions</a> in the <i>Amazon EKS User Guide</i>.</p>
     * <p>If you specify <code>launchTemplate</code>, and your launch template uses a
     * custom AMI, then don't specify <code>releaseVersion</code>, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const Aws::String& GetReleaseVersion() const{ return m_releaseVersion; }

    /**
     * <p>The AMI version of the Amazon EKS optimized AMI to use with your node group.
     * By default, the latest available AMI version for the node group's current
     * Kubernetes version is used. For information about Linux versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS optimized Amazon Linux AMI versions</a> in the <i>Amazon EKS User Guide</i>.
     * Amazon EKS managed node groups support the November 2022 and later releases of
     * the Windows AMIs. For information about Windows versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-ami-versions-windows.html">Amazon
     * EKS optimized Windows AMI versions</a> in the <i>Amazon EKS User Guide</i>.</p>
     * <p>If you specify <code>launchTemplate</code>, and your launch template uses a
     * custom AMI, then don't specify <code>releaseVersion</code>, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline bool ReleaseVersionHasBeenSet() const { return m_releaseVersionHasBeenSet; }

    /**
     * <p>The AMI version of the Amazon EKS optimized AMI to use with your node group.
     * By default, the latest available AMI version for the node group's current
     * Kubernetes version is used. For information about Linux versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS optimized Amazon Linux AMI versions</a> in the <i>Amazon EKS User Guide</i>.
     * Amazon EKS managed node groups support the November 2022 and later releases of
     * the Windows AMIs. For information about Windows versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-ami-versions-windows.html">Amazon
     * EKS optimized Windows AMI versions</a> in the <i>Amazon EKS User Guide</i>.</p>
     * <p>If you specify <code>launchTemplate</code>, and your launch template uses a
     * custom AMI, then don't specify <code>releaseVersion</code>, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetReleaseVersion(const Aws::String& value) { m_releaseVersionHasBeenSet = true; m_releaseVersion = value; }

    /**
     * <p>The AMI version of the Amazon EKS optimized AMI to use with your node group.
     * By default, the latest available AMI version for the node group's current
     * Kubernetes version is used. For information about Linux versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS optimized Amazon Linux AMI versions</a> in the <i>Amazon EKS User Guide</i>.
     * Amazon EKS managed node groups support the November 2022 and later releases of
     * the Windows AMIs. For information about Windows versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-ami-versions-windows.html">Amazon
     * EKS optimized Windows AMI versions</a> in the <i>Amazon EKS User Guide</i>.</p>
     * <p>If you specify <code>launchTemplate</code>, and your launch template uses a
     * custom AMI, then don't specify <code>releaseVersion</code>, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetReleaseVersion(Aws::String&& value) { m_releaseVersionHasBeenSet = true; m_releaseVersion = std::move(value); }

    /**
     * <p>The AMI version of the Amazon EKS optimized AMI to use with your node group.
     * By default, the latest available AMI version for the node group's current
     * Kubernetes version is used. For information about Linux versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS optimized Amazon Linux AMI versions</a> in the <i>Amazon EKS User Guide</i>.
     * Amazon EKS managed node groups support the November 2022 and later releases of
     * the Windows AMIs. For information about Windows versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-ami-versions-windows.html">Amazon
     * EKS optimized Windows AMI versions</a> in the <i>Amazon EKS User Guide</i>.</p>
     * <p>If you specify <code>launchTemplate</code>, and your launch template uses a
     * custom AMI, then don't specify <code>releaseVersion</code>, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetReleaseVersion(const char* value) { m_releaseVersionHasBeenSet = true; m_releaseVersion.assign(value); }

    /**
     * <p>The AMI version of the Amazon EKS optimized AMI to use with your node group.
     * By default, the latest available AMI version for the node group's current
     * Kubernetes version is used. For information about Linux versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS optimized Amazon Linux AMI versions</a> in the <i>Amazon EKS User Guide</i>.
     * Amazon EKS managed node groups support the November 2022 and later releases of
     * the Windows AMIs. For information about Windows versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-ami-versions-windows.html">Amazon
     * EKS optimized Windows AMI versions</a> in the <i>Amazon EKS User Guide</i>.</p>
     * <p>If you specify <code>launchTemplate</code>, and your launch template uses a
     * custom AMI, then don't specify <code>releaseVersion</code>, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateNodegroupRequest& WithReleaseVersion(const Aws::String& value) { SetReleaseVersion(value); return *this;}

    /**
     * <p>The AMI version of the Amazon EKS optimized AMI to use with your node group.
     * By default, the latest available AMI version for the node group's current
     * Kubernetes version is used. For information about Linux versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS optimized Amazon Linux AMI versions</a> in the <i>Amazon EKS User Guide</i>.
     * Amazon EKS managed node groups support the November 2022 and later releases of
     * the Windows AMIs. For information about Windows versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-ami-versions-windows.html">Amazon
     * EKS optimized Windows AMI versions</a> in the <i>Amazon EKS User Guide</i>.</p>
     * <p>If you specify <code>launchTemplate</code>, and your launch template uses a
     * custom AMI, then don't specify <code>releaseVersion</code>, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateNodegroupRequest& WithReleaseVersion(Aws::String&& value) { SetReleaseVersion(std::move(value)); return *this;}

    /**
     * <p>The AMI version of the Amazon EKS optimized AMI to use with your node group.
     * By default, the latest available AMI version for the node group's current
     * Kubernetes version is used. For information about Linux versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
     * EKS optimized Amazon Linux AMI versions</a> in the <i>Amazon EKS User Guide</i>.
     * Amazon EKS managed node groups support the November 2022 and later releases of
     * the Windows AMIs. For information about Windows versions, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-ami-versions-windows.html">Amazon
     * EKS optimized Windows AMI versions</a> in the <i>Amazon EKS User Guide</i>.</p>
     * <p>If you specify <code>launchTemplate</code>, and your launch template uses a
     * custom AMI, then don't specify <code>releaseVersion</code>, or the node group
     * deployment will fail. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateNodegroupRequest& WithReleaseVersion(const char* value) { SetReleaseVersion(value); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_nodegroupName;
    bool m_nodegroupNameHasBeenSet = false;

    NodegroupScalingConfig m_scalingConfig;
    bool m_scalingConfigHasBeenSet = false;

    int m_diskSize;
    bool m_diskSizeHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceTypes;
    bool m_instanceTypesHasBeenSet = false;

    AMITypes m_amiType;
    bool m_amiTypeHasBeenSet = false;

    RemoteAccessConfig m_remoteAccess;
    bool m_remoteAccessHasBeenSet = false;

    Aws::String m_nodeRole;
    bool m_nodeRoleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;

    Aws::Vector<Taint> m_taints;
    bool m_taintsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    LaunchTemplateSpecification m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;

    NodegroupUpdateConfig m_updateConfig;
    bool m_updateConfigHasBeenSet = false;

    CapacityTypes m_capacityType;
    bool m_capacityTypeHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_releaseVersion;
    bool m_releaseVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
