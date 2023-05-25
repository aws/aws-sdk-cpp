/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/GetCommentsForPullRequestRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCommentsForPullRequestRequest::GetCommentsForPullRequestRequest() : 
    m_pullRequestIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_beforeCommitIdHasBeenSet(false),
    m_afterCommitIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String GetCommentsForPullRequestRequest::SerializePayload() const
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

  if(m_beforeCommitIdHasBeenSet)
  {
   payload.WithString("beforeCommitId", m_beforeCommitId);

  }

  if(m_afterCommitIdHasBeenSet)
  {
   payload.WithString("afterCommitId", m_afterCommitId);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetCommentsForPullRequestRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.GetCommentsForPullRequest"));
  return headers;

}




