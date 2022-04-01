/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/GatewayPlatform.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

GatewayPlatform::GatewayPlatform() : 
    m_greengrassHasBeenSet(false),
    m_greengrassV2HasBeenSet(false)
{
}

GatewayPlatform::GatewayPlatform(JsonView jsonValue) : 
    m_greengrassHasBeenSet(false),
    m_greengrassV2HasBeenSet(false)
{
  *this = jsonValue;
}

GatewayPlatform& GatewayPlatform::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("greengrass"))
  {
    m_greengrass = jsonValue.GetObject("greengrass");

    m_greengrassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("greengrassV2"))
  {
    m_greengrassV2 = jsonValue.GetObject("greengrassV2");

    m_greengrassV2HasBeenSet = true;
  }

  return *this;
}

JsonValue GatewayPlatform::Jsonize() const
{
  JsonValue payload;

  if(m_greengrassHasBeenSet)
  {
   payload.WithObject("greengrass", m_greengrass.Jsonize());

  }

  if(m_greengrassV2HasBeenSet)
  {
   payload.WithObject("greengrassV2", m_greengrassV2.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
