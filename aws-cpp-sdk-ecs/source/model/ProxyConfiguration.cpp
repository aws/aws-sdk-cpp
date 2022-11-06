/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ProxyConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

ProxyConfiguration::ProxyConfiguration() : 
    m_type(ProxyConfigurationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
}

ProxyConfiguration::ProxyConfiguration(JsonView jsonValue) : 
    m_type(ProxyConfigurationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
  *this = jsonValue;
}

ProxyConfiguration& ProxyConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = ProxyConfigurationTypeMapper::GetProxyConfigurationTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerName"))
  {
    m_containerName = jsonValue.GetString("containerName");

    m_containerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("properties"))
  {
    Aws::Utils::Array<JsonView> propertiesJsonList = jsonValue.GetArray("properties");
    for(unsigned propertiesIndex = 0; propertiesIndex < propertiesJsonList.GetLength(); ++propertiesIndex)
    {
      m_properties.push_back(propertiesJsonList[propertiesIndex].AsObject());
    }
    m_propertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue ProxyConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ProxyConfigurationTypeMapper::GetNameForProxyConfigurationType(m_type));
  }

  if(m_containerNameHasBeenSet)
  {
   payload.WithString("containerName", m_containerName);

  }

  if(m_propertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> propertiesJsonList(m_properties.size());
   for(unsigned propertiesIndex = 0; propertiesIndex < propertiesJsonList.GetLength(); ++propertiesIndex)
   {
     propertiesJsonList[propertiesIndex].AsObject(m_properties[propertiesIndex].Jsonize());
   }
   payload.WithArray("properties", std::move(propertiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
