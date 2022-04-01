/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ListWorkflowsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListWorkflowsRequest::ListWorkflowsRequest() : 
    m_domainNameHasBeenSet(false),
    m_workflowType(WorkflowType::NOT_SET),
    m_workflowTypeHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_queryStartDateHasBeenSet(false),
    m_queryEndDateHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListWorkflowsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workflowTypeHasBeenSet)
  {
   payload.WithString("WorkflowType", WorkflowTypeMapper::GetNameForWorkflowType(m_workflowType));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatusMapper::GetNameForStatus(m_status));
  }

  if(m_queryStartDateHasBeenSet)
  {
   payload.WithDouble("QueryStartDate", m_queryStartDate.SecondsWithMSPrecision());
  }

  if(m_queryEndDateHasBeenSet)
  {
   payload.WithDouble("QueryEndDate", m_queryEndDate.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}

void ListWorkflowsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("next-token", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("max-results", ss.str());
      ss.str("");
    }

}



