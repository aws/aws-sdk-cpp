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
    AWS_DAX_API Cluster();
    AWS_DAX_API Cluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API Cluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the DAX cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline Cluster& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline Cluster& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline Cluster& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the cluster.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Cluster& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Cluster& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Cluster& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the cluster. </p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }
    inline Cluster& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline Cluster& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline Cluster& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of nodes in the cluster.</p>
     */
    inline int GetTotalNodes() const{ return m_totalNodes; }
    inline bool TotalNodesHasBeenSet() const { return m_totalNodesHasBeenSet; }
    inline void SetTotalNodes(int value) { m_totalNodesHasBeenSet = true; m_totalNodes = value; }
    inline Cluster& WithTotalNodes(int value) { SetTotalNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of nodes in the cluster that are active (i.e., capable of serving
     * requests).</p>
     */
    inline int GetActiveNodes() const{ return m_activeNodes; }
    inline bool ActiveNodesHasBeenSet() const { return m_activeNodesHasBeenSet; }
    inline void SetActiveNodes(int value) { m_activeNodesHasBeenSet = true; m_activeNodes = value; }
    inline Cluster& WithActiveNodes(int value) { SetActiveNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type for the nodes in the cluster. (All nodes in a DAX cluster are
     * of the same type.)</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }
    inline Cluster& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}
    inline Cluster& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}
    inline Cluster& WithNodeType(const char* value) { SetNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the cluster.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline Cluster& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline Cluster& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline Cluster& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint for this DAX cluster, consisting of a DNS name, a port number,
     * and a URL. Applications should use the URL to configure the DAX client to find
     * their cluster.</p>
     */
    inline const Endpoint& GetClusterDiscoveryEndpoint() const{ return m_clusterDiscoveryEndpoint; }
    inline bool ClusterDiscoveryEndpointHasBeenSet() const { return m_clusterDiscoveryEndpointHasBeenSet; }
    inline void SetClusterDiscoveryEndpoint(const Endpoint& value) { m_clusterDiscoveryEndpointHasBeenSet = true; m_clusterDiscoveryEndpoint = value; }
    inline void SetClusterDiscoveryEndpoint(Endpoint&& value) { m_clusterDiscoveryEndpointHasBeenSet = true; m_clusterDiscoveryEndpoint = std::move(value); }
    inline Cluster& WithClusterDiscoveryEndpoint(const Endpoint& value) { SetClusterDiscoveryEndpoint(value); return *this;}
    inline Cluster& WithClusterDiscoveryEndpoint(Endpoint&& value) { SetClusterDiscoveryEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of nodes to be removed from the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodeIdsToRemove() const{ return m_nodeIdsToRemove; }
    inline bool NodeIdsToRemoveHasBeenSet() const { return m_nodeIdsToRemoveHasBeenSet; }
    inline void SetNodeIdsToRemove(const Aws::Vector<Aws::String>& value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove = value; }
    inline void SetNodeIdsToRemove(Aws::Vector<Aws::String>&& value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove = std::move(value); }
    inline Cluster& WithNodeIdsToRemove(const Aws::Vector<Aws::String>& value) { SetNodeIdsToRemove(value); return *this;}
    inline Cluster& WithNodeIdsToRemove(Aws::Vector<Aws::String>&& value) { SetNodeIdsToRemove(std::move(value)); return *this;}
    inline Cluster& AddNodeIdsToRemove(const Aws::String& value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove.push_back(value); return *this; }
    inline Cluster& AddNodeIdsToRemove(Aws::String&& value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove.push_back(std::move(value)); return *this; }
    inline Cluster& AddNodeIdsToRemove(const char* value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of nodes that are currently in the cluster.</p>
     */
    inline const Aws::Vector<Node>& GetNodes() const{ return m_nodes; }
    inline bool NodesHasBeenSet() const { return m_nodesHasBeenSet; }
    inline void SetNodes(const Aws::Vector<Node>& value) { m_nodesHasBeenSet = true; m_nodes = value; }
    inline void SetNodes(Aws::Vector<Node>&& value) { m_nodesHasBeenSet = true; m_nodes = std::move(value); }
    inline Cluster& WithNodes(const Aws::Vector<Node>& value) { SetNodes(value); return *this;}
    inline Cluster& WithNodes(Aws::Vector<Node>&& value) { SetNodes(std::move(value)); return *this;}
    inline Cluster& AddNodes(const Node& value) { m_nodesHasBeenSet = true; m_nodes.push_back(value); return *this; }
    inline Cluster& AddNodes(Node&& value) { m_nodesHasBeenSet = true; m_nodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A range of time when maintenance of DAX cluster software will be performed.
     * For example: <code>sun:01:00-sun:09:00</code>. Cluster maintenance normally
     * takes less than 30 minutes, and is performed automatically within the
     * maintenance window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }
    inline Cluster& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}
    inline Cluster& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}
    inline Cluster& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes a notification topic and its status. Notification topics are used
     * for publishing DAX events to subscribers using Amazon Simple Notification
     * Service (SNS).</p>
     */
    inline const NotificationConfiguration& GetNotificationConfiguration() const{ return m_notificationConfiguration; }
    inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }
    inline void SetNotificationConfiguration(const NotificationConfiguration& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = value; }
    inline void SetNotificationConfiguration(NotificationConfiguration&& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = std::move(value); }
    inline Cluster& WithNotificationConfiguration(const NotificationConfiguration& value) { SetNotificationConfiguration(value); return *this;}
    inline Cluster& WithNotificationConfiguration(NotificationConfiguration&& value) { SetNotificationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet group where the DAX cluster is running.</p>
     */
    inline const Aws::String& GetSubnetGroup() const{ return m_subnetGroup; }
    inline bool SubnetGroupHasBeenSet() const { return m_subnetGroupHasBeenSet; }
    inline void SetSubnetGroup(const Aws::String& value) { m_subnetGroupHasBeenSet = true; m_subnetGroup = value; }
    inline void SetSubnetGroup(Aws::String&& value) { m_subnetGroupHasBeenSet = true; m_subnetGroup = std::move(value); }
    inline void SetSubnetGroup(const char* value) { m_subnetGroupHasBeenSet = true; m_subnetGroup.assign(value); }
    inline Cluster& WithSubnetGroup(const Aws::String& value) { SetSubnetGroup(value); return *this;}
    inline Cluster& WithSubnetGroup(Aws::String&& value) { SetSubnetGroup(std::move(value)); return *this;}
    inline Cluster& WithSubnetGroup(const char* value) { SetSubnetGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of security groups, and the status of each, for the nodes in the
     * cluster.</p>
     */
    inline const Aws::Vector<SecurityGroupMembership>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<SecurityGroupMembership>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<SecurityGroupMembership>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline Cluster& WithSecurityGroups(const Aws::Vector<SecurityGroupMembership>& value) { SetSecurityGroups(value); return *this;}
    inline Cluster& WithSecurityGroups(Aws::Vector<SecurityGroupMembership>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline Cluster& AddSecurityGroups(const SecurityGroupMembership& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline Cluster& AddSecurityGroups(SecurityGroupMembership&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A valid Amazon Resource Name (ARN) that identifies an IAM role. At runtime,
     * DAX will assume this role and use the role's permissions to access DynamoDB on
     * your behalf.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }
    inline Cluster& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline Cluster& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline Cluster& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter group being used by nodes in the cluster.</p>
     */
    inline const ParameterGroupStatus& GetParameterGroup() const{ return m_parameterGroup; }
    inline bool ParameterGroupHasBeenSet() const { return m_parameterGroupHasBeenSet; }
    inline void SetParameterGroup(const ParameterGroupStatus& value) { m_parameterGroupHasBeenSet = true; m_parameterGroup = value; }
    inline void SetParameterGroup(ParameterGroupStatus&& value) { m_parameterGroupHasBeenSet = true; m_parameterGroup = std::move(value); }
    inline Cluster& WithParameterGroup(const ParameterGroupStatus& value) { SetParameterGroup(value); return *this;}
    inline Cluster& WithParameterGroup(ParameterGroupStatus&& value) { SetParameterGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the server-side encryption status on the specified DAX
     * cluster.</p>
     */
    inline const SSEDescription& GetSSEDescription() const{ return m_sSEDescription; }
    inline bool SSEDescriptionHasBeenSet() const { return m_sSEDescriptionHasBeenSet; }
    inline void SetSSEDescription(const SSEDescription& value) { m_sSEDescriptionHasBeenSet = true; m_sSEDescription = value; }
    inline void SetSSEDescription(SSEDescription&& value) { m_sSEDescriptionHasBeenSet = true; m_sSEDescription = std::move(value); }
    inline Cluster& WithSSEDescription(const SSEDescription& value) { SetSSEDescription(value); return *this;}
    inline Cluster& WithSSEDescription(SSEDescription&& value) { SetSSEDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of encryption supported by the cluster's endpoint. Values are:</p>
     * <ul> <li> <p> <code>NONE</code> for no encryption</p> <p> <code>TLS</code> for
     * Transport Layer Security</p> </li> </ul>
     */
    inline const ClusterEndpointEncryptionType& GetClusterEndpointEncryptionType() const{ return m_clusterEndpointEncryptionType; }
    inline bool ClusterEndpointEncryptionTypeHasBeenSet() const { return m_clusterEndpointEncryptionTypeHasBeenSet; }
    inline void SetClusterEndpointEncryptionType(const ClusterEndpointEncryptionType& value) { m_clusterEndpointEncryptionTypeHasBeenSet = true; m_clusterEndpointEncryptionType = value; }
    inline void SetClusterEndpointEncryptionType(ClusterEndpointEncryptionType&& value) { m_clusterEndpointEncryptionTypeHasBeenSet = true; m_clusterEndpointEncryptionType = std::move(value); }
    inline Cluster& WithClusterEndpointEncryptionType(const ClusterEndpointEncryptionType& value) { SetClusterEndpointEncryptionType(value); return *this;}
    inline Cluster& WithClusterEndpointEncryptionType(ClusterEndpointEncryptionType&& value) { SetClusterEndpointEncryptionType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    int m_totalNodes;
    bool m_totalNodesHasBeenSet = false;

    int m_activeNodes;
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

    ClusterEndpointEncryptionType m_clusterEndpointEncryptionType;
    bool m_clusterEndpointEncryptionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
