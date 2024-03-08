/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/CreateRestoreTestingSelectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRestoreTestingSelectionRequest::CreateRestoreTestingSelectionRequest() : 
    m_creatorRequestIdHasBeenSet(false),
    m_restoreTestingPlanNameHasBeenSet(false),
    m_restoreTestingSelectionHasBeenSet(false)
{
}

Aws::String CreateRestoreTestingSelectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_restoreTestingSelectionHasBeenSet)
  {
   payload.WithObject("RestoreTestingSelection", m_restoreTestingSelection.Jsonize());

  }

  return payload.View().WriteReadable();
}




