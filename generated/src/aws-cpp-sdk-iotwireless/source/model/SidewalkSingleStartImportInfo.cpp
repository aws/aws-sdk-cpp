/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SidewalkSingleStartImportInfo.h>
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

SidewalkSingleStartImportInfo::SidewalkSingleStartImportInfo() : 
    m_sidewalkManufacturingSnHasBeenSet(false)
{
}

SidewalkSingleStartImportInfo::SidewalkSingleStartImportInfo(JsonView jsonValue) : 
    m_sidewalkManufacturingSnHasBeenSet(false)
{
  *this = jsonValue;
}

SidewalkSingleStartImportInfo& SidewalkSingleStartImportInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SidewalkManufacturingSn"))
  {
    m_sidewalkManufacturingSn = jsonValue.GetString("SidewalkManufacturingSn");

    m_sidewalkManufacturingSnHasBeenSet = true;
  }

  return *this;
}

JsonValue SidewalkSingleStartImportInfo::Jsonize() const
{
  JsonValue payload;

  if(m_sidewalkManufacturingSnHasBeenSet)
  {
   payload.WithString("SidewalkManufacturingSn", m_sidewalkManufacturingSn);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
