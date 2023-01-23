/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/UpdateBotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBotRequest::UpdateBotRequest() : 
    m_accountIdHasBeenSet(false),
    m_botIdHasBeenSet(false),
    m_disabled(false),
    m_disabledHasBeenSet(false)
{
}

Aws::String UpdateBotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_disabledHasBeenSet)
  {
   payload.WithBool("Disabled", m_disabled);

  }

  return payload.View().WriteReadable();
}




