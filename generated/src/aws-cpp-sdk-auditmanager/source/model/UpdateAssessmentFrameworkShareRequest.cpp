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




