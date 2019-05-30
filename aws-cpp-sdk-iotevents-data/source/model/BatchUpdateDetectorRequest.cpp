/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> detectorsJsonList(m_detectors.size());
   for(unsigned detectorsIndex = 0; detectorsIndex < detectorsJsonList.GetLength(); ++detectorsIndex)
   {
     detectorsJsonList[detectorsIndex].AsObject(m_detectors[detectorsIndex].Jsonize());
   }
   payload.WithArray("detectors", std::move(detectorsJsonList));

  }

  return payload.View().WriteReadable();
}




