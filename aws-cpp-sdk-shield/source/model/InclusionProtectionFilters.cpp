/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/InclusionProtectionFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

InclusionProtectionFilters::InclusionProtectionFilters() : 
    m_resourceArnsHasBeenSet(false),
    m_protectionNamesHasBeenSet(false),
    m_resourceTypesHasBeenSet(false)
{
}

InclusionProtectionFilters::InclusionProtectionFilters(JsonView jsonValue) : 
    m_resourceArnsHasBeenSet(false),
    m_protectionNamesHasBeenSet(false),
    m_resourceTypesHasBeenSet(false)
{
  *this = jsonValue;
}

InclusionProtectionFilters& InclusionProtectionFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceArns"))
  {
    Aws::Utils::Array<JsonView> resourceArnsJsonList = jsonValue.GetArray("ResourceArns");
    for(unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex)
    {
      m_resourceArns.push_back(resourceArnsJsonList[resourceArnsIndex].AsString());
    }
    m_resourceArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProtectionNames"))
  {
    Aws::Utils::Array<JsonView> protectionNamesJsonList = jsonValue.GetArray("ProtectionNames");
    for(unsigned protectionNamesIndex = 0; protectionNamesIndex < protectionNamesJsonList.GetLength(); ++protectionNamesIndex)
    {
      m_protectionNames.push_back(protectionNamesJsonList[protectionNamesIndex].AsString());
    }
    m_protectionNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceTypes"))
  {
    Aws::Utils::Array<JsonView> resourceTypesJsonList = jsonValue.GetArray("ResourceTypes");
    for(unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex)
    {
      m_resourceTypes.push_back(ProtectedResourceTypeMapper::GetProtectedResourceTypeForName(resourceTypesJsonList[resourceTypesIndex].AsString()));
    }
    m_resourceTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue InclusionProtectionFilters::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceArnsJsonList(m_resourceArns.size());
   for(unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex)
   {
     resourceArnsJsonList[resourceArnsIndex].AsString(m_resourceArns[resourceArnsIndex]);
   }
   payload.WithArray("ResourceArns", std::move(resourceArnsJsonList));

  }

  if(m_protectionNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> protectionNamesJsonList(m_protectionNames.size());
   for(unsigned protectionNamesIndex = 0; protectionNamesIndex < protectionNamesJsonList.GetLength(); ++protectionNamesIndex)
   {
     protectionNamesJsonList[protectionNamesIndex].AsString(m_protectionNames[protectionNamesIndex]);
   }
   payload.WithArray("ProtectionNames", std::move(protectionNamesJsonList));

  }

  if(m_resourceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTypesJsonList(m_resourceTypes.size());
   for(unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex)
   {
     resourceTypesJsonList[resourceTypesIndex].AsString(ProtectedResourceTypeMapper::GetNameForProtectedResourceType(m_resourceTypes[resourceTypesIndex]));
   }
   payload.WithArray("ResourceTypes", std::move(resourceTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
