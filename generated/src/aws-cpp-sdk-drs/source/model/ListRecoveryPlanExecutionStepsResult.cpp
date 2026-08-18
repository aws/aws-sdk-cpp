/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/drs/model/ListRecoveryPlanExecutionStepsResult.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRecoveryPlanExecutionStepsResult::ListRecoveryPlanExecutionStepsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListRecoveryPlanExecutionStepsResult& ListRecoveryPlanExecutionStepsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("recoveryPlanExecutionSteps")) {
    Aws::Utils::Array<JsonView> recoveryPlanExecutionStepsJsonList = jsonValue.GetArray("recoveryPlanExecutionSteps");
    for (unsigned recoveryPlanExecutionStepsIndex = 0; recoveryPlanExecutionStepsIndex < recoveryPlanExecutionStepsJsonList.GetLength();
         ++recoveryPlanExecutionStepsIndex) {
      m_recoveryPlanExecutionSteps.push_back(recoveryPlanExecutionStepsJsonList[recoveryPlanExecutionStepsIndex].AsObject());
    }
    m_recoveryPlanExecutionStepsHasBeenSet = true;
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
