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
#include <aws/eks/model/NodeRepairConfig.h>
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


    ///@{
    /**
     * <p>The name of your cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline CreateNodegroupRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline CreateNodegroupRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline CreateNodegroupRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name to give your node group.</p>
     */
    inline const Aws::String& GetNodegroupName() const{ return m_nodegroupName; }
    inline bool NodegroupNameHasBeenSet() const { return m_nodegroupNameHasBeenSet; }
    inline void SetNodegroupName(const Aws::String& value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName = value; }
    inline void SetNodegroupName(Aws::String&& value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName = std::move(value); }
    inline void SetNodegroupName(const char* value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName.assign(value); }
    inline CreateNodegroupRequest& WithNodegroupName(const Aws::String& value) { SetNodegroupName(value); return *this;}
    inline CreateNodegroupRequest& WithNodegroupName(Aws::String&& value) { SetNodegroupName(std::move(value)); return *this;}
    inline CreateNodegroupRequest& WithNodegroupName(const char* value) { SetNodegroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scaling configuration details for the Auto Scaling group that is created
     * for your node group.</p>
     */
    inline const NodegroupScalingConfig& GetScalingConfig() const{ return m_scalingConfig; }
    inline bool ScalingConfigHasBeenSet() const { return m_scalingConfigHasBeenSet; }
    inline void SetScalingConfig(const NodegroupScalingConfig& value) { m_scalingConfigHasBeenSet = true; m_scalingConfig = value; }
    inline void SetScalingConfig(NodegroupScalingConfig&& value) { m_scalingConfigHasBeenSet = true; m_scalingConfig = std::move(value); }
    inline CreateNodegroupRequest& WithScalingConfig(const NodegroupScalingConfig& value) { SetScalingConfig(value); return *this;}
    inline CreateNodegroupRequest& WithScalingConfig(NodegroupScalingConfig&& value) { SetScalingConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The root device disk size (in GiB) for your node group instances. The default
     * disk size is 20 GiB for Linux and Bottlerocket. The default disk size is 50 GiB
     * for Windows. If you specify <code>launchTemplate</code>, then don't specify
     * <code>diskSize</code>, or the node group deployment will fail. For more
     * information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Customizing
     * managed nodes with launch templates</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline int GetDiskSize() const{ return m_diskSize; }
    inline bool DiskSizeHasBeenSet() const { return m_diskSizeHasBeenSet; }
    inline void SetDiskSize(int value) { m_diskSizeHasBeenSet = true; m_diskSize = value; }
    inline CreateNodegroupRequest& WithDiskSize(int value) { SetDiskSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnets to use for the Auto Scaling group that is created for your node
     * group. If you specify <code>launchTemplate</code>, then don't specify <code> <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateNetworkInterface.html">SubnetId</a>
     * </code> in your launch template, or the node group deployment will fail. For
     * more information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Customizing
     * managed nodes with launch templates</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }
    inline CreateNodegroupRequest& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}
    inline CreateNodegroupRequest& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}
    inline CreateNodegroupRequest& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }
    inline CreateNodegroupRequest& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }
    inline CreateNodegroupRequest& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }
    ///@}

    ///@{
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
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Customizing
     * managed nodes with launch templates</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTypes() const{ return m_instanceTypes; }
    inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }
    inline void SetInstanceTypes(const Aws::Vector<Aws::String>& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = value; }
    inline void SetInstanceTypes(Aws::Vector<Aws::String>&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::move(value); }
    inline CreateNodegroupRequest& WithInstanceTypes(const Aws::Vector<Aws::String>& value) { SetInstanceTypes(value); return *this;}
    inline CreateNodegroupRequest& WithInstanceTypes(Aws::Vector<Aws::String>&& value) { SetInstanceTypes(std::move(value)); return *this;}
    inline CreateNodegroupRequest& AddInstanceTypes(const Aws::String& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }
    inline CreateNodegroupRequest& AddInstanceTypes(Aws::String&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(std::move(value)); return *this; }
    inline CreateNodegroupRequest& AddInstanceTypes(const char* value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The AMI type for your node group. If you specify <code>launchTemplate</code>,
     * and your launch template uses a custom AMI, then don't specify
     * <code>amiType</code>, or the node group deployment will fail. If your launch
     * template uses a Windows custom AMI, then add <code>eks:kube-proxy-windows</code>
     * to your Windows nodes <code>rolearn</code> in the <code>aws-auth</code>
     * <code>ConfigMap</code>. For more information about using launch templates with
     * Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Customizing
     * managed nodes with launch templates</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const AMITypes& GetAmiType() const{ return m_amiType; }
    inline bool AmiTypeHasBeenSet() const { return m_amiTypeHasBeenSet; }
    inline void SetAmiType(const AMITypes& value) { m_amiTypeHasBeenSet = true; m_amiType = value; }
    inline void SetAmiType(AMITypes&& value) { m_amiTypeHasBeenSet = true; m_amiType = std::move(value); }
    inline CreateNodegroupRequest& WithAmiType(const AMITypes& value) { SetAmiType(value); return *this;}
    inline CreateNodegroupRequest& WithAmiType(AMITypes&& value) { SetAmiType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remote access configuration to use with your node group. For Linux, the
     * protocol is SSH. For Windows, the protocol is RDP. If you specify
     * <code>launchTemplate</code>, then don't specify <code>remoteAccess</code>, or
     * the node group deployment will fail. For more information about using launch
     * templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Customizing
     * managed nodes with launch templates</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const RemoteAccessConfig& GetRemoteAccess() const{ return m_remoteAccess; }
    inline bool RemoteAccessHasBeenSet() const { return m_remoteAccessHasBeenSet; }
    inline void SetRemoteAccess(const RemoteAccessConfig& value) { m_remoteAccessHasBeenSet = true; m_remoteAccess = value; }
    inline void SetRemoteAccess(RemoteAccessConfig&& value) { m_remoteAccessHasBeenSet = true; m_remoteAccess = std::move(value); }
    inline CreateNodegroupRequest& WithRemoteAccess(const RemoteAccessConfig& value) { SetRemoteAccess(value); return *this;}
    inline CreateNodegroupRequest& WithRemoteAccess(RemoteAccessConfig&& value) { SetRemoteAccess(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to associate with your node
     * group. The Amazon EKS worker node <code>kubelet</code> daemon makes calls to
     * Amazon Web Services APIs on your behalf. Nodes receive permissions for these API
     * calls through an IAM instance profile and associated policies. Before you can
     * launch nodes and register them into a cluster, you must create an IAM role for
     * those nodes to use when they are launched. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/create-node-role.html">Amazon
     * EKS node IAM role</a> in the <i> <i>Amazon EKS User Guide</i> </i>. If you
     * specify <code>launchTemplate</code>, then don't specify <code> <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_IamInstanceProfile.html">IamInstanceProfile</a>
     * </code> in your launch template, or the node group deployment will fail. For
     * more information about using launch templates with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Customizing
     * managed nodes with launch templates</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const Aws::String& GetNodeRole() const{ return m_nodeRole; }
    inline bool NodeRoleHasBeenSet() const { return m_nodeRoleHasBeenSet; }
    inline void SetNodeRole(const Aws::String& value) { m_nodeRoleHasBeenSet = true; m_nodeRole = value; }
    inline void SetNodeRole(Aws::String&& value) { m_nodeRoleHasBeenSet = true; m_nodeRole = std::move(value); }
    inline void SetNodeRole(const char* value) { m_nodeRoleHasBeenSet = true; m_nodeRole.assign(value); }
    inline CreateNodegroupRequest& WithNodeRole(const Aws::String& value) { SetNodeRole(value); return *this;}
    inline CreateNodegroupRequest& WithNodeRole(Aws::String&& value) { SetNodeRole(std::move(value)); return *this;}
    inline CreateNodegroupRequest& WithNodeRole(const char* value) { SetNodeRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes <code>labels</code> to apply to the nodes in the node group
     * when they are created.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLabels() const{ return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    inline void SetLabels(const Aws::Map<Aws::String, Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }
    inline void SetLabels(Aws::Map<Aws::String, Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }
    inline CreateNodegroupRequest& WithLabels(const Aws::Map<Aws::String, Aws::String>& value) { SetLabels(value); return *this;}
    inline CreateNodegroupRequest& WithLabels(Aws::Map<Aws::String, Aws::String>&& value) { SetLabels(std::move(value)); return *this;}
    inline CreateNodegroupRequest& AddLabels(const Aws::String& key, const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, value); return *this; }
    inline CreateNodegroupRequest& AddLabels(Aws::String&& key, const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), value); return *this; }
    inline CreateNodegroupRequest& AddLabels(const Aws::String& key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, std::move(value)); return *this; }
    inline CreateNodegroupRequest& AddLabels(Aws::String&& key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateNodegroupRequest& AddLabels(const char* key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, std::move(value)); return *this; }
    inline CreateNodegroupRequest& AddLabels(Aws::String&& key, const char* value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), value); return *this; }
    inline CreateNodegroupRequest& AddLabels(const char* key, const char* value) { m_labelsHasBeenSet = true; m_labels.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Kubernetes taints to be applied to the nodes in the node group. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/node-taints-managed-node-groups.html">Node
     * taints on managed node groups</a>.</p>
     */
    inline const Aws::Vector<Taint>& GetTaints() const{ return m_taints; }
    inline bool TaintsHasBeenSet() const { return m_taintsHasBeenSet; }
    inline void SetTaints(const Aws::Vector<Taint>& value) { m_taintsHasBeenSet = true; m_taints = value; }
    inline void SetTaints(Aws::Vector<Taint>&& value) { m_taintsHasBeenSet = true; m_taints = std::move(value); }
    inline CreateNodegroupRequest& WithTaints(const Aws::Vector<Taint>& value) { SetTaints(value); return *this;}
    inline CreateNodegroupRequest& WithTaints(Aws::Vector<Taint>&& value) { SetTaints(std::move(value)); return *this;}
    inline CreateNodegroupRequest& AddTaints(const Taint& value) { m_taintsHasBeenSet = true; m_taints.push_back(value); return *this; }
    inline CreateNodegroupRequest& AddTaints(Taint&& value) { m_taintsHasBeenSet = true; m_taints.push_back(std::move(value)); return *this; }
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
    inline CreateNodegroupRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateNodegroupRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateNodegroupRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateNodegroupRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateNodegroupRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateNodegroupRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateNodegroupRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateNodegroupRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateNodegroupRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
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
    inline CreateNodegroupRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateNodegroupRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateNodegroupRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object representing a node group's launch template specification. When
     * using this object, don't directly specify <code>instanceTypes</code>,
     * <code>diskSize</code>, or <code>remoteAccess</code>. Make sure that the launch
     * template meets the requirements in <code>launchTemplateSpecification</code>.
     * Also refer to <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Customizing
     * managed nodes with launch templates</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplate() const{ return m_launchTemplate; }
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }
    inline void SetLaunchTemplate(const LaunchTemplateSpecification& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = value; }
    inline void SetLaunchTemplate(LaunchTemplateSpecification&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::move(value); }
    inline CreateNodegroupRequest& WithLaunchTemplate(const LaunchTemplateSpecification& value) { SetLaunchTemplate(value); return *this;}
    inline CreateNodegroupRequest& WithLaunchTemplate(LaunchTemplateSpecification&& value) { SetLaunchTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node group update configuration.</p>
     */
    inline const NodegroupUpdateConfig& GetUpdateConfig() const{ return m_updateConfig; }
    inline bool UpdateConfigHasBeenSet() const { return m_updateConfigHasBeenSet; }
    inline void SetUpdateConfig(const NodegroupUpdateConfig& value) { m_updateConfigHasBeenSet = true; m_updateConfig = value; }
    inline void SetUpdateConfig(NodegroupUpdateConfig&& value) { m_updateConfigHasBeenSet = true; m_updateConfig = std::move(value); }
    inline CreateNodegroupRequest& WithUpdateConfig(const NodegroupUpdateConfig& value) { SetUpdateConfig(value); return *this;}
    inline CreateNodegroupRequest& WithUpdateConfig(NodegroupUpdateConfig&& value) { SetUpdateConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node auto repair configuration for the node group.</p>
     */
    inline const NodeRepairConfig& GetNodeRepairConfig() const{ return m_nodeRepairConfig; }
    inline bool NodeRepairConfigHasBeenSet() const { return m_nodeRepairConfigHasBeenSet; }
    inline void SetNodeRepairConfig(const NodeRepairConfig& value) { m_nodeRepairConfigHasBeenSet = true; m_nodeRepairConfig = value; }
    inline void SetNodeRepairConfig(NodeRepairConfig&& value) { m_nodeRepairConfigHasBeenSet = true; m_nodeRepairConfig = std::move(value); }
    inline CreateNodegroupRequest& WithNodeRepairConfig(const NodeRepairConfig& value) { SetNodeRepairConfig(value); return *this;}
    inline CreateNodegroupRequest& WithNodeRepairConfig(NodeRepairConfig&& value) { SetNodeRepairConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity type for your node group.</p>
     */
    inline const CapacityTypes& GetCapacityType() const{ return m_capacityType; }
    inline bool CapacityTypeHasBeenSet() const { return m_capacityTypeHasBeenSet; }
    inline void SetCapacityType(const CapacityTypes& value) { m_capacityTypeHasBeenSet = true; m_capacityType = value; }
    inline void SetCapacityType(CapacityTypes&& value) { m_capacityTypeHasBeenSet = true; m_capacityType = std::move(value); }
    inline CreateNodegroupRequest& WithCapacityType(const CapacityTypes& value) { SetCapacityType(value); return *this;}
    inline CreateNodegroupRequest& WithCapacityType(CapacityTypes&& value) { SetCapacityType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes version to use for your managed nodes. By default, the
     * Kubernetes version of the cluster is used, and this is the only accepted
     * specified value. If you specify <code>launchTemplate</code>, and your launch
     * template uses a custom AMI, then don't specify <code>version</code>, or the node
     * group deployment will fail. For more information about using launch templates
     * with Amazon EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Customizing
     * managed nodes with launch templates</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline CreateNodegroupRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline CreateNodegroupRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline CreateNodegroupRequest& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
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
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Customizing
     * managed nodes with launch templates</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const Aws::String& GetReleaseVersion() const{ return m_releaseVersion; }
    inline bool ReleaseVersionHasBeenSet() const { return m_releaseVersionHasBeenSet; }
    inline void SetReleaseVersion(const Aws::String& value) { m_releaseVersionHasBeenSet = true; m_releaseVersion = value; }
    inline void SetReleaseVersion(Aws::String&& value) { m_releaseVersionHasBeenSet = true; m_releaseVersion = std::move(value); }
    inline void SetReleaseVersion(const char* value) { m_releaseVersionHasBeenSet = true; m_releaseVersion.assign(value); }
    inline CreateNodegroupRequest& WithReleaseVersion(const Aws::String& value) { SetReleaseVersion(value); return *this;}
    inline CreateNodegroupRequest& WithReleaseVersion(Aws::String&& value) { SetReleaseVersion(std::move(value)); return *this;}
    inline CreateNodegroupRequest& WithReleaseVersion(const char* value) { SetReleaseVersion(value); return *this;}
    ///@}
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

    NodeRepairConfig m_nodeRepairConfig;
    bool m_nodeRepairConfigHasBeenSet = false;

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
