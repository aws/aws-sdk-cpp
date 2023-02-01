/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ListServersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListServersResult::ListServersResult()
{
}

ListServersResult::ListServersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListServersResult& ListServersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Servers"))
  {
    Aws::Utils::Array<JsonView> serversJsonList = jsonValue.GetArray("Servers");
    for(unsigned serversIndex = 0; serversIndex < serversJsonList.GetLength(); ++serversIndex)
    {
      m_servers.push_back(serversJsonList[serversIndex].AsObject());
    }
  }



  return *this;
}
