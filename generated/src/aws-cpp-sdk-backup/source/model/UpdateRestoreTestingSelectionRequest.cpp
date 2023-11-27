/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/UpdateRestoreTestingSelectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRestoreTestingSelectionRequest::UpdateRestoreTestingSelectionRequest() : 
    m_restoreTestingPlanNameHasBeenSet(false),
    m_restoreTestingSelectionHasBeenSet(false),
    m_restoreTestingSelectionNameHasBeenSet(false)
{
}

Aws::String UpdateRestoreTestingSelectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_restoreTestingSelectionHasBeenSet)
  {
   payload.WithObject("RestoreTestingSelection", m_restoreTestingSelection.Jsonize());

  }

  return payload.View().WriteReadable();
}




