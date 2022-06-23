/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/ProtectionGroup.h>
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

ProtectionGroup::ProtectionGroup() : 
    m_protectionGroupIdHasBeenSet(false),
    m_aggregation(ProtectionGroupAggregation::NOT_SET),
    m_aggregationHasBeenSet(false),
    m_pattern(ProtectionGroupPattern::NOT_SET),
    m_patternHasBeenSet(false),
    m_resourceType(ProtectedResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_membersHasBeenSet(false),
    m_protectionGroupArnHasBeenSet(false)
{
}

ProtectionGroup::ProtectionGroup(JsonView jsonValue) : 
    m_protectionGroupIdHasBeenSet(false),
    m_aggregation(ProtectionGroupAggregation::NOT_SET),
    m_aggregationHasBeenSet(false),
    m_pattern(ProtectionGroupPattern::NOT_SET),
    m_patternHasBeenSet(false),
    m_resourceType(ProtectedResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_membersHasBeenSet(false),
    m_protectionGroupArnHasBeenSet(false)
{
  *this = jsonValue;
}

ProtectionGroup& ProtectionGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProtectionGroupId"))
  {
    m_protectionGroupId = jsonValue.GetString("ProtectionGroupId");

    m_protectionGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Aggregation"))
  {
    m_aggregation = ProtectionGroupAggregationMapper::GetProtectionGroupAggregationForName(jsonValue.GetString("Aggregation"));

    m_aggregationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Pattern"))
  {
    m_pattern = ProtectionGroupPatternMapper::GetProtectionGroupPatternForName(jsonValue.GetString("Pattern"));

    m_patternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ProtectedResourceTypeMapper::GetProtectedResourceTypeForName(jsonValue.GetString("ResourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Members"))
  {
    Array<JsonView> membersJsonList = jsonValue.GetArray("Members");
    for(unsigned membersIndex = 0; membersIndex < membersJsonList.GetLength(); ++membersIndex)
    {
      m_members.push_back(membersJsonList[membersIndex].AsString());
    }
    m_membersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProtectionGroupArn"))
  {
    m_protectionGroupArn = jsonValue.GetString("ProtectionGroupArn");

    m_protectionGroupArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtectionGroup::Jsonize() const
{
  JsonValue payload;

  if(m_protectionGroupIdHasBeenSet)
  {
   payload.WithString("ProtectionGroupId", m_protectionGroupId);

  }

  if(m_aggregationHasBeenSet)
  {
   payload.WithString("Aggregation", ProtectionGroupAggregationMapper::GetNameForProtectionGroupAggregation(m_aggregation));
  }

  if(m_patternHasBeenSet)
  {
   payload.WithString("Pattern", ProtectionGroupPatternMapper::GetNameForProtectionGroupPattern(m_pattern));
  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ProtectedResourceTypeMapper::GetNameForProtectedResourceType(m_resourceType));
  }

  if(m_membersHasBeenSet)
  {
   Array<JsonValue> membersJsonList(m_members.size());
   for(unsigned membersIndex = 0; membersIndex < membersJsonList.GetLength(); ++membersIndex)
   {
     membersJsonList[membersIndex].AsString(m_members[membersIndex]);
   }
   payload.WithArray("Members", std::move(membersJsonList));

  }

  if(m_protectionGroupArnHasBeenSet)
  {
   payload.WithString("ProtectionGroupArn", m_protectionGroupArn);

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
