﻿/*
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

#include <aws/swf/model/ChildWorkflowExecutionFailedEventAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

ChildWorkflowExecutionFailedEventAttributes::ChildWorkflowExecutionFailedEventAttributes() : 
    m_workflowExecutionHasBeenSet(false),
    m_workflowTypeHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_initiatedEventId(0),
    m_initiatedEventIdHasBeenSet(false),
    m_startedEventId(0),
    m_startedEventIdHasBeenSet(false)
{
}

ChildWorkflowExecutionFailedEventAttributes::ChildWorkflowExecutionFailedEventAttributes(JsonView jsonValue) : 
    m_workflowExecutionHasBeenSet(false),
    m_workflowTypeHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_initiatedEventId(0),
    m_initiatedEventIdHasBeenSet(false),
    m_startedEventId(0),
    m_startedEventIdHasBeenSet(false)
{
  *this = jsonValue;
}

ChildWorkflowExecutionFailedEventAttributes& ChildWorkflowExecutionFailedEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("workflowExecution"))
  {
    m_workflowExecution = jsonValue.GetObject("workflowExecution");

    m_workflowExecutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workflowType"))
  {
    m_workflowType = jsonValue.GetObject("workflowType");

    m_workflowTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("details"))
  {
    m_details = jsonValue.GetString("details");

    m_detailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("initiatedEventId"))
  {
    m_initiatedEventId = jsonValue.GetInt64("initiatedEventId");

    m_initiatedEventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedEventId"))
  {
    m_startedEventId = jsonValue.GetInt64("startedEventId");

    m_startedEventIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ChildWorkflowExecutionFailedEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_workflowExecutionHasBeenSet)
  {
   payload.WithObject("workflowExecution", m_workflowExecution.Jsonize());

  }

  if(m_workflowTypeHasBeenSet)
  {
   payload.WithObject("workflowType", m_workflowType.Jsonize());

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_detailsHasBeenSet)
  {
   payload.WithString("details", m_details);

  }

  if(m_initiatedEventIdHasBeenSet)
  {
   payload.WithInt64("initiatedEventId", m_initiatedEventId);

  }

  if(m_startedEventIdHasBeenSet)
  {
   payload.WithInt64("startedEventId", m_startedEventId);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
