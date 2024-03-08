/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListRestoreJobsByProtectedResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListRestoreJobsByProtectedResourceRequest::ListRestoreJobsByProtectedResourceRequest() : 
    m_resourceArnHasBeenSet(false),
    m_byStatus(RestoreJobStatus::NOT_SET),
    m_byStatusHasBeenSet(false),
    m_byRecoveryPointCreationDateAfterHasBeenSet(false),
    m_byRecoveryPointCreationDateBeforeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListRestoreJobsByProtectedResourceRequest::SerializePayload() const
{
  return {};
}

void ListRestoreJobsByProtectedResourceRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_byStatusHasBeenSet)
    {
      ss << RestoreJobStatusMapper::GetNameForRestoreJobStatus(m_byStatus);
      uri.AddQueryStringParameter("status", ss.str());
      ss.str("");
    }

    if(m_byRecoveryPointCreationDateAfterHasBeenSet)
    {
      ss << m_byRecoveryPointCreationDateAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("recoveryPointCreationDateAfter", ss.str());
      ss.str("");
    }

    if(m_byRecoveryPointCreationDateBeforeHasBeenSet)
    {
      ss << m_byRecoveryPointCreationDateBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("recoveryPointCreationDateBefore", ss.str());
      ss.str("");
    }

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

}



