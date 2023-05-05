/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/UpdateDataRepositoryAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDataRepositoryAssociationRequest::UpdateDataRepositoryAssociationRequest() : 
    m_associationIdHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_importedFileChunkSize(0),
    m_importedFileChunkSizeHasBeenSet(false),
    m_s3HasBeenSet(false)
{
}

Aws::String UpdateDataRepositoryAssociationRequest::SerializePayload() const
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

  if(m_importedFileChunkSizeHasBeenSet)
  {
   payload.WithInteger("ImportedFileChunkSize", m_importedFileChunkSize);

  }

  if(m_s3HasBeenSet)
  {
   payload.WithObject("S3", m_s3.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDataRepositoryAssociationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.UpdateDataRepositoryAssociation"));
  return headers;

}




