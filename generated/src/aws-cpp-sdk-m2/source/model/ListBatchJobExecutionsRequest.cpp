/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/ListBatchJobExecutionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListBatchJobExecutionsRequest::ListBatchJobExecutionsRequest() : 
    m_applicationIdHasBeenSet(false),
    m_executionIdsHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_startedAfterHasBeenSet(false),
    m_startedBeforeHasBeenSet(false),
    m_status(BatchJobExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String ListBatchJobExecutionsRequest::SerializePayload() const
{
  return {};
}

void ListBatchJobExecutionsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_executionIdsHasBeenSet)
    {
      for(const auto& item : m_executionIds)
      {
        ss << item;
        uri.AddQueryStringParameter("executionIds", ss.str());
        ss.str("");
      }
    }

    if(m_jobNameHasBeenSet)
    {
      ss << m_jobName;
      uri.AddQueryStringParameter("jobName", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_startedAfterHasBeenSet)
    {
      ss << m_startedAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("startedAfter", ss.str());
      ss.str("");
    }

    if(m_startedBeforeHasBeenSet)
    {
      ss << m_startedBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("startedBefore", ss.str());
      ss.str("");
    }

    if(m_statusHasBeenSet)
    {
      ss << BatchJobExecutionStatusMapper::GetNameForBatchJobExecutionStatus(m_status);
      uri.AddQueryStringParameter("status", ss.str());
      ss.str("");
    }

}



