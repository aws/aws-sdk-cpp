/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/StartReplicationTaskAssessmentRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartReplicationTaskAssessmentRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replicationTaskArnHasBeenSet)
  {
   payload.WithString("ReplicationTaskArn", m_replicationTaskArn);

  }

  if(m_serviceAccessRoleArnHasBeenSet)
  {
   payload.WithString("ServiceAccessRoleArn", m_serviceAccessRoleArn);

  }

  if(m_resultLocationBucketHasBeenSet)
  {
   payload.WithString("ResultLocationBucket", m_resultLocationBucket);

  }

  if(m_resultLocationFolderHasBeenSet)
  {
   payload.WithString("ResultLocationFolder", m_resultLocationFolder);

  }

  if(m_resultEncryptionModeHasBeenSet)
  {
   payload.WithString("ResultEncryptionMode", m_resultEncryptionMode);

  }

  if(m_resultKmsKeyArnHasBeenSet)
  {
   payload.WithString("ResultKmsKeyArn", m_resultKmsKeyArn);

  }

  if(m_assessmentRunNameHasBeenSet)
  {
   payload.WithString("AssessmentRunName", m_assessmentRunName);

  }

  if(m_includeOnlyHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includeOnlyJsonList(m_includeOnly.size());
   for(unsigned includeOnlyIndex = 0; includeOnlyIndex < includeOnlyJsonList.GetLength(); ++includeOnlyIndex)
   {
     includeOnlyJsonList[includeOnlyIndex].AsString(m_includeOnly[includeOnlyIndex]);
   }
   payload.WithArray("IncludeOnly", std::move(includeOnlyJsonList));

  }

  if(m_excludeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeJsonList(m_exclude.size());
   for(unsigned excludeIndex = 0; excludeIndex < excludeJsonList.GetLength(); ++excludeIndex)
   {
     excludeJsonList[excludeIndex].AsString(m_exclude[excludeIndex]);
   }
   payload.WithArray("Exclude", std::move(excludeJsonList));

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

Aws::Http::HeaderValueCollection StartReplicationTaskAssessmentRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.StartReplicationTaskAssessmentRun"));
  return headers;

}




