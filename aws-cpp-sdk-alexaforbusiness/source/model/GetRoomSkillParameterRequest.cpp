/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/GetRoomSkillParameterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRoomSkillParameterRequest::GetRoomSkillParameterRequest() : 
    m_roomArnHasBeenSet(false),
    m_skillIdHasBeenSet(false),
    m_parameterKeyHasBeenSet(false)
{
}

Aws::String GetRoomSkillParameterRequest::SerializePayload() const
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

  if(m_parameterKeyHasBeenSet)
  {
   payload.WithString("ParameterKey", m_parameterKey);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRoomSkillParameterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.GetRoomSkillParameter"));
  return headers;

}




