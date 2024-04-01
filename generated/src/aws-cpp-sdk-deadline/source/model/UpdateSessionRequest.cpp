/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UpdateSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSessionRequest::UpdateSessionRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_farmIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_targetLifecycleStatus(SessionLifecycleTargetStatus::NOT_SET),
    m_targetLifecycleStatusHasBeenSet(false)
{
}

Aws::String UpdateSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetLifecycleStatusHasBeenSet)
  {
   payload.WithString("targetLifecycleStatus", SessionLifecycleTargetStatusMapper::GetNameForSessionLifecycleTargetStatus(m_targetLifecycleStatus));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSessionRequest::GetRequestSpecificHeaders() const
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




