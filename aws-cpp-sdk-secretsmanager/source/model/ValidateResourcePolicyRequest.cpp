/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/ValidateResourcePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ValidateResourcePolicyRequest::ValidateResourcePolicyRequest() : 
    m_secretIdHasBeenSet(false),
    m_resourcePolicyHasBeenSet(false)
{
}

Aws::String ValidateResourcePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_secretIdHasBeenSet)
  {
   payload.WithString("SecretId", m_secretId);

  }

  if(m_resourcePolicyHasBeenSet)
  {
   payload.WithString("ResourcePolicy", m_resourcePolicy);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ValidateResourcePolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "secretsmanager.ValidateResourcePolicy"));
  return headers;

}




