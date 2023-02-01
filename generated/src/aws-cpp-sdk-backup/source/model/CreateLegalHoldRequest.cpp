/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/CreateLegalHoldRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLegalHoldRequest::CreateLegalHoldRequest() : 
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idempotencyTokenHasBeenSet(false),
    m_recoveryPointSelectionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateLegalHoldRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  if(m_recoveryPointSelectionHasBeenSet)
  {
   payload.WithObject("RecoveryPointSelection", m_recoveryPointSelection.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




