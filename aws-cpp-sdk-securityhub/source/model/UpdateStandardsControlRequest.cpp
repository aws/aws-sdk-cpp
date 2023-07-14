/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/UpdateStandardsControlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateStandardsControlRequest::UpdateStandardsControlRequest() : 
    m_standardsControlArnHasBeenSet(false),
    m_controlStatus(ControlStatus::NOT_SET),
    m_controlStatusHasBeenSet(false),
    m_disabledReasonHasBeenSet(false)
{
}

Aws::String UpdateStandardsControlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_controlStatusHasBeenSet)
  {
   payload.WithString("ControlStatus", ControlStatusMapper::GetNameForControlStatus(m_controlStatus));
  }

  if(m_disabledReasonHasBeenSet)
  {
   payload.WithString("DisabledReason", m_disabledReason);

  }

  return payload.View().WriteReadable();
}




