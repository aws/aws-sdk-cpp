/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/FilterClause.h>
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

FilterClause::FilterClause() : 
    m_andHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_orHasBeenSet(false)
{
}

FilterClause::FilterClause(JsonView jsonValue) : 
    m_andHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_orHasBeenSet(false)
{
  *this = jsonValue;
}

FilterClause& FilterClause::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("filter"))
  {
    m_filter = jsonValue.GetObject("filter");

    m_filterHasBeenSet = true;
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

JsonValue FilterClause::Jsonize() const
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

  if(m_filterHasBeenSet)
  {
   payload.WithObject("filter", m_filter.Jsonize());

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
