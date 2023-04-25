/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormSingleSelectQuestionAutomation.h>
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

EvaluationFormSingleSelectQuestionAutomation::EvaluationFormSingleSelectQuestionAutomation() : 
    m_optionsHasBeenSet(false),
    m_defaultOptionRefIdHasBeenSet(false)
{
}

EvaluationFormSingleSelectQuestionAutomation::EvaluationFormSingleSelectQuestionAutomation(JsonView jsonValue) : 
    m_optionsHasBeenSet(false),
    m_defaultOptionRefIdHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationFormSingleSelectQuestionAutomation& EvaluationFormSingleSelectQuestionAutomation::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("DefaultOptionRefId"))
  {
    m_defaultOptionRefId = jsonValue.GetString("DefaultOptionRefId");

    m_defaultOptionRefIdHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationFormSingleSelectQuestionAutomation::Jsonize() const
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

  if(m_defaultOptionRefIdHasBeenSet)
  {
   payload.WithString("DefaultOptionRefId", m_defaultOptionRefId);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
