/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/kafka/model/DescribeChannelResult.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeChannelResult::DescribeChannelResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeChannelResult& DescribeChannelResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("channelArn")) {
    m_channelArn = jsonValue.GetString("channelArn");
    m_channelArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("channelName")) {
    m_channelName = jsonValue.GetString("channelName");
    m_channelNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryptionConfiguration")) {
    m_encryptionConfiguration = jsonValue.GetObject("encryptionConfiguration");
    m_encryptionConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("icebergDestinationConfiguration")) {
    m_icebergDestinationConfiguration = jsonValue.GetObject("icebergDestinationConfiguration");
    m_icebergDestinationConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3DestinationConfiguration")) {
    m_s3DestinationConfiguration = jsonValue.GetObject("s3DestinationConfiguration");
    m_s3DestinationConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ChannelStatusMapper::GetChannelStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationType")) {
    m_destinationType = ChannelDestinationTypeMapper::GetChannelDestinationTypeForName(jsonValue.GetString("destinationType"));
    m_destinationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topicConfigurationList")) {
    Aws::Utils::Array<JsonView> topicConfigurationListJsonList = jsonValue.GetArray("topicConfigurationList");
    for (unsigned topicConfigurationListIndex = 0; topicConfigurationListIndex < topicConfigurationListJsonList.GetLength();
         ++topicConfigurationListIndex) {
      m_topicConfigurationList.push_back(topicConfigurationListJsonList[topicConfigurationListIndex].AsObject());
    }
    m_topicConfigurationListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("loggingInfo")) {
    m_loggingInfo = jsonValue.GetObject("loggingInfo");
    m_loggingInfoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stateInfo")) {
    m_stateInfo = jsonValue.GetObject("stateInfo");
    m_stateInfoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clusterOperationArn")) {
    m_clusterOperationArn = jsonValue.GetString("clusterOperationArn");
    m_clusterOperationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
