/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/CountClosedWorkflowExecutionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CountClosedWorkflowExecutionsRequest::CountClosedWorkflowExecutionsRequest() : 
    m_domainHasBeenSet(false),
    m_startTimeFilterHasBeenSet(false),
    m_closeTimeFilterHasBeenSet(false),
    m_executionFilterHasBeenSet(false),
    m_typeFilterHasBeenSet(false),
    m_tagFilterHasBeenSet(false),
    m_closeStatusFilterHasBeenSet(false)
{
}

Aws::String CountClosedWorkflowExecutionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", m_domain);

  }

  if(m_startTimeFilterHasBeenSet)
  {
   payload.WithObject("startTimeFilter", m_startTimeFilter.Jsonize());

  }

  if(m_closeTimeFilterHasBeenSet)
  {
   payload.WithObject("closeTimeFilter", m_closeTimeFilter.Jsonize());

  }

  if(m_executionFilterHasBeenSet)
  {
   payload.WithObject("executionFilter", m_executionFilter.Jsonize());

  }

  if(m_typeFilterHasBeenSet)
  {
   payload.WithObject("typeFilter", m_typeFilter.Jsonize());

  }

  if(m_tagFilterHasBeenSet)
  {
   payload.WithObject("tagFilter", m_tagFilter.Jsonize());

  }

  if(m_closeStatusFilterHasBeenSet)
  {
   payload.WithObject("closeStatusFilter", m_closeStatusFilter.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CountClosedWorkflowExecutionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SimpleWorkflowService.CountClosedWorkflowExecutions"));
  return headers;

}




