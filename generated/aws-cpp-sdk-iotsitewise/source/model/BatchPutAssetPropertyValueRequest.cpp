﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/BatchPutAssetPropertyValueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchPutAssetPropertyValueRequest::BatchPutAssetPropertyValueRequest() : 
    m_entriesHasBeenSet(false)
{
}

Aws::String BatchPutAssetPropertyValueRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_entriesHasBeenSet)
  {
   Array<JsonValue> entriesJsonList(m_entries.size());
   for(unsigned entriesIndex = 0; entriesIndex < entriesJsonList.GetLength(); ++entriesIndex)
   {
     entriesJsonList[entriesIndex].AsObject(m_entries[entriesIndex].Jsonize());
   }
   payload.WithArray("entries", std::move(entriesJsonList));

  }

  return payload.View().WriteReadable();
}




