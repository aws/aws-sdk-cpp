﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/Filter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

Filter::Filter() : 
    m_key(FilterNameStringType::NOT_SET),
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

Filter::Filter(JsonView jsonValue) : 
    m_key(FilterNameStringType::NOT_SET),
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

Filter& Filter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = FilterNameStringTypeMapper::GetFilterNameStringTypeForName(jsonValue.GetString("Key"));

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Values"))
  {
    Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue Filter::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", FilterNameStringTypeMapper::GetNameForFilterNameStringType(m_key));
  }

  if(m_valuesHasBeenSet)
  {
   Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
