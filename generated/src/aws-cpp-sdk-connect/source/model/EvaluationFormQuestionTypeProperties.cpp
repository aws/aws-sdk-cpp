/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormQuestionTypeProperties.h>
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

EvaluationFormQuestionTypeProperties::EvaluationFormQuestionTypeProperties() : 
    m_numericHasBeenSet(false),
    m_singleSelectHasBeenSet(false)
{
}

EvaluationFormQuestionTypeProperties::EvaluationFormQuestionTypeProperties(JsonView jsonValue) : 
    m_numericHasBeenSet(false),
    m_singleSelectHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationFormQuestionTypeProperties& EvaluationFormQuestionTypeProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Numeric"))
  {
    m_numeric = jsonValue.GetObject("Numeric");

    m_numericHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SingleSelect"))
  {
    m_singleSelect = jsonValue.GetObject("SingleSelect");

    m_singleSelectHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationFormQuestionTypeProperties::Jsonize() const
{
  JsonValue payload;

  if(m_numericHasBeenSet)
  {
   payload.WithObject("Numeric", m_numeric.Jsonize());

  }

  if(m_singleSelectHasBeenSet)
  {
   payload.WithObject("SingleSelect", m_singleSelect.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
