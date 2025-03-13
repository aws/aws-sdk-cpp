/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/Expression.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMPricingCalculator
{
namespace Model
{

Expression::Expression(JsonView jsonValue)
{
  *this = jsonValue;
}

Expression& Expression::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("or"))
  {
    Aws::Utils::Array<JsonView> orJsonList = jsonValue.GetArray("or");
    for(unsigned orIndex = 0; orIndex < orJsonList.GetLength(); ++orIndex)
    {
      m_or.push_back(orJsonList[orIndex].AsObject());
    }
    m_orHasBeenSet = true;
  }
  if(jsonValue.ValueExists("not"))
  {
    m_not = Aws::MakeShared<Expression>("Expression", jsonValue.GetObject("not"));
    m_notHasBeenSet = true;
  }
  if(jsonValue.ValueExists("costCategories"))
  {
    m_costCategories = jsonValue.GetObject("costCategories");
    m_costCategoriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dimensions"))
  {
    m_dimensions = jsonValue.GetObject("dimensions");
    m_dimensionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    m_tags = jsonValue.GetObject("tags");
    m_tagsHasBeenSet = true;
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
   payload.WithArray("and", std::move(andJsonList));

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

  if(m_notHasBeenSet)
  {
   payload.WithObject("not", m_not->Jsonize());

  }

  if(m_costCategoriesHasBeenSet)
  {
   payload.WithObject("costCategories", m_costCategories.Jsonize());

  }

  if(m_dimensionsHasBeenSet)
  {
   payload.WithObject("dimensions", m_dimensions.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   payload.WithObject("tags", m_tags.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
