/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RowFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

RowFilter::RowFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

RowFilter& RowFilter::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("expression"))
  {
    m_expression = jsonValue.GetObject("expression");
    m_expressionHasBeenSet = true;
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

JsonValue RowFilter::Jsonize() const
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

  if(m_expressionHasBeenSet)
  {
   payload.WithObject("expression", m_expression.Jsonize());

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
} // namespace DataZone
} // namespace Aws
