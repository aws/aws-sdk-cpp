/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/swf/model/WorkflowExecutionTerminatedEventAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

WorkflowExecutionTerminatedEventAttributes::WorkflowExecutionTerminatedEventAttributes() : 
    m_reasonHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_childPolicyHasBeenSet(false),
    m_causeHasBeenSet(false)
{
}

WorkflowExecutionTerminatedEventAttributes::WorkflowExecutionTerminatedEventAttributes(const JsonValue& jsonValue) : 
    m_reasonHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_childPolicyHasBeenSet(false),
    m_causeHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowExecutionTerminatedEventAttributes& WorkflowExecutionTerminatedEventAttributes::operator =(const JsonValue& jsonValue)
{
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

  if(jsonValue.ValueExists("childPolicy"))
  {
    m_childPolicy = ChildPolicyMapper::GetChildPolicyForName(jsonValue.GetString("childPolicy"));

    m_childPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cause"))
  {
    m_cause = WorkflowExecutionTerminatedCauseMapper::GetWorkflowExecutionTerminatedCauseForName(jsonValue.GetString("cause"));

    m_causeHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowExecutionTerminatedEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_detailsHasBeenSet)
  {
   payload.WithString("details", m_details);

  }

  if(m_childPolicyHasBeenSet)
  {
   payload.WithString("childPolicy", ChildPolicyMapper::GetNameForChildPolicy(m_childPolicy));
  }

  if(m_causeHasBeenSet)
  {
   payload.WithString("cause", WorkflowExecutionTerminatedCauseMapper::GetNameForWorkflowExecutionTerminatedCause(m_cause));
  }

  return std::move(payload);
}