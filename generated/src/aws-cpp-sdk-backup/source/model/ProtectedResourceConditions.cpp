/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ProtectedResourceConditions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

ProtectedResourceConditions::ProtectedResourceConditions() : 
    m_stringEqualsHasBeenSet(false),
    m_stringNotEqualsHasBeenSet(false)
{
}

ProtectedResourceConditions::ProtectedResourceConditions(JsonView jsonValue) : 
    m_stringEqualsHasBeenSet(false),
    m_stringNotEqualsHasBeenSet(false)
{
  *this = jsonValue;
}

ProtectedResourceConditions& ProtectedResourceConditions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StringEquals"))
  {
    Aws::Utils::Array<JsonView> stringEqualsJsonList = jsonValue.GetArray("StringEquals");
    for(unsigned stringEqualsIndex = 0; stringEqualsIndex < stringEqualsJsonList.GetLength(); ++stringEqualsIndex)
    {
      m_stringEquals.push_back(stringEqualsJsonList[stringEqualsIndex].AsObject());
    }
    m_stringEqualsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StringNotEquals"))
  {
    Aws::Utils::Array<JsonView> stringNotEqualsJsonList = jsonValue.GetArray("StringNotEquals");
    for(unsigned stringNotEqualsIndex = 0; stringNotEqualsIndex < stringNotEqualsJsonList.GetLength(); ++stringNotEqualsIndex)
    {
      m_stringNotEquals.push_back(stringNotEqualsJsonList[stringNotEqualsIndex].AsObject());
    }
    m_stringNotEqualsHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtectedResourceConditions::Jsonize() const
{
  JsonValue payload;

  if(m_stringEqualsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stringEqualsJsonList(m_stringEquals.size());
   for(unsigned stringEqualsIndex = 0; stringEqualsIndex < stringEqualsJsonList.GetLength(); ++stringEqualsIndex)
   {
     stringEqualsJsonList[stringEqualsIndex].AsObject(m_stringEquals[stringEqualsIndex].Jsonize());
   }
   payload.WithArray("StringEquals", std::move(stringEqualsJsonList));

  }

  if(m_stringNotEqualsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stringNotEqualsJsonList(m_stringNotEquals.size());
   for(unsigned stringNotEqualsIndex = 0; stringNotEqualsIndex < stringNotEqualsJsonList.GetLength(); ++stringNotEqualsIndex)
   {
     stringNotEqualsJsonList[stringNotEqualsIndex].AsObject(m_stringNotEquals[stringNotEqualsIndex].Jsonize());
   }
   payload.WithArray("StringNotEquals", std::move(stringNotEqualsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
