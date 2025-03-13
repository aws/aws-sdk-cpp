/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/PutRestoreValidationResultRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutRestoreValidationResultRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_validationStatusHasBeenSet)
  {
   payload.WithString("ValidationStatus", RestoreValidationStatusMapper::GetNameForRestoreValidationStatus(m_validationStatus));
  }

  if(m_validationStatusMessageHasBeenSet)
  {
   payload.WithString("ValidationStatusMessage", m_validationStatusMessage);

  }

  return payload.View().WriteReadable();
}




