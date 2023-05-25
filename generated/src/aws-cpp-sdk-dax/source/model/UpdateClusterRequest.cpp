/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/UpdateClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DAX::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateClusterRequest::UpdateClusterRequest() : 
    m_clusterNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_notificationTopicArnHasBeenSet(false),
    m_notificationTopicStatusHasBeenSet(false),
    m_parameterGroupNameHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false)
{
}

Aws::String UpdateClusterRequest::SerializePayload() const
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

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
   payload.WithString("PreferredMaintenanceWindow", m_preferredMaintenanceWindow);

  }

  if(m_notificationTopicArnHasBeenSet)
  {
   payload.WithString("NotificationTopicArn", m_notificationTopicArn);

  }

  if(m_notificationTopicStatusHasBeenSet)
  {
   payload.WithString("NotificationTopicStatus", m_notificationTopicStatus);

  }

  if(m_parameterGroupNameHasBeenSet)
  {
   payload.WithString("ParameterGroupName", m_parameterGroupName);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateClusterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDAXV3.UpdateCluster"));
  return headers;

}




