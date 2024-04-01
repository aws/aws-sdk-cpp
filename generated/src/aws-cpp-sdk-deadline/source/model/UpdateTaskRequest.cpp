/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UpdateTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTaskRequest::UpdateTaskRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_farmIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_stepIdHasBeenSet(false),
    m_targetRunStatus(TaskTargetRunStatus::NOT_SET),
    m_targetRunStatusHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

Aws::String UpdateTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetRunStatusHasBeenSet)
  {
   payload.WithString("targetRunStatus", TaskTargetRunStatusMapper::GetNameForTaskTargetRunStatus(m_targetRunStatus));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_clientTokenHasBeenSet)
  {
    ss << m_clientToken;
    headers.emplace("x-amz-client-token",  ss.str());
    ss.str("");
  }

  return headers;

}




