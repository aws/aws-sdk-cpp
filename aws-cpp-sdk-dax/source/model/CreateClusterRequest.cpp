/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/CreateClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DAX::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateClusterRequest::CreateClusterRequest() : 
    m_clusterNameHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_replicationFactor(0),
    m_replicationFactorHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_subnetGroupNameHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_notificationTopicArnHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_parameterGroupNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_sSESpecificationHasBeenSet(false),
    m_clusterEndpointEncryptionType(ClusterEndpointEncryptionType::NOT_SET),
    m_clusterEndpointEncryptionTypeHasBeenSet(false)
{
}

Aws::String CreateClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("ClusterName", m_clusterName);

  }

  if(m_nodeTypeHasBeenSet)
  {
   payload.WithString("NodeType", m_nodeType);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_replicationFactorHasBeenSet)
  {
   payload.WithInteger("ReplicationFactor", m_replicationFactor);

  }

  if(m_availabilityZonesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
   for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
   {
     availabilityZonesJsonList[availabilityZonesIndex].AsString(m_availabilityZones[availabilityZonesIndex]);
   }
   payload.WithArray("AvailabilityZones", std::move(availabilityZonesJsonList));

  }

  if(m_subnetGroupNameHasBeenSet)
  {
   payload.WithString("SubnetGroupName", m_subnetGroupName);

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("SecurityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
   payload.WithString("PreferredMaintenanceWindow", m_preferredMaintenanceWindow);

  }

  if(m_notificationTopicArnHasBeenSet)
  {
   payload.WithString("NotificationTopicArn", m_notificationTopicArn);

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_parameterGroupNameHasBeenSet)
  {
   payload.WithString("ParameterGroupName", m_parameterGroupName);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_sSESpecificationHasBeenSet)
  {
   payload.WithObject("SSESpecification", m_sSESpecification.Jsonize());

  }

  if(m_clusterEndpointEncryptionTypeHasBeenSet)
  {
   payload.WithString("ClusterEndpointEncryptionType", ClusterEndpointEncryptionTypeMapper::GetNameForClusterEndpointEncryptionType(m_clusterEndpointEncryptionType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateClusterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDAXV3.CreateCluster"));
  return headers;

}




