/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/DeleteMicrosoftTeamsConfiguredTeamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::chatbot::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteMicrosoftTeamsConfiguredTeamRequest::DeleteMicrosoftTeamsConfiguredTeamRequest() : 
    m_teamIdHasBeenSet(false)
{
}

Aws::String DeleteMicrosoftTeamsConfiguredTeamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_teamIdHasBeenSet)
  {
   payload.WithString("TeamId", m_teamId);

  }

  return payload.View().WriteReadable();
}




