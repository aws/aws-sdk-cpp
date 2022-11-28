/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/CdmaLocalId.h>
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

CdmaLocalId::CdmaLocalId() : 
    m_pnOffset(0),
    m_pnOffsetHasBeenSet(false),
    m_cdmaChannel(0),
    m_cdmaChannelHasBeenSet(false)
{
}

CdmaLocalId::CdmaLocalId(JsonView jsonValue) : 
    m_pnOffset(0),
    m_pnOffsetHasBeenSet(false),
    m_cdmaChannel(0),
    m_cdmaChannelHasBeenSet(false)
{
  *this = jsonValue;
}

CdmaLocalId& CdmaLocalId::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PnOffset"))
  {
    m_pnOffset = jsonValue.GetInteger("PnOffset");

    m_pnOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CdmaChannel"))
  {
    m_cdmaChannel = jsonValue.GetInteger("CdmaChannel");

    m_cdmaChannelHasBeenSet = true;
  }

  return *this;
}

JsonValue CdmaLocalId::Jsonize() const
{
  JsonValue payload;

  if(m_pnOffsetHasBeenSet)
  {
   payload.WithInteger("PnOffset", m_pnOffset);

  }

  if(m_cdmaChannelHasBeenSet)
  {
   payload.WithInteger("CdmaChannel", m_cdmaChannel);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
