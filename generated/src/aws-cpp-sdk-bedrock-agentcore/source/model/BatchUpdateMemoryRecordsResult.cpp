/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/BatchUpdateMemoryRecordsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchUpdateMemoryRecordsResult::BatchUpdateMemoryRecordsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

BatchUpdateMemoryRecordsResult& BatchUpdateMemoryRecordsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("successfulRecords")) {
    Aws::Utils::Array<JsonView> successfulRecordsJsonList = jsonValue.GetArray("successfulRecords");
    for (unsigned successfulRecordsIndex = 0; successfulRecordsIndex < successfulRecordsJsonList.GetLength(); ++successfulRecordsIndex) {
      m_successfulRecords.push_back(successfulRecordsJsonList[successfulRecordsIndex].AsObject());
    }
    m_successfulRecordsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failedRecords")) {
    Aws::Utils::Array<JsonView> failedRecordsJsonList = jsonValue.GetArray("failedRecords");
    for (unsigned failedRecordsIndex = 0; failedRecordsIndex < failedRecordsJsonList.GetLength(); ++failedRecordsIndex) {
      m_failedRecords.push_back(failedRecordsJsonList[failedRecordsIndex].AsObject());
    }
    m_failedRecordsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
