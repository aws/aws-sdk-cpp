/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/ListStreamSessionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListStreamSessionsResult::ListStreamSessionsResult()
{
}

ListStreamSessionsResult::ListStreamSessionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListStreamSessionsResult& ListStreamSessionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("streamSessions"))
  {
    Aws::Utils::Array<JsonView> streamSessionsJsonList = jsonValue.GetArray("streamSessions");
    for(unsigned streamSessionsIndex = 0; streamSessionsIndex < streamSessionsJsonList.GetLength(); ++streamSessionsIndex)
    {
      m_streamSessions.push_back(streamSessionsJsonList[streamSessionsIndex].AsObject());
    }
  }



  return *this;
}
