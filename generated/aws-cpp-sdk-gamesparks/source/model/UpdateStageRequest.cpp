/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/UpdateStageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameSparks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateStageRequest::UpdateStageRequest() : 
    m_descriptionHasBeenSet(false),
    m_gameNameHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_stageNameHasBeenSet(false)
{
}

Aws::String UpdateStageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  return payload.View().WriteReadable();
}




