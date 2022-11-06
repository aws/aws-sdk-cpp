/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/JobScopingBlock.h>
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

JobScopingBlock::JobScopingBlock() : 
    m_andHasBeenSet(false)
{
}

JobScopingBlock::JobScopingBlock(JsonView jsonValue) : 
    m_andHasBeenSet(false)
{
  *this = jsonValue;
}

JobScopingBlock& JobScopingBlock::operator =(JsonView jsonValue)
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

JsonValue JobScopingBlock::Jsonize() const
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
