/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/kafka/model/DescribeTopicReassignmentResult.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTopicReassignmentResult::DescribeTopicReassignmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeTopicReassignmentResult& DescribeTopicReassignmentResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("clusterArn")) {
    m_clusterArn = jsonValue.GetString("clusterArn");
    m_clusterArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("completedTopics")) {
    m_completedTopics = jsonValue.GetInteger("completedTopics");
    m_completedTopicsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorInfo")) {
    m_errorInfo = jsonValue.GetObject("errorInfo");
    m_errorInfoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdateTime")) {
    m_lastUpdateTime = jsonValue.GetString("lastUpdateTime");
    m_lastUpdateTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("migratedPartitions")) {
    m_migratedPartitions = jsonValue.GetInteger("migratedPartitions");
    m_migratedPartitionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = TopicReassignmentStatusMapper::GetTopicReassignmentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetInstanceType")) {
    m_targetInstanceType = jsonValue.GetString("targetInstanceType");
    m_targetInstanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topicReassignmentOperationArn")) {
    m_topicReassignmentOperationArn = jsonValue.GetString("topicReassignmentOperationArn");
    m_topicReassignmentOperationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topicsToExclude")) {
    Aws::Utils::Array<JsonView> topicsToExcludeJsonList = jsonValue.GetArray("topicsToExclude");
    for (unsigned topicsToExcludeIndex = 0; topicsToExcludeIndex < topicsToExcludeJsonList.GetLength(); ++topicsToExcludeIndex) {
      m_topicsToExclude.push_back(topicsToExcludeJsonList[topicsToExcludeIndex].AsString());
    }
    m_topicsToExcludeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topicsToInclude")) {
    Aws::Utils::Array<JsonView> topicsToIncludeJsonList = jsonValue.GetArray("topicsToInclude");
    for (unsigned topicsToIncludeIndex = 0; topicsToIncludeIndex < topicsToIncludeJsonList.GetLength(); ++topicsToIncludeIndex) {
      m_topicsToInclude.push_back(topicsToIncludeJsonList[topicsToIncludeIndex].AsString());
    }
    m_topicsToIncludeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalPartitions")) {
    m_totalPartitions = jsonValue.GetInteger("totalPartitions");
    m_totalPartitionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalTopics")) {
    m_totalTopics = jsonValue.GetInteger("totalTopics");
    m_totalTopicsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
