/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/DescribePullRequestEventsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribePullRequestEventsRequest::DescribePullRequestEventsRequest() : 
    m_pullRequestIdHasBeenSet(false),
    m_pullRequestEventType(PullRequestEventType::NOT_SET),
    m_pullRequestEventTypeHasBeenSet(false),
    m_actorArnHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribePullRequestEventsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pullRequestIdHasBeenSet)
  {
   payload.WithString("pullRequestId", m_pullRequestId);

  }

  if(m_pullRequestEventTypeHasBeenSet)
  {
   payload.WithString("pullRequestEventType", PullRequestEventTypeMapper::GetNameForPullRequestEventType(m_pullRequestEventType));
  }

  if(m_actorArnHasBeenSet)
  {
   payload.WithString("actorArn", m_actorArn);

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

Aws::Http::HeaderValueCollection DescribePullRequestEventsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.DescribePullRequestEvents"));
  return headers;

}




