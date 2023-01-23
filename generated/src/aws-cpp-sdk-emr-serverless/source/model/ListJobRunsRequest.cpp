/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/ListJobRunsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EMRServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListJobRunsRequest::ListJobRunsRequest() : 
    m_applicationIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_createdAtAfterHasBeenSet(false),
    m_createdAtBeforeHasBeenSet(false),
    m_statesHasBeenSet(false)
{
}

Aws::String ListJobRunsRequest::SerializePayload() const
{
  return {};
}

void ListJobRunsRequest::AddQueryStringParameters(URI& uri) const
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

    if(m_createdAtAfterHasBeenSet)
    {
      ss << m_createdAtAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("createdAtAfter", ss.str());
      ss.str("");
    }

    if(m_createdAtBeforeHasBeenSet)
    {
      ss << m_createdAtBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("createdAtBefore", ss.str());
      ss.str("");
    }

    if(m_statesHasBeenSet)
    {
      for(const auto& item : m_states)
      {
        ss << JobRunStateMapper::GetNameForJobRunState(item);
        uri.AddQueryStringParameter("states", ss.str());
        ss.str("");
      }
    }

}



