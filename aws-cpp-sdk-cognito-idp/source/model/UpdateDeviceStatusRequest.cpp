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
#include <aws/cognito-idp/model/UpdateDeviceStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDeviceStatusRequest::UpdateDeviceStatusRequest() : 
    m_accessTokenHasBeenSet(false),
    m_deviceKeyHasBeenSet(false),
    m_deviceRememberedStatus(DeviceRememberedStatusType::NOT_SET),
    m_deviceRememberedStatusHasBeenSet(false)
{
}

Aws::String UpdateDeviceStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accessTokenHasBeenSet)
  {
   payload.WithString("AccessToken", m_accessToken);

  }

  if(m_deviceKeyHasBeenSet)
  {
   payload.WithString("DeviceKey", m_deviceKey);

  }

  if(m_deviceRememberedStatusHasBeenSet)
  {
   payload.WithString("DeviceRememberedStatus", DeviceRememberedStatusTypeMapper::GetNameForDeviceRememberedStatusType(m_deviceRememberedStatus));
  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDeviceStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.UpdateDeviceStatus"));
  return headers;

}



