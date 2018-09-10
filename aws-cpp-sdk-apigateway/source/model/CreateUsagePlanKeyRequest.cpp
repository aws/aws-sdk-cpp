﻿/*
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

#include <aws/apigateway/model/CreateUsagePlanKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateUsagePlanKeyRequest::CreateUsagePlanKeyRequest() : 
    m_usagePlanIdHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_keyTypeHasBeenSet(false)
{
}

Aws::String CreateUsagePlanKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("keyId", m_keyId);

  }

  if(m_keyTypeHasBeenSet)
  {
   payload.WithString("keyType", m_keyType);

  }

  return payload.View().WriteReadable();
}




