/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/CreateAliasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAliasRequest::CreateAliasRequest() : 
    m_aliasNameHasBeenSet(false),
    m_targetKeyIdHasBeenSet(false)
{
}

Aws::String CreateAliasRequest::SerializePayload() const
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

Aws::Http::HeaderValueCollection CreateAliasRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.CreateAlias"));
  return headers;

}




