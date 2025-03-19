/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ListAsyncInvokesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListAsyncInvokesRequest::SerializePayload() const
{
  return {};
}

void ListAsyncInvokesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_submitTimeAfterHasBeenSet)
    {
      ss << m_submitTimeAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("submitTimeAfter", ss.str());
      ss.str("");
    }

    if(m_submitTimeBeforeHasBeenSet)
    {
      ss << m_submitTimeBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("submitTimeBefore", ss.str());
      ss.str("");
    }

    if(m_statusEqualsHasBeenSet)
    {
      ss << AsyncInvokeStatusMapper::GetNameForAsyncInvokeStatus(m_statusEquals);
      uri.AddQueryStringParameter("statusEquals", ss.str());
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
      ss << SortAsyncInvocationByMapper::GetNameForSortAsyncInvocationBy(m_sortBy);
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



