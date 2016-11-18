/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_kmsKeyIdHasBeenSet(false)
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTrailRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.CreateTrail"));
  return headers;

}



