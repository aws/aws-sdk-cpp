/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/MergePullRequestByFastForwardRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

MergePullRequestByFastForwardRequest::MergePullRequestByFastForwardRequest() : 
    m_pullRequestIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_sourceCommitIdHasBeenSet(false)
{
}

Aws::String MergePullRequestByFastForwardRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pullRequestIdHasBeenSet)
  {
   payload.WithString("pullRequestId", m_pullRequestId);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_sourceCommitIdHasBeenSet)
  {
   payload.WithString("sourceCommitId", m_sourceCommitId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection MergePullRequestByFastForwardRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.MergePullRequestByFastForward"));
  return headers;

}




