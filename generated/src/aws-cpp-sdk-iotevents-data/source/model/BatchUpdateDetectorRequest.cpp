/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/BatchUpdateDetectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTEventsData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchUpdateDetectorRequest::BatchUpdateDetectorRequest() : 
    m_detectorsHasBeenSet(false)
{
}

Aws::String BatchUpdateDetectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_detectorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> detectorsJsonList(m_detectors.size());
   for(unsigned detectorsIndex = 0; detectorsIndex < detectorsJsonList.GetLength(); ++detectorsIndex)
   {
     detectorsJsonList[detectorsIndex].AsObject(m_detectors[detectorsIndex].Jsonize());
   }
   payload.WithArray("detectors", std::move(detectorsJsonList));

  }

  return payload.View().WriteReadable();
}




