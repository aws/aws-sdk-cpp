/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/InstanceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

InstanceConfiguration::InstanceConfiguration() : 
    m_imageHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false)
{
}

InstanceConfiguration::InstanceConfiguration(JsonView jsonValue) : 
    m_imageHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceConfiguration& InstanceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("image"))
  {
    m_image = jsonValue.GetString("image");

    m_imageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("blockDeviceMappings"))
  {
    Aws::Utils::Array<JsonView> blockDeviceMappingsJsonList = jsonValue.GetArray("blockDeviceMappings");
    for(unsigned blockDeviceMappingsIndex = 0; blockDeviceMappingsIndex < blockDeviceMappingsJsonList.GetLength(); ++blockDeviceMappingsIndex)
    {
      m_blockDeviceMappings.push_back(blockDeviceMappingsJsonList[blockDeviceMappingsIndex].AsObject());
    }
    m_blockDeviceMappingsHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_imageHasBeenSet)
  {
   payload.WithString("image", m_image);

  }

  if(m_blockDeviceMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blockDeviceMappingsJsonList(m_blockDeviceMappings.size());
   for(unsigned blockDeviceMappingsIndex = 0; blockDeviceMappingsIndex < blockDeviceMappingsJsonList.GetLength(); ++blockDeviceMappingsIndex)
   {
     blockDeviceMappingsJsonList[blockDeviceMappingsIndex].AsObject(m_blockDeviceMappings[blockDeviceMappingsIndex].Jsonize());
   }
   payload.WithArray("blockDeviceMappings", std::move(blockDeviceMappingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
