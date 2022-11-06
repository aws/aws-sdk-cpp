/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/PriorityConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

PriorityConfiguration::PriorityConfiguration() : 
    m_priorityOrderHasBeenSet(false),
    m_locationOrderHasBeenSet(false)
{
}

PriorityConfiguration::PriorityConfiguration(JsonView jsonValue) : 
    m_priorityOrderHasBeenSet(false),
    m_locationOrderHasBeenSet(false)
{
  *this = jsonValue;
}

PriorityConfiguration& PriorityConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PriorityOrder"))
  {
    Aws::Utils::Array<JsonView> priorityOrderJsonList = jsonValue.GetArray("PriorityOrder");
    for(unsigned priorityOrderIndex = 0; priorityOrderIndex < priorityOrderJsonList.GetLength(); ++priorityOrderIndex)
    {
      m_priorityOrder.push_back(PriorityTypeMapper::GetPriorityTypeForName(priorityOrderJsonList[priorityOrderIndex].AsString()));
    }
    m_priorityOrderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocationOrder"))
  {
    Aws::Utils::Array<JsonView> locationOrderJsonList = jsonValue.GetArray("LocationOrder");
    for(unsigned locationOrderIndex = 0; locationOrderIndex < locationOrderJsonList.GetLength(); ++locationOrderIndex)
    {
      m_locationOrder.push_back(locationOrderJsonList[locationOrderIndex].AsString());
    }
    m_locationOrderHasBeenSet = true;
  }

  return *this;
}

JsonValue PriorityConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_priorityOrderHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> priorityOrderJsonList(m_priorityOrder.size());
   for(unsigned priorityOrderIndex = 0; priorityOrderIndex < priorityOrderJsonList.GetLength(); ++priorityOrderIndex)
   {
     priorityOrderJsonList[priorityOrderIndex].AsString(PriorityTypeMapper::GetNameForPriorityType(m_priorityOrder[priorityOrderIndex]));
   }
   payload.WithArray("PriorityOrder", std::move(priorityOrderJsonList));

  }

  if(m_locationOrderHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> locationOrderJsonList(m_locationOrder.size());
   for(unsigned locationOrderIndex = 0; locationOrderIndex < locationOrderJsonList.GetLength(); ++locationOrderIndex)
   {
     locationOrderJsonList[locationOrderIndex].AsString(m_locationOrder[locationOrderIndex]);
   }
   payload.WithArray("LocationOrder", std::move(locationOrderJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
