/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/CreateDataRepositoryAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDataRepositoryAssociationRequest::CreateDataRepositoryAssociationRequest() : 
    m_fileSystemIdHasBeenSet(false),
    m_fileSystemPathHasBeenSet(false),
    m_dataRepositoryPathHasBeenSet(false),
    m_batchImportMetaDataOnCreate(false),
    m_batchImportMetaDataOnCreateHasBeenSet(false),
    m_importedFileChunkSize(0),
    m_importedFileChunkSizeHasBeenSet(false),
    m_s3HasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDataRepositoryAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fileSystemIdHasBeenSet)
  {
   payload.WithString("FileSystemId", m_fileSystemId);

  }

  if(m_fileSystemPathHasBeenSet)
  {
   payload.WithString("FileSystemPath", m_fileSystemPath);

  }

  if(m_dataRepositoryPathHasBeenSet)
  {
   payload.WithString("DataRepositoryPath", m_dataRepositoryPath);

  }

  if(m_batchImportMetaDataOnCreateHasBeenSet)
  {
   payload.WithBool("BatchImportMetaDataOnCreate", m_batchImportMetaDataOnCreate);

  }

  if(m_importedFileChunkSizeHasBeenSet)
  {
   payload.WithInteger("ImportedFileChunkSize", m_importedFileChunkSize);

  }

  if(m_s3HasBeenSet)
  {
   payload.WithObject("S3", m_s3.Jsonize());

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDataRepositoryAssociationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.CreateDataRepositoryAssociation"));
  return headers;

}




