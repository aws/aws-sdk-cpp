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
#include <aws/cloudtrail/model/Trail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

Trail::Trail() : 
    m_nameHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false),
    m_snsTopicARNHasBeenSet(false),
    m_includeGlobalServiceEvents(false),
    m_includeGlobalServiceEventsHasBeenSet(false),
    m_isMultiRegionTrail(false),
    m_isMultiRegionTrailHasBeenSet(false),
    m_homeRegionHasBeenSet(false),
    m_trailARNHasBeenSet(false),
    m_logFileValidationEnabled(false),
    m_logFileValidationEnabledHasBeenSet(false),
    m_cloudWatchLogsLogGroupArnHasBeenSet(false),
    m_cloudWatchLogsRoleArnHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

Trail::Trail(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false),
    m_snsTopicARNHasBeenSet(false),
    m_includeGlobalServiceEvents(false),
    m_includeGlobalServiceEventsHasBeenSet(false),
    m_isMultiRegionTrail(false),
    m_isMultiRegionTrailHasBeenSet(false),
    m_homeRegionHasBeenSet(false),
    m_trailARNHasBeenSet(false),
    m_logFileValidationEnabled(false),
    m_logFileValidationEnabledHasBeenSet(false),
    m_cloudWatchLogsLogGroupArnHasBeenSet(false),
    m_cloudWatchLogsRoleArnHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

Trail& Trail::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("S3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3KeyPrefix"))
  {
    m_s3KeyPrefix = jsonValue.GetString("S3KeyPrefix");

    m_s3KeyPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnsTopicARN"))
  {
    m_snsTopicARN = jsonValue.GetString("SnsTopicARN");

    m_snsTopicARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeGlobalServiceEvents"))
  {
    m_includeGlobalServiceEvents = jsonValue.GetBool("IncludeGlobalServiceEvents");

    m_includeGlobalServiceEventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsMultiRegionTrail"))
  {
    m_isMultiRegionTrail = jsonValue.GetBool("IsMultiRegionTrail");

    m_isMultiRegionTrailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HomeRegion"))
  {
    m_homeRegion = jsonValue.GetString("HomeRegion");

    m_homeRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrailARN"))
  {
    m_trailARN = jsonValue.GetString("TrailARN");

    m_trailARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogFileValidationEnabled"))
  {
    m_logFileValidationEnabled = jsonValue.GetBool("LogFileValidationEnabled");

    m_logFileValidationEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchLogsLogGroupArn"))
  {
    m_cloudWatchLogsLogGroupArn = jsonValue.GetString("CloudWatchLogsLogGroupArn");

    m_cloudWatchLogsLogGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchLogsRoleArn"))
  {
    m_cloudWatchLogsRoleArn = jsonValue.GetString("CloudWatchLogsRoleArn");

    m_cloudWatchLogsRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Trail::Jsonize() const
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

  if(m_snsTopicARNHasBeenSet)
  {
   payload.WithString("SnsTopicARN", m_snsTopicARN);

  }

  if(m_includeGlobalServiceEventsHasBeenSet)
  {
   payload.WithBool("IncludeGlobalServiceEvents", m_includeGlobalServiceEvents);

  }

  if(m_isMultiRegionTrailHasBeenSet)
  {
   payload.WithBool("IsMultiRegionTrail", m_isMultiRegionTrail);

  }

  if(m_homeRegionHasBeenSet)
  {
   payload.WithString("HomeRegion", m_homeRegion);

  }

  if(m_trailARNHasBeenSet)
  {
   payload.WithString("TrailARN", m_trailARN);

  }

  if(m_logFileValidationEnabledHasBeenSet)
  {
   payload.WithBool("LogFileValidationEnabled", m_logFileValidationEnabled);

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

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws