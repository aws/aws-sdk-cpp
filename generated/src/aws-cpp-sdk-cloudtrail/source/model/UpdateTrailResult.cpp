/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/UpdateTrailResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateTrailResult::UpdateTrailResult() : 
    m_includeGlobalServiceEvents(false),
    m_isMultiRegionTrail(false),
    m_logFileValidationEnabled(false),
    m_isOrganizationTrail(false)
{
}

UpdateTrailResult::UpdateTrailResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_includeGlobalServiceEvents(false),
    m_isMultiRegionTrail(false),
    m_logFileValidationEnabled(false),
    m_isOrganizationTrail(false)
{
  *this = result;
}

UpdateTrailResult& UpdateTrailResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("S3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("S3BucketName");

  }

  if(jsonValue.ValueExists("S3KeyPrefix"))
  {
    m_s3KeyPrefix = jsonValue.GetString("S3KeyPrefix");

  }

  if(jsonValue.ValueExists("SnsTopicARN"))
  {
    m_snsTopicARN = jsonValue.GetString("SnsTopicARN");

  }

  if(jsonValue.ValueExists("IncludeGlobalServiceEvents"))
  {
    m_includeGlobalServiceEvents = jsonValue.GetBool("IncludeGlobalServiceEvents");

  }

  if(jsonValue.ValueExists("IsMultiRegionTrail"))
  {
    m_isMultiRegionTrail = jsonValue.GetBool("IsMultiRegionTrail");

  }

  if(jsonValue.ValueExists("TrailARN"))
  {
    m_trailARN = jsonValue.GetString("TrailARN");

  }

  if(jsonValue.ValueExists("LogFileValidationEnabled"))
  {
    m_logFileValidationEnabled = jsonValue.GetBool("LogFileValidationEnabled");

  }

  if(jsonValue.ValueExists("CloudWatchLogsLogGroupArn"))
  {
    m_cloudWatchLogsLogGroupArn = jsonValue.GetString("CloudWatchLogsLogGroupArn");

  }

  if(jsonValue.ValueExists("CloudWatchLogsRoleArn"))
  {
    m_cloudWatchLogsRoleArn = jsonValue.GetString("CloudWatchLogsRoleArn");

  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

  }

  if(jsonValue.ValueExists("IsOrganizationTrail"))
  {
    m_isOrganizationTrail = jsonValue.GetBool("IsOrganizationTrail");

  }



  return *this;
}
