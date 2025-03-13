/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteMatrixExclusionOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{

RouteMatrixExclusionOptions::RouteMatrixExclusionOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteMatrixExclusionOptions& RouteMatrixExclusionOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Countries"))
  {
    Aws::Utils::Array<JsonView> countriesJsonList = jsonValue.GetArray("Countries");
    for(unsigned countriesIndex = 0; countriesIndex < countriesJsonList.GetLength(); ++countriesIndex)
    {
      m_countries.push_back(countriesJsonList[countriesIndex].AsString());
    }
    m_countriesHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteMatrixExclusionOptions::Jsonize() const
{
  JsonValue payload;

  if(m_countriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> countriesJsonList(m_countries.size());
   for(unsigned countriesIndex = 0; countriesIndex < countriesJsonList.GetLength(); ++countriesIndex)
   {
     countriesJsonList[countriesIndex].AsString(m_countries[countriesIndex]);
   }
   payload.WithArray("Countries", std::move(countriesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
