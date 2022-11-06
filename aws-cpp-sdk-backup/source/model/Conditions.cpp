/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/Conditions.h>
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

Conditions::Conditions() : 
    m_stringEqualsHasBeenSet(false),
    m_stringNotEqualsHasBeenSet(false),
    m_stringLikeHasBeenSet(false),
    m_stringNotLikeHasBeenSet(false)
{
}

Conditions::Conditions(JsonView jsonValue) : 
    m_stringEqualsHasBeenSet(false),
    m_stringNotEqualsHasBeenSet(false),
    m_stringLikeHasBeenSet(false),
    m_stringNotLikeHasBeenSet(false)
{
  *this = jsonValue;
}

Conditions& Conditions::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("StringLike"))
  {
    Aws::Utils::Array<JsonView> stringLikeJsonList = jsonValue.GetArray("StringLike");
    for(unsigned stringLikeIndex = 0; stringLikeIndex < stringLikeJsonList.GetLength(); ++stringLikeIndex)
    {
      m_stringLike.push_back(stringLikeJsonList[stringLikeIndex].AsObject());
    }
    m_stringLikeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StringNotLike"))
  {
    Aws::Utils::Array<JsonView> stringNotLikeJsonList = jsonValue.GetArray("StringNotLike");
    for(unsigned stringNotLikeIndex = 0; stringNotLikeIndex < stringNotLikeJsonList.GetLength(); ++stringNotLikeIndex)
    {
      m_stringNotLike.push_back(stringNotLikeJsonList[stringNotLikeIndex].AsObject());
    }
    m_stringNotLikeHasBeenSet = true;
  }

  return *this;
}

JsonValue Conditions::Jsonize() const
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

  if(m_stringLikeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stringLikeJsonList(m_stringLike.size());
   for(unsigned stringLikeIndex = 0; stringLikeIndex < stringLikeJsonList.GetLength(); ++stringLikeIndex)
   {
     stringLikeJsonList[stringLikeIndex].AsObject(m_stringLike[stringLikeIndex].Jsonize());
   }
   payload.WithArray("StringLike", std::move(stringLikeJsonList));

  }

  if(m_stringNotLikeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stringNotLikeJsonList(m_stringNotLike.size());
   for(unsigned stringNotLikeIndex = 0; stringNotLikeIndex < stringNotLikeJsonList.GetLength(); ++stringNotLikeIndex)
   {
     stringNotLikeJsonList[stringNotLikeIndex].AsObject(m_stringNotLike[stringNotLikeIndex].Jsonize());
   }
   payload.WithArray("StringNotLike", std::move(stringNotLikeJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
