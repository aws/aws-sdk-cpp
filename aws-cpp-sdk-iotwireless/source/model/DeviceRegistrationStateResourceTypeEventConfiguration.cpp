/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/DeviceRegistrationStateResourceTypeEventConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

DeviceRegistrationStateResourceTypeEventConfiguration::DeviceRegistrationStateResourceTypeEventConfiguration() : 
    m_sidewalkHasBeenSet(false)
{
}

DeviceRegistrationStateResourceTypeEventConfiguration::DeviceRegistrationStateResourceTypeEventConfiguration(JsonView jsonValue) : 
    m_sidewalkHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceRegistrationStateResourceTypeEventConfiguration& DeviceRegistrationStateResourceTypeEventConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Sidewalk"))
  {
    m_sidewalk = jsonValue.GetObject("Sidewalk");

    m_sidewalkHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceRegistrationStateResourceTypeEventConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_sidewalkHasBeenSet)
  {
   payload.WithObject("Sidewalk", m_sidewalk.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
