/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dax/model/Endpoint.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dax/model/NotificationConfiguration.h>
#include <aws/dax/model/ParameterGroupStatus.h>
#include <aws/dax/model/SSEDescription.h>
#include <aws/dax/model/ClusterEndpointEncryptionType.h>
#include <aws/dax/model/Node.h>
#include <aws/dax/model/SecurityGroupMembership.h>
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
namespace DAX
{
namespace Model
{

  /**
   * <p>Contains all of the attributes of a specific DAX cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/Cluster">AWS API
   * Reference</a></p>
   */
  class Cluster
  {
  public:
    AWS_DAX_API Cluster() = default;
    AWS_DAX_API Cluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API Cluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the DAX cluster.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    Cluster& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the cluster.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Cluster& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the cluster. </p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    Cluster& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of nodes in the cluster.</p>
     */
    inline int GetTotalNodes() const { return m_totalNodes; }
    inline bool TotalNodesHasBeenSet() const { return m_totalNodesHasBeenSet; }
    inline void SetTotalNodes(int value) { m_totalNodesHasBeenSet = true; m_totalNodes = value; }
    inline Cluster& WithTotalNodes(int value) { SetTotalNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of nodes in the cluster that are active (i.e., capable of serving
     * requests).</p>
     */
    inline int GetActiveNodes() const { return m_activeNodes; }
    inline bool ActiveNodesHasBeenSet() const { return m_activeNodesHasBeenSet; }
    inline void SetActiveNodes(int value) { m_activeNodesHasBeenSet = true; m_activeNodes = value; }
    inline Cluster& WithActiveNodes(int value) { SetActiveNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type for the nodes in the cluster. (All nodes in a DAX cluster are
     * of the same type.)</p>
     */
    inline const Aws::String& GetNodeType() const { return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    template<typename NodeTypeT = Aws::String>
    void SetNodeType(NodeTypeT&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::forward<NodeTypeT>(value); }
    template<typename NodeTypeT = Aws::String>
    Cluster& WithNodeType(NodeTypeT&& value) { SetNodeType(std::forward<NodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the cluster.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Cluster& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint for this DAX cluster, consisting of a DNS name, a port number,
     * and a URL. Applications should use the URL to configure the DAX client to find
     * their cluster.</p>
     */
    inline const Endpoint& GetClusterDiscoveryEndpoint() const { return m_clusterDiscoveryEndpoint; }
    inline bool ClusterDiscoveryEndpointHasBeenSet() const { return m_clusterDiscoveryEndpointHasBeenSet; }
    template<typename ClusterDiscoveryEndpointT = Endpoint>
    void SetClusterDiscoveryEndpoint(ClusterDiscoveryEndpointT&& value) { m_clusterDiscoveryEndpointHasBeenSet = true; m_clusterDiscoveryEndpoint = std::forward<ClusterDiscoveryEndpointT>(value); }
    template<typename ClusterDiscoveryEndpointT = Endpoint>
    Cluster& WithClusterDiscoveryEndpoint(ClusterDiscoveryEndpointT&& value) { SetClusterDiscoveryEndpoint(std::forward<ClusterDiscoveryEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of nodes to be removed from the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodeIdsToRemove() const { return m_nodeIdsToRemove; }
    inline bool NodeIdsToRemoveHasBeenSet() const { return m_nodeIdsToRemoveHasBeenSet; }
    template<typename NodeIdsToRemoveT = Aws::Vector<Aws::String>>
    void SetNodeIdsToRemove(NodeIdsToRemoveT&& value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove = std::forward<NodeIdsToRemoveT>(value); }
    template<typename NodeIdsToRemoveT = Aws::Vector<Aws::String>>
    Cluster& WithNodeIdsToRemove(NodeIdsToRemoveT&& value) { SetNodeIdsToRemove(std::forward<NodeIdsToRemoveT>(value)); return *this;}
    template<typename NodeIdsToRemoveT = Aws::String>
    Cluster& AddNodeIdsToRemove(NodeIdsToRemoveT&& value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove.emplace_back(std::forward<NodeIdsToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of nodes that are currently in the cluster.</p>
     */
    inline const Aws::Vector<Node>& GetNodes() const { return m_nodes; }
    inline bool NodesHasBeenSet() const { return m_nodesHasBeenSet; }
    template<typename NodesT = Aws::Vector<Node>>
    void SetNodes(NodesT&& value) { m_nodesHasBeenSet = true; m_nodes = std::forward<NodesT>(value); }
    template<typename NodesT = Aws::Vector<Node>>
    Cluster& WithNodes(NodesT&& value) { SetNodes(std::forward<NodesT>(value)); return *this;}
    template<typename NodesT = Node>
    Cluster& AddNodes(NodesT&& value) { m_nodesHasBeenSet = true; m_nodes.emplace_back(std::forward<NodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A range of time when maintenance of DAX cluster software will be performed.
     * For example: <code>sun:01:00-sun:09:00</code>. Cluster maintenance normally
     * takes less than 30 minutes, and is performed automatically within the
     * maintenance window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    Cluster& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes a notification topic and its status. Notification topics are used
     * for publishing DAX events to subscribers using Amazon Simple Notification
     * Service (SNS).</p>
     */
    inline const NotificationConfiguration& GetNotificationConfiguration() const { return m_notificationConfiguration; }
    inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }
    template<typename NotificationConfigurationT = NotificationConfiguration>
    void SetNotificationConfiguration(NotificationConfigurationT&& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = std::forward<NotificationConfigurationT>(value); }
    template<typename NotificationConfigurationT = NotificationConfiguration>
    Cluster& WithNotificationConfiguration(NotificationConfigurationT&& value) { SetNotificationConfiguration(std::forward<NotificationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet group where the DAX cluster is running.</p>
     */
    inline const Aws::String& GetSubnetGroup() const { return m_subnetGroup; }
    inline bool SubnetGroupHasBeenSet() const { return m_subnetGroupHasBeenSet; }
    template<typename SubnetGroupT = Aws::String>
    void SetSubnetGroup(SubnetGroupT&& value) { m_subnetGroupHasBeenSet = true; m_subnetGroup = std::forward<SubnetGroupT>(value); }
    template<typename SubnetGroupT = Aws::String>
    Cluster& WithSubnetGroup(SubnetGroupT&& value) { SetSubnetGroup(std::forward<SubnetGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of security groups, and the status of each, for the nodes in the
     * cluster.</p>
     */
    inline const Aws::Vector<SecurityGroupMembership>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<SecurityGroupMembership>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<SecurityGroupMembership>>
    Cluster& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = SecurityGroupMembership>
    Cluster& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
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
    Cluster& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter group being used by nodes in the cluster.</p>
     */
    inline const ParameterGroupStatus& GetParameterGroup() const { return m_parameterGroup; }
    inline bool ParameterGroupHasBeenSet() const { return m_parameterGroupHasBeenSet; }
    template<typename ParameterGroupT = ParameterGroupStatus>
    void SetParameterGroup(ParameterGroupT&& value) { m_parameterGroupHasBeenSet = true; m_parameterGroup = std::forward<ParameterGroupT>(value); }
    template<typename ParameterGroupT = ParameterGroupStatus>
    Cluster& WithParameterGroup(ParameterGroupT&& value) { SetParameterGroup(std::forward<ParameterGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the server-side encryption status on the specified DAX
     * cluster.</p>
     */
    inline const SSEDescription& GetSSEDescription() const { return m_sSEDescription; }
    inline bool SSEDescriptionHasBeenSet() const { return m_sSEDescriptionHasBeenSet; }
    template<typename SSEDescriptionT = SSEDescription>
    void SetSSEDescription(SSEDescriptionT&& value) { m_sSEDescriptionHasBeenSet = true; m_sSEDescription = std::forward<SSEDescriptionT>(value); }
    template<typename SSEDescriptionT = SSEDescription>
    Cluster& WithSSEDescription(SSEDescriptionT&& value) { SetSSEDescription(std::forward<SSEDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of encryption supported by the cluster's endpoint. Values are:</p>
     * <ul> <li> <p> <code>NONE</code> for no encryption</p> <p> <code>TLS</code> for
     * Transport Layer Security</p> </li> </ul>
     */
    inline ClusterEndpointEncryptionType GetClusterEndpointEncryptionType() const { return m_clusterEndpointEncryptionType; }
    inline bool ClusterEndpointEncryptionTypeHasBeenSet() const { return m_clusterEndpointEncryptionTypeHasBeenSet; }
    inline void SetClusterEndpointEncryptionType(ClusterEndpointEncryptionType value) { m_clusterEndpointEncryptionTypeHasBeenSet = true; m_clusterEndpointEncryptionType = value; }
    inline Cluster& WithClusterEndpointEncryptionType(ClusterEndpointEncryptionType value) { SetClusterEndpointEncryptionType(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    int m_totalNodes{0};
    bool m_totalNodesHasBeenSet = false;

    int m_activeNodes{0};
    bool m_activeNodesHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Endpoint m_clusterDiscoveryEndpoint;
    bool m_clusterDiscoveryEndpointHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodeIdsToRemove;
    bool m_nodeIdsToRemoveHasBeenSet = false;

    Aws::Vector<Node> m_nodes;
    bool m_nodesHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    NotificationConfiguration m_notificationConfiguration;
    bool m_notificationConfigurationHasBeenSet = false;

    Aws::String m_subnetGroup;
    bool m_subnetGroupHasBeenSet = false;

    Aws::Vector<SecurityGroupMembership> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    ParameterGroupStatus m_parameterGroup;
    bool m_parameterGroupHasBeenSet = false;

    SSEDescription m_sSEDescription;
    bool m_sSEDescriptionHasBeenSet = false;

    ClusterEndpointEncryptionType m_clusterEndpointEncryptionType{ClusterEndpointEncryptionType::NOT_SET};
    bool m_clusterEndpointEncryptionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
