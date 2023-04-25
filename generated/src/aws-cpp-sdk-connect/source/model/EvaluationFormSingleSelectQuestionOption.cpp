/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormSingleSelectQuestionOption.h>
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

EvaluationFormSingleSelectQuestionOption::EvaluationFormSingleSelectQuestionOption() : 
    m_refIdHasBeenSet(false),
    m_textHasBeenSet(false),
    m_score(0),
    m_scoreHasBeenSet(false),
    m_automaticFail(false),
    m_automaticFailHasBeenSet(false)
{
}

EvaluationFormSingleSelectQuestionOption::EvaluationFormSingleSelectQuestionOption(JsonView jsonValue) : 
    m_refIdHasBeenSet(false),
    m_textHasBeenSet(false),
    m_score(0),
    m_scoreHasBeenSet(false),
    m_automaticFail(false),
    m_automaticFailHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationFormSingleSelectQuestionOption& EvaluationFormSingleSelectQuestionOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RefId"))
  {
    m_refId = jsonValue.GetString("RefId");

    m_refIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
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

JsonValue EvaluationFormSingleSelectQuestionOption::Jsonize() const
{
  JsonValue payload;

  if(m_refIdHasBeenSet)
  {
   payload.WithString("RefId", m_refId);

  }

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

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
