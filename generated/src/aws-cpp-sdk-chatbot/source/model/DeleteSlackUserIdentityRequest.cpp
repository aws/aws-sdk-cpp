/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/DeleteSlackUserIdentityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::chatbot::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSlackUserIdentityRequest::DeleteSlackUserIdentityRequest() : 
    m_chatConfigurationArnHasBeenSet(false),
    m_slackTeamIdHasBeenSet(false),
    m_slackUserIdHasBeenSet(false)
{
}

Aws::String DeleteSlackUserIdentityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_chatConfigurationArnHasBeenSet)
  {
   payload.WithString("ChatConfigurationArn", m_chatConfigurationArn);

  }

  if(m_slackTeamIdHasBeenSet)
  {
   payload.WithString("SlackTeamId", m_slackTeamId);

  }

  if(m_slackUserIdHasBeenSet)
  {
   payload.WithString("SlackUserId", m_slackUserId);

  }

  return payload.View().WriteReadable();
}




