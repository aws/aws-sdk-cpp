/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/AssociateSkillGroupWithRoomRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateSkillGroupWithRoomRequest::AssociateSkillGroupWithRoomRequest() : 
    m_skillGroupArnHasBeenSet(false),
    m_roomArnHasBeenSet(false)
{
}

Aws::String AssociateSkillGroupWithRoomRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_skillGroupArnHasBeenSet)
  {
   payload.WithString("SkillGroupArn", m_skillGroupArn);

  }

  if(m_roomArnHasBeenSet)
  {
   payload.WithString("RoomArn", m_roomArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateSkillGroupWithRoomRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.AssociateSkillGroupWithRoom"));
  return headers;

}




