/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GsmNmrObj.h>
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

GsmNmrObj::GsmNmrObj() : 
    m_bsic(0),
    m_bsicHasBeenSet(false),
    m_bcch(0),
    m_bcchHasBeenSet(false),
    m_rxLevel(0),
    m_rxLevelHasBeenSet(false),
    m_globalIdentityHasBeenSet(false)
{
}

GsmNmrObj::GsmNmrObj(JsonView jsonValue) : 
    m_bsic(0),
    m_bsicHasBeenSet(false),
    m_bcch(0),
    m_bcchHasBeenSet(false),
    m_rxLevel(0),
    m_rxLevelHasBeenSet(false),
    m_globalIdentityHasBeenSet(false)
{
  *this = jsonValue;
}

GsmNmrObj& GsmNmrObj::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("RxLevel"))
  {
    m_rxLevel = jsonValue.GetInteger("RxLevel");

    m_rxLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlobalIdentity"))
  {
    m_globalIdentity = jsonValue.GetObject("GlobalIdentity");

    m_globalIdentityHasBeenSet = true;
  }

  return *this;
}

JsonValue GsmNmrObj::Jsonize() const
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

  if(m_rxLevelHasBeenSet)
  {
   payload.WithInteger("RxLevel", m_rxLevel);

  }

  if(m_globalIdentityHasBeenSet)
  {
   payload.WithObject("GlobalIdentity", m_globalIdentity.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
