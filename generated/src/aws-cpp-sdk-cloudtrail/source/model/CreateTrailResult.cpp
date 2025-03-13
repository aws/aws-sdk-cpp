/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/CreateTrailResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateTrailResult::CreateTrailResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateTrailResult& CreateTrailResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
  if(jsonValue.ValueExists("IsOrganizationTrail"))
  {
    m_isOrganizationTrail = jsonValue.GetBool("IsOrganizationTrail");
    m_isOrganizationTrailHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
