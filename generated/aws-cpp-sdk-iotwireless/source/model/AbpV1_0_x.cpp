﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/AbpV1_0_x.h>
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

AbpV1_0_x::AbpV1_0_x() : 
    m_devAddrHasBeenSet(false),
    m_sessionKeysHasBeenSet(false)
{
}

AbpV1_0_x::AbpV1_0_x(JsonView jsonValue) : 
    m_devAddrHasBeenSet(false),
    m_sessionKeysHasBeenSet(false)
{
  *this = jsonValue;
}

AbpV1_0_x& AbpV1_0_x::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue AbpV1_0_x::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
