/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/FilterConfiguration.h>
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

FilterConfiguration::FilterConfiguration() : 
    m_allowedLocationsHasBeenSet(false)
{
}

FilterConfiguration::FilterConfiguration(JsonView jsonValue) : 
    m_allowedLocationsHasBeenSet(false)
{
  *this = jsonValue;
}

FilterConfiguration& FilterConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllowedLocations"))
  {
    Aws::Utils::Array<JsonView> allowedLocationsJsonList = jsonValue.GetArray("AllowedLocations");
    for(unsigned allowedLocationsIndex = 0; allowedLocationsIndex < allowedLocationsJsonList.GetLength(); ++allowedLocationsIndex)
    {
      m_allowedLocations.push_back(allowedLocationsJsonList[allowedLocationsIndex].AsString());
    }
    m_allowedLocationsHasBeenSet = true;
  }

  return *this;
}

JsonValue FilterConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_allowedLocationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedLocationsJsonList(m_allowedLocations.size());
   for(unsigned allowedLocationsIndex = 0; allowedLocationsIndex < allowedLocationsJsonList.GetLength(); ++allowedLocationsIndex)
   {
     allowedLocationsJsonList[allowedLocationsIndex].AsString(m_allowedLocations[allowedLocationsIndex]);
   }
   payload.WithArray("AllowedLocations", std::move(allowedLocationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
