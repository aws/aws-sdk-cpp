/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/UpdateFrameworkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFrameworkRequest::UpdateFrameworkRequest() : 
    m_frameworkNameHasBeenSet(false),
    m_frameworkDescriptionHasBeenSet(false),
    m_frameworkControlsHasBeenSet(false),
    m_idempotencyToken(Aws::Utils::UUID::RandomUUID()),
    m_idempotencyTokenHasBeenSet(true)
{
}

Aws::String UpdateFrameworkRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_frameworkDescriptionHasBeenSet)
  {
   payload.WithString("FrameworkDescription", m_frameworkDescription);

  }

  if(m_frameworkControlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> frameworkControlsJsonList(m_frameworkControls.size());
   for(unsigned frameworkControlsIndex = 0; frameworkControlsIndex < frameworkControlsJsonList.GetLength(); ++frameworkControlsIndex)
   {
     frameworkControlsJsonList[frameworkControlsIndex].AsObject(m_frameworkControls[frameworkControlsIndex].Jsonize());
   }
   payload.WithArray("FrameworkControls", std::move(frameworkControlsJsonList));

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  return payload.View().WriteReadable();
}




