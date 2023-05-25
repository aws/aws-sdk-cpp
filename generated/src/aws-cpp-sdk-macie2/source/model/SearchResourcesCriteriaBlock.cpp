/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/SearchResourcesCriteriaBlock.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

SearchResourcesCriteriaBlock::SearchResourcesCriteriaBlock() : 
    m_andHasBeenSet(false)
{
}

SearchResourcesCriteriaBlock::SearchResourcesCriteriaBlock(JsonView jsonValue) : 
    m_andHasBeenSet(false)
{
  *this = jsonValue;
}

SearchResourcesCriteriaBlock& SearchResourcesCriteriaBlock::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue SearchResourcesCriteriaBlock::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
