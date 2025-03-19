/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/GetTrailStatusResult.h>
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

GetTrailStatusResult::GetTrailStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTrailStatusResult& GetTrailStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IsLogging"))
  {
    m_isLogging = jsonValue.GetBool("IsLogging");
    m_isLoggingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestDeliveryError"))
  {
    m_latestDeliveryError = jsonValue.GetString("LatestDeliveryError");
    m_latestDeliveryErrorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestNotificationError"))
  {
    m_latestNotificationError = jsonValue.GetString("LatestNotificationError");
    m_latestNotificationErrorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestDeliveryTime"))
  {
    m_latestDeliveryTime = jsonValue.GetDouble("LatestDeliveryTime");
    m_latestDeliveryTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestNotificationTime"))
  {
    m_latestNotificationTime = jsonValue.GetDouble("LatestNotificationTime");
    m_latestNotificationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartLoggingTime"))
  {
    m_startLoggingTime = jsonValue.GetDouble("StartLoggingTime");
    m_startLoggingTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StopLoggingTime"))
  {
    m_stopLoggingTime = jsonValue.GetDouble("StopLoggingTime");
    m_stopLoggingTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestCloudWatchLogsDeliveryError"))
  {
    m_latestCloudWatchLogsDeliveryError = jsonValue.GetString("LatestCloudWatchLogsDeliveryError");
    m_latestCloudWatchLogsDeliveryErrorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestCloudWatchLogsDeliveryTime"))
  {
    m_latestCloudWatchLogsDeliveryTime = jsonValue.GetDouble("LatestCloudWatchLogsDeliveryTime");
    m_latestCloudWatchLogsDeliveryTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestDigestDeliveryTime"))
  {
    m_latestDigestDeliveryTime = jsonValue.GetDouble("LatestDigestDeliveryTime");
    m_latestDigestDeliveryTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestDigestDeliveryError"))
  {
    m_latestDigestDeliveryError = jsonValue.GetString("LatestDigestDeliveryError");
    m_latestDigestDeliveryErrorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestDeliveryAttemptTime"))
  {
    m_latestDeliveryAttemptTime = jsonValue.GetString("LatestDeliveryAttemptTime");
    m_latestDeliveryAttemptTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestNotificationAttemptTime"))
  {
    m_latestNotificationAttemptTime = jsonValue.GetString("LatestNotificationAttemptTime");
    m_latestNotificationAttemptTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestNotificationAttemptSucceeded"))
  {
    m_latestNotificationAttemptSucceeded = jsonValue.GetString("LatestNotificationAttemptSucceeded");
    m_latestNotificationAttemptSucceededHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestDeliveryAttemptSucceeded"))
  {
    m_latestDeliveryAttemptSucceeded = jsonValue.GetString("LatestDeliveryAttemptSucceeded");
    m_latestDeliveryAttemptSucceededHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeLoggingStarted"))
  {
    m_timeLoggingStarted = jsonValue.GetString("TimeLoggingStarted");
    m_timeLoggingStartedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeLoggingStopped"))
  {
    m_timeLoggingStopped = jsonValue.GetString("TimeLoggingStopped");
    m_timeLoggingStoppedHasBeenSet = true;
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
