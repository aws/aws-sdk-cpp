/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/UpdateAssessmentControlSetStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAssessmentControlSetStatusRequest::UpdateAssessmentControlSetStatusRequest() : 
    m_assessmentIdHasBeenSet(false),
    m_controlSetIdHasBeenSet(false),
    m_status(ControlSetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

Aws::String UpdateAssessmentControlSetStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ControlSetStatusMapper::GetNameForControlSetStatus(m_status));
  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("comment", m_comment);

  }

  return payload.View().WriteReadable();
}




