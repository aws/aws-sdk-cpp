/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ListRoomMembershipsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRoomMembershipsResult::ListRoomMembershipsResult()
{
}

ListRoomMembershipsResult::ListRoomMembershipsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRoomMembershipsResult& ListRoomMembershipsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RoomMemberships"))
  {
    Aws::Utils::Array<JsonView> roomMembershipsJsonList = jsonValue.GetArray("RoomMemberships");
    for(unsigned roomMembershipsIndex = 0; roomMembershipsIndex < roomMembershipsJsonList.GetLength(); ++roomMembershipsIndex)
    {
      m_roomMemberships.push_back(roomMembershipsJsonList[roomMembershipsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
