/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/CreateTrailRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTrailRequest::CreateTrailRequest() : 
    m_nameHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false),
    m_snsTopicNameHasBeenSet(false),
    m_includeGlobalServiceEvents(false),
    m_includeGlobalServiceEventsHasBeenSet(false),
    m_isMultiRegionTrail(false),
    m_isMultiRegionTrailHasBeenSet(false),
    m_enableLogFileValidation(false),
    m_enableLogFileValidationHasBeenSet(false),
    m_cloudWatchLogsLogGroupArnHasBeenSet(false),
    m_cloudWatchLogsRoleArnHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_isOrganizationTrail(false),
    m_isOrganizationTrailHasBeenSet(false),
    m_tagsListHasBeenSet(false)
{
}

Aws::String CreateTrailRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("S3BucketName", m_s3BucketName);

  }

  if(m_s3KeyPrefixHasBeenSet)
  {
   payload.WithString("S3KeyPrefix", m_s3KeyPrefix);

  }

  if(m_snsTopicNameHasBeenSet)
  {
   payload.WithString("SnsTopicName", m_snsTopicName);

  }

  if(m_includeGlobalServiceEventsHasBeenSet)
  {
   payload.WithBool("IncludeGlobalServiceEvents", m_includeGlobalServiceEvents);

  }

  if(m_isMultiRegionTrailHasBeenSet)
  {
   payload.WithBool("IsMultiRegionTrail", m_isMultiRegionTrail);

  }

  if(m_enableLogFileValidationHasBeenSet)
  {
   payload.WithBool("EnableLogFileValidation", m_enableLogFileValidation);

  }

  if(m_cloudWatchLogsLogGroupArnHasBeenSet)
  {
   payload.WithString("CloudWatchLogsLogGroupArn", m_cloudWatchLogsLogGroupArn);

  }

  if(m_cloudWatchLogsRoleArnHasBeenSet)
  {
   payload.WithString("CloudWatchLogsRoleArn", m_cloudWatchLogsRoleArn);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_isOrganizationTrailHasBeenSet)
  {
   payload.WithBool("IsOrganizationTrail", m_isOrganizationTrail);

  }

  if(m_tagsListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsListJsonList(m_tagsList.size());
   for(unsigned tagsListIndex = 0; tagsListIndex < tagsListJsonList.GetLength(); ++tagsListIndex)
   {
     tagsListJsonList[tagsListIndex].AsObject(m_tagsList[tagsListIndex].Jsonize());
   }
   payload.WithArray("TagsList", std::move(tagsListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTrailRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.CreateTrail"));
  return headers;

}




