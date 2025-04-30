/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ProtectedQueryDistributeOutputConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

ProtectedQueryDistributeOutputConfiguration::ProtectedQueryDistributeOutputConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ProtectedQueryDistributeOutputConfiguration& ProtectedQueryDistributeOutputConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("locations"))
  {
    Aws::Utils::Array<JsonView> locationsJsonList = jsonValue.GetArray("locations");
    for(unsigned locationsIndex = 0; locationsIndex < locationsJsonList.GetLength(); ++locationsIndex)
    {
      m_locations.push_back(locationsJsonList[locationsIndex].AsObject());
    }
    m_locationsHasBeenSet = true;
  }
  return *this;
}

JsonValue ProtectedQueryDistributeOutputConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_locationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> locationsJsonList(m_locations.size());
   for(unsigned locationsIndex = 0; locationsIndex < locationsJsonList.GetLength(); ++locationsIndex)
   {
     locationsJsonList[locationsIndex].AsObject(m_locations[locationsIndex].Jsonize());
   }
   payload.WithArray("locations", std::move(locationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
