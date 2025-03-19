/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ListModelCopyJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListModelCopyJobsRequest::SerializePayload() const
{
  return {};
}

void ListModelCopyJobsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_creationTimeAfterHasBeenSet)
    {
      ss << m_creationTimeAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("creationTimeAfter", ss.str());
      ss.str("");
    }

    if(m_creationTimeBeforeHasBeenSet)
    {
      ss << m_creationTimeBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("creationTimeBefore", ss.str());
      ss.str("");
    }

    if(m_statusEqualsHasBeenSet)
    {
      ss << ModelCopyJobStatusMapper::GetNameForModelCopyJobStatus(m_statusEquals);
      uri.AddQueryStringParameter("statusEquals", ss.str());
      ss.str("");
    }

    if(m_sourceAccountEqualsHasBeenSet)
    {
      ss << m_sourceAccountEquals;
      uri.AddQueryStringParameter("sourceAccountEquals", ss.str());
      ss.str("");
    }

    if(m_sourceModelArnEqualsHasBeenSet)
    {
      ss << m_sourceModelArnEquals;
      uri.AddQueryStringParameter("sourceModelArnEquals", ss.str());
      ss.str("");
    }

    if(m_targetModelNameContainsHasBeenSet)
    {
      ss << m_targetModelNameContains;
      uri.AddQueryStringParameter("outputModelNameContains", ss.str());
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

    if(m_sortByHasBeenSet)
    {
      ss << SortJobsByMapper::GetNameForSortJobsBy(m_sortBy);
      uri.AddQueryStringParameter("sortBy", ss.str());
      ss.str("");
    }

    if(m_sortOrderHasBeenSet)
    {
      ss << SortOrderMapper::GetNameForSortOrder(m_sortOrder);
      uri.AddQueryStringParameter("sortOrder", ss.str());
      ss.str("");
    }

}



