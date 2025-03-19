/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateThingTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateThingTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_thingTypePropertiesHasBeenSet)
  {
   payload.WithObject("thingTypeProperties", m_thingTypeProperties.Jsonize());

  }

  return payload.View().WriteReadable();
}




