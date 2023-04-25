/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormNumericQuestionOption.h>
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

EvaluationFormNumericQuestionOption::EvaluationFormNumericQuestionOption() : 
    m_minValue(0),
    m_minValueHasBeenSet(false),
    m_maxValue(0),
    m_maxValueHasBeenSet(false),
    m_score(0),
    m_scoreHasBeenSet(false),
    m_automaticFail(false),
    m_automaticFailHasBeenSet(false)
{
}

EvaluationFormNumericQuestionOption::EvaluationFormNumericQuestionOption(JsonView jsonValue) : 
    m_minValue(0),
    m_minValueHasBeenSet(false),
    m_maxValue(0),
    m_maxValueHasBeenSet(false),
    m_score(0),
    m_scoreHasBeenSet(false),
    m_automaticFail(false),
    m_automaticFailHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationFormNumericQuestionOption& EvaluationFormNumericQuestionOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinValue"))
  {
    m_minValue = jsonValue.GetInteger("MinValue");

    m_minValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxValue"))
  {
    m_maxValue = jsonValue.GetInteger("MaxValue");

    m_maxValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Score"))
  {
    m_score = jsonValue.GetInteger("Score");

    m_scoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutomaticFail"))
  {
    m_automaticFail = jsonValue.GetBool("AutomaticFail");

    m_automaticFailHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationFormNumericQuestionOption::Jsonize() const
{
  JsonValue payload;

  if(m_minValueHasBeenSet)
  {
   payload.WithInteger("MinValue", m_minValue);

  }

  if(m_maxValueHasBeenSet)
  {
   payload.WithInteger("MaxValue", m_maxValue);

  }

  if(m_scoreHasBeenSet)
  {
   payload.WithInteger("Score", m_score);

  }

  if(m_automaticFailHasBeenSet)
  {
   payload.WithBool("AutomaticFail", m_automaticFail);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
