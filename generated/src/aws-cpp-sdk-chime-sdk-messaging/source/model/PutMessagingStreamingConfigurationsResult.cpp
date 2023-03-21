/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/PutMessagingStreamingConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutMessagingStreamingConfigurationsResult::PutMessagingStreamingConfigurationsResult()
{
}

PutMessagingStreamingConfigurationsResult::PutMessagingStreamingConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutMessagingStreamingConfigurationsResult& PutMessagingStreamingConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StreamingConfigurations"))
  {
    Aws::Utils::Array<JsonView> streamingConfigurationsJsonList = jsonValue.GetArray("StreamingConfigurations");
    for(unsigned streamingConfigurationsIndex = 0; streamingConfigurationsIndex < streamingConfigurationsJsonList.GetLength(); ++streamingConfigurationsIndex)
    {
      m_streamingConfigurations.push_back(streamingConfigurationsJsonList[streamingConfigurationsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
