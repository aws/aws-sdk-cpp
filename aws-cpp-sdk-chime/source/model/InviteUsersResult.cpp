/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/InviteUsersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

InviteUsersResult::InviteUsersResult()
{
}

InviteUsersResult::InviteUsersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

InviteUsersResult& InviteUsersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Invites"))
  {
    Aws::Utils::Array<JsonView> invitesJsonList = jsonValue.GetArray("Invites");
    for(unsigned invitesIndex = 0; invitesIndex < invitesJsonList.GetLength(); ++invitesIndex)
    {
      m_invites.push_back(invitesJsonList[invitesIndex].AsObject());
    }
  }



  return *this;
}
