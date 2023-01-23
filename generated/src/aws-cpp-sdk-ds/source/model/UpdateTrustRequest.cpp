/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/UpdateTrustRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTrustRequest::UpdateTrustRequest() : 
    m_trustIdHasBeenSet(false),
    m_selectiveAuth(SelectiveAuth::NOT_SET),
    m_selectiveAuthHasBeenSet(false)
{
}

Aws::String UpdateTrustRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trustIdHasBeenSet)
  {
   payload.WithString("TrustId", m_trustId);

  }

  if(m_selectiveAuthHasBeenSet)
  {
   payload.WithString("SelectiveAuth", SelectiveAuthMapper::GetNameForSelectiveAuth(m_selectiveAuth));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTrustRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.UpdateTrust"));
  return headers;

}




