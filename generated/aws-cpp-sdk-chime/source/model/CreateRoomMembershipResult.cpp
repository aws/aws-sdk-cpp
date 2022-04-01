/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/CreateRoomMembershipResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateRoomMembershipResult::CreateRoomMembershipResult()
{
}

CreateRoomMembershipResult::CreateRoomMembershipResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateRoomMembershipResult& CreateRoomMembershipResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RoomMembership"))
  {
    m_roomMembership = jsonValue.GetObject("RoomMembership");

  }



  return *this;
}
