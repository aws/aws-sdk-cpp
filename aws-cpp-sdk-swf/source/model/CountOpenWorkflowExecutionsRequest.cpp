/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/CountOpenWorkflowExecutionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CountOpenWorkflowExecutionsRequest::CountOpenWorkflowExecutionsRequest() : 
    m_domainHasBeenSet(false),
    m_startTimeFilterHasBeenSet(false),
    m_typeFilterHasBeenSet(false),
    m_tagFilterHasBeenSet(false),
    m_executionFilterHasBeenSet(false)
{
}

Aws::String CountOpenWorkflowExecutionsRequest::SerializePayload() const
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

  if(m_typeFilterHasBeenSet)
  {
   payload.WithObject("typeFilter", m_typeFilter.Jsonize());

  }

  if(m_tagFilterHasBeenSet)
  {
   payload.WithObject("tagFilter", m_tagFilter.Jsonize());

  }

  if(m_executionFilterHasBeenSet)
  {
   payload.WithObject("executionFilter", m_executionFilter.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CountOpenWorkflowExecutionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SimpleWorkflowService.CountOpenWorkflowExecutions"));
  return headers;

}




