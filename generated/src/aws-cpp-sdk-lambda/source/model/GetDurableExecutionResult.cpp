/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda/model/GetDurableExecutionResult.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDurableExecutionResult::GetDurableExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetDurableExecutionResult& GetDurableExecutionResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("DurableExecutionArn")) {
    m_durableExecutionArn = jsonValue.GetString("DurableExecutionArn");
    m_durableExecutionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DurableExecutionName")) {
    m_durableExecutionName = jsonValue.GetString("DurableExecutionName");
    m_durableExecutionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FunctionArn")) {
    m_functionArn = jsonValue.GetString("FunctionArn");
    m_functionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InputPayload")) {
    m_inputPayload = jsonValue.GetString("InputPayload");
    m_inputPayloadHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Result")) {
    m_result = jsonValue.GetString("Result");
    m_resultHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Error")) {
    m_error = jsonValue.GetObject("Error");
    m_errorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartTimestamp")) {
    m_startTimestamp = jsonValue.GetDouble("StartTimestamp");
    m_startTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTimestamp")) {
    m_endTimestamp = jsonValue.GetDouble("EndTimestamp");
    m_endTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Version")) {
    m_version = jsonValue.GetString("Version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TraceHeader")) {
    m_traceHeader = jsonValue.GetObject("TraceHeader");
    m_traceHeaderHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
