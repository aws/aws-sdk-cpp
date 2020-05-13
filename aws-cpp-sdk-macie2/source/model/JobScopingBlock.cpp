/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> andJsonList = jsonValue.GetArray("and");
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
   Array<JsonValue> andJsonList(m_and.size());
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
