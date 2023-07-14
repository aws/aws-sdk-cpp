/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/FailWorkflowExecutionDecisionAttributes.h>
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

FailWorkflowExecutionDecisionAttributes::FailWorkflowExecutionDecisionAttributes() : 
    m_reasonHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

FailWorkflowExecutionDecisionAttributes::FailWorkflowExecutionDecisionAttributes(JsonView jsonValue) : 
    m_reasonHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
  *this = jsonValue;
}

FailWorkflowExecutionDecisionAttributes& FailWorkflowExecutionDecisionAttributes::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue FailWorkflowExecutionDecisionAttributes::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
