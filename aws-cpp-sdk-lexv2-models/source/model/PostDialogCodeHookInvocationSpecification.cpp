/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/PostDialogCodeHookInvocationSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

PostDialogCodeHookInvocationSpecification::PostDialogCodeHookInvocationSpecification() : 
    m_successResponseHasBeenSet(false),
    m_successNextStepHasBeenSet(false),
    m_successConditionalHasBeenSet(false),
    m_failureResponseHasBeenSet(false),
    m_failureNextStepHasBeenSet(false),
    m_failureConditionalHasBeenSet(false),
    m_timeoutResponseHasBeenSet(false),
    m_timeoutNextStepHasBeenSet(false),
    m_timeoutConditionalHasBeenSet(false)
{
}

PostDialogCodeHookInvocationSpecification::PostDialogCodeHookInvocationSpecification(JsonView jsonValue) : 
    m_successResponseHasBeenSet(false),
    m_successNextStepHasBeenSet(false),
    m_successConditionalHasBeenSet(false),
    m_failureResponseHasBeenSet(false),
    m_failureNextStepHasBeenSet(false),
    m_failureConditionalHasBeenSet(false),
    m_timeoutResponseHasBeenSet(false),
    m_timeoutNextStepHasBeenSet(false),
    m_timeoutConditionalHasBeenSet(false)
{
  *this = jsonValue;
}

PostDialogCodeHookInvocationSpecification& PostDialogCodeHookInvocationSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("successResponse"))
  {
    m_successResponse = jsonValue.GetObject("successResponse");

    m_successResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("successNextStep"))
  {
    m_successNextStep = jsonValue.GetObject("successNextStep");

    m_successNextStepHasBeenSet = true;
  }

  if(jsonValue.ValueExists("successConditional"))
  {
    m_successConditional = jsonValue.GetObject("successConditional");

    m_successConditionalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureResponse"))
  {
    m_failureResponse = jsonValue.GetObject("failureResponse");

    m_failureResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureNextStep"))
  {
    m_failureNextStep = jsonValue.GetObject("failureNextStep");

    m_failureNextStepHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureConditional"))
  {
    m_failureConditional = jsonValue.GetObject("failureConditional");

    m_failureConditionalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeoutResponse"))
  {
    m_timeoutResponse = jsonValue.GetObject("timeoutResponse");

    m_timeoutResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeoutNextStep"))
  {
    m_timeoutNextStep = jsonValue.GetObject("timeoutNextStep");

    m_timeoutNextStepHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeoutConditional"))
  {
    m_timeoutConditional = jsonValue.GetObject("timeoutConditional");

    m_timeoutConditionalHasBeenSet = true;
  }

  return *this;
}

JsonValue PostDialogCodeHookInvocationSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_successResponseHasBeenSet)
  {
   payload.WithObject("successResponse", m_successResponse.Jsonize());

  }

  if(m_successNextStepHasBeenSet)
  {
   payload.WithObject("successNextStep", m_successNextStep.Jsonize());

  }

  if(m_successConditionalHasBeenSet)
  {
   payload.WithObject("successConditional", m_successConditional.Jsonize());

  }

  if(m_failureResponseHasBeenSet)
  {
   payload.WithObject("failureResponse", m_failureResponse.Jsonize());

  }

  if(m_failureNextStepHasBeenSet)
  {
   payload.WithObject("failureNextStep", m_failureNextStep.Jsonize());

  }

  if(m_failureConditionalHasBeenSet)
  {
   payload.WithObject("failureConditional", m_failureConditional.Jsonize());

  }

  if(m_timeoutResponseHasBeenSet)
  {
   payload.WithObject("timeoutResponse", m_timeoutResponse.Jsonize());

  }

  if(m_timeoutNextStepHasBeenSet)
  {
   payload.WithObject("timeoutNextStep", m_timeoutNextStep.Jsonize());

  }

  if(m_timeoutConditionalHasBeenSet)
  {
   payload.WithObject("timeoutConditional", m_timeoutConditional.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
