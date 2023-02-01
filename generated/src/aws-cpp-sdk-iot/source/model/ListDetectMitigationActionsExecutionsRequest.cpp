/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListDetectMitigationActionsExecutionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListDetectMitigationActionsExecutionsRequest::ListDetectMitigationActionsExecutionsRequest() : 
    m_taskIdHasBeenSet(false),
    m_violationIdHasBeenSet(false),
    m_thingNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListDetectMitigationActionsExecutionsRequest::SerializePayload() const
{
  return {};
}

void ListDetectMitigationActionsExecutionsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_taskIdHasBeenSet)
    {
      ss << m_taskId;
      uri.AddQueryStringParameter("taskId", ss.str());
      ss.str("");
    }

    if(m_violationIdHasBeenSet)
    {
      ss << m_violationId;
      uri.AddQueryStringParameter("violationId", ss.str());
      ss.str("");
    }

    if(m_thingNameHasBeenSet)
    {
      ss << m_thingName;
      uri.AddQueryStringParameter("thingName", ss.str());
      ss.str("");
    }

    if(m_startTimeHasBeenSet)
    {
      ss << m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("startTime", ss.str());
      ss.str("");
    }

    if(m_endTimeHasBeenSet)
    {
      ss << m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("endTime", ss.str());
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

}



