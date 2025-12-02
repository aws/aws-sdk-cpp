/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda/model/CheckpointDurableExecutionResult.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CheckpointDurableExecutionResult::CheckpointDurableExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CheckpointDurableExecutionResult& CheckpointDurableExecutionResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("CheckpointToken")) {
    m_checkpointToken = jsonValue.GetString("CheckpointToken");
    m_checkpointTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NewExecutionState")) {
    m_newExecutionState = jsonValue.GetObject("NewExecutionState");
    m_newExecutionStateHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
