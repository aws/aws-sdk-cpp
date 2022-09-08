/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListReportJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListReportJobsRequest::ListReportJobsRequest() : 
    m_byReportPlanNameHasBeenSet(false),
    m_byCreationBeforeHasBeenSet(false),
    m_byCreationAfterHasBeenSet(false),
    m_byStatusHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListReportJobsRequest::SerializePayload() const
{
  return {};
}

void ListReportJobsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_byReportPlanNameHasBeenSet)
    {
      ss << m_byReportPlanName;
      uri.AddQueryStringParameter("ReportPlanName", ss.str());
      ss.str("");
    }

    if(m_byCreationBeforeHasBeenSet)
    {
      ss << m_byCreationBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("CreationBefore", ss.str());
      ss.str("");
    }

    if(m_byCreationAfterHasBeenSet)
    {
      ss << m_byCreationAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("CreationAfter", ss.str());
      ss.str("");
    }

    if(m_byStatusHasBeenSet)
    {
      ss << m_byStatus;
      uri.AddQueryStringParameter("Status", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("MaxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

}



