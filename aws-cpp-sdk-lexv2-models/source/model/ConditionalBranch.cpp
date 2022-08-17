/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ConditionalBranch.h>
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

ConditionalBranch::ConditionalBranch() : 
    m_nameHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_nextStepHasBeenSet(false),
    m_responseHasBeenSet(false)
{
}

ConditionalBranch::ConditionalBranch(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_nextStepHasBeenSet(false),
    m_responseHasBeenSet(false)
{
  *this = jsonValue;
}

ConditionalBranch& ConditionalBranch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("condition"))
  {
    m_condition = jsonValue.GetObject("condition");

    m_conditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nextStep"))
  {
    m_nextStep = jsonValue.GetObject("nextStep");

    m_nextStepHasBeenSet = true;
  }

  if(jsonValue.ValueExists("response"))
  {
    m_response = jsonValue.GetObject("response");

    m_responseHasBeenSet = true;
  }

  return *this;
}

JsonValue ConditionalBranch::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_conditionHasBeenSet)
  {
   payload.WithObject("condition", m_condition.Jsonize());

  }

  if(m_nextStepHasBeenSet)
  {
   payload.WithObject("nextStep", m_nextStep.Jsonize());

  }

  if(m_responseHasBeenSet)
  {
   payload.WithObject("response", m_response.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
