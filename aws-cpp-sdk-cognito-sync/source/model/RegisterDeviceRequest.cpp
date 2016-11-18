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
#include <aws/cognito-sync/model/RegisterDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterDeviceRequest::RegisterDeviceRequest() : 
    m_identityPoolIdHasBeenSet(false),
    m_identityIdHasBeenSet(false),
    m_platform(Platform::NOT_SET),
    m_platformHasBeenSet(false),
    m_tokenHasBeenSet(false)
{
}

Aws::String RegisterDeviceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_platformHasBeenSet)
  {
   payload.WithString("Platform", PlatformMapper::GetNameForPlatform(m_platform));
  }

  if(m_tokenHasBeenSet)
  {
   payload.WithString("Token", m_token);

  }

  return payload.WriteReadable();
}



