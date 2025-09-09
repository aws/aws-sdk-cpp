/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdatePredefinedAttributeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdatePredefinedAttributeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_valuesHasBeenSet)
  {
   payload.WithObject("Values", m_values.Jsonize());

  }

  if(m_purposesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> purposesJsonList(m_purposes.size());
   for(unsigned purposesIndex = 0; purposesIndex < purposesJsonList.GetLength(); ++purposesIndex)
   {
     purposesJsonList[purposesIndex].AsString(m_purposes[purposesIndex]);
   }
   payload.WithArray("Purposes", std::move(purposesJsonList));

  }

  if(m_attributeConfigurationHasBeenSet)
  {
   payload.WithObject("AttributeConfiguration", m_attributeConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




