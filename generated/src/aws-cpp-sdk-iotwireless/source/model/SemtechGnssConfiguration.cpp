/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SemtechGnssConfiguration.h>
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

SemtechGnssConfiguration::SemtechGnssConfiguration() : 
    m_status(PositionConfigurationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_fec(PositionConfigurationFec::NOT_SET),
    m_fecHasBeenSet(false)
{
}

SemtechGnssConfiguration::SemtechGnssConfiguration(JsonView jsonValue) : 
    m_status(PositionConfigurationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_fec(PositionConfigurationFec::NOT_SET),
    m_fecHasBeenSet(false)
{
  *this = jsonValue;
}

SemtechGnssConfiguration& SemtechGnssConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = PositionConfigurationStatusMapper::GetPositionConfigurationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Fec"))
  {
    m_fec = PositionConfigurationFecMapper::GetPositionConfigurationFecForName(jsonValue.GetString("Fec"));

    m_fecHasBeenSet = true;
  }

  return *this;
}

JsonValue SemtechGnssConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", PositionConfigurationStatusMapper::GetNameForPositionConfigurationStatus(m_status));
  }

  if(m_fecHasBeenSet)
  {
   payload.WithString("Fec", PositionConfigurationFecMapper::GetNameForPositionConfigurationFec(m_fec));
  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
