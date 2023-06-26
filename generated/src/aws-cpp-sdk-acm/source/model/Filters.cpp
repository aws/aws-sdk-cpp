/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> extendedKeyUsageJsonList = jsonValue.GetArray("extendedKeyUsage");
    for(unsigned extendedKeyUsageIndex = 0; extendedKeyUsageIndex < extendedKeyUsageJsonList.GetLength(); ++extendedKeyUsageIndex)
    {
      m_extendedKeyUsage.push_back(ExtendedKeyUsageNameMapper::GetExtendedKeyUsageNameForName(extendedKeyUsageJsonList[extendedKeyUsageIndex].AsString()));
    }
    m_extendedKeyUsageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyUsage"))
  {
    Aws::Utils::Array<JsonView> keyUsageJsonList = jsonValue.GetArray("keyUsage");
    for(unsigned keyUsageIndex = 0; keyUsageIndex < keyUsageJsonList.GetLength(); ++keyUsageIndex)
    {
      m_keyUsage.push_back(KeyUsageNameMapper::GetKeyUsageNameForName(keyUsageJsonList[keyUsageIndex].AsString()));
    }
    m_keyUsageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyTypes"))
  {
    Aws::Utils::Array<JsonView> keyTypesJsonList = jsonValue.GetArray("keyTypes");
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
   Aws::Utils::Array<JsonValue> extendedKeyUsageJsonList(m_extendedKeyUsage.size());
   for(unsigned extendedKeyUsageIndex = 0; extendedKeyUsageIndex < extendedKeyUsageJsonList.GetLength(); ++extendedKeyUsageIndex)
   {
     extendedKeyUsageJsonList[extendedKeyUsageIndex].AsString(ExtendedKeyUsageNameMapper::GetNameForExtendedKeyUsageName(m_extendedKeyUsage[extendedKeyUsageIndex]));
   }
   payload.WithArray("extendedKeyUsage", std::move(extendedKeyUsageJsonList));

  }

  if(m_keyUsageHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keyUsageJsonList(m_keyUsage.size());
   for(unsigned keyUsageIndex = 0; keyUsageIndex < keyUsageJsonList.GetLength(); ++keyUsageIndex)
   {
     keyUsageJsonList[keyUsageIndex].AsString(KeyUsageNameMapper::GetNameForKeyUsageName(m_keyUsage[keyUsageIndex]));
   }
   payload.WithArray("keyUsage", std::move(keyUsageJsonList));

  }

  if(m_keyTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keyTypesJsonList(m_keyTypes.size());
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
