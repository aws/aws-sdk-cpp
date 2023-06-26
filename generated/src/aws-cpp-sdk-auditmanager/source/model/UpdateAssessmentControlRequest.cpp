/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/UpdateAssessmentControlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAssessmentControlRequest::UpdateAssessmentControlRequest() : 
    m_assessmentIdHasBeenSet(false),
    m_controlSetIdHasBeenSet(false),
    m_controlIdHasBeenSet(false),
    m_controlStatus(ControlStatus::NOT_SET),
    m_controlStatusHasBeenSet(false),
    m_commentBodyHasBeenSet(false)
{
}

Aws::String UpdateAssessmentControlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_controlStatusHasBeenSet)
  {
   payload.WithString("controlStatus", ControlStatusMapper::GetNameForControlStatus(m_controlStatus));
  }

  if(m_commentBodyHasBeenSet)
  {
   payload.WithString("commentBody", m_commentBody);

  }

  return payload.View().WriteReadable();
}




