/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/GroupingAttributeDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

GroupingAttributeDefinition::GroupingAttributeDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

GroupingAttributeDefinition& GroupingAttributeDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupingName"))
  {
    m_groupingName = jsonValue.GetString("GroupingName");
    m_groupingNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GroupingSourceKeys"))
  {
    Aws::Utils::Array<JsonView> groupingSourceKeysJsonList = jsonValue.GetArray("GroupingSourceKeys");
    for(unsigned groupingSourceKeysIndex = 0; groupingSourceKeysIndex < groupingSourceKeysJsonList.GetLength(); ++groupingSourceKeysIndex)
    {
      m_groupingSourceKeys.push_back(groupingSourceKeysJsonList[groupingSourceKeysIndex].AsString());
    }
    m_groupingSourceKeysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultGroupingValue"))
  {
    m_defaultGroupingValue = jsonValue.GetString("DefaultGroupingValue");
    m_defaultGroupingValueHasBeenSet = true;
  }
  return *this;
}

JsonValue GroupingAttributeDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_groupingNameHasBeenSet)
  {
   payload.WithString("GroupingName", m_groupingName);

  }

  if(m_groupingSourceKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupingSourceKeysJsonList(m_groupingSourceKeys.size());
   for(unsigned groupingSourceKeysIndex = 0; groupingSourceKeysIndex < groupingSourceKeysJsonList.GetLength(); ++groupingSourceKeysIndex)
   {
     groupingSourceKeysJsonList[groupingSourceKeysIndex].AsString(m_groupingSourceKeys[groupingSourceKeysIndex]);
   }
   payload.WithArray("GroupingSourceKeys", std::move(groupingSourceKeysJsonList));

  }

  if(m_defaultGroupingValueHasBeenSet)
  {
   payload.WithString("DefaultGroupingValue", m_defaultGroupingValue);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
