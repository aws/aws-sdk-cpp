/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/kinesis/model/ReceiveDeadLetterQueueRecordsResult.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ReceiveDeadLetterQueueRecordsResult::ReceiveDeadLetterQueueRecordsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ReceiveDeadLetterQueueRecordsResult& ReceiveDeadLetterQueueRecordsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("QueueRecords")) {
    Aws::Utils::Array<JsonView> queueRecordsJsonList = jsonValue.GetArray("QueueRecords");
    for (unsigned queueRecordsIndex = 0; queueRecordsIndex < queueRecordsJsonList.GetLength(); ++queueRecordsIndex) {
      m_queueRecords.push_back(queueRecordsJsonList[queueRecordsIndex].AsObject());
    }
    m_queueRecordsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
