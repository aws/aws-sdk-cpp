/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/UpdatePullRequestStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePullRequestStatusRequest::UpdatePullRequestStatusRequest() : 
    m_pullRequestIdHasBeenSet(false),
    m_pullRequestStatus(PullRequestStatusEnum::NOT_SET),
    m_pullRequestStatusHasBeenSet(false)
{
}

Aws::String UpdatePullRequestStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pullRequestIdHasBeenSet)
  {
   payload.WithString("pullRequestId", m_pullRequestId);

  }

  if(m_pullRequestStatusHasBeenSet)
  {
   payload.WithString("pullRequestStatus", PullRequestStatusEnumMapper::GetNameForPullRequestStatusEnum(m_pullRequestStatus));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePullRequestStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.UpdatePullRequestStatus"));
  return headers;

}




