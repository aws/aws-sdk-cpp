/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/Predicate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

Predicate::Predicate() : 
    m_andHasBeenSet(false),
    m_fieldHasBeenSet(false),
    m_operandHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_orHasBeenSet(false)
{
}

Predicate::Predicate(JsonView jsonValue) : 
    m_andHasBeenSet(false),
    m_fieldHasBeenSet(false),
    m_operandHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_orHasBeenSet(false)
{
  *this = jsonValue;
}

Predicate& Predicate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("and"))
  {
    Aws::Utils::Array<JsonView> andJsonList = jsonValue.GetArray("and");
    for(unsigned andIndex = 0; andIndex < andJsonList.GetLength(); ++andIndex)
    {
      m_and.push_back(andJsonList[andIndex].AsObject());
    }
    m_andHasBeenSet = true;
  }

  if(jsonValue.ValueExists("field"))
  {
    m_field = jsonValue.GetString("field");

    m_fieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operand"))
  {
    m_operand = jsonValue.GetString("operand");

    m_operandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operator"))
  {
    m_operator = jsonValue.GetString("operator");

    m_operatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("or"))
  {
    Aws::Utils::Array<JsonView> orJsonList = jsonValue.GetArray("or");
    for(unsigned orIndex = 0; orIndex < orJsonList.GetLength(); ++orIndex)
    {
      m_or.push_back(orJsonList[orIndex].AsObject());
    }
    m_orHasBeenSet = true;
  }

  return *this;
}

JsonValue Predicate::Jsonize() const
{
  JsonValue payload;

  if(m_andHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> andJsonList(m_and.size());
   for(unsigned andIndex = 0; andIndex < andJsonList.GetLength(); ++andIndex)
   {
     andJsonList[andIndex].AsObject(m_and[andIndex].Jsonize());
   }
   payload.WithArray("and", std::move(andJsonList));

  }

  if(m_fieldHasBeenSet)
  {
   payload.WithString("field", m_field);

  }

  if(m_operandHasBeenSet)
  {
   payload.WithString("operand", m_operand);

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("operator", m_operator);

  }

  if(m_orHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> orJsonList(m_or.size());
   for(unsigned orIndex = 0; orIndex < orJsonList.GetLength(); ++orIndex)
   {
     orJsonList[orIndex].AsObject(m_or[orIndex].Jsonize());
   }
   payload.WithArray("or", std::move(orJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
