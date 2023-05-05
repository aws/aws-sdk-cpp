/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudcontrol/model/UpdateResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudControlApi::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateResourceRequest::UpdateResourceRequest() : 
    m_typeNameHasBeenSet(false),
    m_typeVersionIdHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_identifierHasBeenSet(false),
    m_patchDocumentHasBeenSet(false)
{
}

Aws::String UpdateResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_typeNameHasBeenSet)
  {
   payload.WithString("TypeName", m_typeName);

  }

  if(m_typeVersionIdHasBeenSet)
  {
   payload.WithString("TypeVersionId", m_typeVersionId);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  if(m_patchDocumentHasBeenSet)
  {
   payload.WithString("PatchDocument", m_patchDocument);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateResourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CloudApiService.UpdateResource"));
  return headers;

}




