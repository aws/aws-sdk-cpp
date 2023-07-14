/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateThingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateThingRequest::CreateThingRequest() : 
    m_thingNameHasBeenSet(false),
    m_thingTypeNameHasBeenSet(false),
    m_attributePayloadHasBeenSet(false),
    m_billingGroupNameHasBeenSet(false)
{
}

Aws::String CreateThingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_thingTypeNameHasBeenSet)
  {
   payload.WithString("thingTypeName", m_thingTypeName);

  }

  if(m_attributePayloadHasBeenSet)
  {
   payload.WithObject("attributePayload", m_attributePayload.Jsonize());

  }

  if(m_billingGroupNameHasBeenSet)
  {
   payload.WithString("billingGroupName", m_billingGroupName);

  }

  return payload.View().WriteReadable();
}




