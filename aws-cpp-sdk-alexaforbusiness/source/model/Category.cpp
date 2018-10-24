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

#include <aws/alexaforbusiness/model/Category.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

Category::Category() : 
    m_categoryId(0),
    m_categoryIdHasBeenSet(false),
    m_categoryNameHasBeenSet(false)
{
}

Category::Category(JsonView jsonValue) : 
    m_categoryId(0),
    m_categoryIdHasBeenSet(false),
    m_categoryNameHasBeenSet(false)
{
  *this = jsonValue;
}

Category& Category::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CategoryId"))
  {
    m_categoryId = jsonValue.GetInt64("CategoryId");

    m_categoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CategoryName"))
  {
    m_categoryName = jsonValue.GetString("CategoryName");

    m_categoryNameHasBeenSet = true;
  }

  return *this;
}

JsonValue Category::Jsonize() const
{
  JsonValue payload;

  if(m_categoryIdHasBeenSet)
  {
   payload.WithInt64("CategoryId", m_categoryId);

  }

  if(m_categoryNameHasBeenSet)
  {
   payload.WithString("CategoryName", m_categoryName);

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
