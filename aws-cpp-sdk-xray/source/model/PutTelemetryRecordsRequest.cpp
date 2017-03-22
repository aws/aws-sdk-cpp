/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/xray/model/PutTelemetryRecordsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutTelemetryRecordsRequest::PutTelemetryRecordsRequest() : 
    m_telemetryRecordsHasBeenSet(false),
    m_eC2InstanceIdHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_resourceARNHasBeenSet(false)
{
}

Aws::String PutTelemetryRecordsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_telemetryRecordsHasBeenSet)
  {
   Array<JsonValue> telemetryRecordsJsonList(m_telemetryRecords.size());
   for(unsigned telemetryRecordsIndex = 0; telemetryRecordsIndex < telemetryRecordsJsonList.GetLength(); ++telemetryRecordsIndex)
   {
     telemetryRecordsJsonList[telemetryRecordsIndex].AsObject(m_telemetryRecords[telemetryRecordsIndex].Jsonize());
   }
   payload.WithArray("TelemetryRecords", std::move(telemetryRecordsJsonList));

  }

  if(m_eC2InstanceIdHasBeenSet)
  {
   payload.WithString("EC2InstanceId", m_eC2InstanceId);

  }

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("Hostname", m_hostname);

  }

  if(m_resourceARNHasBeenSet)
  {
   payload.WithString("ResourceARN", m_resourceARN);

  }

  return payload.WriteReadable();
}




