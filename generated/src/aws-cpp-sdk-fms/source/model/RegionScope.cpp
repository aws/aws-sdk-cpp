/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/RegionScope.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

RegionScope::RegionScope() : 
    m_regionsHasBeenSet(false),
    m_allRegionsEnabled(false),
    m_allRegionsEnabledHasBeenSet(false)
{
}

RegionScope::RegionScope(JsonView jsonValue) : 
    m_regionsHasBeenSet(false),
    m_allRegionsEnabled(false),
    m_allRegionsEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

RegionScope& RegionScope::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Regions"))
  {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("Regions");
    for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
    {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllRegionsEnabled"))
  {
    m_allRegionsEnabled = jsonValue.GetBool("AllRegionsEnabled");

    m_allRegionsEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue RegionScope::Jsonize() const
{
  JsonValue payload;

  if(m_regionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
   for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
   {
     regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
   }
   payload.WithArray("Regions", std::move(regionsJsonList));

  }

  if(m_allRegionsEnabledHasBeenSet)
  {
   payload.WithBool("AllRegionsEnabled", m_allRegionsEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
