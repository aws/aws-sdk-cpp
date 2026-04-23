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

#include <aws/kinesisanalyticsv2/model/EnvironmentPropertyDescriptions.h>
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

EnvironmentPropertyDescriptions::EnvironmentPropertyDescriptions() : 
    m_propertyGroupDescriptionsHasBeenSet(false)
{
}

EnvironmentPropertyDescriptions::EnvironmentPropertyDescriptions(JsonView jsonValue) : 
    m_propertyGroupDescriptionsHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentPropertyDescriptions& EnvironmentPropertyDescriptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PropertyGroupDescriptions"))
  {
    Array<JsonView> propertyGroupDescriptionsJsonList = jsonValue.GetArray("PropertyGroupDescriptions");
    for(unsigned propertyGroupDescriptionsIndex = 0; propertyGroupDescriptionsIndex < propertyGroupDescriptionsJsonList.GetLength(); ++propertyGroupDescriptionsIndex)
    {
      m_propertyGroupDescriptions.push_back(propertyGroupDescriptionsJsonList[propertyGroupDescriptionsIndex].AsObject());
    }
    m_propertyGroupDescriptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue EnvironmentPropertyDescriptions::Jsonize() const
{
  JsonValue payload;

  if(m_propertyGroupDescriptionsHasBeenSet)
  {
   Array<JsonValue> propertyGroupDescriptionsJsonList(m_propertyGroupDescriptions.size());
   for(unsigned propertyGroupDescriptionsIndex = 0; propertyGroupDescriptionsIndex < propertyGroupDescriptionsJsonList.GetLength(); ++propertyGroupDescriptionsIndex)
   {
     propertyGroupDescriptionsJsonList[propertyGroupDescriptionsIndex].AsObject(m_propertyGroupDescriptions[propertyGroupDescriptionsIndex].Jsonize());
   }
   payload.WithArray("PropertyGroupDescriptions", std::move(propertyGroupDescriptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
