/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AssociateLexBotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateLexBotRequest::AssociateLexBotRequest() : 
    m_instanceIdHasBeenSet(false),
    m_lexBotHasBeenSet(false)
{
}

Aws::String AssociateLexBotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_lexBotHasBeenSet)
  {
   payload.WithObject("LexBot", m_lexBot.Jsonize());

  }

  return payload.View().WriteReadable();
}




