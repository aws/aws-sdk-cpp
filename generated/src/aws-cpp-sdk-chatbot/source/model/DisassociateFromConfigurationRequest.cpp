/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/DisassociateFromConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::chatbot::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DisassociateFromConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceHasBeenSet)
  {
   payload.WithString("Resource", m_resource);

  }

  if(m_chatConfigurationHasBeenSet)
  {
   payload.WithString("ChatConfiguration", m_chatConfiguration);

  }

  return payload.View().WriteReadable();
}




