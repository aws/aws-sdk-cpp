/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/UpdateJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateJobRequest::UpdateJobRequest() : 
    m_jobIdHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_notificationHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_addressIdHasBeenSet(false),
    m_shippingOption(ShippingOption::NOT_SET),
    m_shippingOptionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_snowballCapacityPreference(SnowballCapacity::NOT_SET),
    m_snowballCapacityPreferenceHasBeenSet(false),
    m_forwardingAddressIdHasBeenSet(false)
{
}

Aws::String UpdateJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  if(m_notificationHasBeenSet)
  {
   payload.WithObject("Notification", m_notification.Jsonize());

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

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_snowballCapacityPreferenceHasBeenSet)
  {
   payload.WithString("SnowballCapacityPreference", SnowballCapacityMapper::GetNameForSnowballCapacity(m_snowballCapacityPreference));
  }

  if(m_forwardingAddressIdHasBeenSet)
  {
   payload.WithString("ForwardingAddressId", m_forwardingAddressId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSIESnowballJobManagementService.UpdateJob"));
  return headers;

}




