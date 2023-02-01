/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/UpdateAssessmentFrameworkShareRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAssessmentFrameworkShareRequest::UpdateAssessmentFrameworkShareRequest() : 
    m_requestIdHasBeenSet(false),
    m_requestType(ShareRequestType::NOT_SET),
    m_requestTypeHasBeenSet(false),
    m_action(ShareRequestAction::NOT_SET),
    m_actionHasBeenSet(false)
{
}

Aws::String UpdateAssessmentFrameworkShareRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_requestTypeHasBeenSet)
  {
   payload.WithString("requestType", ShareRequestTypeMapper::GetNameForShareRequestType(m_requestType));
  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", ShareRequestActionMapper::GetNameForShareRequestAction(m_action));
  }

  return payload.View().WriteReadable();
}




