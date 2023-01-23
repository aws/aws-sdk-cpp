/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/BatchCreateRoomMembershipRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchCreateRoomMembershipRequest::BatchCreateRoomMembershipRequest() : 
    m_accountIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_membershipItemListHasBeenSet(false)
{
}

Aws::String BatchCreateRoomMembershipRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_membershipItemListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> membershipItemListJsonList(m_membershipItemList.size());
   for(unsigned membershipItemListIndex = 0; membershipItemListIndex < membershipItemListJsonList.GetLength(); ++membershipItemListIndex)
   {
     membershipItemListJsonList[membershipItemListIndex].AsObject(m_membershipItemList[membershipItemListIndex].Jsonize());
   }
   payload.WithArray("MembershipItemList", std::move(membershipItemListJsonList));

  }

  return payload.View().WriteReadable();
}




