/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/GetChannelMessageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetChannelMessageResult::GetChannelMessageResult()
{
}

GetChannelMessageResult::GetChannelMessageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetChannelMessageResult& GetChannelMessageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ChannelMessage"))
  {
    m_channelMessage = jsonValue.GetObject("ChannelMessage");

  }



  return *this;
}
