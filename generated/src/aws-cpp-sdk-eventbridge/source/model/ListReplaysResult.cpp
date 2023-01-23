/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/ListReplaysResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListReplaysResult::ListReplaysResult()
{
}

ListReplaysResult::ListReplaysResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListReplaysResult& ListReplaysResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Replays"))
  {
    Aws::Utils::Array<JsonView> replaysJsonList = jsonValue.GetArray("Replays");
    for(unsigned replaysIndex = 0; replaysIndex < replaysJsonList.GetLength(); ++replaysIndex)
    {
      m_replays.push_back(replaysJsonList[replaysIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
