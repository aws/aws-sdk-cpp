/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/kafka/model/UpdateTopicResult.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateTopicResult::UpdateTopicResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateTopicResult& UpdateTopicResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_responseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("topicArn")) {
    m_topicArn = jsonValue.GetString("topicArn");
    m_topicArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topicName")) {
    m_topicName = jsonValue.GetString("topicName");
    m_topicNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = TopicStateMapper::GetTopicStateForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
