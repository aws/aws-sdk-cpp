/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListCopyJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListCopyJobsRequest::ListCopyJobsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_byResourceArnHasBeenSet(false),
    m_byState(CopyJobState::NOT_SET),
    m_byStateHasBeenSet(false),
    m_byCreatedBeforeHasBeenSet(false),
    m_byCreatedAfterHasBeenSet(false),
    m_byResourceTypeHasBeenSet(false),
    m_byDestinationVaultArnHasBeenSet(false),
    m_byAccountIdHasBeenSet(false),
    m_byCompleteBeforeHasBeenSet(false),
    m_byCompleteAfterHasBeenSet(false),
    m_byParentJobIdHasBeenSet(false)
{
}

Aws::String ListCopyJobsRequest::SerializePayload() const
{
  return {};
}

void ListCopyJobsRequest::AddQueryStringParameters(URI& uri) const
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

    if(m_byResourceArnHasBeenSet)
    {
      ss << m_byResourceArn;
      uri.AddQueryStringParameter("resourceArn", ss.str());
      ss.str("");
    }

    if(m_byStateHasBeenSet)
    {
      ss << CopyJobStateMapper::GetNameForCopyJobState(m_byState);
      uri.AddQueryStringParameter("state", ss.str());
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

    if(m_byResourceTypeHasBeenSet)
    {
      ss << m_byResourceType;
      uri.AddQueryStringParameter("resourceType", ss.str());
      ss.str("");
    }

    if(m_byDestinationVaultArnHasBeenSet)
    {
      ss << m_byDestinationVaultArn;
      uri.AddQueryStringParameter("destinationVaultArn", ss.str());
      ss.str("");
    }

    if(m_byAccountIdHasBeenSet)
    {
      ss << m_byAccountId;
      uri.AddQueryStringParameter("accountId", ss.str());
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

    if(m_byParentJobIdHasBeenSet)
    {
      ss << m_byParentJobId;
      uri.AddQueryStringParameter("parentJobId", ss.str());
      ss.str("");
    }

}



