/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/DeleteSlackWorkspaceAuthorizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::chatbot::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSlackWorkspaceAuthorizationRequest::DeleteSlackWorkspaceAuthorizationRequest() : 
    m_slackTeamIdHasBeenSet(false)
{
}

Aws::String DeleteSlackWorkspaceAuthorizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_slackTeamIdHasBeenSet)
  {
   payload.WithString("SlackTeamId", m_slackTeamId);

  }

  return payload.View().WriteReadable();
}




