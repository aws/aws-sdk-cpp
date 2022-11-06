/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ImportModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportModelRequest::ImportModelRequest() : 
    m_sourceModelArnHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_modelKmsKeyIdHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String ImportModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceModelArnHasBeenSet)
  {
   payload.WithString("SourceModelArn", m_sourceModelArn);

  }

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_versionNameHasBeenSet)
  {
   payload.WithString("VersionName", m_versionName);

  }

  if(m_modelKmsKeyIdHasBeenSet)
  {
   payload.WithString("ModelKmsKeyId", m_modelKmsKeyId);

  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);

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

Aws::Http::HeaderValueCollection ImportModelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Comprehend_20171127.ImportModel"));
  return headers;

}




