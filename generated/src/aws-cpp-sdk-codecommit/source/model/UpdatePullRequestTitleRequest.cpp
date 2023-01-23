/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/UpdatePullRequestTitleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePullRequestTitleRequest::UpdatePullRequestTitleRequest() : 
    m_pullRequestIdHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

Aws::String UpdatePullRequestTitleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pullRequestIdHasBeenSet)
  {
   payload.WithString("pullRequestId", m_pullRequestId);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePullRequestTitleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.UpdatePullRequestTitle"));
  return headers;

}




