/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateBillingGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBillingGroupRequest::CreateBillingGroupRequest() : 
    m_billingGroupNameHasBeenSet(false),
    m_billingGroupPropertiesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateBillingGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_billingGroupPropertiesHasBeenSet)
  {
   payload.WithObject("billingGroupProperties", m_billingGroupProperties.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




