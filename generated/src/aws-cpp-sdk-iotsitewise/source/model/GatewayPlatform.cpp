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

GatewayPlatform::GatewayPlatform(JsonView jsonValue)
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
  if(jsonValue.ValueExists("siemensIE"))
  {
    m_siemensIE = jsonValue.GetObject("siemensIE");
    m_siemensIEHasBeenSet = true;
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

  if(m_siemensIEHasBeenSet)
  {
   payload.WithObject("siemensIE", m_siemensIE.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
