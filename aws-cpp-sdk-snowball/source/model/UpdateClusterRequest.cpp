/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/snowball/model/UpdateClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateClusterRequest::UpdateClusterRequest() : 
    m_clusterIdHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_addressIdHasBeenSet(false),
    m_shippingOption(ShippingOption::NOT_SET),
    m_shippingOptionHasBeenSet(false),
    m_notificationHasBeenSet(false)
{
}

Aws::String UpdateClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("ClusterId", m_clusterId);

  }

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_resourcesHasBeenSet)
  {
   payload.WithObject("Resources", m_resources.Jsonize());

  }

  if(m_addressIdHasBeenSet)
  {
   payload.WithString("AddressId", m_addressId);

  }

  if(m_shippingOptionHasBeenSet)
  {
   payload.WithString("ShippingOption", ShippingOptionMapper::GetNameForShippingOption(m_shippingOption));
  }

  if(m_notificationHasBeenSet)
  {
   payload.WithObject("Notification", m_notification.Jsonize());

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateClusterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSIESnowballJobManagementService.UpdateCluster"));
  return headers;

}




