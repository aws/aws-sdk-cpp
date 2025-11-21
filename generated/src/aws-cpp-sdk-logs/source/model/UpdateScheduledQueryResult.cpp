/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/logs/model/UpdateScheduledQueryResult.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateScheduledQueryResult::UpdateScheduledQueryResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateScheduledQueryResult& UpdateScheduledQueryResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("scheduledQueryArn")) {
    m_scheduledQueryArn = jsonValue.GetString("scheduledQueryArn");
    m_scheduledQueryArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("queryLanguage")) {
    m_queryLanguage = QueryLanguageMapper::GetQueryLanguageForName(jsonValue.GetString("queryLanguage"));
    m_queryLanguageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("queryString")) {
    m_queryString = jsonValue.GetString("queryString");
    m_queryStringHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logGroupIdentifiers")) {
    Aws::Utils::Array<JsonView> logGroupIdentifiersJsonList = jsonValue.GetArray("logGroupIdentifiers");
    for (unsigned logGroupIdentifiersIndex = 0; logGroupIdentifiersIndex < logGroupIdentifiersJsonList.GetLength();
         ++logGroupIdentifiersIndex) {
      m_logGroupIdentifiers.push_back(logGroupIdentifiersJsonList[logGroupIdentifiersIndex].AsString());
    }
    m_logGroupIdentifiersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scheduleExpression")) {
    m_scheduleExpression = jsonValue.GetString("scheduleExpression");
    m_scheduleExpressionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timezone")) {
    m_timezone = jsonValue.GetString("timezone");
    m_timezoneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startTimeOffset")) {
    m_startTimeOffset = jsonValue.GetInt64("startTimeOffset");
    m_startTimeOffsetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationConfiguration")) {
    m_destinationConfiguration = jsonValue.GetObject("destinationConfiguration");
    m_destinationConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = ScheduledQueryStateMapper::GetScheduledQueryStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastTriggeredTime")) {
    m_lastTriggeredTime = jsonValue.GetInt64("lastTriggeredTime");
    m_lastTriggeredTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastExecutionStatus")) {
    m_lastExecutionStatus = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("lastExecutionStatus"));
    m_lastExecutionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scheduleStartTime")) {
    m_scheduleStartTime = jsonValue.GetInt64("scheduleStartTime");
    m_scheduleStartTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scheduleEndTime")) {
    m_scheduleEndTime = jsonValue.GetInt64("scheduleEndTime");
    m_scheduleEndTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionRoleArn")) {
    m_executionRoleArn = jsonValue.GetString("executionRoleArn");
    m_executionRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetInt64("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedTime")) {
    m_lastUpdatedTime = jsonValue.GetInt64("lastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
