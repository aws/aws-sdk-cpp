/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/CustomerManagedFleetConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

CustomerManagedFleetConfiguration::CustomerManagedFleetConfiguration() : 
    m_mode(AutoScalingMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_workerCapabilitiesHasBeenSet(false),
    m_storageProfileIdHasBeenSet(false)
{
}

CustomerManagedFleetConfiguration::CustomerManagedFleetConfiguration(JsonView jsonValue)
  : CustomerManagedFleetConfiguration()
{
  *this = jsonValue;
}

CustomerManagedFleetConfiguration& CustomerManagedFleetConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mode"))
  {
    m_mode = AutoScalingModeMapper::GetAutoScalingModeForName(jsonValue.GetString("mode"));

    m_modeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workerCapabilities"))
  {
    m_workerCapabilities = jsonValue.GetObject("workerCapabilities");

    m_workerCapabilitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storageProfileId"))
  {
    m_storageProfileId = jsonValue.GetString("storageProfileId");

    m_storageProfileIdHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomerManagedFleetConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", AutoScalingModeMapper::GetNameForAutoScalingMode(m_mode));
  }

  if(m_workerCapabilitiesHasBeenSet)
  {
   payload.WithObject("workerCapabilities", m_workerCapabilities.Jsonize());

  }

  if(m_storageProfileIdHasBeenSet)
  {
   payload.WithString("storageProfileId", m_storageProfileId);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
