/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListAuditMitigationActionsTasksRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListAuditMitigationActionsTasksRequest::ListAuditMitigationActionsTasksRequest() : 
    m_auditTaskIdHasBeenSet(false),
    m_findingIdHasBeenSet(false),
    m_taskStatus(AuditMitigationActionsTaskStatus::NOT_SET),
    m_taskStatusHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

Aws::String ListAuditMitigationActionsTasksRequest::SerializePayload() const
{
  return {};
}

void ListAuditMitigationActionsTasksRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_auditTaskIdHasBeenSet)
    {
      ss << m_auditTaskId;
      uri.AddQueryStringParameter("auditTaskId", ss.str());
      ss.str("");
    }

    if(m_findingIdHasBeenSet)
    {
      ss << m_findingId;
      uri.AddQueryStringParameter("findingId", ss.str());
      ss.str("");
    }

    if(m_taskStatusHasBeenSet)
    {
      ss << AuditMitigationActionsTaskStatusMapper::GetNameForAuditMitigationActionsTaskStatus(m_taskStatus);
      uri.AddQueryStringParameter("taskStatus", ss.str());
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

}



