/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/GetTrailStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTrailStatusResult::GetTrailStatusResult() : 
    m_isLogging(false)
{
}

GetTrailStatusResult::GetTrailStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_isLogging(false)
{
  *this = result;
}

GetTrailStatusResult& GetTrailStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IsLogging"))
  {
    m_isLogging = jsonValue.GetBool("IsLogging");

  }

  if(jsonValue.ValueExists("LatestDeliveryError"))
  {
    m_latestDeliveryError = jsonValue.GetString("LatestDeliveryError");

  }

  if(jsonValue.ValueExists("LatestNotificationError"))
  {
    m_latestNotificationError = jsonValue.GetString("LatestNotificationError");

  }

  if(jsonValue.ValueExists("LatestDeliveryTime"))
  {
    m_latestDeliveryTime = jsonValue.GetDouble("LatestDeliveryTime");

  }

  if(jsonValue.ValueExists("LatestNotificationTime"))
  {
    m_latestNotificationTime = jsonValue.GetDouble("LatestNotificationTime");

  }

  if(jsonValue.ValueExists("StartLoggingTime"))
  {
    m_startLoggingTime = jsonValue.GetDouble("StartLoggingTime");

  }

  if(jsonValue.ValueExists("StopLoggingTime"))
  {
    m_stopLoggingTime = jsonValue.GetDouble("StopLoggingTime");

  }

  if(jsonValue.ValueExists("LatestCloudWatchLogsDeliveryError"))
  {
    m_latestCloudWatchLogsDeliveryError = jsonValue.GetString("LatestCloudWatchLogsDeliveryError");

  }

  if(jsonValue.ValueExists("LatestCloudWatchLogsDeliveryTime"))
  {
    m_latestCloudWatchLogsDeliveryTime = jsonValue.GetDouble("LatestCloudWatchLogsDeliveryTime");

  }

  if(jsonValue.ValueExists("LatestDigestDeliveryTime"))
  {
    m_latestDigestDeliveryTime = jsonValue.GetDouble("LatestDigestDeliveryTime");

  }

  if(jsonValue.ValueExists("LatestDigestDeliveryError"))
  {
    m_latestDigestDeliveryError = jsonValue.GetString("LatestDigestDeliveryError");

  }

  if(jsonValue.ValueExists("LatestDeliveryAttemptTime"))
  {
    m_latestDeliveryAttemptTime = jsonValue.GetString("LatestDeliveryAttemptTime");

  }

  if(jsonValue.ValueExists("LatestNotificationAttemptTime"))
  {
    m_latestNotificationAttemptTime = jsonValue.GetString("LatestNotificationAttemptTime");

  }

  if(jsonValue.ValueExists("LatestNotificationAttemptSucceeded"))
  {
    m_latestNotificationAttemptSucceeded = jsonValue.GetString("LatestNotificationAttemptSucceeded");

  }

  if(jsonValue.ValueExists("LatestDeliveryAttemptSucceeded"))
  {
    m_latestDeliveryAttemptSucceeded = jsonValue.GetString("LatestDeliveryAttemptSucceeded");

  }

  if(jsonValue.ValueExists("TimeLoggingStarted"))
  {
    m_timeLoggingStarted = jsonValue.GetString("TimeLoggingStarted");

  }

  if(jsonValue.ValueExists("TimeLoggingStopped"))
  {
    m_timeLoggingStopped = jsonValue.GetString("TimeLoggingStopped");

  }



  return *this;
}
