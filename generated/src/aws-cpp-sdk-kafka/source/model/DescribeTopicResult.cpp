/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/kafka/model/DescribeTopicResult.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTopicResult::DescribeTopicResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeTopicResult& DescribeTopicResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("topicArn")) {
    m_topicArn = jsonValue.GetString("topicArn");
    m_topicArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topicName")) {
    m_topicName = jsonValue.GetString("topicName");
    m_topicNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("replicationFactor")) {
    m_replicationFactor = jsonValue.GetInteger("replicationFactor");
    m_replicationFactorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("partitionCount")) {
    m_partitionCount = jsonValue.GetInteger("partitionCount");
    m_partitionCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configs")) {
    m_configs = jsonValue.GetString("configs");
    m_configsHasBeenSet = true;
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
