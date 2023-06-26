/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListRestoreJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListRestoreJobsRequest::ListRestoreJobsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_byAccountIdHasBeenSet(false),
    m_byCreatedBeforeHasBeenSet(false),
    m_byCreatedAfterHasBeenSet(false),
    m_byStatus(RestoreJobStatus::NOT_SET),
    m_byStatusHasBeenSet(false),
    m_byCompleteBeforeHasBeenSet(false),
    m_byCompleteAfterHasBeenSet(false)
{
}

Aws::String ListRestoreJobsRequest::SerializePayload() const
{
  return {};
}

void ListRestoreJobsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_byAccountIdHasBeenSet)
    {
      ss << m_byAccountId;
      uri.AddQueryStringParameter("accountId", ss.str());
      ss.str("");
    }

    if(m_byCreatedBeforeHasBeenSet)
    {
      ss << m_byCreatedBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("createdBefore", ss.str());
      ss.str("");
    }

    if(m_byCreatedAfterHasBeenSet)
    {
      ss << m_byCreatedAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("createdAfter", ss.str());
      ss.str("");
    }

    if(m_byStatusHasBeenSet)
    {
      ss << RestoreJobStatusMapper::GetNameForRestoreJobStatus(m_byStatus);
      uri.AddQueryStringParameter("status", ss.str());
      ss.str("");
    }

    if(m_byCompleteBeforeHasBeenSet)
    {
      ss << m_byCompleteBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("completeBefore", ss.str());
      ss.str("");
    }

    if(m_byCompleteAfterHasBeenSet)
    {
      ss << m_byCompleteAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("completeAfter", ss.str());
      ss.str("");
    }

}



