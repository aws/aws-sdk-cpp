/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DefaultConditionalBranch.h>
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

DefaultConditionalBranch::DefaultConditionalBranch() : 
    m_nextStepHasBeenSet(false),
    m_responseHasBeenSet(false)
{
}

DefaultConditionalBranch::DefaultConditionalBranch(JsonView jsonValue) : 
    m_nextStepHasBeenSet(false),
    m_responseHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultConditionalBranch& DefaultConditionalBranch::operator =(JsonView jsonValue)
{
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

JsonValue DefaultConditionalBranch::Jsonize() const
{
  JsonValue payload;

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
