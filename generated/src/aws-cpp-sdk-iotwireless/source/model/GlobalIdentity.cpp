/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GlobalIdentity.h>
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

GlobalIdentity::GlobalIdentity() : 
    m_lac(0),
    m_lacHasBeenSet(false),
    m_geranCid(0),
    m_geranCidHasBeenSet(false)
{
}

GlobalIdentity::GlobalIdentity(JsonView jsonValue) : 
    m_lac(0),
    m_lacHasBeenSet(false),
    m_geranCid(0),
    m_geranCidHasBeenSet(false)
{
  *this = jsonValue;
}

GlobalIdentity& GlobalIdentity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Lac"))
  {
    m_lac = jsonValue.GetInteger("Lac");

    m_lacHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeranCid"))
  {
    m_geranCid = jsonValue.GetInteger("GeranCid");

    m_geranCidHasBeenSet = true;
  }

  return *this;
}

JsonValue GlobalIdentity::Jsonize() const
{
  JsonValue payload;

  if(m_lacHasBeenSet)
  {
   payload.WithInteger("Lac", m_lac);

  }

  if(m_geranCidHasBeenSet)
  {
   payload.WithInteger("GeranCid", m_geranCid);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
