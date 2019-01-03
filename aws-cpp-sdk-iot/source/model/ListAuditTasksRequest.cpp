/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/iot/model/ListAuditTasksRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListAuditTasksRequest::ListAuditTasksRequest() : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_taskType(AuditTaskType::NOT_SET),
    m_taskTypeHasBeenSet(false),
    m_taskStatus(AuditTaskStatus::NOT_SET),
    m_taskStatusHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListAuditTasksRequest::SerializePayload() const
{
  return {};
}

void ListAuditTasksRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_startTimeHasBeenSet)
    {
      ss << m_startTime.ToGmtString(DateFormat::RFC822);
      uri.AddQueryStringParameter("startTime", ss.str());
      ss.str("");
    }

    if(m_endTimeHasBeenSet)
    {
      ss << m_endTime.ToGmtString(DateFormat::RFC822);
      uri.AddQueryStringParameter("endTime", ss.str());
      ss.str("");
    }

    if(m_taskTypeHasBeenSet)
    {
      ss << AuditTaskTypeMapper::GetNameForAuditTaskType(m_taskType);
      uri.AddQueryStringParameter("taskType", ss.str());
      ss.str("");
    }

    if(m_taskStatusHasBeenSet)
    {
      ss << AuditTaskStatusMapper::GetNameForAuditTaskStatus(m_taskStatus);
      uri.AddQueryStringParameter("taskStatus", ss.str());
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



