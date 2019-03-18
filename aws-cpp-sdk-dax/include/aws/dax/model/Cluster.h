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
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dax/model/Endpoint.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dax/model/NotificationConfiguration.h>
#include <aws/dax/model/ParameterGroupStatus.h>
#include <aws/dax/model/SSEDescription.h>
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
  class AWS_DAX_API Cluster
  {
  public:
    Cluster();
    Cluster(Aws::Utils::Json::JsonView jsonValue);
    Cluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the DAX cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the DAX cluster.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the DAX cluster.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the DAX cluster.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the DAX cluster.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the DAX cluster.</p>
     */
    inline Cluster& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the DAX cluster.</p>
     */
    inline Cluster& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the DAX cluster.</p>
     */
    inline Cluster& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The description of the cluster.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the cluster.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the cluster.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the cluster.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the cluster.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the cluster.</p>
     */
    inline Cluster& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the cluster.</p>
     */
    inline Cluster& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the cluster.</p>
     */
    inline Cluster& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the cluster. </p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the cluster. </p>
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the cluster. </p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the cluster. </p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the cluster. </p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the cluster. </p>
     */
    inline Cluster& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the cluster. </p>
     */
    inline Cluster& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the cluster. </p>
     */
    inline Cluster& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * <p>The total number of nodes in the cluster.</p>
     */
    inline int GetTotalNodes() const{ return m_totalNodes; }

    /**
     * <p>The total number of nodes in the cluster.</p>
     */
    inline bool TotalNodesHasBeenSet() const { return m_totalNodesHasBeenSet; }

    /**
     * <p>The total number of nodes in the cluster.</p>
     */
    inline void SetTotalNodes(int value) { m_totalNodesHasBeenSet = true; m_totalNodes = value; }

    /**
     * <p>The total number of nodes in the cluster.</p>
     */
    inline Cluster& WithTotalNodes(int value) { SetTotalNodes(value); return *this;}


    /**
     * <p>The number of nodes in the cluster that are active (i.e., capable of serving
     * requests).</p>
     */
    inline int GetActiveNodes() const{ return m_activeNodes; }

    /**
     * <p>The number of nodes in the cluster that are active (i.e., capable of serving
     * requests).</p>
     */
    inline bool ActiveNodesHasBeenSet() const { return m_activeNodesHasBeenSet; }

    /**
     * <p>The number of nodes in the cluster that are active (i.e., capable of serving
     * requests).</p>
     */
    inline void SetActiveNodes(int value) { m_activeNodesHasBeenSet = true; m_activeNodes = value; }

    /**
     * <p>The number of nodes in the cluster that are active (i.e., capable of serving
     * requests).</p>
     */
    inline Cluster& WithActiveNodes(int value) { SetActiveNodes(value); return *this;}


    /**
     * <p>The node type for the nodes in the cluster. (All nodes in a DAX cluster are
     * of the same type.)</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }

    /**
     * <p>The node type for the nodes in the cluster. (All nodes in a DAX cluster are
     * of the same type.)</p>
     */
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }

    /**
     * <p>The node type for the nodes in the cluster. (All nodes in a DAX cluster are
     * of the same type.)</p>
     */
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * <p>The node type for the nodes in the cluster. (All nodes in a DAX cluster are
     * of the same type.)</p>
     */
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }

    /**
     * <p>The node type for the nodes in the cluster. (All nodes in a DAX cluster are
     * of the same type.)</p>
     */
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }

    /**
     * <p>The node type for the nodes in the cluster. (All nodes in a DAX cluster are
     * of the same type.)</p>
     */
    inline Cluster& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}

    /**
     * <p>The node type for the nodes in the cluster. (All nodes in a DAX cluster are
     * of the same type.)</p>
     */
    inline Cluster& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}

    /**
     * <p>The node type for the nodes in the cluster. (All nodes in a DAX cluster are
     * of the same type.)</p>
     */
    inline Cluster& WithNodeType(const char* value) { SetNodeType(value); return *this;}


    /**
     * <p>The current status of the cluster.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the cluster.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the cluster.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the cluster.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the cluster.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The current status of the cluster.</p>
     */
    inline Cluster& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the cluster.</p>
     */
    inline Cluster& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of the cluster.</p>
     */
    inline Cluster& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The configuration endpoint for this DAX cluster, consisting of a DNS name and
     * a port number. Client applications can specify this endpoint, rather than an
     * individual node endpoint, and allow the DAX client software to intelligently
     * route requests and responses to nodes in the DAX cluster.</p>
     */
    inline const Endpoint& GetClusterDiscoveryEndpoint() const{ return m_clusterDiscoveryEndpoint; }

    /**
     * <p>The configuration endpoint for this DAX cluster, consisting of a DNS name and
     * a port number. Client applications can specify this endpoint, rather than an
     * individual node endpoint, and allow the DAX client software to intelligently
     * route requests and responses to nodes in the DAX cluster.</p>
     */
    inline bool ClusterDiscoveryEndpointHasBeenSet() const { return m_clusterDiscoveryEndpointHasBeenSet; }

    /**
     * <p>The configuration endpoint for this DAX cluster, consisting of a DNS name and
     * a port number. Client applications can specify this endpoint, rather than an
     * individual node endpoint, and allow the DAX client software to intelligently
     * route requests and responses to nodes in the DAX cluster.</p>
     */
    inline void SetClusterDiscoveryEndpoint(const Endpoint& value) { m_clusterDiscoveryEndpointHasBeenSet = true; m_clusterDiscoveryEndpoint = value; }

    /**
     * <p>The configuration endpoint for this DAX cluster, consisting of a DNS name and
     * a port number. Client applications can specify this endpoint, rather than an
     * individual node endpoint, and allow the DAX client software to intelligently
     * route requests and responses to nodes in the DAX cluster.</p>
     */
    inline void SetClusterDiscoveryEndpoint(Endpoint&& value) { m_clusterDiscoveryEndpointHasBeenSet = true; m_clusterDiscoveryEndpoint = std::move(value); }

    /**
     * <p>The configuration endpoint for this DAX cluster, consisting of a DNS name and
     * a port number. Client applications can specify this endpoint, rather than an
     * individual node endpoint, and allow the DAX client software to intelligently
     * route requests and responses to nodes in the DAX cluster.</p>
     */
    inline Cluster& WithClusterDiscoveryEndpoint(const Endpoint& value) { SetClusterDiscoveryEndpoint(value); return *this;}

    /**
     * <p>The configuration endpoint for this DAX cluster, consisting of a DNS name and
     * a port number. Client applications can specify this endpoint, rather than an
     * individual node endpoint, and allow the DAX client software to intelligently
     * route requests and responses to nodes in the DAX cluster.</p>
     */
    inline Cluster& WithClusterDiscoveryEndpoint(Endpoint&& value) { SetClusterDiscoveryEndpoint(std::move(value)); return *this;}


    /**
     * <p>A list of nodes to be removed from the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodeIdsToRemove() const{ return m_nodeIdsToRemove; }

    /**
     * <p>A list of nodes to be removed from the cluster.</p>
     */
    inline bool NodeIdsToRemoveHasBeenSet() const { return m_nodeIdsToRemoveHasBeenSet; }

    /**
     * <p>A list of nodes to be removed from the cluster.</p>
     */
    inline void SetNodeIdsToRemove(const Aws::Vector<Aws::String>& value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove = value; }

    /**
     * <p>A list of nodes to be removed from the cluster.</p>
     */
    inline void SetNodeIdsToRemove(Aws::Vector<Aws::String>&& value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove = std::move(value); }

    /**
     * <p>A list of nodes to be removed from the cluster.</p>
     */
    inline Cluster& WithNodeIdsToRemove(const Aws::Vector<Aws::String>& value) { SetNodeIdsToRemove(value); return *this;}

    /**
     * <p>A list of nodes to be removed from the cluster.</p>
     */
    inline Cluster& WithNodeIdsToRemove(Aws::Vector<Aws::String>&& value) { SetNodeIdsToRemove(std::move(value)); return *this;}

    /**
     * <p>A list of nodes to be removed from the cluster.</p>
     */
    inline Cluster& AddNodeIdsToRemove(const Aws::String& value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove.push_back(value); return *this; }

    /**
     * <p>A list of nodes to be removed from the cluster.</p>
     */
    inline Cluster& AddNodeIdsToRemove(Aws::String&& value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of nodes to be removed from the cluster.</p>
     */
    inline Cluster& AddNodeIdsToRemove(const char* value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove.push_back(value); return *this; }


    /**
     * <p>A list of nodes that are currently in the cluster.</p>
     */
    inline const Aws::Vector<Node>& GetNodes() const{ return m_nodes; }

    /**
     * <p>A list of nodes that are currently in the cluster.</p>
     */
    inline bool NodesHasBeenSet() const { return m_nodesHasBeenSet; }

    /**
     * <p>A list of nodes that are currently in the cluster.</p>
     */
    inline void SetNodes(const Aws::Vector<Node>& value) { m_nodesHasBeenSet = true; m_nodes = value; }

    /**
     * <p>A list of nodes that are currently in the cluster.</p>
     */
    inline void SetNodes(Aws::Vector<Node>&& value) { m_nodesHasBeenSet = true; m_nodes = std::move(value); }

    /**
     * <p>A list of nodes that are currently in the cluster.</p>
     */
    inline Cluster& WithNodes(const Aws::Vector<Node>& value) { SetNodes(value); return *this;}

    /**
     * <p>A list of nodes that are currently in the cluster.</p>
     */
    inline Cluster& WithNodes(Aws::Vector<Node>&& value) { SetNodes(std::move(value)); return *this;}

    /**
     * <p>A list of nodes that are currently in the cluster.</p>
     */
    inline Cluster& AddNodes(const Node& value) { m_nodesHasBeenSet = true; m_nodes.push_back(value); return *this; }

    /**
     * <p>A list of nodes that are currently in the cluster.</p>
     */
    inline Cluster& AddNodes(Node&& value) { m_nodesHasBeenSet = true; m_nodes.push_back(std::move(value)); return *this; }


    /**
     * <p>A range of time when maintenance of DAX cluster software will be performed.
     * For example: <code>sun:01:00-sun:09:00</code>. Cluster maintenance normally
     * takes less than 30 minutes, and is performed automatically within the
     * maintenance window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>A range of time when maintenance of DAX cluster software will be performed.
     * For example: <code>sun:01:00-sun:09:00</code>. Cluster maintenance normally
     * takes less than 30 minutes, and is performed automatically within the
     * maintenance window.</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>A range of time when maintenance of DAX cluster software will be performed.
     * For example: <code>sun:01:00-sun:09:00</code>. Cluster maintenance normally
     * takes less than 30 minutes, and is performed automatically within the
     * maintenance window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>A range of time when maintenance of DAX cluster software will be performed.
     * For example: <code>sun:01:00-sun:09:00</code>. Cluster maintenance normally
     * takes less than 30 minutes, and is performed automatically within the
     * maintenance window.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>A range of time when maintenance of DAX cluster software will be performed.
     * For example: <code>sun:01:00-sun:09:00</code>. Cluster maintenance normally
     * takes less than 30 minutes, and is performed automatically within the
     * maintenance window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>A range of time when maintenance of DAX cluster software will be performed.
     * For example: <code>sun:01:00-sun:09:00</code>. Cluster maintenance normally
     * takes less than 30 minutes, and is performed automatically within the
     * maintenance window.</p>
     */
    inline Cluster& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>A range of time when maintenance of DAX cluster software will be performed.
     * For example: <code>sun:01:00-sun:09:00</code>. Cluster maintenance normally
     * takes less than 30 minutes, and is performed automatically within the
     * maintenance window.</p>
     */
    inline Cluster& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>A range of time when maintenance of DAX cluster software will be performed.
     * For example: <code>sun:01:00-sun:09:00</code>. Cluster maintenance normally
     * takes less than 30 minutes, and is performed automatically within the
     * maintenance window.</p>
     */
    inline Cluster& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>Describes a notification topic and its status. Notification topics are used
     * for publishing DAX events to subscribers using Amazon Simple Notification
     * Service (SNS).</p>
     */
    inline const NotificationConfiguration& GetNotificationConfiguration() const{ return m_notificationConfiguration; }

    /**
     * <p>Describes a notification topic and its status. Notification topics are used
     * for publishing DAX events to subscribers using Amazon Simple Notification
     * Service (SNS).</p>
     */
    inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }

    /**
     * <p>Describes a notification topic and its status. Notification topics are used
     * for publishing DAX events to subscribers using Amazon Simple Notification
     * Service (SNS).</p>
     */
    inline void SetNotificationConfiguration(const NotificationConfiguration& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = value; }

    /**
     * <p>Describes a notification topic and its status. Notification topics are used
     * for publishing DAX events to subscribers using Amazon Simple Notification
     * Service (SNS).</p>
     */
    inline void SetNotificationConfiguration(NotificationConfiguration&& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = std::move(value); }

    /**
     * <p>Describes a notification topic and its status. Notification topics are used
     * for publishing DAX events to subscribers using Amazon Simple Notification
     * Service (SNS).</p>
     */
    inline Cluster& WithNotificationConfiguration(const NotificationConfiguration& value) { SetNotificationConfiguration(value); return *this;}

    /**
     * <p>Describes a notification topic and its status. Notification topics are used
     * for publishing DAX events to subscribers using Amazon Simple Notification
     * Service (SNS).</p>
     */
    inline Cluster& WithNotificationConfiguration(NotificationConfiguration&& value) { SetNotificationConfiguration(std::move(value)); return *this;}


    /**
     * <p>The subnet group where the DAX cluster is running.</p>
     */
    inline const Aws::String& GetSubnetGroup() const{ return m_subnetGroup; }

    /**
     * <p>The subnet group where the DAX cluster is running.</p>
     */
    inline bool SubnetGroupHasBeenSet() const { return m_subnetGroupHasBeenSet; }

    /**
     * <p>The subnet group where the DAX cluster is running.</p>
     */
    inline void SetSubnetGroup(const Aws::String& value) { m_subnetGroupHasBeenSet = true; m_subnetGroup = value; }

    /**
     * <p>The subnet group where the DAX cluster is running.</p>
     */
    inline void SetSubnetGroup(Aws::String&& value) { m_subnetGroupHasBeenSet = true; m_subnetGroup = std::move(value); }

    /**
     * <p>The subnet group where the DAX cluster is running.</p>
     */
    inline void SetSubnetGroup(const char* value) { m_subnetGroupHasBeenSet = true; m_subnetGroup.assign(value); }

    /**
     * <p>The subnet group where the DAX cluster is running.</p>
     */
    inline Cluster& WithSubnetGroup(const Aws::String& value) { SetSubnetGroup(value); return *this;}

    /**
     * <p>The subnet group where the DAX cluster is running.</p>
     */
    inline Cluster& WithSubnetGroup(Aws::String&& value) { SetSubnetGroup(std::move(value)); return *this;}

    /**
     * <p>The subnet group where the DAX cluster is running.</p>
     */
    inline Cluster& WithSubnetGroup(const char* value) { SetSubnetGroup(value); return *this;}


    /**
     * <p>A list of security groups, and the status of each, for the nodes in the
     * cluster.</p>
     */
    inline const Aws::Vector<SecurityGroupMembership>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>A list of security groups, and the status of each, for the nodes in the
     * cluster.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>A list of security groups, and the status of each, for the nodes in the
     * cluster.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<SecurityGroupMembership>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>A list of security groups, and the status of each, for the nodes in the
     * cluster.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<SecurityGroupMembership>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>A list of security groups, and the status of each, for the nodes in the
     * cluster.</p>
     */
    inline Cluster& WithSecurityGroups(const Aws::Vector<SecurityGroupMembership>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>A list of security groups, and the status of each, for the nodes in the
     * cluster.</p>
     */
    inline Cluster& WithSecurityGroups(Aws::Vector<SecurityGroupMembership>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list of security groups, and the status of each, for the nodes in the
     * cluster.</p>
     */
    inline Cluster& AddSecurityGroups(const SecurityGroupMembership& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>A list of security groups, and the status of each, for the nodes in the
     * cluster.</p>
     */
    inline Cluster& AddSecurityGroups(SecurityGroupMembership&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>A valid Amazon Resource Name (ARN) that identifies an IAM role. At runtime,
     * DAX will assume this role and use the role's permissions to access DynamoDB on
     * your behalf.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>A valid Amazon Resource Name (ARN) that identifies an IAM role. At runtime,
     * DAX will assume this role and use the role's permissions to access DynamoDB on
     * your behalf.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>A valid Amazon Resource Name (ARN) that identifies an IAM role. At runtime,
     * DAX will assume this role and use the role's permissions to access DynamoDB on
     * your behalf.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>A valid Amazon Resource Name (ARN) that identifies an IAM role. At runtime,
     * DAX will assume this role and use the role's permissions to access DynamoDB on
     * your behalf.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>A valid Amazon Resource Name (ARN) that identifies an IAM role. At runtime,
     * DAX will assume this role and use the role's permissions to access DynamoDB on
     * your behalf.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>A valid Amazon Resource Name (ARN) that identifies an IAM role. At runtime,
     * DAX will assume this role and use the role's permissions to access DynamoDB on
     * your behalf.</p>
     */
    inline Cluster& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>A valid Amazon Resource Name (ARN) that identifies an IAM role. At runtime,
     * DAX will assume this role and use the role's permissions to access DynamoDB on
     * your behalf.</p>
     */
    inline Cluster& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>A valid Amazon Resource Name (ARN) that identifies an IAM role. At runtime,
     * DAX will assume this role and use the role's permissions to access DynamoDB on
     * your behalf.</p>
     */
    inline Cluster& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>The parameter group being used by nodes in the cluster.</p>
     */
    inline const ParameterGroupStatus& GetParameterGroup() const{ return m_parameterGroup; }

    /**
     * <p>The parameter group being used by nodes in the cluster.</p>
     */
    inline bool ParameterGroupHasBeenSet() const { return m_parameterGroupHasBeenSet; }

    /**
     * <p>The parameter group being used by nodes in the cluster.</p>
     */
    inline void SetParameterGroup(const ParameterGroupStatus& value) { m_parameterGroupHasBeenSet = true; m_parameterGroup = value; }

    /**
     * <p>The parameter group being used by nodes in the cluster.</p>
     */
    inline void SetParameterGroup(ParameterGroupStatus&& value) { m_parameterGroupHasBeenSet = true; m_parameterGroup = std::move(value); }

    /**
     * <p>The parameter group being used by nodes in the cluster.</p>
     */
    inline Cluster& WithParameterGroup(const ParameterGroupStatus& value) { SetParameterGroup(value); return *this;}

    /**
     * <p>The parameter group being used by nodes in the cluster.</p>
     */
    inline Cluster& WithParameterGroup(ParameterGroupStatus&& value) { SetParameterGroup(std::move(value)); return *this;}


    /**
     * <p>The description of the server-side encryption status on the specified DAX
     * cluster.</p>
     */
    inline const SSEDescription& GetSSEDescription() const{ return m_sSEDescription; }

    /**
     * <p>The description of the server-side encryption status on the specified DAX
     * cluster.</p>
     */
    inline bool SSEDescriptionHasBeenSet() const { return m_sSEDescriptionHasBeenSet; }

    /**
     * <p>The description of the server-side encryption status on the specified DAX
     * cluster.</p>
     */
    inline void SetSSEDescription(const SSEDescription& value) { m_sSEDescriptionHasBeenSet = true; m_sSEDescription = value; }

    /**
     * <p>The description of the server-side encryption status on the specified DAX
     * cluster.</p>
     */
    inline void SetSSEDescription(SSEDescription&& value) { m_sSEDescriptionHasBeenSet = true; m_sSEDescription = std::move(value); }

    /**
     * <p>The description of the server-side encryption status on the specified DAX
     * cluster.</p>
     */
    inline Cluster& WithSSEDescription(const SSEDescription& value) { SetSSEDescription(value); return *this;}

    /**
     * <p>The description of the server-side encryption status on the specified DAX
     * cluster.</p>
     */
    inline Cluster& WithSSEDescription(SSEDescription&& value) { SetSSEDescription(std::move(value)); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet;

    int m_totalNodes;
    bool m_totalNodesHasBeenSet;

    int m_activeNodes;
    bool m_activeNodesHasBeenSet;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Endpoint m_clusterDiscoveryEndpoint;
    bool m_clusterDiscoveryEndpointHasBeenSet;

    Aws::Vector<Aws::String> m_nodeIdsToRemove;
    bool m_nodeIdsToRemoveHasBeenSet;

    Aws::Vector<Node> m_nodes;
    bool m_nodesHasBeenSet;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;

    NotificationConfiguration m_notificationConfiguration;
    bool m_notificationConfigurationHasBeenSet;

    Aws::String m_subnetGroup;
    bool m_subnetGroupHasBeenSet;

    Aws::Vector<SecurityGroupMembership> m_securityGroups;
    bool m_securityGroupsHasBeenSet;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet;

    ParameterGroupStatus m_parameterGroup;
    bool m_parameterGroupHasBeenSet;

    SSEDescription m_sSEDescription;
    bool m_sSEDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
