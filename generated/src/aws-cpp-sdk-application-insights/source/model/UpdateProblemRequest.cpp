/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/UpdateProblemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateProblemRequest::UpdateProblemRequest() : 
    m_problemIdHasBeenSet(false),
    m_updateStatus(UpdateStatus::NOT_SET),
    m_updateStatusHasBeenSet(false),
    m_visibility(Visibility::NOT_SET),
    m_visibilityHasBeenSet(false)
{
}

Aws::String UpdateProblemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_problemIdHasBeenSet)
  {
   payload.WithString("ProblemId", m_problemId);

  }

  if(m_updateStatusHasBeenSet)
  {
   payload.WithString("UpdateStatus", UpdateStatusMapper::GetNameForUpdateStatus(m_updateStatus));
  }

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", VisibilityMapper::GetNameForVisibility(m_visibility));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateProblemRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "EC2WindowsBarleyService.UpdateProblem"));
  return headers;

}




