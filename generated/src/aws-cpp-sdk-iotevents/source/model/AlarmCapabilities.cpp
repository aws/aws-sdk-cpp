/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/AlarmCapabilities.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

AlarmCapabilities::AlarmCapabilities() : 
    m_initializationConfigurationHasBeenSet(false),
    m_acknowledgeFlowHasBeenSet(false)
{
}

AlarmCapabilities::AlarmCapabilities(JsonView jsonValue) : 
    m_initializationConfigurationHasBeenSet(false),
    m_acknowledgeFlowHasBeenSet(false)
{
  *this = jsonValue;
}

AlarmCapabilities& AlarmCapabilities::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("initializationConfiguration"))
  {
    m_initializationConfiguration = jsonValue.GetObject("initializationConfiguration");

    m_initializationConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("acknowledgeFlow"))
  {
    m_acknowledgeFlow = jsonValue.GetObject("acknowledgeFlow");

    m_acknowledgeFlowHasBeenSet = true;
  }

  return *this;
}

JsonValue AlarmCapabilities::Jsonize() const
{
  JsonValue payload;

  if(m_initializationConfigurationHasBeenSet)
  {
   payload.WithObject("initializationConfiguration", m_initializationConfiguration.Jsonize());

  }

  if(m_acknowledgeFlowHasBeenSet)
  {
   payload.WithObject("acknowledgeFlow", m_acknowledgeFlow.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
