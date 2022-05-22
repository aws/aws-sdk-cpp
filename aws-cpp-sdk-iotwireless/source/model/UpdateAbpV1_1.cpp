/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/UpdateAbpV1_1.h>
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

UpdateAbpV1_1::UpdateAbpV1_1() : 
    m_fCntStart(0),
    m_fCntStartHasBeenSet(false)
{
}

UpdateAbpV1_1::UpdateAbpV1_1(JsonView jsonValue) : 
    m_fCntStart(0),
    m_fCntStartHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateAbpV1_1& UpdateAbpV1_1::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FCntStart"))
  {
    m_fCntStart = jsonValue.GetInteger("FCntStart");

    m_fCntStartHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateAbpV1_1::Jsonize() const
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
