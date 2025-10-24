﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/CreateRoutingRuleResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateRoutingRuleResult::CreateRoutingRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateRoutingRuleResult& CreateRoutingRuleResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("actions")) {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("actions");
    for (unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex) {
      m_actions.push_back(actionsJsonList[actionsIndex].AsObject());
    }
    m_actionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("conditions")) {
    Aws::Utils::Array<JsonView> conditionsJsonList = jsonValue.GetArray("conditions");
    for (unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex) {
      m_conditions.push_back(conditionsJsonList[conditionsIndex].AsObject());
    }
    m_conditionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priority")) {
    m_priority = jsonValue.GetInteger("priority");
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("routingRuleArn")) {
    m_routingRuleArn = jsonValue.GetString("routingRuleArn");
    m_routingRuleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("routingRuleId")) {
    m_routingRuleId = jsonValue.GetString("routingRuleId");
    m_routingRuleIdHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
