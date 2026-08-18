/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/drs/model/ListRecoveryPlanStepsResult.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRecoveryPlanStepsResult::ListRecoveryPlanStepsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListRecoveryPlanStepsResult& ListRecoveryPlanStepsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("recoveryPlanSteps")) {
    Aws::Utils::Array<JsonView> recoveryPlanStepsJsonList = jsonValue.GetArray("recoveryPlanSteps");
    for (unsigned recoveryPlanStepsIndex = 0; recoveryPlanStepsIndex < recoveryPlanStepsJsonList.GetLength(); ++recoveryPlanStepsIndex) {
      m_recoveryPlanSteps.push_back(recoveryPlanStepsJsonList[recoveryPlanStepsIndex].AsObject());
    }
    m_recoveryPlanStepsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
