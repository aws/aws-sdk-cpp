/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/UplinkEchoConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

UplinkEchoConfig::UplinkEchoConfig() : 
    m_antennaUplinkConfigArnHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

UplinkEchoConfig::UplinkEchoConfig(JsonView jsonValue) : 
    m_antennaUplinkConfigArnHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
  *this = jsonValue;
}

UplinkEchoConfig& UplinkEchoConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("antennaUplinkConfigArn"))
  {
    m_antennaUplinkConfigArn = jsonValue.GetString("antennaUplinkConfigArn");

    m_antennaUplinkConfigArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  return *this;
}

JsonValue UplinkEchoConfig::Jsonize() const
{
  JsonValue payload;

  if(m_antennaUplinkConfigArnHasBeenSet)
  {
   payload.WithString("antennaUplinkConfigArn", m_antennaUplinkConfigArn);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
