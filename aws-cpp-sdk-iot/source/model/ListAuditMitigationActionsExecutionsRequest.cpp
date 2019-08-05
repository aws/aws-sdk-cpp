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

#include <aws/iot/model/ListAuditMitigationActionsExecutionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListAuditMitigationActionsExecutionsRequest::ListAuditMitigationActionsExecutionsRequest() : 
    m_taskIdHasBeenSet(false),
    m_actionStatus(AuditMitigationActionsExecutionStatus::NOT_SET),
    m_actionStatusHasBeenSet(false),
    m_findingIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListAuditMitigationActionsExecutionsRequest::SerializePayload() const
{
  return {};
}

void ListAuditMitigationActionsExecutionsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_taskIdHasBeenSet)
    {
      ss << m_taskId;
      uri.AddQueryStringParameter("taskId", ss.str());
      ss.str("");
    }

    if(m_actionStatusHasBeenSet)
    {
      ss << AuditMitigationActionsExecutionStatusMapper::GetNameForAuditMitigationActionsExecutionStatus(m_actionStatus);
      uri.AddQueryStringParameter("actionStatus", ss.str());
      ss.str("");
    }

    if(m_findingIdHasBeenSet)
    {
      ss << m_findingId;
      uri.AddQueryStringParameter("findingId", ss.str());
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



