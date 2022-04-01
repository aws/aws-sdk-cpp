/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/IntentConfirmationSetting.h>
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

IntentConfirmationSetting::IntentConfirmationSetting() : 
    m_promptSpecificationHasBeenSet(false),
    m_declinationResponseHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_confirmationResponseHasBeenSet(false),
    m_confirmationNextStepHasBeenSet(false),
    m_confirmationConditionalHasBeenSet(false),
    m_declinationNextStepHasBeenSet(false),
    m_declinationConditionalHasBeenSet(false),
    m_failureResponseHasBeenSet(false),
    m_failureNextStepHasBeenSet(false),
    m_failureConditionalHasBeenSet(false),
    m_codeHookHasBeenSet(false),
    m_elicitationCodeHookHasBeenSet(false)
{
}

IntentConfirmationSetting::IntentConfirmationSetting(JsonView jsonValue) : 
    m_promptSpecificationHasBeenSet(false),
    m_declinationResponseHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_confirmationResponseHasBeenSet(false),
    m_confirmationNextStepHasBeenSet(false),
    m_confirmationConditionalHasBeenSet(false),
    m_declinationNextStepHasBeenSet(false),
    m_declinationConditionalHasBeenSet(false),
    m_failureResponseHasBeenSet(false),
    m_failureNextStepHasBeenSet(false),
    m_failureConditionalHasBeenSet(false),
    m_codeHookHasBeenSet(false),
    m_elicitationCodeHookHasBeenSet(false)
{
  *this = jsonValue;
}

IntentConfirmationSetting& IntentConfirmationSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("promptSpecification"))
  {
    m_promptSpecification = jsonValue.GetObject("promptSpecification");

    m_promptSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("declinationResponse"))
  {
    m_declinationResponse = jsonValue.GetObject("declinationResponse");

    m_declinationResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("active"))
  {
    m_active = jsonValue.GetBool("active");

    m_activeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("confirmationResponse"))
  {
    m_confirmationResponse = jsonValue.GetObject("confirmationResponse");

    m_confirmationResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("confirmationNextStep"))
  {
    m_confirmationNextStep = jsonValue.GetObject("confirmationNextStep");

    m_confirmationNextStepHasBeenSet = true;
  }

  if(jsonValue.ValueExists("confirmationConditional"))
  {
    m_confirmationConditional = jsonValue.GetObject("confirmationConditional");

    m_confirmationConditionalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("declinationNextStep"))
  {
    m_declinationNextStep = jsonValue.GetObject("declinationNextStep");

    m_declinationNextStepHasBeenSet = true;
  }

  if(jsonValue.ValueExists("declinationConditional"))
  {
    m_declinationConditional = jsonValue.GetObject("declinationConditional");

    m_declinationConditionalHasBeenSet = true;
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

JsonValue IntentConfirmationSetting::Jsonize() const
{
  JsonValue payload;

  if(m_promptSpecificationHasBeenSet)
  {
   payload.WithObject("promptSpecification", m_promptSpecification.Jsonize());

  }

  if(m_declinationResponseHasBeenSet)
  {
   payload.WithObject("declinationResponse", m_declinationResponse.Jsonize());

  }

  if(m_activeHasBeenSet)
  {
   payload.WithBool("active", m_active);

  }

  if(m_confirmationResponseHasBeenSet)
  {
   payload.WithObject("confirmationResponse", m_confirmationResponse.Jsonize());

  }

  if(m_confirmationNextStepHasBeenSet)
  {
   payload.WithObject("confirmationNextStep", m_confirmationNextStep.Jsonize());

  }

  if(m_confirmationConditionalHasBeenSet)
  {
   payload.WithObject("confirmationConditional", m_confirmationConditional.Jsonize());

  }

  if(m_declinationNextStepHasBeenSet)
  {
   payload.WithObject("declinationNextStep", m_declinationNextStep.Jsonize());

  }

  if(m_declinationConditionalHasBeenSet)
  {
   payload.WithObject("declinationConditional", m_declinationConditional.Jsonize());

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
