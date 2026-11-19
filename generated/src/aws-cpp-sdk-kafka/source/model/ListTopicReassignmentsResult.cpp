/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/kafka/model/ListTopicReassignmentsResult.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTopicReassignmentsResult::ListTopicReassignmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListTopicReassignmentsResult& ListTopicReassignmentsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reassignments")) {
    Aws::Utils::Array<JsonView> reassignmentsJsonList = jsonValue.GetArray("reassignments");
    for (unsigned reassignmentsIndex = 0; reassignmentsIndex < reassignmentsJsonList.GetLength(); ++reassignmentsIndex) {
      m_reassignments.push_back(reassignmentsJsonList[reassignmentsIndex].AsObject());
    }
    m_reassignmentsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
