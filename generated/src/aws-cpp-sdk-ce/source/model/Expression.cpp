/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/Expression.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

Expression::Expression() : 
    m_orHasBeenSet(false),
    m_andHasBeenSet(false),
    m_notHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_costCategoriesHasBeenSet(false)
{
}

Expression::Expression(JsonView jsonValue) : 
    m_orHasBeenSet(false),
    m_andHasBeenSet(false),
    m_notHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_costCategoriesHasBeenSet(false)
{
  *this = jsonValue;
}

const Expression& Expression::GetNot() const{ return *m_not; }
bool Expression::NotHasBeenSet() const { return m_notHasBeenSet; }
void Expression::SetNot(const Expression& value) { m_notHasBeenSet = true; m_not = Aws::MakeShared<Expression>("Expression", value); }
void Expression::SetNot(Expression&& value) { m_notHasBeenSet = true; m_not = Aws::MakeShared<Expression>("Expression", std::move(value)); }
Expression& Expression::WithNot(const Expression& value) { SetNot(value); return *this;}
Expression& Expression::WithNot(Expression&& value) { SetNot(std::move(value)); return *this;}

Expression& Expression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Or"))
  {
    Aws::Utils::Array<JsonView> orJsonList = jsonValue.GetArray("Or");
    for(unsigned orIndex = 0; orIndex < orJsonList.GetLength(); ++orIndex)
    {
      m_or.push_back(orJsonList[orIndex].AsObject());
    }
    m_orHasBeenSet = true;
  }

  if(jsonValue.ValueExists("And"))
  {
    Aws::Utils::Array<JsonView> andJsonList = jsonValue.GetArray("And");
    for(unsigned andIndex = 0; andIndex < andJsonList.GetLength(); ++andIndex)
    {
      m_and.push_back(andJsonList[andIndex].AsObject());
    }
    m_andHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Not"))
  {
    m_not = Aws::MakeShared<Expression>("Expression", jsonValue.GetObject("Not"));

    m_notHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Dimensions"))
  {
    m_dimensions = jsonValue.GetObject("Dimensions");

    m_dimensionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    m_tags = jsonValue.GetObject("Tags");

    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CostCategories"))
  {
    m_costCategories = jsonValue.GetObject("CostCategories");

    m_costCategoriesHasBeenSet = true;
  }

  return *this;
}

JsonValue Expression::Jsonize() const
{
  JsonValue payload;

  if(m_orHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> orJsonList(m_or.size());
   for(unsigned orIndex = 0; orIndex < orJsonList.GetLength(); ++orIndex)
   {
     orJsonList[orIndex].AsObject(m_or[orIndex].Jsonize());
   }
   payload.WithArray("Or", std::move(orJsonList));

  }

  if(m_andHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> andJsonList(m_and.size());
   for(unsigned andIndex = 0; andIndex < andJsonList.GetLength(); ++andIndex)
   {
     andJsonList[andIndex].AsObject(m_and[andIndex].Jsonize());
   }
   payload.WithArray("And", std::move(andJsonList));

  }

  if(m_notHasBeenSet)
  {
   payload.WithObject("Not", m_not->Jsonize());

  }

  if(m_dimensionsHasBeenSet)
  {
   payload.WithObject("Dimensions", m_dimensions.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   payload.WithObject("Tags", m_tags.Jsonize());

  }

  if(m_costCategoriesHasBeenSet)
  {
   payload.WithObject("CostCategories", m_costCategories.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
