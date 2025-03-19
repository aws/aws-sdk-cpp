/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AuditCheckConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

AuditCheckConfiguration::AuditCheckConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AuditCheckConfiguration& AuditCheckConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configuration"))
  {
    Aws::Map<Aws::String, JsonView> configurationJsonMap = jsonValue.GetObject("configuration").GetAllObjects();
    for(auto& configurationItem : configurationJsonMap)
    {
      m_configuration[ConfigNameMapper::GetConfigNameForName(configurationItem.first)] = configurationItem.second.AsString();
    }
    m_configurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AuditCheckConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_configurationHasBeenSet)
  {
   JsonValue configurationJsonMap;
   for(auto& configurationItem : m_configuration)
   {
     configurationJsonMap.WithString(ConfigNameMapper::GetNameForConfigName(configurationItem.first), configurationItem.second);
   }
   payload.WithObject("configuration", std::move(configurationJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
