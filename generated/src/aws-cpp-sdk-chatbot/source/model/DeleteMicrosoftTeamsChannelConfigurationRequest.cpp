/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/DeleteMicrosoftTeamsChannelConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::chatbot::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteMicrosoftTeamsChannelConfigurationRequest::DeleteMicrosoftTeamsChannelConfigurationRequest() : 
    m_chatConfigurationArnHasBeenSet(false)
{
}

Aws::String DeleteMicrosoftTeamsChannelConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_chatConfigurationArnHasBeenSet)
  {
   payload.WithString("ChatConfigurationArn", m_chatConfigurationArn);

  }

  return payload.View().WriteReadable();
}




