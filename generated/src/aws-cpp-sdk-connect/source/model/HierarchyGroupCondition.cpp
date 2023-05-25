/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/HierarchyGroupCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

HierarchyGroupCondition::HierarchyGroupCondition() : 
    m_valueHasBeenSet(false),
    m_hierarchyGroupMatchType(HierarchyGroupMatchType::NOT_SET),
    m_hierarchyGroupMatchTypeHasBeenSet(false)
{
}

HierarchyGroupCondition::HierarchyGroupCondition(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_hierarchyGroupMatchType(HierarchyGroupMatchType::NOT_SET),
    m_hierarchyGroupMatchTypeHasBeenSet(false)
{
  *this = jsonValue;
}

HierarchyGroupCondition& HierarchyGroupCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HierarchyGroupMatchType"))
  {
    m_hierarchyGroupMatchType = HierarchyGroupMatchTypeMapper::GetHierarchyGroupMatchTypeForName(jsonValue.GetString("HierarchyGroupMatchType"));

    m_hierarchyGroupMatchTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue HierarchyGroupCondition::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_hierarchyGroupMatchTypeHasBeenSet)
  {
   payload.WithString("HierarchyGroupMatchType", HierarchyGroupMatchTypeMapper::GetNameForHierarchyGroupMatchType(m_hierarchyGroupMatchType));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
