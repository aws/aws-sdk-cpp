/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotCaptureSetting.h>
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

SlotCaptureSetting::SlotCaptureSetting() : 
    m_captureResponseHasBeenSet(false),
    m_captureNextStepHasBeenSet(false),
    m_captureConditionalHasBeenSet(false),
    m_failureResponseHasBeenSet(false),
    m_failureNextStepHasBeenSet(false),
    m_failureConditionalHasBeenSet(false),
    m_codeHookHasBeenSet(false),
    m_elicitationCodeHookHasBeenSet(false)
{
}

SlotCaptureSetting::SlotCaptureSetting(JsonView jsonValue) : 
    m_captureResponseHasBeenSet(false),
    m_captureNextStepHasBeenSet(false),
    m_captureConditionalHasBeenSet(false),
    m_failureResponseHasBeenSet(false),
    m_failureNextStepHasBeenSet(false),
    m_failureConditionalHasBeenSet(false),
    m_codeHookHasBeenSet(false),
    m_elicitationCodeHookHasBeenSet(false)
{
  *this = jsonValue;
}

SlotCaptureSetting& SlotCaptureSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("captureResponse"))
  {
    m_captureResponse = jsonValue.GetObject("captureResponse");

    m_captureResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("captureNextStep"))
  {
    m_captureNextStep = jsonValue.GetObject("captureNextStep");

    m_captureNextStepHasBeenSet = true;
  }

  if(jsonValue.ValueExists("captureConditional"))
  {
    m_captureConditional = jsonValue.GetObject("captureConditional");

    m_captureConditionalHasBeenSet = true;
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

  if(jsonValue.ValueExists("codeHook"))
  {
    m_codeHook = jsonValue.GetObject("codeHook");

    m_codeHookHasBeenSet = true;
  }

  if(jsonValue.ValueExists("elicitationCodeHook"))
  {
    m_elicitationCodeHook = jsonValue.GetObject("elicitationCodeHook");

    m_elicitationCodeHookHasBeenSet = true;
  }

  return *this;
}

JsonValue SlotCaptureSetting::Jsonize() const
{
  JsonValue payload;

  if(m_captureResponseHasBeenSet)
  {
   payload.WithObject("captureResponse", m_captureResponse.Jsonize());

  }

  if(m_captureNextStepHasBeenSet)
  {
   payload.WithObject("captureNextStep", m_captureNextStep.Jsonize());

  }

  if(m_captureConditionalHasBeenSet)
  {
   payload.WithObject("captureConditional", m_captureConditional.Jsonize());

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

  if(m_codeHookHasBeenSet)
  {
   payload.WithObject("codeHook", m_codeHook.Jsonize());

  }

  if(m_elicitationCodeHookHasBeenSet)
  {
   payload.WithObject("elicitationCodeHook", m_elicitationCodeHook.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
