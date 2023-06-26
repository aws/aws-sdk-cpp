/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GsmLocalId.h>
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

GsmLocalId::GsmLocalId() : 
    m_bsic(0),
    m_bsicHasBeenSet(false),
    m_bcch(0),
    m_bcchHasBeenSet(false)
{
}

GsmLocalId::GsmLocalId(JsonView jsonValue) : 
    m_bsic(0),
    m_bsicHasBeenSet(false),
    m_bcch(0),
    m_bcchHasBeenSet(false)
{
  *this = jsonValue;
}

GsmLocalId& GsmLocalId::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Bsic"))
  {
    m_bsic = jsonValue.GetInteger("Bsic");

    m_bsicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Bcch"))
  {
    m_bcch = jsonValue.GetInteger("Bcch");

    m_bcchHasBeenSet = true;
  }

  return *this;
}

JsonValue GsmLocalId::Jsonize() const
{
  JsonValue payload;

  if(m_bsicHasBeenSet)
  {
   payload.WithInteger("Bsic", m_bsic);

  }

  if(m_bcchHasBeenSet)
  {
   payload.WithInteger("Bcch", m_bcch);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
