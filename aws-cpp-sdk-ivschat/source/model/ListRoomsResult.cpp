/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivschat/model/ListRoomsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ivschat::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRoomsResult::ListRoomsResult()
{
}

ListRoomsResult::ListRoomsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRoomsResult& ListRoomsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("rooms"))
  {
    Aws::Utils::Array<JsonView> roomsJsonList = jsonValue.GetArray("rooms");
    for(unsigned roomsIndex = 0; roomsIndex < roomsJsonList.GetLength(); ++roomsIndex)
    {
      m_rooms.push_back(roomsJsonList[roomsIndex].AsObject());
    }
  }



  return *this;
}
