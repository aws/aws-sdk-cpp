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
    AWS_EKS_API CreateNodegroupRequest() = default;

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
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    CreateNodegroupRequest& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name to give your node group.</p>
     */
    inline const Aws::String& GetNodegroupName() const { return m_nodegroupName; }
    inline bool NodegroupNameHasBeenSet() const { return m_nodegroupNameHasBeenSet; }
    template<typename NodegroupNameT = Aws::String>
    void SetNodegroupName(NodegroupNameT&& value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName = std::forward<NodegroupNameT>(value); }
    template<typename NodegroupNameT = Aws::String>
    CreateNodegroupRequest& WithNodegroupName(NodegroupNameT&& value) { SetNodegroupName(std::forward<NodegroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scaling configuration details for the Auto Scaling group that is created
     * for your node group.</p>
     */
    inline const NodegroupScalingConfig& GetScalingConfig() const { return m_scalingConfig; }
    inline bool ScalingConfigHasBeenSet() const { return m_scalingConfigHasBeenSet; }
    template<typename ScalingConfigT = NodegroupScalingConfig>
    void SetScalingConfig(ScalingConfigT&& value) { m_scalingConfigHasBeenSet = true; m_scalingConfig = std::forward<ScalingConfigT>(value); }
    template<typename ScalingConfigT = NodegroupScalingConfig>
    CreateNodegroupRequest& WithScalingConfig(ScalingConfigT&& value) { SetScalingConfig(std::forward<ScalingConfigT>(value)); return *this;}
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
    inline int GetDiskSize() const { return m_diskSize; }
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
    inline const Aws::Vector<Aws::String>& GetSubnets() const { return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    void SetSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets = std::forward<SubnetsT>(value); }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    CreateNodegroupRequest& WithSubnets(SubnetsT&& value) { SetSubnets(std::forward<SubnetsT>(value)); return *this;}
    template<typename SubnetsT = Aws::String>
    CreateNodegroupRequest& AddSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets.emplace_back(std::forward<SubnetsT>(value)); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetInstanceTypes() const { return m_instanceTypes; }
    inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }
    template<typename InstanceTypesT = Aws::Vector<Aws::String>>
    void SetInstanceTypes(InstanceTypesT&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::forward<InstanceTypesT>(value); }
    template<typename InstanceTypesT = Aws::Vector<Aws::String>>
    CreateNodegroupRequest& WithInstanceTypes(InstanceTypesT&& value) { SetInstanceTypes(std::forward<InstanceTypesT>(value)); return *this;}
    template<typename InstanceTypesT = Aws::String>
    CreateNodegroupRequest& AddInstanceTypes(InstanceTypesT&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.emplace_back(std::forward<InstanceTypesT>(value)); return *this; }
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
    inline AMITypes GetAmiType() const { return m_amiType; }
    inline bool AmiTypeHasBeenSet() const { return m_amiTypeHasBeenSet; }
    inline void SetAmiType(AMITypes value) { m_amiTypeHasBeenSet = true; m_amiType = value; }
    inline CreateNodegroupRequest& WithAmiType(AMITypes value) { SetAmiType(value); return *this;}
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
    inline const RemoteAccessConfig& GetRemoteAccess() const { return m_remoteAccess; }
    inline bool RemoteAccessHasBeenSet() const { return m_remoteAccessHasBeenSet; }
    template<typename RemoteAccessT = RemoteAccessConfig>
    void SetRemoteAccess(RemoteAccessT&& value) { m_remoteAccessHasBeenSet = true; m_remoteAccess = std::forward<RemoteAccessT>(value); }
    template<typename RemoteAccessT = RemoteAccessConfig>
    CreateNodegroupRequest& WithRemoteAccess(RemoteAccessT&& value) { SetRemoteAccess(std::forward<RemoteAccessT>(value)); return *this;}
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
    inline const Aws::String& GetNodeRole() const { return m_nodeRole; }
    inline bool NodeRoleHasBeenSet() const { return m_nodeRoleHasBeenSet; }
    template<typename NodeRoleT = Aws::String>
    void SetNodeRole(NodeRoleT&& value) { m_nodeRoleHasBeenSet = true; m_nodeRole = std::forward<NodeRoleT>(value); }
    template<typename NodeRoleT = Aws::String>
    CreateNodegroupRequest& WithNodeRole(NodeRoleT&& value) { SetNodeRole(std::forward<NodeRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes <code>labels</code> to apply to the nodes in the node group
     * when they are created.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLabels() const { return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    template<typename LabelsT = Aws::Map<Aws::String, Aws::String>>
    void SetLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels = std::forward<LabelsT>(value); }
    template<typename LabelsT = Aws::Map<Aws::String, Aws::String>>
    CreateNodegroupRequest& WithLabels(LabelsT&& value) { SetLabels(std::forward<LabelsT>(value)); return *this;}
    template<typename LabelsKeyT = Aws::String, typename LabelsValueT = Aws::String>
    CreateNodegroupRequest& AddLabels(LabelsKeyT&& key, LabelsValueT&& value) {
      m_labelsHasBeenSet = true; m_labels.emplace(std::forward<LabelsKeyT>(key), std::forward<LabelsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Kubernetes taints to be applied to the nodes in the node group. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/node-taints-managed-node-groups.html">Node
     * taints on managed node groups</a>.</p>
     */
    inline const Aws::Vector<Taint>& GetTaints() const { return m_taints; }
    inline bool TaintsHasBeenSet() const { return m_taintsHasBeenSet; }
    template<typename TaintsT = Aws::Vector<Taint>>
    void SetTaints(TaintsT&& value) { m_taintsHasBeenSet = true; m_taints = std::forward<TaintsT>(value); }
    template<typename TaintsT = Aws::Vector<Taint>>
    CreateNodegroupRequest& WithTaints(TaintsT&& value) { SetTaints(std::forward<TaintsT>(value)); return *this;}
    template<typename TaintsT = Taint>
    CreateNodegroupRequest& AddTaints(TaintsT&& value) { m_taintsHasBeenSet = true; m_taints.emplace_back(std::forward<TaintsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateNodegroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateNodegroupRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateNodegroupRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object representing a node group's launch template specification. When
     * using this object, don't directly specify <code>instanceTypes</code>,
     * <code>diskSize</code>, or <code>remoteAccess</code>. You cannot later specify a
     * different launch template ID or name than what was used to create the node
     * group.</p> <p>Make sure that the launch template meets the requirements in
     * <code>launchTemplateSpecification</code>. Also refer to <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Customizing
     * managed nodes with launch templates</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplate() const { return m_launchTemplate; }
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }
    template<typename LaunchTemplateT = LaunchTemplateSpecification>
    void SetLaunchTemplate(LaunchTemplateT&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::forward<LaunchTemplateT>(value); }
    template<typename LaunchTemplateT = LaunchTemplateSpecification>
    CreateNodegroupRequest& WithLaunchTemplate(LaunchTemplateT&& value) { SetLaunchTemplate(std::forward<LaunchTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node group update configuration.</p>
     */
    inline const NodegroupUpdateConfig& GetUpdateConfig() const { return m_updateConfig; }
    inline bool UpdateConfigHasBeenSet() const { return m_updateConfigHasBeenSet; }
    template<typename UpdateConfigT = NodegroupUpdateConfig>
    void SetUpdateConfig(UpdateConfigT&& value) { m_updateConfigHasBeenSet = true; m_updateConfig = std::forward<UpdateConfigT>(value); }
    template<typename UpdateConfigT = NodegroupUpdateConfig>
    CreateNodegroupRequest& WithUpdateConfig(UpdateConfigT&& value) { SetUpdateConfig(std::forward<UpdateConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node auto repair configuration for the node group.</p>
     */
    inline const NodeRepairConfig& GetNodeRepairConfig() const { return m_nodeRepairConfig; }
    inline bool NodeRepairConfigHasBeenSet() const { return m_nodeRepairConfigHasBeenSet; }
    template<typename NodeRepairConfigT = NodeRepairConfig>
    void SetNodeRepairConfig(NodeRepairConfigT&& value) { m_nodeRepairConfigHasBeenSet = true; m_nodeRepairConfig = std::forward<NodeRepairConfigT>(value); }
    template<typename NodeRepairConfigT = NodeRepairConfig>
    CreateNodegroupRequest& WithNodeRepairConfig(NodeRepairConfigT&& value) { SetNodeRepairConfig(std::forward<NodeRepairConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity type for your node group.</p>
     */
    inline CapacityTypes GetCapacityType() const { return m_capacityType; }
    inline bool CapacityTypeHasBeenSet() const { return m_capacityTypeHasBeenSet; }
    inline void SetCapacityType(CapacityTypes value) { m_capacityTypeHasBeenSet = true; m_capacityType = value; }
    inline CreateNodegroupRequest& WithCapacityType(CapacityTypes value) { SetCapacityType(value); return *this;}
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
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    CreateNodegroupRequest& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
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
    inline const Aws::String& GetReleaseVersion() const { return m_releaseVersion; }
    inline bool ReleaseVersionHasBeenSet() const { return m_releaseVersionHasBeenSet; }
    template<typename ReleaseVersionT = Aws::String>
    void SetReleaseVersion(ReleaseVersionT&& value) { m_releaseVersionHasBeenSet = true; m_releaseVersion = std::forward<ReleaseVersionT>(value); }
    template<typename ReleaseVersionT = Aws::String>
    CreateNodegroupRequest& WithReleaseVersion(ReleaseVersionT&& value) { SetReleaseVersion(std::forward<ReleaseVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_nodegroupName;
    bool m_nodegroupNameHasBeenSet = false;

    NodegroupScalingConfig m_scalingConfig;
    bool m_scalingConfigHasBeenSet = false;

    int m_diskSize{0};
    bool m_diskSizeHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceTypes;
    bool m_instanceTypesHasBeenSet = false;

    AMITypes m_amiType{AMITypes::NOT_SET};
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

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    LaunchTemplateSpecification m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;

    NodegroupUpdateConfig m_updateConfig;
    bool m_updateConfigHasBeenSet = false;

    NodeRepairConfig m_nodeRepairConfig;
    bool m_nodeRepairConfigHasBeenSet = false;

    CapacityTypes m_capacityType{CapacityTypes::NOT_SET};
    bool m_capacityTypeHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_releaseVersion;
    bool m_releaseVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
