/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationAnswerInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

EvaluationAnswerInput::EvaluationAnswerInput() : 
    m_valueHasBeenSet(false)
{
}

EvaluationAnswerInput::EvaluationAnswerInput(JsonView jsonValue) : 
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationAnswerInput& EvaluationAnswerInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetObject("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationAnswerInput::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithObject("Value", m_value.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
