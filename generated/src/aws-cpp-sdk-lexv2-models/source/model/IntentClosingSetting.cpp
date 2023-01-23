/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/IntentClosingSetting.h>
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

IntentClosingSetting::IntentClosingSetting() : 
    m_closingResponseHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_nextStepHasBeenSet(false),
    m_conditionalHasBeenSet(false)
{
}

IntentClosingSetting::IntentClosingSetting(JsonView jsonValue) : 
    m_closingResponseHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_nextStepHasBeenSet(false),
    m_conditionalHasBeenSet(false)
{
  *this = jsonValue;
}

IntentClosingSetting& IntentClosingSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("closingResponse"))
  {
    m_closingResponse = jsonValue.GetObject("closingResponse");

    m_closingResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("active"))
  {
    m_active = jsonValue.GetBool("active");

    m_activeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nextStep"))
  {
    m_nextStep = jsonValue.GetObject("nextStep");

    m_nextStepHasBeenSet = true;
  }

  if(jsonValue.ValueExists("conditional"))
  {
    m_conditional = jsonValue.GetObject("conditional");

    m_conditionalHasBeenSet = true;
  }

  return *this;
}

JsonValue IntentClosingSetting::Jsonize() const
{
  JsonValue payload;

  if(m_closingResponseHasBeenSet)
  {
   payload.WithObject("closingResponse", m_closingResponse.Jsonize());

  }

  if(m_activeHasBeenSet)
  {
   payload.WithBool("active", m_active);

  }

  if(m_nextStepHasBeenSet)
  {
   payload.WithObject("nextStep", m_nextStep.Jsonize());

  }

  if(m_conditionalHasBeenSet)
  {
   payload.WithObject("conditional", m_conditional.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
