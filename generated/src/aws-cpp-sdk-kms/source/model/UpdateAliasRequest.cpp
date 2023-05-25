/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/UpdateAliasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAliasRequest::UpdateAliasRequest() : 
    m_aliasNameHasBeenSet(false),
    m_targetKeyIdHasBeenSet(false)
{
}

Aws::String UpdateAliasRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_aliasNameHasBeenSet)
  {
   payload.WithString("AliasName", m_aliasName);

  }

  if(m_targetKeyIdHasBeenSet)
  {
   payload.WithString("TargetKeyId", m_targetKeyId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAliasRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.UpdateAlias"));
  return headers;

}




