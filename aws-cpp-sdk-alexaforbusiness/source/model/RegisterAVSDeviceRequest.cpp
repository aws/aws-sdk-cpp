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

#include <aws/alexaforbusiness/model/RegisterAVSDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterAVSDeviceRequest::RegisterAVSDeviceRequest() : 
    m_clientIdHasBeenSet(false),
    m_userCodeHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_deviceSerialNumberHasBeenSet(false),
    m_amazonIdHasBeenSet(false)
{
}

Aws::String RegisterAVSDeviceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  if(m_userCodeHasBeenSet)
  {
   payload.WithString("UserCode", m_userCode);

  }

  if(m_productIdHasBeenSet)
  {
   payload.WithString("ProductId", m_productId);

  }

  if(m_deviceSerialNumberHasBeenSet)
  {
   payload.WithString("DeviceSerialNumber", m_deviceSerialNumber);

  }

  if(m_amazonIdHasBeenSet)
  {
   payload.WithString("AmazonId", m_amazonId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterAVSDeviceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.RegisterAVSDevice"));
  return headers;

}




