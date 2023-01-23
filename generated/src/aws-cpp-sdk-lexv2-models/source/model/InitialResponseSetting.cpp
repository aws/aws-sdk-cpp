/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/InitialResponseSetting.h>
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

InitialResponseSetting::InitialResponseSetting() : 
    m_initialResponseHasBeenSet(false),
    m_nextStepHasBeenSet(false),
    m_conditionalHasBeenSet(false),
    m_codeHookHasBeenSet(false)
{
}

InitialResponseSetting::InitialResponseSetting(JsonView jsonValue) : 
    m_initialResponseHasBeenSet(false),
    m_nextStepHasBeenSet(false),
    m_conditionalHasBeenSet(false),
    m_codeHookHasBeenSet(false)
{
  *this = jsonValue;
}

InitialResponseSetting& InitialResponseSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("initialResponse"))
  {
    m_initialResponse = jsonValue.GetObject("initialResponse");

    m_initialResponseHasBeenSet = true;
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

  if(jsonValue.ValueExists("codeHook"))
  {
    m_codeHook = jsonValue.GetObject("codeHook");

    m_codeHookHasBeenSet = true;
  }

  return *this;
}

JsonValue InitialResponseSetting::Jsonize() const
{
  JsonValue payload;

  if(m_initialResponseHasBeenSet)
  {
   payload.WithObject("initialResponse", m_initialResponse.Jsonize());

  }

  if(m_nextStepHasBeenSet)
  {
   payload.WithObject("nextStep", m_nextStep.Jsonize());

  }

  if(m_conditionalHasBeenSet)
  {
   payload.WithObject("conditional", m_conditional.Jsonize());

  }

  if(m_codeHookHasBeenSet)
  {
   payload.WithObject("codeHook", m_codeHook.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
