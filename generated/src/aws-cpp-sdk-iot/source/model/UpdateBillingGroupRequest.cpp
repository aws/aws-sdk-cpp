/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateBillingGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBillingGroupRequest::UpdateBillingGroupRequest() : 
    m_billingGroupNameHasBeenSet(false),
    m_billingGroupPropertiesHasBeenSet(false),
    m_expectedVersion(0),
    m_expectedVersionHasBeenSet(false)
{
}

Aws::String UpdateBillingGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_billingGroupPropertiesHasBeenSet)
  {
   payload.WithObject("billingGroupProperties", m_billingGroupProperties.Jsonize());

  }

  if(m_expectedVersionHasBeenSet)
  {
   payload.WithInt64("expectedVersion", m_expectedVersion);

  }

  return payload.View().WriteReadable();
}




