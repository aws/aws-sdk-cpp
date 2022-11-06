/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/ListRemoteAccessSessionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRemoteAccessSessionsResult::ListRemoteAccessSessionsResult()
{
}

ListRemoteAccessSessionsResult::ListRemoteAccessSessionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRemoteAccessSessionsResult& ListRemoteAccessSessionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("remoteAccessSessions"))
  {
    Aws::Utils::Array<JsonView> remoteAccessSessionsJsonList = jsonValue.GetArray("remoteAccessSessions");
    for(unsigned remoteAccessSessionsIndex = 0; remoteAccessSessionsIndex < remoteAccessSessionsJsonList.GetLength(); ++remoteAccessSessionsIndex)
    {
      m_remoteAccessSessions.push_back(remoteAccessSessionsJsonList[remoteAccessSessionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
