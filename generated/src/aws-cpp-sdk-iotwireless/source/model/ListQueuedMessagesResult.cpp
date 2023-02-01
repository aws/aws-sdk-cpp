/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ListQueuedMessagesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListQueuedMessagesResult::ListQueuedMessagesResult()
{
}

ListQueuedMessagesResult::ListQueuedMessagesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListQueuedMessagesResult& ListQueuedMessagesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("DownlinkQueueMessagesList"))
  {
    Aws::Utils::Array<JsonView> downlinkQueueMessagesListJsonList = jsonValue.GetArray("DownlinkQueueMessagesList");
    for(unsigned downlinkQueueMessagesListIndex = 0; downlinkQueueMessagesListIndex < downlinkQueueMessagesListJsonList.GetLength(); ++downlinkQueueMessagesListIndex)
    {
      m_downlinkQueueMessagesList.push_back(downlinkQueueMessagesListJsonList[downlinkQueueMessagesListIndex].AsObject());
    }
  }



  return *this;
}
