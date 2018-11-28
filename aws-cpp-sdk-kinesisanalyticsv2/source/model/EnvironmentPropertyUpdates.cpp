/*
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
    Array<JsonView> propertyGroupsJsonList = jsonValue.GetArray("PropertyGroups");
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
   Array<JsonValue> propertyGroupsJsonList(m_propertyGroups.size());
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
