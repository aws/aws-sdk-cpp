/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationAnswerOutput.h>
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

EvaluationAnswerOutput::EvaluationAnswerOutput() : 
    m_valueHasBeenSet(false),
    m_systemSuggestedValueHasBeenSet(false)
{
}

EvaluationAnswerOutput::EvaluationAnswerOutput(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_systemSuggestedValueHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationAnswerOutput& EvaluationAnswerOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetObject("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SystemSuggestedValue"))
  {
    m_systemSuggestedValue = jsonValue.GetObject("SystemSuggestedValue");

    m_systemSuggestedValueHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationAnswerOutput::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithObject("Value", m_value.Jsonize());

  }

  if(m_systemSuggestedValueHasBeenSet)
  {
   payload.WithObject("SystemSuggestedValue", m_systemSuggestedValue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
