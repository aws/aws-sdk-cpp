/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/GetRestoreTestingSelectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRestoreTestingSelectionRequest::GetRestoreTestingSelectionRequest() : 
    m_restoreTestingPlanNameHasBeenSet(false),
    m_restoreTestingSelectionNameHasBeenSet(false)
{
}

Aws::String GetRestoreTestingSelectionRequest::SerializePayload() const
{
  return {};
}




