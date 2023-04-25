/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormSingleSelectQuestionProperties.h>
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

EvaluationFormSingleSelectQuestionProperties::EvaluationFormSingleSelectQuestionProperties() : 
    m_optionsHasBeenSet(false),
    m_displayAs(EvaluationFormSingleSelectQuestionDisplayMode::NOT_SET),
    m_displayAsHasBeenSet(false),
    m_automationHasBeenSet(false)
{
}

EvaluationFormSingleSelectQuestionProperties::EvaluationFormSingleSelectQuestionProperties(JsonView jsonValue) : 
    m_optionsHasBeenSet(false),
    m_displayAs(EvaluationFormSingleSelectQuestionDisplayMode::NOT_SET),
    m_displayAsHasBeenSet(false),
    m_automationHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationFormSingleSelectQuestionProperties& EvaluationFormSingleSelectQuestionProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Options"))
  {
    Aws::Utils::Array<JsonView> optionsJsonList = jsonValue.GetArray("Options");
    for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
    {
      m_options.push_back(optionsJsonList[optionsIndex].AsObject());
    }
    m_optionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayAs"))
  {
    m_displayAs = EvaluationFormSingleSelectQuestionDisplayModeMapper::GetEvaluationFormSingleSelectQuestionDisplayModeForName(jsonValue.GetString("DisplayAs"));

    m_displayAsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Automation"))
  {
    m_automation = jsonValue.GetObject("Automation");

    m_automationHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationFormSingleSelectQuestionProperties::Jsonize() const
{
  JsonValue payload;

  if(m_optionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> optionsJsonList(m_options.size());
   for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
   {
     optionsJsonList[optionsIndex].AsObject(m_options[optionsIndex].Jsonize());
   }
   payload.WithArray("Options", std::move(optionsJsonList));

  }

  if(m_displayAsHasBeenSet)
  {
   payload.WithString("DisplayAs", EvaluationFormSingleSelectQuestionDisplayModeMapper::GetNameForEvaluationFormSingleSelectQuestionDisplayMode(m_displayAs));
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
