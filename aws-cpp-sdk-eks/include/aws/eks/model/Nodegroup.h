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
    AWS_EKS_API Nodegroup();
    AWS_EKS_API Nodegroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Nodegroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>If the node group was deployed using a launch template with a custom AMI,
     * then this is the AMI ID that was specified in the launch template. For node
     * groups that weren't deployed using a launch template, this is the version of the
     * Amazon EKS optimized AMI that the node group was deployed with.</p>
     */
    inline const Aws::String& GetReleaseVersion() const{ return m_releaseVersion; }

    /**
     * <p>If the node group was deployed using a launch template with a custom AMI,
     * then this is the AMI ID that was specified in the launch template. For node
     * groups that weren't deployed using a launch template, this is the version of the
     * Amazon EKS optimized AMI that the node group was deployed with.</p>
     */
    inline bool ReleaseVersionHasBeenSet() const { return m_releaseVersionHasBeenSet; }

    /**
     * <p>If the node group was deployed using a launch template with a custom AMI,
     * then this is the AMI ID that was specified in the launch template. For node
     * groups that weren't deployed using a launch template, this is the version of the
     * Amazon EKS optimized AMI that the node group was deployed with.</p>
     */
    inline void SetReleaseVersion(const Aws::String& value) { m_releaseVersionHasBeenSet = true; m_releaseVersion = value; }

    /**
     * <p>If the node group was deployed using a launch template with a custom AMI,
     * then this is the AMI ID that was specified in the launch template. For node
     * groups that weren't deployed using a launch template, this is the version of the
     * Amazon EKS optimized AMI that the node group was deployed with.</p>
     */
    inline void SetReleaseVersion(Aws::String&& value) { m_releaseVersionHasBeenSet = true; m_releaseVersion = std::move(value); }

    /**
     * <p>If the node group was deployed using a launch template with a custom AMI,
     * then this is the AMI ID that was specified in the launch template. For node
     * groups that weren't deployed using a launch template, this is the version of the
     * Amazon EKS optimized AMI that the node group was deployed with.</p>
     */
    inline void SetReleaseVersion(const char* value) { m_releaseVersionHasBeenSet = true; m_releaseVersion.assign(value); }

    /**
     * <p>If the node group was deployed using a launch template with a custom AMI,
     * then this is the AMI ID that was specified in the launch template. For node
     * groups that weren't deployed using a launch template, this is the version of the
     * Amazon EKS optimized AMI that the node group was deployed with.</p>
     */
    inline Nodegroup& WithReleaseVersion(const Aws::String& value) { SetReleaseVersion(value); return *this;}

    /**
     * <p>If the node group was deployed using a launch template with a custom AMI,
     * then this is the AMI ID that was specified in the launch template. For node
     * groups that weren't deployed using a launch template, this is the version of the
     * Amazon EKS optimized AMI that the node group was deployed with.</p>
     */
    inline Nodegroup& WithReleaseVersion(Aws::String&& value) { SetReleaseVersion(std::move(value)); return *this;}

    /**
     * <p>If the node group was deployed using a launch template with a custom AMI,
     * then this is the AMI ID that was specified in the launch template. For node
     * groups that weren't deployed using a launch template, this is the version of the
     * Amazon EKS optimized AMI that the node group was deployed with.</p>
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
     * <p>The capacity type of your managed node group.</p>
     */
    inline const CapacityTypes& GetCapacityType() const{ return m_capacityType; }

    /**
     * <p>The capacity type of your managed node group.</p>
     */
    inline bool CapacityTypeHasBeenSet() const { return m_capacityTypeHasBeenSet; }

    /**
     * <p>The capacity type of your managed node group.</p>
     */
    inline void SetCapacityType(const CapacityTypes& value) { m_capacityTypeHasBeenSet = true; m_capacityType = value; }

    /**
     * <p>The capacity type of your managed node group.</p>
     */
    inline void SetCapacityType(CapacityTypes&& value) { m_capacityTypeHasBeenSet = true; m_capacityType = std::move(value); }

    /**
     * <p>The capacity type of your managed node group.</p>
     */
    inline Nodegroup& WithCapacityType(const CapacityTypes& value) { SetCapacityType(value); return *this;}

    /**
     * <p>The capacity type of your managed node group.</p>
     */
    inline Nodegroup& WithCapacityType(CapacityTypes&& value) { SetCapacityType(std::move(value)); return *this;}


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
     * <p>If the node group wasn't deployed with a launch template, then this is the
     * instance type that is associated with the node group. If the node group was
     * deployed with a launch template, then this is <code>null</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTypes() const{ return m_instanceTypes; }

    /**
     * <p>If the node group wasn't deployed with a launch template, then this is the
     * instance type that is associated with the node group. If the node group was
     * deployed with a launch template, then this is <code>null</code>.</p>
     */
    inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }

    /**
     * <p>If the node group wasn't deployed with a launch template, then this is the
     * instance type that is associated with the node group. If the node group was
     * deployed with a launch template, then this is <code>null</code>.</p>
     */
    inline void SetInstanceTypes(const Aws::Vector<Aws::String>& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = value; }

    /**
     * <p>If the node group wasn't deployed with a launch template, then this is the
     * instance type that is associated with the node group. If the node group was
     * deployed with a launch template, then this is <code>null</code>.</p>
     */
    inline void SetInstanceTypes(Aws::Vector<Aws::String>&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::move(value); }

    /**
     * <p>If the node group wasn't deployed with a launch template, then this is the
     * instance type that is associated with the node group. If the node group was
     * deployed with a launch template, then this is <code>null</code>.</p>
     */
    inline Nodegroup& WithInstanceTypes(const Aws::Vector<Aws::String>& value) { SetInstanceTypes(value); return *this;}

    /**
     * <p>If the node group wasn't deployed with a launch template, then this is the
     * instance type that is associated with the node group. If the node group was
     * deployed with a launch template, then this is <code>null</code>.</p>
     */
    inline Nodegroup& WithInstanceTypes(Aws::Vector<Aws::String>&& value) { SetInstanceTypes(std::move(value)); return *this;}

    /**
     * <p>If the node group wasn't deployed with a launch template, then this is the
     * instance type that is associated with the node group. If the node group was
     * deployed with a launch template, then this is <code>null</code>.</p>
     */
    inline Nodegroup& AddInstanceTypes(const Aws::String& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }

    /**
     * <p>If the node group wasn't deployed with a launch template, then this is the
     * instance type that is associated with the node group. If the node group was
     * deployed with a launch template, then this is <code>null</code>.</p>
     */
    inline Nodegroup& AddInstanceTypes(Aws::String&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>If the node group wasn't deployed with a launch template, then this is the
     * instance type that is associated with the node group. If the node group was
     * deployed with a launch template, then this is <code>null</code>.</p>
     */
    inline Nodegroup& AddInstanceTypes(const char* value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }


    /**
     * <p>The subnets that were specified for the Auto Scaling group that is associated
     * with your node group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The subnets that were specified for the Auto Scaling group that is associated
     * with your node group.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>The subnets that were specified for the Auto Scaling group that is associated
     * with your node group.</p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The subnets that were specified for the Auto Scaling group that is associated
     * with your node group.</p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>The subnets that were specified for the Auto Scaling group that is associated
     * with your node group.</p>
     */
    inline Nodegroup& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The subnets that were specified for the Auto Scaling group that is associated
     * with your node group.</p>
     */
    inline Nodegroup& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>The subnets that were specified for the Auto Scaling group that is associated
     * with your node group.</p>
     */
    inline Nodegroup& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The subnets that were specified for the Auto Scaling group that is associated
     * with your node group.</p>
     */
    inline Nodegroup& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>The subnets that were specified for the Auto Scaling group that is associated
     * with your node group.</p>
     */
    inline Nodegroup& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }


    /**
     * <p>If the node group wasn't deployed with a launch template, then this is the
     * remote access configuration that is associated with the node group. If the node
     * group was deployed with a launch template, then this is <code>null</code>.</p>
     */
    inline const RemoteAccessConfig& GetRemoteAccess() const{ return m_remoteAccess; }

    /**
     * <p>If the node group wasn't deployed with a launch template, then this is the
     * remote access configuration that is associated with the node group. If the node
     * group was deployed with a launch template, then this is <code>null</code>.</p>
     */
    inline bool RemoteAccessHasBeenSet() const { return m_remoteAccessHasBeenSet; }

    /**
     * <p>If the node group wasn't deployed with a launch template, then this is the
     * remote access configuration that is associated with the node group. If the node
     * group was deployed with a launch template, then this is <code>null</code>.</p>
     */
    inline void SetRemoteAccess(const RemoteAccessConfig& value) { m_remoteAccessHasBeenSet = true; m_remoteAccess = value; }

    /**
     * <p>If the node group wasn't deployed with a launch template, then this is the
     * remote access configuration that is associated with the node group. If the node
     * group was deployed with a launch template, then this is <code>null</code>.</p>
     */
    inline void SetRemoteAccess(RemoteAccessConfig&& value) { m_remoteAccessHasBeenSet = true; m_remoteAccess = std::move(value); }

    /**
     * <p>If the node group wasn't deployed with a launch template, then this is the
     * remote access configuration that is associated with the node group. If the node
     * group was deployed with a launch template, then this is <code>null</code>.</p>
     */
    inline Nodegroup& WithRemoteAccess(const RemoteAccessConfig& value) { SetRemoteAccess(value); return *this;}

    /**
     * <p>If the node group wasn't deployed with a launch template, then this is the
     * remote access configuration that is associated with the node group. If the node
     * group was deployed with a launch template, then this is <code>null</code>.</p>
     */
    inline Nodegroup& WithRemoteAccess(RemoteAccessConfig&& value) { SetRemoteAccess(std::move(value)); return *this;}


    /**
     * <p>If the node group was deployed using a launch template with a custom AMI,
     * then this is <code>CUSTOM</code>. For node groups that weren't deployed using a
     * launch template, this is the AMI type that was specified in the node group
     * configuration.</p>
     */
    inline const AMITypes& GetAmiType() const{ return m_amiType; }

    /**
     * <p>If the node group was deployed using a launch template with a custom AMI,
     * then this is <code>CUSTOM</code>. For node groups that weren't deployed using a
     * launch template, this is the AMI type that was specified in the node group
     * configuration.</p>
     */
    inline bool AmiTypeHasBeenSet() const { return m_amiTypeHasBeenSet; }

    /**
     * <p>If the node group was deployed using a launch template with a custom AMI,
     * then this is <code>CUSTOM</code>. For node groups that weren't deployed using a
     * launch template, this is the AMI type that was specified in the node group
     * configuration.</p>
     */
    inline void SetAmiType(const AMITypes& value) { m_amiTypeHasBeenSet = true; m_amiType = value; }

    /**
     * <p>If the node group was deployed using a launch template with a custom AMI,
     * then this is <code>CUSTOM</code>. For node groups that weren't deployed using a
     * launch template, this is the AMI type that was specified in the node group
     * configuration.</p>
     */
    inline void SetAmiType(AMITypes&& value) { m_amiTypeHasBeenSet = true; m_amiType = std::move(value); }

    /**
     * <p>If the node group was deployed using a launch template with a custom AMI,
     * then this is <code>CUSTOM</code>. For node groups that weren't deployed using a
     * launch template, this is the AMI type that was specified in the node group
     * configuration.</p>
     */
    inline Nodegroup& WithAmiType(const AMITypes& value) { SetAmiType(value); return *this;}

    /**
     * <p>If the node group was deployed using a launch template with a custom AMI,
     * then this is <code>CUSTOM</code>. For node groups that weren't deployed using a
     * launch template, this is the AMI type that was specified in the node group
     * configuration.</p>
     */
    inline Nodegroup& WithAmiType(AMITypes&& value) { SetAmiType(std::move(value)); return *this;}


    /**
     * <p>The IAM role associated with your node group. The Amazon EKS node
     * <code>kubelet</code> daemon makes calls to Amazon Web Services APIs on your
     * behalf. Nodes receive permissions for these API calls through an IAM instance
     * profile and associated policies.</p>
     */
    inline const Aws::String& GetNodeRole() const{ return m_nodeRole; }

    /**
     * <p>The IAM role associated with your node group. The Amazon EKS node
     * <code>kubelet</code> daemon makes calls to Amazon Web Services APIs on your
     * behalf. Nodes receive permissions for these API calls through an IAM instance
     * profile and associated policies.</p>
     */
    inline bool NodeRoleHasBeenSet() const { return m_nodeRoleHasBeenSet; }

    /**
     * <p>The IAM role associated with your node group. The Amazon EKS node
     * <code>kubelet</code> daemon makes calls to Amazon Web Services APIs on your
     * behalf. Nodes receive permissions for these API calls through an IAM instance
     * profile and associated policies.</p>
     */
    inline void SetNodeRole(const Aws::String& value) { m_nodeRoleHasBeenSet = true; m_nodeRole = value; }

    /**
     * <p>The IAM role associated with your node group. The Amazon EKS node
     * <code>kubelet</code> daemon makes calls to Amazon Web Services APIs on your
     * behalf. Nodes receive permissions for these API calls through an IAM instance
     * profile and associated policies.</p>
     */
    inline void SetNodeRole(Aws::String&& value) { m_nodeRoleHasBeenSet = true; m_nodeRole = std::move(value); }

    /**
     * <p>The IAM role associated with your node group. The Amazon EKS node
     * <code>kubelet</code> daemon makes calls to Amazon Web Services APIs on your
     * behalf. Nodes receive permissions for these API calls through an IAM instance
     * profile and associated policies.</p>
     */
    inline void SetNodeRole(const char* value) { m_nodeRoleHasBeenSet = true; m_nodeRole.assign(value); }

    /**
     * <p>The IAM role associated with your node group. The Amazon EKS node
     * <code>kubelet</code> daemon makes calls to Amazon Web Services APIs on your
     * behalf. Nodes receive permissions for these API calls through an IAM instance
     * profile and associated policies.</p>
     */
    inline Nodegroup& WithNodeRole(const Aws::String& value) { SetNodeRole(value); return *this;}

    /**
     * <p>The IAM role associated with your node group. The Amazon EKS node
     * <code>kubelet</code> daemon makes calls to Amazon Web Services APIs on your
     * behalf. Nodes receive permissions for these API calls through an IAM instance
     * profile and associated policies.</p>
     */
    inline Nodegroup& WithNodeRole(Aws::String&& value) { SetNodeRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role associated with your node group. The Amazon EKS node
     * <code>kubelet</code> daemon makes calls to Amazon Web Services APIs on your
     * behalf. Nodes receive permissions for these API calls through an IAM instance
     * profile and associated policies.</p>
     */
    inline Nodegroup& WithNodeRole(const char* value) { SetNodeRole(value); return *this;}


    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> 
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLabels() const{ return m_labels; }

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> 
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> 
     */
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> 
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> 
     */
    inline void SetLabels(const Aws::Map<Aws::String, Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> 
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> 
     */
    inline void SetLabels(Aws::Map<Aws::String, Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> 
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> 
     */
    inline Nodegroup& WithLabels(const Aws::Map<Aws::String, Aws::String>& value) { SetLabels(value); return *this;}

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> 
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> 
     */
    inline Nodegroup& WithLabels(Aws::Map<Aws::String, Aws::String>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> 
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> 
     */
    inline Nodegroup& AddLabels(const Aws::String& key, const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, value); return *this; }

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> 
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> 
     */
    inline Nodegroup& AddLabels(Aws::String&& key, const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> 
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> 
     */
    inline Nodegroup& AddLabels(const Aws::String& key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> 
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> 
     */
    inline Nodegroup& AddLabels(Aws::String&& key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> 
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> 
     */
    inline Nodegroup& AddLabels(const char* key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> 
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> 
     */
    inline Nodegroup& AddLabels(Aws::String&& key, const char* value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Kubernetes labels applied to the nodes in the node group.</p> 
     * <p>Only labels that are applied with the Amazon EKS API are shown here. There
     * may be other Kubernetes labels applied to the nodes in this group.</p> 
     */
    inline Nodegroup& AddLabels(const char* key, const char* value) { m_labelsHasBeenSet = true; m_labels.emplace(key, value); return *this; }


    /**
     * <p>The Kubernetes taints to be applied to the nodes in the node group when they
     * are created. Effect is one of <code>No_Schedule</code>,
     * <code>Prefer_No_Schedule</code>, or <code>No_Execute</code>. Kubernetes taints
     * can be used together with tolerations to control how workloads are scheduled to
     * your nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/node-taints-managed-node-groups.html">Node
     * taints on managed node groups</a>.</p>
     */
    inline const Aws::Vector<Taint>& GetTaints() const{ return m_taints; }

    /**
     * <p>The Kubernetes taints to be applied to the nodes in the node group when they
     * are created. Effect is one of <code>No_Schedule</code>,
     * <code>Prefer_No_Schedule</code>, or <code>No_Execute</code>. Kubernetes taints
     * can be used together with tolerations to control how workloads are scheduled to
     * your nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/node-taints-managed-node-groups.html">Node
     * taints on managed node groups</a>.</p>
     */
    inline bool TaintsHasBeenSet() const { return m_taintsHasBeenSet; }

    /**
     * <p>The Kubernetes taints to be applied to the nodes in the node group when they
     * are created. Effect is one of <code>No_Schedule</code>,
     * <code>Prefer_No_Schedule</code>, or <code>No_Execute</code>. Kubernetes taints
     * can be used together with tolerations to control how workloads are scheduled to
     * your nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/node-taints-managed-node-groups.html">Node
     * taints on managed node groups</a>.</p>
     */
    inline void SetTaints(const Aws::Vector<Taint>& value) { m_taintsHasBeenSet = true; m_taints = value; }

    /**
     * <p>The Kubernetes taints to be applied to the nodes in the node group when they
     * are created. Effect is one of <code>No_Schedule</code>,
     * <code>Prefer_No_Schedule</code>, or <code>No_Execute</code>. Kubernetes taints
     * can be used together with tolerations to control how workloads are scheduled to
     * your nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/node-taints-managed-node-groups.html">Node
     * taints on managed node groups</a>.</p>
     */
    inline void SetTaints(Aws::Vector<Taint>&& value) { m_taintsHasBeenSet = true; m_taints = std::move(value); }

    /**
     * <p>The Kubernetes taints to be applied to the nodes in the node group when they
     * are created. Effect is one of <code>No_Schedule</code>,
     * <code>Prefer_No_Schedule</code>, or <code>No_Execute</code>. Kubernetes taints
     * can be used together with tolerations to control how workloads are scheduled to
     * your nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/node-taints-managed-node-groups.html">Node
     * taints on managed node groups</a>.</p>
     */
    inline Nodegroup& WithTaints(const Aws::Vector<Taint>& value) { SetTaints(value); return *this;}

    /**
     * <p>The Kubernetes taints to be applied to the nodes in the node group when they
     * are created. Effect is one of <code>No_Schedule</code>,
     * <code>Prefer_No_Schedule</code>, or <code>No_Execute</code>. Kubernetes taints
     * can be used together with tolerations to control how workloads are scheduled to
     * your nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/node-taints-managed-node-groups.html">Node
     * taints on managed node groups</a>.</p>
     */
    inline Nodegroup& WithTaints(Aws::Vector<Taint>&& value) { SetTaints(std::move(value)); return *this;}

    /**
     * <p>The Kubernetes taints to be applied to the nodes in the node group when they
     * are created. Effect is one of <code>No_Schedule</code>,
     * <code>Prefer_No_Schedule</code>, or <code>No_Execute</code>. Kubernetes taints
     * can be used together with tolerations to control how workloads are scheduled to
     * your nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/node-taints-managed-node-groups.html">Node
     * taints on managed node groups</a>.</p>
     */
    inline Nodegroup& AddTaints(const Taint& value) { m_taintsHasBeenSet = true; m_taints.push_back(value); return *this; }

    /**
     * <p>The Kubernetes taints to be applied to the nodes in the node group when they
     * are created. Effect is one of <code>No_Schedule</code>,
     * <code>Prefer_No_Schedule</code>, or <code>No_Execute</code>. Kubernetes taints
     * can be used together with tolerations to control how workloads are scheduled to
     * your nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/node-taints-managed-node-groups.html">Node
     * taints on managed node groups</a>.</p>
     */
    inline Nodegroup& AddTaints(Taint&& value) { m_taintsHasBeenSet = true; m_taints.push_back(std::move(value)); return *this; }


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
     * <p>If the node group wasn't deployed with a launch template, then this is the
     * disk size in the node group configuration. If the node group was deployed with a
     * launch template, then this is <code>null</code>.</p>
     */
    inline int GetDiskSize() const{ return m_diskSize; }

    /**
     * <p>If the node group wasn't deployed with a launch template, then this is the
     * disk size in the node group configuration. If the node group was deployed with a
     * launch template, then this is <code>null</code>.</p>
     */
    inline bool DiskSizeHasBeenSet() const { return m_diskSizeHasBeenSet; }

    /**
     * <p>If the node group wasn't deployed with a launch template, then this is the
     * disk size in the node group configuration. If the node group was deployed with a
     * launch template, then this is <code>null</code>.</p>
     */
    inline void SetDiskSize(int value) { m_diskSizeHasBeenSet = true; m_diskSize = value; }

    /**
     * <p>If the node group wasn't deployed with a launch template, then this is the
     * disk size in the node group configuration. If the node group was deployed with a
     * launch template, then this is <code>null</code>.</p>
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
    inline Nodegroup& WithUpdateConfig(const NodegroupUpdateConfig& value) { SetUpdateConfig(value); return *this;}

    /**
     * <p>The node group update configuration.</p>
     */
    inline Nodegroup& WithUpdateConfig(NodegroupUpdateConfig&& value) { SetUpdateConfig(std::move(value)); return *this;}


    /**
     * <p>If a launch template was used to create the node group, then this is the
     * launch template that was used.</p>
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplate() const{ return m_launchTemplate; }

    /**
     * <p>If a launch template was used to create the node group, then this is the
     * launch template that was used.</p>
     */
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }

    /**
     * <p>If a launch template was used to create the node group, then this is the
     * launch template that was used.</p>
     */
    inline void SetLaunchTemplate(const LaunchTemplateSpecification& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = value; }

    /**
     * <p>If a launch template was used to create the node group, then this is the
     * launch template that was used.</p>
     */
    inline void SetLaunchTemplate(LaunchTemplateSpecification&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::move(value); }

    /**
     * <p>If a launch template was used to create the node group, then this is the
     * launch template that was used.</p>
     */
    inline Nodegroup& WithLaunchTemplate(const LaunchTemplateSpecification& value) { SetLaunchTemplate(value); return *this;}

    /**
     * <p>If a launch template was used to create the node group, then this is the
     * launch template that was used.</p>
     */
    inline Nodegroup& WithLaunchTemplate(LaunchTemplateSpecification&& value) { SetLaunchTemplate(std::move(value)); return *this;}


    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline Nodegroup& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline Nodegroup& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline Nodegroup& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline Nodegroup& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline Nodegroup& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline Nodegroup& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline Nodegroup& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline Nodegroup& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata applied to the node group to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Node group tags do not propagate to any other resources associated with the node
     * group, such as the Amazon EC2 instances or subnets. </p>
     */
    inline Nodegroup& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;

    NodegroupStatus m_status;
    bool m_statusHasBeenSet = false;

    CapacityTypes m_capacityType;
    bool m_capacityTypeHasBeenSet = false;

    NodegroupScalingConfig m_scalingConfig;
    bool m_scalingConfigHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceTypes;
    bool m_instanceTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;

    RemoteAccessConfig m_remoteAccess;
    bool m_remoteAccessHasBeenSet = false;

    AMITypes m_amiType;
    bool m_amiTypeHasBeenSet = false;

    Aws::String m_nodeRole;
    bool m_nodeRoleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;

    Aws::Vector<Taint> m_taints;
    bool m_taintsHasBeenSet = false;

    NodegroupResources m_resources;
    bool m_resourcesHasBeenSet = false;

    int m_diskSize;
    bool m_diskSizeHasBeenSet = false;

    NodegroupHealth m_health;
    bool m_healthHasBeenSet = false;

    NodegroupUpdateConfig m_updateConfig;
    bool m_updateConfigHasBeenSet = false;

    LaunchTemplateSpecification m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
