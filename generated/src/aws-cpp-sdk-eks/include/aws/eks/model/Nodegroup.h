/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/eks/model/NodegroupStatus.h>
#include <aws/eks/model/CapacityTypes.h>
#include <aws/eks/model/NodegroupScalingConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/RemoteAccessConfig.h>
#include <aws/eks/model/AMITypes.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/eks/model/NodegroupResources.h>
#include <aws/eks/model/NodegroupHealth.h>
#include <aws/eks/model/NodegroupUpdateConfig.h>
#include <aws/eks/model/NodeRepairConfig.h>
#include <aws/eks/model/LaunchTemplateSpecification.h>
#include <aws/eks/model/Taint.h>
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
  class Nodegroup
  {
  public:
    AWS_EKS_API Nodegroup() = default;
    AWS_EKS_API Nodegroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Nodegroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name associated with an Amazon EKS managed node group.</p>
     */
    inline const Aws::String& GetNodegroupName() const { return m_nodegroupName; }
    inline bool NodegroupNameHasBeenSet() const { return m_nodegroupNameHasBeenSet; }
    template<typename NodegroupNameT = Aws::String>
    void SetNodegroupName(NodegroupNameT&& value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName = std::forward<NodegroupNameT>(value); }
    template<typename NodegroupNameT = Aws::String>
    Nodegroup& WithNodegroupName(NodegroupNameT&& value) { SetNodegroupName(std::forward<NodegroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with the managed node group.</p>
     */
    inline const Aws::String& GetNodegroupArn() const { return m_nodegroupArn; }
    inline bool NodegroupArnHasBeenSet() const { return m_nodegroupArnHasBeenSet; }
    template<typename NodegroupArnT = Aws::String>
    void SetNodegroupArn(NodegroupArnT&& value) { m_nodegroupArnHasBeenSet = true; m_nodegroupArn = std::forward<NodegroupArnT>(value); }
    template<typename NodegroupArnT = Aws::String>
    Nodegroup& WithNodegroupArn(NodegroupArnT&& value) { SetNodegroupArn(std::forward<NodegroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your cluster.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    Nodegroup& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes version of the managed node group.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    Nodegroup& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the node group was deployed using a launch template with a custom AMI,
     * then this is the AMI ID that was specified in the launch template. For node
     * groups that weren't deployed using a launch template, this is the version of the
     * Amazon EKS optimized AMI that the node group was deployed with.</p>
     */
    inline const Aws::String& GetReleaseVersion() const { return m_releaseVersion; }
    inline bool ReleaseVersionHasBeenSet() const { return m_releaseVersionHasBeenSet; }
    template<typename ReleaseVersionT = Aws::String>
    void SetReleaseVersion(ReleaseVersionT&& value) { m_releaseVersionHasBeenSet = true; m_releaseVersion = std::forward<ReleaseVersionT>(value); }
    template<typename ReleaseVersionT = Aws::String>
    Nodegroup& WithReleaseVersion(ReleaseVersionT&& value) { SetReleaseVersion(std::forward<ReleaseVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix epoch timestamp at object creation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Nodegroup& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix epoch timestamp for the last modification to the object.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    Nodegroup& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the managed node group.</p>
     */
    inline NodegroupStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(NodegroupStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Nodegroup& WithStatus(NodegroupStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity type of your managed node group.</p>
     */
    inline CapacityTypes GetCapacityType() const { return m_capacityType; }
    inline bool CapacityTypeHasBeenSet() const { return m_capacityTypeHasBeenSet; }
    inline void SetCapacityType(CapacityTypes value) { m_capacityTypeHasBeenSet = true; m_capacityType = value; }
    inline Nodegroup& WithCapacityType(CapacityTypes value) { SetCapacityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scaling configuration details for the Auto Scaling group that is
     * associated with your node group.</p>
     */
    inline const NodegroupScalingConfig& GetScalingConfig() const { return m_scalingConfig; }
    inline bool ScalingConfigHasBeenSet() const { return m_scalingConfigHasBeenSet; }
    template<typename ScalingConfigT = NodegroupScalingConfig>
    void SetScalingConfig(ScalingConfigT&& value) { m_scalingConfigHasBeenSet = true; m_scalingConfig = std::forward<ScalingConfigT>(value); }
    template<typename ScalingConfigT = NodegroupScalingConfig>
    Nodegroup& WithScalingConfig(ScalingConfigT&& value) { SetScalingConfig(std::forward<ScalingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the node group wasn't deployed with a launch template, then this is the
     * instance type that is associated with the node group. If the node group was
     * deployed with a launch template, then this is <code>null</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTypes() const { return m_instanceTypes; }
    inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }
    template<typename InstanceTypesT = Aws::Vector<Aws::String>>
    void SetInstanceTypes(InstanceTypesT&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::forward<InstanceTypesT>(value); }
    template<typename InstanceTypesT = Aws::Vector<Aws::String>>
    Nodegroup& WithInstanceTypes(InstanceTypesT&& value) { SetInstanceTypes(std::forward<InstanceTypesT>(value)); return *this;}
    template<typename InstanceTypesT = Aws::String>
    Nodegroup& AddInstanceTypes(InstanceTypesT&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.emplace_back(std::forward<InstanceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The subnets that were specified for the Auto Scaling group that is associated
     * with your node group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const { return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    void SetSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets = std::forward<SubnetsT>(value); }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    Nodegroup& WithSubnets(SubnetsT&& value) { SetSubnets(std::forward<SubnetsT>(value)); return *this;}
    template<typename SubnetsT = Aws::String>
    Nodegroup& AddSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets.emplace_back(std::forward<SubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the node group wasn't deployed with a launch template, then this is the
     * remote access configuration that is associated with the node group. If the node
     * group was deployed with a launch template, then this is <code>null</code>.</p>
     */
    inline const RemoteAccessConfig& GetRemoteAccess() const { return m_remoteAccess; }
    inline bool RemoteAccessHasBeenSet() const { return m_remoteAccessHasBeenSet; }
    template<typename RemoteAccessT = RemoteAccessConfig>
    void SetRemoteAccess(RemoteAccessT&& value) { m_remoteAccessHasBeenSet = true; m_remoteAccess = std::forward<RemoteAccessT>(value); }
    template<typename RemoteAccessT = RemoteAccessConfig>
    Nodegroup& WithRemoteAccess(RemoteAccessT&& value) { SetRemoteAccess(std::forward<RemoteAccessT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the node group was deployed using a launch template with a custom AMI,
     * then this is <code>CUSTOM</code>. For node groups that weren't deployed using a
     * launch template, this is the AMI type that was specified in the node group
     * configuration.</p>
     */
    inline AMITypes GetAmiType() const { return m_amiType; }
    inline bool AmiTypeHasBeenSet() const { return m_amiTypeHasBeenSet; }
    inline void SetAmiType(AMITypes value) { m_amiTypeHasBeenSet = true; m_amiType = value; }
    inline Nodegroup& WithAmiType(AMITypes value) { SetAmiType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role associated with your node group. The Amazon EKS node
     * <code>kubelet</code> daemon makes calls to Amazon Web Services APIs on your
     * behalf. Nodes receive permissions for these API calls through an IAM instance
     * profile and associated policies.</p>
     */
    inline const Aws::String& GetNodeRole() const { return m_nodeRole; }
    inline bool NodeRoleHasBeenSet() const { return m_nodeRoleHasBeenSet; }
    template<typename NodeRoleT = Aws::String>
    void SetNodeRole(NodeRoleT&& value) { m_nodeRoleHasBeenSet = true; m_nodeRole = std::forward<NodeRoleT>(value); }
    template<typename NodeRoleT = Aws::String>
    Nodegroup& WithNodeRole(NodeRoleT&& value) { SetNodeRole(std::forward<NodeRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes <code>labels</code> applied to the nodes in the node
     * group.</p>  <p>Only <code>labels</code> that are applied with the Amazon
     * EKS API are shown here. There may be other Kubernetes <code>labels</code>
     * applied to the nodes in this group.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLabels() const { return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    template<typename LabelsT = Aws::Map<Aws::String, Aws::String>>
    void SetLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels = std::forward<LabelsT>(value); }
    template<typename LabelsT = Aws::Map<Aws::String, Aws::String>>
    Nodegroup& WithLabels(LabelsT&& value) { SetLabels(std::forward<LabelsT>(value)); return *this;}
    template<typename LabelsKeyT = Aws::String, typename LabelsValueT = Aws::String>
    Nodegroup& AddLabels(LabelsKeyT&& key, LabelsValueT&& value) {
      m_labelsHasBeenSet = true; m_labels.emplace(std::forward<LabelsKeyT>(key), std::forward<LabelsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Kubernetes taints to be applied to the nodes in the node group when they
     * are created. Effect is one of <code>No_Schedule</code>,
     * <code>Prefer_No_Schedule</code>, or <code>No_Execute</code>. Kubernetes taints
     * can be used together with tolerations to control how workloads are scheduled to
     * your nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/node-taints-managed-node-groups.html">Node
     * taints on managed node groups</a>.</p>
     */
    inline const Aws::Vector<Taint>& GetTaints() const { return m_taints; }
    inline bool TaintsHasBeenSet() const { return m_taintsHasBeenSet; }
    template<typename TaintsT = Aws::Vector<Taint>>
    void SetTaints(TaintsT&& value) { m_taintsHasBeenSet = true; m_taints = std::forward<TaintsT>(value); }
    template<typename TaintsT = Aws::Vector<Taint>>
    Nodegroup& WithTaints(TaintsT&& value) { SetTaints(std::forward<TaintsT>(value)); return *this;}
    template<typename TaintsT = Taint>
    Nodegroup& AddTaints(TaintsT&& value) { m_taintsHasBeenSet = true; m_taints.emplace_back(std::forward<TaintsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resources associated with the node group, such as Auto Scaling groups and
     * security groups for remote access.</p>
     */
    inline const NodegroupResources& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = NodegroupResources>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = NodegroupResources>
    Nodegroup& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the node group wasn't deployed with a launch template, then this is the
     * disk size in the node group configuration. If the node group was deployed with a
     * launch template, then this is <code>null</code>.</p>
     */
    inline int GetDiskSize() const { return m_diskSize; }
    inline bool DiskSizeHasBeenSet() const { return m_diskSizeHasBeenSet; }
    inline void SetDiskSize(int value) { m_diskSizeHasBeenSet = true; m_diskSize = value; }
    inline Nodegroup& WithDiskSize(int value) { SetDiskSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health status of the node group. If there are issues with your node
     * group's health, they are listed here.</p>
     */
    inline const NodegroupHealth& GetHealth() const { return m_health; }
    inline bool HealthHasBeenSet() const { return m_healthHasBeenSet; }
    template<typename HealthT = NodegroupHealth>
    void SetHealth(HealthT&& value) { m_healthHasBeenSet = true; m_health = std::forward<HealthT>(value); }
    template<typename HealthT = NodegroupHealth>
    Nodegroup& WithHealth(HealthT&& value) { SetHealth(std::forward<HealthT>(value)); return *this;}
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
    Nodegroup& WithUpdateConfig(UpdateConfigT&& value) { SetUpdateConfig(std::forward<UpdateConfigT>(value)); return *this;}
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
    Nodegroup& WithNodeRepairConfig(NodeRepairConfigT&& value) { SetNodeRepairConfig(std::forward<NodeRepairConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a launch template was used to create the node group, then this is the
     * launch template that was used.</p>
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplate() const { return m_launchTemplate; }
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }
    template<typename LaunchTemplateT = LaunchTemplateSpecification>
    void SetLaunchTemplate(LaunchTemplateT&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::forward<LaunchTemplateT>(value); }
    template<typename LaunchTemplateT = LaunchTemplateSpecification>
    Nodegroup& WithLaunchTemplate(LaunchTemplateT&& value) { SetLaunchTemplate(std::forward<LaunchTemplateT>(value)); return *this;}
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
    Nodegroup& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Nodegroup& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_nodegroupName;
    bool m_nodegroupNameHasBeenSet = false;

    Aws::String m_nodegroupArn;
    bool m_nodegroupArnHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_releaseVersion;
    bool m_releaseVersionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    NodegroupStatus m_status{NodegroupStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    CapacityTypes m_capacityType{CapacityTypes::NOT_SET};
    bool m_capacityTypeHasBeenSet = false;

    NodegroupScalingConfig m_scalingConfig;
    bool m_scalingConfigHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceTypes;
    bool m_instanceTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;

    RemoteAccessConfig m_remoteAccess;
    bool m_remoteAccessHasBeenSet = false;

    AMITypes m_amiType{AMITypes::NOT_SET};
    bool m_amiTypeHasBeenSet = false;

    Aws::String m_nodeRole;
    bool m_nodeRoleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;

    Aws::Vector<Taint> m_taints;
    bool m_taintsHasBeenSet = false;

    NodegroupResources m_resources;
    bool m_resourcesHasBeenSet = false;

    int m_diskSize{0};
    bool m_diskSizeHasBeenSet = false;

    NodegroupHealth m_health;
    bool m_healthHasBeenSet = false;

    NodegroupUpdateConfig m_updateConfig;
    bool m_updateConfigHasBeenSet = false;

    NodeRepairConfig m_nodeRepairConfig;
    bool m_nodeRepairConfigHasBeenSet = false;

    LaunchTemplateSpecification m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
