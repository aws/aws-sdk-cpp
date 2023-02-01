/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> propertyGroupDescriptionsJsonList = jsonValue.GetArray("PropertyGroupDescriptions");
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
   Aws::Utils::Array<JsonValue> propertyGroupDescriptionsJsonList(m_propertyGroupDescriptions.size());
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
