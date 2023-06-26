/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/SiteMapsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

SiteMapsConfiguration::SiteMapsConfiguration() : 
    m_siteMapsHasBeenSet(false)
{
}

SiteMapsConfiguration::SiteMapsConfiguration(JsonView jsonValue) : 
    m_siteMapsHasBeenSet(false)
{
  *this = jsonValue;
}

SiteMapsConfiguration& SiteMapsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SiteMaps"))
  {
    Aws::Utils::Array<JsonView> siteMapsJsonList = jsonValue.GetArray("SiteMaps");
    for(unsigned siteMapsIndex = 0; siteMapsIndex < siteMapsJsonList.GetLength(); ++siteMapsIndex)
    {
      m_siteMaps.push_back(siteMapsJsonList[siteMapsIndex].AsString());
    }
    m_siteMapsHasBeenSet = true;
  }

  return *this;
}

JsonValue SiteMapsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_siteMapsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> siteMapsJsonList(m_siteMaps.size());
   for(unsigned siteMapsIndex = 0; siteMapsIndex < siteMapsJsonList.GetLength(); ++siteMapsIndex)
   {
     siteMapsJsonList[siteMapsIndex].AsString(m_siteMaps[siteMapsIndex]);
   }
   payload.WithArray("SiteMaps", std::move(siteMapsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
