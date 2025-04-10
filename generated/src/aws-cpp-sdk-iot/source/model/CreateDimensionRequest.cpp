﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateDimensionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDimensionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", DimensionTypeMapper::GetNameForDimensionType(m_type));
  }

  if(m_stringValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stringValuesJsonList(m_stringValues.size());
   for(unsigned stringValuesIndex = 0; stringValuesIndex < stringValuesJsonList.GetLength(); ++stringValuesIndex)
   {
     stringValuesJsonList[stringValuesIndex].AsString(m_stringValues[stringValuesIndex]);
   }
   payload.WithArray("stringValues", std::move(stringValuesJsonList));

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

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




