﻿/*
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

#include <aws/acm/model/Filters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACM
{
namespace Model
{

Filters::Filters() : 
    m_extendedKeyUsageHasBeenSet(false),
    m_keyUsageHasBeenSet(false),
    m_keyTypesHasBeenSet(false)
{
}

Filters::Filters(JsonView jsonValue) : 
    m_extendedKeyUsageHasBeenSet(false),
    m_keyUsageHasBeenSet(false),
    m_keyTypesHasBeenSet(false)
{
  *this = jsonValue;
}

Filters& Filters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("extendedKeyUsage"))
  {
    Array<JsonView> extendedKeyUsageJsonList = jsonValue.GetArray("extendedKeyUsage");
    for(unsigned extendedKeyUsageIndex = 0; extendedKeyUsageIndex < extendedKeyUsageJsonList.GetLength(); ++extendedKeyUsageIndex)
    {
      m_extendedKeyUsage.push_back(ExtendedKeyUsageNameMapper::GetExtendedKeyUsageNameForName(extendedKeyUsageJsonList[extendedKeyUsageIndex].AsString()));
    }
    m_extendedKeyUsageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyUsage"))
  {
    Array<JsonView> keyUsageJsonList = jsonValue.GetArray("keyUsage");
    for(unsigned keyUsageIndex = 0; keyUsageIndex < keyUsageJsonList.GetLength(); ++keyUsageIndex)
    {
      m_keyUsage.push_back(KeyUsageNameMapper::GetKeyUsageNameForName(keyUsageJsonList[keyUsageIndex].AsString()));
    }
    m_keyUsageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyTypes"))
  {
    Array<JsonView> keyTypesJsonList = jsonValue.GetArray("keyTypes");
    for(unsigned keyTypesIndex = 0; keyTypesIndex < keyTypesJsonList.GetLength(); ++keyTypesIndex)
    {
      m_keyTypes.push_back(KeyAlgorithmMapper::GetKeyAlgorithmForName(keyTypesJsonList[keyTypesIndex].AsString()));
    }
    m_keyTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue Filters::Jsonize() const
{
  JsonValue payload;

  if(m_extendedKeyUsageHasBeenSet)
  {
   Array<JsonValue> extendedKeyUsageJsonList(m_extendedKeyUsage.size());
   for(unsigned extendedKeyUsageIndex = 0; extendedKeyUsageIndex < extendedKeyUsageJsonList.GetLength(); ++extendedKeyUsageIndex)
   {
     extendedKeyUsageJsonList[extendedKeyUsageIndex].AsString(ExtendedKeyUsageNameMapper::GetNameForExtendedKeyUsageName(m_extendedKeyUsage[extendedKeyUsageIndex]));
   }
   payload.WithArray("extendedKeyUsage", std::move(extendedKeyUsageJsonList));

  }

  if(m_keyUsageHasBeenSet)
  {
   Array<JsonValue> keyUsageJsonList(m_keyUsage.size());
   for(unsigned keyUsageIndex = 0; keyUsageIndex < keyUsageJsonList.GetLength(); ++keyUsageIndex)
   {
     keyUsageJsonList[keyUsageIndex].AsString(KeyUsageNameMapper::GetNameForKeyUsageName(m_keyUsage[keyUsageIndex]));
   }
   payload.WithArray("keyUsage", std::move(keyUsageJsonList));

  }

  if(m_keyTypesHasBeenSet)
  {
   Array<JsonValue> keyTypesJsonList(m_keyTypes.size());
   for(unsigned keyTypesIndex = 0; keyTypesIndex < keyTypesJsonList.GetLength(); ++keyTypesIndex)
   {
     keyTypesJsonList[keyTypesIndex].AsString(KeyAlgorithmMapper::GetNameForKeyAlgorithm(m_keyTypes[keyTypesIndex]));
   }
   payload.WithArray("keyTypes", std::move(keyTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ACM
} // namespace Aws
