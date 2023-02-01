/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/CreateLocationS3Request.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLocationS3Request::CreateLocationS3Request() : 
    m_subdirectoryHasBeenSet(false),
    m_s3BucketArnHasBeenSet(false),
    m_s3StorageClass(S3StorageClass::NOT_SET),
    m_s3StorageClassHasBeenSet(false),
    m_s3ConfigHasBeenSet(false),
    m_agentArnsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateLocationS3Request::SerializePayload() const
{
  JsonValue payload;

  if(m_subdirectoryHasBeenSet)
  {
   payload.WithString("Subdirectory", m_subdirectory);

  }

  if(m_s3BucketArnHasBeenSet)
  {
   payload.WithString("S3BucketArn", m_s3BucketArn);

  }

  if(m_s3StorageClassHasBeenSet)
  {
   payload.WithString("S3StorageClass", S3StorageClassMapper::GetNameForS3StorageClass(m_s3StorageClass));
  }

  if(m_s3ConfigHasBeenSet)
  {
   payload.WithObject("S3Config", m_s3Config.Jsonize());

  }

  if(m_agentArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> agentArnsJsonList(m_agentArns.size());
   for(unsigned agentArnsIndex = 0; agentArnsIndex < agentArnsJsonList.GetLength(); ++agentArnsIndex)
   {
     agentArnsJsonList[agentArnsIndex].AsString(m_agentArns[agentArnsIndex]);
   }
   payload.WithArray("AgentArns", std::move(agentArnsJsonList));

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

Aws::Http::HeaderValueCollection CreateLocationS3Request::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.CreateLocationS3"));
  return headers;

}




