/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/ResolveRoomResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ResolveRoomResult::ResolveRoomResult()
{
}

ResolveRoomResult::ResolveRoomResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ResolveRoomResult& ResolveRoomResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RoomArn"))
  {
    m_roomArn = jsonValue.GetString("RoomArn");

  }

  if(jsonValue.ValueExists("RoomName"))
  {
    m_roomName = jsonValue.GetString("RoomName");

  }

  if(jsonValue.ValueExists("RoomSkillParameters"))
  {
    Aws::Utils::Array<JsonView> roomSkillParametersJsonList = jsonValue.GetArray("RoomSkillParameters");
    for(unsigned roomSkillParametersIndex = 0; roomSkillParametersIndex < roomSkillParametersJsonList.GetLength(); ++roomSkillParametersIndex)
    {
      m_roomSkillParameters.push_back(roomSkillParametersJsonList[roomSkillParametersIndex].AsObject());
    }
  }



  return *this;
}
