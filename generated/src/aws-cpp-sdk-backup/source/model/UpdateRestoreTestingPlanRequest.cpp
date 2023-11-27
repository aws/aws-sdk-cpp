/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/UpdateRestoreTestingPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRestoreTestingPlanRequest::UpdateRestoreTestingPlanRequest() : 
    m_restoreTestingPlanHasBeenSet(false),
    m_restoreTestingPlanNameHasBeenSet(false)
{
}

Aws::String UpdateRestoreTestingPlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_restoreTestingPlanHasBeenSet)
  {
   payload.WithObject("RestoreTestingPlan", m_restoreTestingPlan.Jsonize());

  }

  return payload.View().WriteReadable();
}




