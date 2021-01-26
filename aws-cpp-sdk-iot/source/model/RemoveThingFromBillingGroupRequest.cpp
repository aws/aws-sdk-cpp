/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/RemoveThingFromBillingGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveThingFromBillingGroupRequest::RemoveThingFromBillingGroupRequest() : 
    m_billingGroupNameHasBeenSet(false),
    m_billingGroupArnHasBeenSet(false),
    m_thingNameHasBeenSet(false),
    m_thingArnHasBeenSet(false)
{
}

Aws::String RemoveThingFromBillingGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_billingGroupNameHasBeenSet)
  {
   payload.WithString("billingGroupName", m_billingGroupName);

  }

  if(m_billingGroupArnHasBeenSet)
  {
   payload.WithString("billingGroupArn", m_billingGroupArn);

  }

  if(m_thingNameHasBeenSet)
  {
   payload.WithString("thingName", m_thingName);

  }

  if(m_thingArnHasBeenSet)
  {
   payload.WithString("thingArn", m_thingArn);

  }

  return payload.View().WriteReadable();
}




