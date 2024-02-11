/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormNumericQuestionProperties.h>
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

EvaluationFormNumericQuestionProperties::EvaluationFormNumericQuestionProperties() : 
    m_minValue(0),
    m_minValueHasBeenSet(false),
    m_maxValue(0),
    m_maxValueHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_automationHasBeenSet(false)
{
}

EvaluationFormNumericQuestionProperties::EvaluationFormNumericQuestionProperties(JsonView jsonValue) : 
    m_minValue(0),
    m_minValueHasBeenSet(false),
    m_maxValue(0),
    m_maxValueHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_automationHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationFormNumericQuestionProperties& EvaluationFormNumericQuestionProperties::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Options"))
  {
    Aws::Utils::Array<JsonView> optionsJsonList = jsonValue.GetArray("Options");
    for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
    {
      m_options.push_back(optionsJsonList[optionsIndex].AsObject());
    }
    m_optionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Automation"))
  {
    m_automation = jsonValue.GetObject("Automation");

    m_automationHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationFormNumericQuestionProperties::Jsonize() const
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

  if(m_optionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> optionsJsonList(m_options.size());
   for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
   {
     optionsJsonList[optionsIndex].AsObject(m_options[optionsIndex].Jsonize());
   }
   payload.WithArray("Options", std::move(optionsJsonList));

  }

  if(m_automationHasBeenSet)
  {
   payload.WithObject("Automation", m_automation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
