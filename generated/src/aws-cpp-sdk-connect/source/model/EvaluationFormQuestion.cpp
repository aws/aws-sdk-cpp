/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormQuestion.h>
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

EvaluationFormQuestion::EvaluationFormQuestion() : 
    m_titleHasBeenSet(false),
    m_instructionsHasBeenSet(false),
    m_refIdHasBeenSet(false),
    m_notApplicableEnabled(false),
    m_notApplicableEnabledHasBeenSet(false),
    m_questionType(EvaluationFormQuestionType::NOT_SET),
    m_questionTypeHasBeenSet(false),
    m_questionTypePropertiesHasBeenSet(false),
    m_weight(0.0),
    m_weightHasBeenSet(false)
{
}

EvaluationFormQuestion::EvaluationFormQuestion(JsonView jsonValue) : 
    m_titleHasBeenSet(false),
    m_instructionsHasBeenSet(false),
    m_refIdHasBeenSet(false),
    m_notApplicableEnabled(false),
    m_notApplicableEnabledHasBeenSet(false),
    m_questionType(EvaluationFormQuestionType::NOT_SET),
    m_questionTypeHasBeenSet(false),
    m_questionTypePropertiesHasBeenSet(false),
    m_weight(0.0),
    m_weightHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationFormQuestion& EvaluationFormQuestion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Instructions"))
  {
    m_instructions = jsonValue.GetString("Instructions");

    m_instructionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RefId"))
  {
    m_refId = jsonValue.GetString("RefId");

    m_refIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotApplicableEnabled"))
  {
    m_notApplicableEnabled = jsonValue.GetBool("NotApplicableEnabled");

    m_notApplicableEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuestionType"))
  {
    m_questionType = EvaluationFormQuestionTypeMapper::GetEvaluationFormQuestionTypeForName(jsonValue.GetString("QuestionType"));

    m_questionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuestionTypeProperties"))
  {
    m_questionTypeProperties = jsonValue.GetObject("QuestionTypeProperties");

    m_questionTypePropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Weight"))
  {
    m_weight = jsonValue.GetDouble("Weight");

    m_weightHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationFormQuestion::Jsonize() const
{
  JsonValue payload;

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_instructionsHasBeenSet)
  {
   payload.WithString("Instructions", m_instructions);

  }

  if(m_refIdHasBeenSet)
  {
   payload.WithString("RefId", m_refId);

  }

  if(m_notApplicableEnabledHasBeenSet)
  {
   payload.WithBool("NotApplicableEnabled", m_notApplicableEnabled);

  }

  if(m_questionTypeHasBeenSet)
  {
   payload.WithString("QuestionType", EvaluationFormQuestionTypeMapper::GetNameForEvaluationFormQuestionType(m_questionType));
  }

  if(m_questionTypePropertiesHasBeenSet)
  {
   payload.WithObject("QuestionTypeProperties", m_questionTypeProperties.Jsonize());

  }

  if(m_weightHasBeenSet)
  {
   payload.WithDouble("Weight", m_weight);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
