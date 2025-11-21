/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/GetAutomationEventResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ComputeOptimizerAutomation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAutomationEventResult::GetAutomationEventResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetAutomationEventResult& GetAutomationEventResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("eventId")) {
    m_eventId = jsonValue.GetString("eventId");
    m_eventIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventDescription")) {
    m_eventDescription = jsonValue.GetString("eventDescription");
    m_eventDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventType")) {
    m_eventType = EventTypeMapper::GetEventTypeForName(jsonValue.GetString("eventType"));
    m_eventTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventStatus")) {
    m_eventStatus = EventStatusMapper::GetEventStatusForName(jsonValue.GetString("eventStatus"));
    m_eventStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventStatusReason")) {
    m_eventStatusReason = jsonValue.GetString("eventStatusReason");
    m_eventStatusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceArn")) {
    m_resourceArn = jsonValue.GetString("resourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceId")) {
    m_resourceId = jsonValue.GetString("resourceId");
    m_resourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendedActionId")) {
    m_recommendedActionId = jsonValue.GetString("recommendedActionId");
    m_recommendedActionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("region")) {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ruleId")) {
    m_ruleId = jsonValue.GetString("ruleId");
    m_ruleIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdTimestamp")) {
    m_createdTimestamp = jsonValue.GetDouble("createdTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("completedTimestamp")) {
    m_completedTimestamp = jsonValue.GetDouble("completedTimestamp");
    m_completedTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("estimatedMonthlySavings")) {
    m_estimatedMonthlySavings = jsonValue.GetObject("estimatedMonthlySavings");
    m_estimatedMonthlySavingsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
