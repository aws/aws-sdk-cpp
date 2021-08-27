/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/RetireGrantRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RetireGrantRequest::RetireGrantRequest() : 
    m_grantTokenHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_grantIdHasBeenSet(false)
{
}

Aws::String RetireGrantRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_grantTokenHasBeenSet)
  {
   payload.WithString("GrantToken", m_grantToken);

  }

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_grantIdHasBeenSet)
  {
   payload.WithString("GrantId", m_grantId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RetireGrantRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.RetireGrant"));
  return headers;

}




