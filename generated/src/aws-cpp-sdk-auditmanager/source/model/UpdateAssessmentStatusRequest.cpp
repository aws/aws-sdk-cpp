/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/UpdateAssessmentStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAssessmentStatusRequest::UpdateAssessmentStatusRequest() : 
    m_assessmentIdHasBeenSet(false),
    m_status(AssessmentStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String UpdateAssessmentStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AssessmentStatusMapper::GetNameForAssessmentStatus(m_status));
  }

  return payload.View().WriteReadable();
}




