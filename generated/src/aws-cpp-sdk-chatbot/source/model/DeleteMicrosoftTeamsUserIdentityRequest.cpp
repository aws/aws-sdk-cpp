/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/DeleteMicrosoftTeamsUserIdentityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::chatbot::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteMicrosoftTeamsUserIdentityRequest::DeleteMicrosoftTeamsUserIdentityRequest() : 
    m_chatConfigurationArnHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

Aws::String DeleteMicrosoftTeamsUserIdentityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_chatConfigurationArnHasBeenSet)
  {
   payload.WithString("ChatConfigurationArn", m_chatConfigurationArn);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  return payload.View().WriteReadable();
}




