/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/InclusionProtectionGroupFilters.h>
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

InclusionProtectionGroupFilters::InclusionProtectionGroupFilters() : 
    m_protectionGroupIdsHasBeenSet(false),
    m_patternsHasBeenSet(false),
    m_resourceTypesHasBeenSet(false),
    m_aggregationsHasBeenSet(false)
{
}

InclusionProtectionGroupFilters::InclusionProtectionGroupFilters(JsonView jsonValue) : 
    m_protectionGroupIdsHasBeenSet(false),
    m_patternsHasBeenSet(false),
    m_resourceTypesHasBeenSet(false),
    m_aggregationsHasBeenSet(false)
{
  *this = jsonValue;
}

InclusionProtectionGroupFilters& InclusionProtectionGroupFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProtectionGroupIds"))
  {
    Aws::Utils::Array<JsonView> protectionGroupIdsJsonList = jsonValue.GetArray("ProtectionGroupIds");
    for(unsigned protectionGroupIdsIndex = 0; protectionGroupIdsIndex < protectionGroupIdsJsonList.GetLength(); ++protectionGroupIdsIndex)
    {
      m_protectionGroupIds.push_back(protectionGroupIdsJsonList[protectionGroupIdsIndex].AsString());
    }
    m_protectionGroupIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Patterns"))
  {
    Aws::Utils::Array<JsonView> patternsJsonList = jsonValue.GetArray("Patterns");
    for(unsigned patternsIndex = 0; patternsIndex < patternsJsonList.GetLength(); ++patternsIndex)
    {
      m_patterns.push_back(ProtectionGroupPatternMapper::GetProtectionGroupPatternForName(patternsJsonList[patternsIndex].AsString()));
    }
    m_patternsHasBeenSet = true;
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

  if(jsonValue.ValueExists("Aggregations"))
  {
    Aws::Utils::Array<JsonView> aggregationsJsonList = jsonValue.GetArray("Aggregations");
    for(unsigned aggregationsIndex = 0; aggregationsIndex < aggregationsJsonList.GetLength(); ++aggregationsIndex)
    {
      m_aggregations.push_back(ProtectionGroupAggregationMapper::GetProtectionGroupAggregationForName(aggregationsJsonList[aggregationsIndex].AsString()));
    }
    m_aggregationsHasBeenSet = true;
  }

  return *this;
}

JsonValue InclusionProtectionGroupFilters::Jsonize() const
{
  JsonValue payload;

  if(m_protectionGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> protectionGroupIdsJsonList(m_protectionGroupIds.size());
   for(unsigned protectionGroupIdsIndex = 0; protectionGroupIdsIndex < protectionGroupIdsJsonList.GetLength(); ++protectionGroupIdsIndex)
   {
     protectionGroupIdsJsonList[protectionGroupIdsIndex].AsString(m_protectionGroupIds[protectionGroupIdsIndex]);
   }
   payload.WithArray("ProtectionGroupIds", std::move(protectionGroupIdsJsonList));

  }

  if(m_patternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> patternsJsonList(m_patterns.size());
   for(unsigned patternsIndex = 0; patternsIndex < patternsJsonList.GetLength(); ++patternsIndex)
   {
     patternsJsonList[patternsIndex].AsString(ProtectionGroupPatternMapper::GetNameForProtectionGroupPattern(m_patterns[patternsIndex]));
   }
   payload.WithArray("Patterns", std::move(patternsJsonList));

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

  if(m_aggregationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aggregationsJsonList(m_aggregations.size());
   for(unsigned aggregationsIndex = 0; aggregationsIndex < aggregationsJsonList.GetLength(); ++aggregationsIndex)
   {
     aggregationsJsonList[aggregationsIndex].AsString(ProtectionGroupAggregationMapper::GetNameForProtectionGroupAggregation(m_aggregations[aggregationsIndex]));
   }
   payload.WithArray("Aggregations", std::move(aggregationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
