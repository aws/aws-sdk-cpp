/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/ListProxySessionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListProxySessionsResult::ListProxySessionsResult()
{
}

ListProxySessionsResult::ListProxySessionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListProxySessionsResult& ListProxySessionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProxySessions"))
  {
    Aws::Utils::Array<JsonView> proxySessionsJsonList = jsonValue.GetArray("ProxySessions");
    for(unsigned proxySessionsIndex = 0; proxySessionsIndex < proxySessionsJsonList.GetLength(); ++proxySessionsIndex)
    {
      m_proxySessions.push_back(proxySessionsJsonList[proxySessionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
