/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/ListOpenWorkflowExecutionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListOpenWorkflowExecutionsRequest::ListOpenWorkflowExecutionsRequest() : 
    m_domainHasBeenSet(false),
    m_startTimeFilterHasBeenSet(false),
    m_typeFilterHasBeenSet(false),
    m_tagFilterHasBeenSet(false),
    m_nextPageTokenHasBeenSet(false),
    m_maximumPageSize(0),
    m_maximumPageSizeHasBeenSet(false),
    m_reverseOrder(false),
    m_reverseOrderHasBeenSet(false),
    m_executionFilterHasBeenSet(false)
{
}

Aws::String ListOpenWorkflowExecutionsRequest::SerializePayload() const
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

  if(m_nextPageTokenHasBeenSet)
  {
   payload.WithString("nextPageToken", m_nextPageToken);

  }

  if(m_maximumPageSizeHasBeenSet)
  {
   payload.WithInteger("maximumPageSize", m_maximumPageSize);

  }

  if(m_reverseOrderHasBeenSet)
  {
   payload.WithBool("reverseOrder", m_reverseOrder);

  }

  if(m_executionFilterHasBeenSet)
  {
   payload.WithObject("executionFilter", m_executionFilter.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListOpenWorkflowExecutionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SimpleWorkflowService.ListOpenWorkflowExecutions"));
  return headers;

}




