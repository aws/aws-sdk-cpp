﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/GetResourcePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetResourcePolicyRequest::GetResourcePolicyRequest() : 
    m_secretIdHasBeenSet(false)
{
}

Aws::String GetResourcePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_secretIdHasBeenSet)
  {
   payload.WithString("SecretId", m_secretId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetResourcePolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "secretsmanager.GetResourcePolicy"));
  return headers;

}




