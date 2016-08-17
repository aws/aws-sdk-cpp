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
#include <aws/storagegateway/model/ActivateGatewayRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ActivateGatewayRequest::ActivateGatewayRequest() : 
    m_activationKeyHasBeenSet(false),
    m_gatewayNameHasBeenSet(false),
    m_gatewayTimezoneHasBeenSet(false),
    m_gatewayRegionHasBeenSet(false),
    m_gatewayTypeHasBeenSet(false),
    m_tapeDriveTypeHasBeenSet(false),
    m_mediumChangerTypeHasBeenSet(false)
{
}

Aws::String ActivateGatewayRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_activationKeyHasBeenSet)
  {
   payload.WithString("ActivationKey", m_activationKey);

  }

  if(m_gatewayNameHasBeenSet)
  {
   payload.WithString("GatewayName", m_gatewayName);

  }

  if(m_gatewayTimezoneHasBeenSet)
  {
   payload.WithString("GatewayTimezone", m_gatewayTimezone);

  }

  if(m_gatewayRegionHasBeenSet)
  {
   payload.WithString("GatewayRegion", m_gatewayRegion);

  }

  if(m_gatewayTypeHasBeenSet)
  {
   payload.WithString("GatewayType", m_gatewayType);

  }

  if(m_tapeDriveTypeHasBeenSet)
  {
   payload.WithString("TapeDriveType", m_tapeDriveType);

  }

  if(m_mediumChangerTypeHasBeenSet)
  {
   payload.WithString("MediumChangerType", m_mediumChangerType);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ActivateGatewayRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.ActivateGateway"));
  return headers;

}



