/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/PutRoomSkillParameterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutRoomSkillParameterRequest::PutRoomSkillParameterRequest() : 
    m_roomArnHasBeenSet(false),
    m_skillIdHasBeenSet(false),
    m_roomSkillParameterHasBeenSet(false)
{
}

Aws::String PutRoomSkillParameterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_roomArnHasBeenSet)
  {
   payload.WithString("RoomArn", m_roomArn);

  }

  if(m_skillIdHasBeenSet)
  {
   payload.WithString("SkillId", m_skillId);

  }

  if(m_roomSkillParameterHasBeenSet)
  {
   payload.WithObject("RoomSkillParameter", m_roomSkillParameter.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutRoomSkillParameterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.PutRoomSkillParameter"));
  return headers;

}




