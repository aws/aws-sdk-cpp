/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/RegionsInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

RegionsInfo::RegionsInfo() : 
    m_primaryRegionHasBeenSet(false),
    m_additionalRegionsHasBeenSet(false)
{
}

RegionsInfo::RegionsInfo(JsonView jsonValue) : 
    m_primaryRegionHasBeenSet(false),
    m_additionalRegionsHasBeenSet(false)
{
  *this = jsonValue;
}

RegionsInfo& RegionsInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrimaryRegion"))
  {
    m_primaryRegion = jsonValue.GetString("PrimaryRegion");

    m_primaryRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalRegions"))
  {
    Aws::Utils::Array<JsonView> additionalRegionsJsonList = jsonValue.GetArray("AdditionalRegions");
    for(unsigned additionalRegionsIndex = 0; additionalRegionsIndex < additionalRegionsJsonList.GetLength(); ++additionalRegionsIndex)
    {
      m_additionalRegions.push_back(additionalRegionsJsonList[additionalRegionsIndex].AsString());
    }
    m_additionalRegionsHasBeenSet = true;
  }

  return *this;
}

JsonValue RegionsInfo::Jsonize() const
{
  JsonValue payload;

  if(m_primaryRegionHasBeenSet)
  {
   payload.WithString("PrimaryRegion", m_primaryRegion);

  }

  if(m_additionalRegionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalRegionsJsonList(m_additionalRegions.size());
   for(unsigned additionalRegionsIndex = 0; additionalRegionsIndex < additionalRegionsJsonList.GetLength(); ++additionalRegionsIndex)
   {
     additionalRegionsJsonList[additionalRegionsIndex].AsString(m_additionalRegions[additionalRegionsIndex]);
   }
   payload.WithArray("AdditionalRegions", std::move(additionalRegionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
