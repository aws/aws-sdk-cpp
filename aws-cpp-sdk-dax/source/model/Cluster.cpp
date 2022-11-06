/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/Cluster.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DAX
{
namespace Model
{

Cluster::Cluster() : 
    m_clusterNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_totalNodes(0),
    m_totalNodesHasBeenSet(false),
    m_activeNodes(0),
    m_activeNodesHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_clusterDiscoveryEndpointHasBeenSet(false),
    m_nodeIdsToRemoveHasBeenSet(false),
    m_nodesHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_notificationConfigurationHasBeenSet(false),
    m_subnetGroupHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_parameterGroupHasBeenSet(false),
    m_sSEDescriptionHasBeenSet(false),
    m_clusterEndpointEncryptionType(ClusterEndpointEncryptionType::NOT_SET),
    m_clusterEndpointEncryptionTypeHasBeenSet(false)
{
}

Cluster::Cluster(JsonView jsonValue) : 
    m_clusterNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_totalNodes(0),
    m_totalNodesHasBeenSet(false),
    m_activeNodes(0),
    m_activeNodesHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_clusterDiscoveryEndpointHasBeenSet(false),
    m_nodeIdsToRemoveHasBeenSet(false),
    m_nodesHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_notificationConfigurationHasBeenSet(false),
    m_subnetGroupHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_parameterGroupHasBeenSet(false),
    m_sSEDescriptionHasBeenSet(false),
    m_clusterEndpointEncryptionType(ClusterEndpointEncryptionType::NOT_SET),
    m_clusterEndpointEncryptionTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Cluster& Cluster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClusterName"))
  {
    m_clusterName = jsonValue.GetString("ClusterName");

    m_clusterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterArn"))
  {
    m_clusterArn = jsonValue.GetString("ClusterArn");

    m_clusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalNodes"))
  {
    m_totalNodes = jsonValue.GetInteger("TotalNodes");

    m_totalNodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActiveNodes"))
  {
    m_activeNodes = jsonValue.GetInteger("ActiveNodes");

    m_activeNodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NodeType"))
  {
    m_nodeType = jsonValue.GetString("NodeType");

    m_nodeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterDiscoveryEndpoint"))
  {
    m_clusterDiscoveryEndpoint = jsonValue.GetObject("ClusterDiscoveryEndpoint");

    m_clusterDiscoveryEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NodeIdsToRemove"))
  {
    Aws::Utils::Array<JsonView> nodeIdsToRemoveJsonList = jsonValue.GetArray("NodeIdsToRemove");
    for(unsigned nodeIdsToRemoveIndex = 0; nodeIdsToRemoveIndex < nodeIdsToRemoveJsonList.GetLength(); ++nodeIdsToRemoveIndex)
    {
      m_nodeIdsToRemove.push_back(nodeIdsToRemoveJsonList[nodeIdsToRemoveIndex].AsString());
    }
    m_nodeIdsToRemoveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Nodes"))
  {
    Aws::Utils::Array<JsonView> nodesJsonList = jsonValue.GetArray("Nodes");
    for(unsigned nodesIndex = 0; nodesIndex < nodesJsonList.GetLength(); ++nodesIndex)
    {
      m_nodes.push_back(nodesJsonList[nodesIndex].AsObject());
    }
    m_nodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreferredMaintenanceWindow"))
  {
    m_preferredMaintenanceWindow = jsonValue.GetString("PreferredMaintenanceWindow");

    m_preferredMaintenanceWindowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotificationConfiguration"))
  {
    m_notificationConfiguration = jsonValue.GetObject("NotificationConfiguration");

    m_notificationConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetGroup"))
  {
    m_subnetGroup = jsonValue.GetString("SubnetGroup");

    m_subnetGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroups"))
  {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("SecurityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsObject());
    }
    m_securityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("IamRoleArn");

    m_iamRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterGroup"))
  {
    m_parameterGroup = jsonValue.GetObject("ParameterGroup");

    m_parameterGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SSEDescription"))
  {
    m_sSEDescription = jsonValue.GetObject("SSEDescription");

    m_sSEDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterEndpointEncryptionType"))
  {
    m_clusterEndpointEncryptionType = ClusterEndpointEncryptionTypeMapper::GetClusterEndpointEncryptionTypeForName(jsonValue.GetString("ClusterEndpointEncryptionType"));

    m_clusterEndpointEncryptionTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Cluster::Jsonize() const
{
  JsonValue payload;

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("ClusterName", m_clusterName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("ClusterArn", m_clusterArn);

  }

  if(m_totalNodesHasBeenSet)
  {
   payload.WithInteger("TotalNodes", m_totalNodes);

  }

  if(m_activeNodesHasBeenSet)
  {
   payload.WithInteger("ActiveNodes", m_activeNodes);

  }

  if(m_nodeTypeHasBeenSet)
  {
   payload.WithString("NodeType", m_nodeType);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_clusterDiscoveryEndpointHasBeenSet)
  {
   payload.WithObject("ClusterDiscoveryEndpoint", m_clusterDiscoveryEndpoint.Jsonize());

  }

  if(m_nodeIdsToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodeIdsToRemoveJsonList(m_nodeIdsToRemove.size());
   for(unsigned nodeIdsToRemoveIndex = 0; nodeIdsToRemoveIndex < nodeIdsToRemoveJsonList.GetLength(); ++nodeIdsToRemoveIndex)
   {
     nodeIdsToRemoveJsonList[nodeIdsToRemoveIndex].AsString(m_nodeIdsToRemove[nodeIdsToRemoveIndex]);
   }
   payload.WithArray("NodeIdsToRemove", std::move(nodeIdsToRemoveJsonList));

  }

  if(m_nodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodesJsonList(m_nodes.size());
   for(unsigned nodesIndex = 0; nodesIndex < nodesJsonList.GetLength(); ++nodesIndex)
   {
     nodesJsonList[nodesIndex].AsObject(m_nodes[nodesIndex].Jsonize());
   }
   payload.WithArray("Nodes", std::move(nodesJsonList));

  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
   payload.WithString("PreferredMaintenanceWindow", m_preferredMaintenanceWindow);

  }

  if(m_notificationConfigurationHasBeenSet)
  {
   payload.WithObject("NotificationConfiguration", m_notificationConfiguration.Jsonize());

  }

  if(m_subnetGroupHasBeenSet)
  {
   payload.WithString("SubnetGroup", m_subnetGroup);

  }

  if(m_securityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsObject(m_securityGroups[securityGroupsIndex].Jsonize());
   }
   payload.WithArray("SecurityGroups", std::move(securityGroupsJsonList));

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_parameterGroupHasBeenSet)
  {
   payload.WithObject("ParameterGroup", m_parameterGroup.Jsonize());

  }

  if(m_sSEDescriptionHasBeenSet)
  {
   payload.WithObject("SSEDescription", m_sSEDescription.Jsonize());

  }

  if(m_clusterEndpointEncryptionTypeHasBeenSet)
  {
   payload.WithString("ClusterEndpointEncryptionType", ClusterEndpointEncryptionTypeMapper::GetNameForClusterEndpointEncryptionType(m_clusterEndpointEncryptionType));
  }

  return payload;
}

} // namespace Model
} // namespace DAX
} // namespace Aws
