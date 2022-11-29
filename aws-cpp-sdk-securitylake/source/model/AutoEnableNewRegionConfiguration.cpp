/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/AutoEnableNewRegionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

AutoEnableNewRegionConfiguration::AutoEnableNewRegionConfiguration() : 
    m_region(Region::NOT_SET),
    m_regionHasBeenSet(false),
    m_sourcesHasBeenSet(false)
{
}

AutoEnableNewRegionConfiguration::AutoEnableNewRegionConfiguration(JsonView jsonValue) : 
    m_region(Region::NOT_SET),
    m_regionHasBeenSet(false),
    m_sourcesHasBeenSet(false)
{
  *this = jsonValue;
}

AutoEnableNewRegionConfiguration& AutoEnableNewRegionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("region"))
  {
    m_region = RegionMapper::GetRegionForName(jsonValue.GetString("region"));

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sources"))
  {
    Aws::Utils::Array<JsonView> sourcesJsonList = jsonValue.GetArray("sources");
    for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
    {
      m_sources.push_back(AwsLogSourceTypeMapper::GetAwsLogSourceTypeForName(sourcesJsonList[sourcesIndex].AsString()));
    }
    m_sourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoEnableNewRegionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", RegionMapper::GetNameForRegion(m_region));
  }

  if(m_sourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourcesJsonList(m_sources.size());
   for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
   {
     sourcesJsonList[sourcesIndex].AsString(AwsLogSourceTypeMapper::GetNameForAwsLogSourceType(m_sources[sourcesIndex]));
   }
   payload.WithArray("sources", std::move(sourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
