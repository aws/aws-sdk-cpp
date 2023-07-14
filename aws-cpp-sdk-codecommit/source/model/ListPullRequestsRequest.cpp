/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/ListPullRequestsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListPullRequestsRequest::ListPullRequestsRequest() : 
    m_repositoryNameHasBeenSet(false),
    m_authorArnHasBeenSet(false),
    m_pullRequestStatus(PullRequestStatusEnum::NOT_SET),
    m_pullRequestStatusHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListPullRequestsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_authorArnHasBeenSet)
  {
   payload.WithString("authorArn", m_authorArn);

  }

  if(m_pullRequestStatusHasBeenSet)
  {
   payload.WithString("pullRequestStatus", PullRequestStatusEnumMapper::GetNameForPullRequestStatusEnum(m_pullRequestStatus));
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

Aws::Http::HeaderValueCollection ListPullRequestsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.ListPullRequests"));
  return headers;

}




