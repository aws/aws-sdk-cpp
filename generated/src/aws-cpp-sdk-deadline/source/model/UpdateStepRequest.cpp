/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UpdateStepRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateStepRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetTaskRunStatusHasBeenSet)
  {
   payload.WithString("targetTaskRunStatus", StepTargetTaskRunStatusMapper::GetNameForStepTargetTaskRunStatus(m_targetTaskRunStatus));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateStepRequest::GetRequestSpecificHeaders() const
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




