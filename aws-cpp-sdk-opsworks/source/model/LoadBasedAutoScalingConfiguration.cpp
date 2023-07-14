/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/LoadBasedAutoScalingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

LoadBasedAutoScalingConfiguration::LoadBasedAutoScalingConfiguration() : 
    m_layerIdHasBeenSet(false),
    m_enable(false),
    m_enableHasBeenSet(false),
    m_upScalingHasBeenSet(false),
    m_downScalingHasBeenSet(false)
{
}

LoadBasedAutoScalingConfiguration::LoadBasedAutoScalingConfiguration(JsonView jsonValue) : 
    m_layerIdHasBeenSet(false),
    m_enable(false),
    m_enableHasBeenSet(false),
    m_upScalingHasBeenSet(false),
    m_downScalingHasBeenSet(false)
{
  *this = jsonValue;
}

LoadBasedAutoScalingConfiguration& LoadBasedAutoScalingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LayerId"))
  {
    m_layerId = jsonValue.GetString("LayerId");

    m_layerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enable"))
  {
    m_enable = jsonValue.GetBool("Enable");

    m_enableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpScaling"))
  {
    m_upScaling = jsonValue.GetObject("UpScaling");

    m_upScalingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DownScaling"))
  {
    m_downScaling = jsonValue.GetObject("DownScaling");

    m_downScalingHasBeenSet = true;
  }

  return *this;
}

JsonValue LoadBasedAutoScalingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_layerIdHasBeenSet)
  {
   payload.WithString("LayerId", m_layerId);

  }

  if(m_enableHasBeenSet)
  {
   payload.WithBool("Enable", m_enable);

  }

  if(m_upScalingHasBeenSet)
  {
   payload.WithObject("UpScaling", m_upScaling.Jsonize());

  }

  if(m_downScalingHasBeenSet)
  {
   payload.WithObject("DownScaling", m_downScaling.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
