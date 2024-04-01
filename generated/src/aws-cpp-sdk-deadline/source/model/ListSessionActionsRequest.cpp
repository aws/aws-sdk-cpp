/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/ListSessionActionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListSessionActionsRequest::ListSessionActionsRequest() : 
    m_farmIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

Aws::String ListSessionActionsRequest::SerializePayload() const
{
  return {};
}

void ListSessionActionsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
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

    if(m_sessionIdHasBeenSet)
    {
      ss << m_sessionId;
      uri.AddQueryStringParameter("sessionId", ss.str());
      ss.str("");
    }

    if(m_taskIdHasBeenSet)
    {
      ss << m_taskId;
      uri.AddQueryStringParameter("taskId", ss.str());
      ss.str("");
    }

}



