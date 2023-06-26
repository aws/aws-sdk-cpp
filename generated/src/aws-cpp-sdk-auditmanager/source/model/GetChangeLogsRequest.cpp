/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/GetChangeLogsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetChangeLogsRequest::GetChangeLogsRequest() : 
    m_assessmentIdHasBeenSet(false),
    m_controlSetIdHasBeenSet(false),
    m_controlIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String GetChangeLogsRequest::SerializePayload() const
{
  return {};
}

void GetChangeLogsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_controlSetIdHasBeenSet)
    {
      ss << m_controlSetId;
      uri.AddQueryStringParameter("controlSetId", ss.str());
      ss.str("");
    }

    if(m_controlIdHasBeenSet)
    {
      ss << m_controlId;
      uri.AddQueryStringParameter("controlId", ss.str());
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



