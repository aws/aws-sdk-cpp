/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/kinesis/model/ListChannelsResult.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListChannelsResult::ListChannelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListChannelsResult& ListChannelsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ChannelSummaries")) {
    Aws::Utils::Array<JsonView> channelSummariesJsonList = jsonValue.GetArray("ChannelSummaries");
    for (unsigned channelSummariesIndex = 0; channelSummariesIndex < channelSummariesJsonList.GetLength(); ++channelSummariesIndex) {
      m_channelSummaries.push_back(channelSummariesJsonList[channelSummariesIndex].AsObject());
    }
    m_channelSummariesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
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
