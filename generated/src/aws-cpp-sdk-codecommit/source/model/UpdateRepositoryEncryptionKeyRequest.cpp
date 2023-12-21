/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/UpdateRepositoryEncryptionKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRepositoryEncryptionKeyRequest::UpdateRepositoryEncryptionKeyRequest() : 
    m_repositoryNameHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

Aws::String UpdateRepositoryEncryptionKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRepositoryEncryptionKeyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.UpdateRepositoryEncryptionKey"));
  return headers;

}




