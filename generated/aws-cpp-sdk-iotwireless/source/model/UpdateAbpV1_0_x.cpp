/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/UpdateAbpV1_0_x.h>
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

UpdateAbpV1_0_x::UpdateAbpV1_0_x() : 
    m_fCntStart(0),
    m_fCntStartHasBeenSet(false)
{
}

UpdateAbpV1_0_x::UpdateAbpV1_0_x(JsonView jsonValue) : 
    m_fCntStart(0),
    m_fCntStartHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateAbpV1_0_x& UpdateAbpV1_0_x::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FCntStart"))
  {
    m_fCntStart = jsonValue.GetInteger("FCntStart");

    m_fCntStartHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateAbpV1_0_x::Jsonize() const
{
  JsonValue payload;

  if(m_fCntStartHasBeenSet)
  {
   payload.WithInteger("FCntStart", m_fCntStart);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
