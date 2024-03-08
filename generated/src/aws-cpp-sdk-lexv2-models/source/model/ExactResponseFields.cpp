/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ExactResponseFields.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

ExactResponseFields::ExactResponseFields() : 
    m_questionFieldHasBeenSet(false),
    m_answerFieldHasBeenSet(false)
{
}

ExactResponseFields::ExactResponseFields(JsonView jsonValue) : 
    m_questionFieldHasBeenSet(false),
    m_answerFieldHasBeenSet(false)
{
  *this = jsonValue;
}

ExactResponseFields& ExactResponseFields::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("questionField"))
  {
    m_questionField = jsonValue.GetString("questionField");

    m_questionFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("answerField"))
  {
    m_answerField = jsonValue.GetString("answerField");

    m_answerFieldHasBeenSet = true;
  }

  return *this;
}

JsonValue ExactResponseFields::Jsonize() const
{
  JsonValue payload;

  if(m_questionFieldHasBeenSet)
  {
   payload.WithString("questionField", m_questionField);

  }

  if(m_answerFieldHasBeenSet)
  {
   payload.WithString("answerField", m_answerField);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
