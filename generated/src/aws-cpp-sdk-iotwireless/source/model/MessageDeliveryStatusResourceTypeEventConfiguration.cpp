/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/MessageDeliveryStatusResourceTypeEventConfiguration.h>
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

MessageDeliveryStatusResourceTypeEventConfiguration::MessageDeliveryStatusResourceTypeEventConfiguration() : 
    m_sidewalkHasBeenSet(false)
{
}

MessageDeliveryStatusResourceTypeEventConfiguration::MessageDeliveryStatusResourceTypeEventConfiguration(JsonView jsonValue) : 
    m_sidewalkHasBeenSet(false)
{
  *this = jsonValue;
}

MessageDeliveryStatusResourceTypeEventConfiguration& MessageDeliveryStatusResourceTypeEventConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Sidewalk"))
  {
    m_sidewalk = jsonValue.GetObject("Sidewalk");

    m_sidewalkHasBeenSet = true;
  }

  return *this;
}

JsonValue MessageDeliveryStatusResourceTypeEventConfiguration::Jsonize() const
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
