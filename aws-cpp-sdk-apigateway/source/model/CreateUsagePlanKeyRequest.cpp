/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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




