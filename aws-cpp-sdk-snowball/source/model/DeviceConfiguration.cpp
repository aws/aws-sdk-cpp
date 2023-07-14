/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/DeviceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

DeviceConfiguration::DeviceConfiguration() : 
    m_snowconeDeviceConfigurationHasBeenSet(false)
{
}

DeviceConfiguration::DeviceConfiguration(JsonView jsonValue) : 
    m_snowconeDeviceConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceConfiguration& DeviceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SnowconeDeviceConfiguration"))
  {
    m_snowconeDeviceConfiguration = jsonValue.GetObject("SnowconeDeviceConfiguration");

    m_snowconeDeviceConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_snowconeDeviceConfigurationHasBeenSet)
  {
   payload.WithObject("SnowconeDeviceConfiguration", m_snowconeDeviceConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
