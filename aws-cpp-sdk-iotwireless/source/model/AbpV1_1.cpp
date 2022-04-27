/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/AbpV1_1.h>
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

AbpV1_1::AbpV1_1() : 
    m_devAddrHasBeenSet(false),
    m_sessionKeysHasBeenSet(false),
    m_fCntStart(0),
    m_fCntStartHasBeenSet(false)
{
}

AbpV1_1::AbpV1_1(JsonView jsonValue) : 
    m_devAddrHasBeenSet(false),
    m_sessionKeysHasBeenSet(false),
    m_fCntStart(0),
    m_fCntStartHasBeenSet(false)
{
  *this = jsonValue;
}

AbpV1_1& AbpV1_1::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DevAddr"))
  {
    m_devAddr = jsonValue.GetString("DevAddr");

    m_devAddrHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SessionKeys"))
  {
    m_sessionKeys = jsonValue.GetObject("SessionKeys");

    m_sessionKeysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FCntStart"))
  {
    m_fCntStart = jsonValue.GetInteger("FCntStart");

    m_fCntStartHasBeenSet = true;
  }

  return *this;
}

JsonValue AbpV1_1::Jsonize() const
{
  JsonValue payload;

  if(m_devAddrHasBeenSet)
  {
   payload.WithString("DevAddr", m_devAddr);

  }

  if(m_sessionKeysHasBeenSet)
  {
   payload.WithObject("SessionKeys", m_sessionKeys.Jsonize());

  }

  if(m_fCntStartHasBeenSet)
  {
   payload.WithInteger("FCntStart", m_fCntStart);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
