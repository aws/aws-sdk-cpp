/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/DeleteSkillAuthorizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSkillAuthorizationRequest::DeleteSkillAuthorizationRequest() : 
    m_skillIdHasBeenSet(false),
    m_roomArnHasBeenSet(false)
{
}

Aws::String DeleteSkillAuthorizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_skillIdHasBeenSet)
  {
   payload.WithString("SkillId", m_skillId);

  }

  if(m_roomArnHasBeenSet)
  {
   payload.WithString("RoomArn", m_roomArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteSkillAuthorizationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.DeleteSkillAuthorization"));
  return headers;

}




