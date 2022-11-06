/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/EnvironmentPropertyUpdates.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

EnvironmentPropertyUpdates::EnvironmentPropertyUpdates() : 
    m_propertyGroupsHasBeenSet(false)
{
}

EnvironmentPropertyUpdates::EnvironmentPropertyUpdates(JsonView jsonValue) : 
    m_propertyGroupsHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentPropertyUpdates& EnvironmentPropertyUpdates::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PropertyGroups"))
  {
    Aws::Utils::Array<JsonView> propertyGroupsJsonList = jsonValue.GetArray("PropertyGroups");
    for(unsigned propertyGroupsIndex = 0; propertyGroupsIndex < propertyGroupsJsonList.GetLength(); ++propertyGroupsIndex)
    {
      m_propertyGroups.push_back(propertyGroupsJsonList[propertyGroupsIndex].AsObject());
    }
    m_propertyGroupsHasBeenSet = true;
  }

  return *this;
}

JsonValue EnvironmentPropertyUpdates::Jsonize() const
{
  JsonValue payload;

  if(m_propertyGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> propertyGroupsJsonList(m_propertyGroups.size());
   for(unsigned propertyGroupsIndex = 0; propertyGroupsIndex < propertyGroupsJsonList.GetLength(); ++propertyGroupsIndex)
   {
     propertyGroupsJsonList[propertyGroupsIndex].AsObject(m_propertyGroups[propertyGroupsIndex].Jsonize());
   }
   payload.WithArray("PropertyGroups", std::move(propertyGroupsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
