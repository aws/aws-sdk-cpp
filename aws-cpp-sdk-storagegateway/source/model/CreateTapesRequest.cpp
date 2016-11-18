﻿/*
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
#include <aws/storagegateway/model/CreateTapesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTapesRequest::CreateTapesRequest() : 
    m_gatewayARNHasBeenSet(false),
    m_tapeSizeInBytes(0),
    m_tapeSizeInBytesHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_numTapesToCreate(0),
    m_numTapesToCreateHasBeenSet(false),
    m_tapeBarcodePrefixHasBeenSet(false)
{
}

Aws::String CreateTapesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_tapeSizeInBytesHasBeenSet)
  {
   payload.WithInt64("TapeSizeInBytes", m_tapeSizeInBytes);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_numTapesToCreateHasBeenSet)
  {
   payload.WithInteger("NumTapesToCreate", m_numTapesToCreate);

  }

  if(m_tapeBarcodePrefixHasBeenSet)
  {
   payload.WithString("TapeBarcodePrefix", m_tapeBarcodePrefix);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTapesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.CreateTapes"));
  return headers;

}



