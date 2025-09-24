/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/dax/DAXRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dax/model/SSESpecification.h>
#include <aws/dax/model/ClusterEndpointEncryptionType.h>
#include <aws/dax/model/NetworkType.h>
#include <aws/dax/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DAX
{
namespace Model
{

  /**
   */
  class CreateClusterRequest : public DAXRequest
  {
  public:
    AWS_DAX_API CreateClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCluster"; }

    AWS_DAX_API Aws::String SerializePayload() const override;

    AWS_DAX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The cluster identifier. This parameter is stored as a lowercase string.</p>
     * <p> <b>Constraints:</b> </p> <ul> <li> <p>A name must contain from 1 to 20
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    CreateClusterRequest& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute and memory capacity of the nodes in the cluster.</p>
     */
    inline const Aws::String& GetNodeType() const { return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    template<typename NodeTypeT = Aws::String>
    void SetNodeType(NodeTypeT&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::forward<NodeTypeT>(value); }
    template<typename NodeTypeT = Aws::String>
    CreateClusterRequest& WithNodeType(NodeTypeT&& value) { SetNodeType(std::forward<NodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the cluster.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateClusterRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of nodes in the DAX cluster. A replication factor of 1 will create
     * a single-node cluster, without any read replicas. For additional fault
     * tolerance, you can create a multiple node cluster with one or more read
     * replicas. To do this, set <code>ReplicationFactor</code> to a number between 3
     * (one primary and two read replicas) and 10 (one primary and nine read replicas).
     * <code>If the AvailabilityZones</code> parameter is provided, its length must
     * equal the <code>ReplicationFactor</code>.</p>  <p>Amazon Web Services
     * recommends that you have at least two read replicas per cluster.</p> 
     */
    inline int GetReplicationFactor() const { return m_replicationFactor; }
    inline bool ReplicationFactorHasBeenSet() const { return m_replicationFactorHasBeenSet; }
    inline void SetReplicationFactor(int value) { m_replicationFactorHasBeenSet = true; m_replicationFactor = value; }
    inline CreateClusterRequest& WithReplicationFactor(int value) { SetReplicationFactor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zones (AZs) in which the cluster nodes will reside after the
     * cluster has been created or updated. If provided, the length of this list must
     * equal the <code>ReplicationFactor</code> parameter. If you omit this parameter,
     * DAX will spread the nodes across Availability Zones for the highest
     * availability.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    CreateClusterRequest& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = Aws::String>
    CreateClusterRequest& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the subnet group to be used for the replication group.</p>
     *  <p>DAX clusters can only run in an Amazon VPC environment. All of
     * the subnets that you specify in a subnet group must exist in the same VPC.</p>
     * 
     */
    inline const Aws::String& GetSubnetGroupName() const { return m_subnetGroupName; }
    inline bool SubnetGroupNameHasBeenSet() const { return m_subnetGroupNameHasBeenSet; }
    template<typename SubnetGroupNameT = Aws::String>
    void SetSubnetGroupName(SubnetGroupNameT&& value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName = std::forward<SubnetGroupNameT>(value); }
    template<typename SubnetGroupNameT = Aws::String>
    CreateClusterRequest& WithSubnetGroupName(SubnetGroupNameT&& value) { SetSubnetGroupName(std::forward<SubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of security group IDs to be assigned to each node in the DAX cluster.
     * (Each of the security group ID is system-generated.)</p> <p>If this parameter is
     * not specified, DAX assigns the default VPC security group to each node.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    CreateClusterRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    CreateClusterRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the weekly time range during which maintenance on the DAX cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:05:00-sun:09:00</code> </p>  <p>If you don't specify
     * a preferred maintenance window when you create or modify a cache cluster, DAX
     * assigns a 60-minute maintenance window on a randomly selected day of the
     * week.</p> 
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    CreateClusterRequest& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * will be sent.</p>  <p>The Amazon SNS topic owner must be same as the DAX
     * cluster owner.</p> 
     */
    inline const Aws::String& GetNotificationTopicArn() const { return m_notificationTopicArn; }
    inline bool NotificationTopicArnHasBeenSet() const { return m_notificationTopicArnHasBeenSet; }
    template<typename NotificationTopicArnT = Aws::String>
    void SetNotificationTopicArn(NotificationTopicArnT&& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = std::forward<NotificationTopicArnT>(value); }
    template<typename NotificationTopicArnT = Aws::String>
    CreateClusterRequest& WithNotificationTopicArn(NotificationTopicArnT&& value) { SetNotificationTopicArn(std::forward<NotificationTopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid Amazon Resource Name (ARN) that identifies an IAM role. At runtime,
     * DAX will assume this role and use the role's permissions to access DynamoDB on
     * your behalf.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    CreateClusterRequest& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter group to be associated with the DAX cluster.</p>
     */
    inline const Aws::String& GetParameterGroupName() const { return m_parameterGroupName; }
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }
    template<typename ParameterGroupNameT = Aws::String>
    void SetParameterGroupName(ParameterGroupNameT&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::forward<ParameterGroupNameT>(value); }
    template<typename ParameterGroupNameT = Aws::String>
    CreateClusterRequest& WithParameterGroupName(ParameterGroupNameT&& value) { SetParameterGroupName(std::forward<ParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of tags to associate with the DAX cluster. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateClusterRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateClusterRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the settings used to enable server-side encryption on the
     * cluster.</p>
     */
    inline const SSESpecification& GetSSESpecification() const { return m_sSESpecification; }
    inline bool SSESpecificationHasBeenSet() const { return m_sSESpecificationHasBeenSet; }
    template<typename SSESpecificationT = SSESpecification>
    void SetSSESpecification(SSESpecificationT&& value) { m_sSESpecificationHasBeenSet = true; m_sSESpecification = std::forward<SSESpecificationT>(value); }
    template<typename SSESpecificationT = SSESpecification>
    CreateClusterRequest& WithSSESpecification(SSESpecificationT&& value) { SetSSESpecification(std::forward<SSESpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of encryption the cluster's endpoint should support. Values are:</p>
     * <ul> <li> <p> <code>NONE</code> for no encryption</p> </li> <li> <p>
     * <code>TLS</code> for Transport Layer Security</p> </li> </ul>
     */
    inline ClusterEndpointEncryptionType GetClusterEndpointEncryptionType() const { return m_clusterEndpointEncryptionType; }
    inline bool ClusterEndpointEncryptionTypeHasBeenSet() const { return m_clusterEndpointEncryptionTypeHasBeenSet; }
    inline void SetClusterEndpointEncryptionType(ClusterEndpointEncryptionType value) { m_clusterEndpointEncryptionTypeHasBeenSet = true; m_clusterEndpointEncryptionType = value; }
    inline CreateClusterRequest& WithClusterEndpointEncryptionType(ClusterEndpointEncryptionType value) { SetClusterEndpointEncryptionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the IP protocol(s) the cluster uses for network communications.
     * Values are:</p> <ul> <li> <p> <code>ipv4</code> - The cluster is accessible only
     * through IPv4 addresses</p> </li> <li> <p> <code>ipv6</code> - The cluster is
     * accessible only through IPv6 addresses</p> </li> <li> <p>
     * <code>dual_stack</code> - The cluster is accessible through both IPv4 and IPv6
     * addresses.</p> </li> </ul>  <p>If no explicit <code>NetworkType</code> is
     * provided, the network type is derived based on the subnet group's
     * configuration.</p> 
     */
    inline NetworkType GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(NetworkType value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline CreateClusterRequest& WithNetworkType(NetworkType value) { SetNetworkType(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_replicationFactor{0};
    bool m_replicationFactorHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::String m_subnetGroupName;
    bool m_subnetGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::String m_notificationTopicArn;
    bool m_notificationTopicArnHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    SSESpecification m_sSESpecification;
    bool m_sSESpecificationHasBeenSet = false;

    ClusterEndpointEncryptionType m_clusterEndpointEncryptionType{ClusterEndpointEncryptionType::NOT_SET};
    bool m_clusterEndpointEncryptionTypeHasBeenSet = false;

    NetworkType m_networkType{NetworkType::NOT_SET};
    bool m_networkTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
