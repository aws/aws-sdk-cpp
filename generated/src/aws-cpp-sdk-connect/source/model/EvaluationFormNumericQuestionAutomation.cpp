/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormNumericQuestionAutomation.h>
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

EvaluationFormNumericQuestionAutomation::EvaluationFormNumericQuestionAutomation() : 
    m_propertyValueHasBeenSet(false)
{
}

EvaluationFormNumericQuestionAutomation::EvaluationFormNumericQuestionAutomation(JsonView jsonValue) : 
    m_propertyValueHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationFormNumericQuestionAutomation& EvaluationFormNumericQuestionAutomation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PropertyValue"))
  {
    m_propertyValue = jsonValue.GetObject("PropertyValue");

    m_propertyValueHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationFormNumericQuestionAutomation::Jsonize() const
{
  JsonValue payload;

  if(m_propertyValueHasBeenSet)
  {
   payload.WithObject("PropertyValue", m_propertyValue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
