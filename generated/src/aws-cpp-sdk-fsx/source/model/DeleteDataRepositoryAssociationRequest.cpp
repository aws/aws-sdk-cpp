/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DeleteDataRepositoryAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteDataRepositoryAssociationRequest::DeleteDataRepositoryAssociationRequest() : 
    m_associationIdHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_deleteDataInFileSystem(false),
    m_deleteDataInFileSystemHasBeenSet(false)
{
}

Aws::String DeleteDataRepositoryAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("AssociationId", m_associationId);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_deleteDataInFileSystemHasBeenSet)
  {
   payload.WithBool("DeleteDataInFileSystem", m_deleteDataInFileSystem);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteDataRepositoryAssociationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.DeleteDataRepositoryAssociation"));
  return headers;

}




