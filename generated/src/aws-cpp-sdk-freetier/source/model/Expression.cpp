﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/freetier/model/Expression.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FreeTier
{
namespace Model
{

Expression::Expression(JsonView jsonValue)
{
  *this = jsonValue;
}

Expression& Expression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("And"))
  {
    Aws::Utils::Array<JsonView> andJsonList = jsonValue.GetArray("And");
    for(unsigned andIndex = 0; andIndex < andJsonList.GetLength(); ++andIndex)
    {
      m_and.push_back(andJsonList[andIndex].AsObject());
    }
    m_andHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Dimensions"))
  {
    m_dimensions = jsonValue.GetObject("Dimensions");
    m_dimensionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Not"))
  {
    m_not = Aws::MakeShared<Expression>("Expression", jsonValue.GetObject("Not"));
    m_notHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Or"))
  {
    Aws::Utils::Array<JsonView> orJsonList = jsonValue.GetArray("Or");
    for(unsigned orIndex = 0; orIndex < orJsonList.GetLength(); ++orIndex)
    {
      m_or.push_back(orJsonList[orIndex].AsObject());
    }
    m_orHasBeenSet = true;
  }
  return *this;
}

JsonValue Expression::Jsonize() const
{
  JsonValue payload;

  if(m_andHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> andJsonList(m_and.size());
   for(unsigned andIndex = 0; andIndex < andJsonList.GetLength(); ++andIndex)
   {
     andJsonList[andIndex].AsObject(m_and[andIndex].Jsonize());
   }
   payload.WithArray("And", std::move(andJsonList));

  }

  if(m_dimensionsHasBeenSet)
  {
   payload.WithObject("Dimensions", m_dimensions.Jsonize());

  }

  if(m_notHasBeenSet)
  {
   payload.WithObject("Not", m_not->Jsonize());

  }

  if(m_orHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> orJsonList(m_or.size());
   for(unsigned orIndex = 0; orIndex < orJsonList.GetLength(); ++orIndex)
   {
     orJsonList[orIndex].AsObject(m_or[orIndex].Jsonize());
   }
   payload.WithArray("Or", std::move(orJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FreeTier
} // namespace Aws
