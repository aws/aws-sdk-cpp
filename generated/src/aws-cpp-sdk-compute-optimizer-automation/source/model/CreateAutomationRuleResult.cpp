/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/CreateAutomationRuleResult.h>
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

CreateAutomationRuleResult::CreateAutomationRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateAutomationRuleResult& CreateAutomationRuleResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ruleArn")) {
    m_ruleArn = jsonValue.GetString("ruleArn");
    m_ruleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ruleId")) {
    m_ruleId = jsonValue.GetString("ruleId");
    m_ruleIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ruleType")) {
    m_ruleType = RuleTypeMapper::GetRuleTypeForName(jsonValue.GetString("ruleType"));
    m_ruleTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ruleRevision")) {
    m_ruleRevision = jsonValue.GetInt64("ruleRevision");
    m_ruleRevisionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("organizationConfiguration")) {
    m_organizationConfiguration = jsonValue.GetObject("organizationConfiguration");
    m_organizationConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priority")) {
    m_priority = jsonValue.GetString("priority");
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendedActionTypes")) {
    Aws::Utils::Array<JsonView> recommendedActionTypesJsonList = jsonValue.GetArray("recommendedActionTypes");
    for (unsigned recommendedActionTypesIndex = 0; recommendedActionTypesIndex < recommendedActionTypesJsonList.GetLength();
         ++recommendedActionTypesIndex) {
      m_recommendedActionTypes.push_back(RecommendedActionTypeMapper::GetRecommendedActionTypeForName(
          recommendedActionTypesJsonList[recommendedActionTypesIndex].AsString()));
    }
    m_recommendedActionTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("criteria")) {
    m_criteria = jsonValue.GetObject("criteria");
    m_criteriaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("schedule")) {
    m_schedule = jsonValue.GetObject("schedule");
    m_scheduleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = RuleStatusMapper::GetRuleStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdTimestamp")) {
    m_createdTimestamp = jsonValue.GetDouble("createdTimestamp");
    m_createdTimestampHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
