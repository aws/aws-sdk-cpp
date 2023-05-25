/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANMulticast.h>
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

LoRaWANMulticast::LoRaWANMulticast() : 
    m_rfRegion(SupportedRfRegion::NOT_SET),
    m_rfRegionHasBeenSet(false),
    m_dlClass(DlClass::NOT_SET),
    m_dlClassHasBeenSet(false)
{
}

LoRaWANMulticast::LoRaWANMulticast(JsonView jsonValue) : 
    m_rfRegion(SupportedRfRegion::NOT_SET),
    m_rfRegionHasBeenSet(false),
    m_dlClass(DlClass::NOT_SET),
    m_dlClassHasBeenSet(false)
{
  *this = jsonValue;
}

LoRaWANMulticast& LoRaWANMulticast::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RfRegion"))
  {
    m_rfRegion = SupportedRfRegionMapper::GetSupportedRfRegionForName(jsonValue.GetString("RfRegion"));

    m_rfRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DlClass"))
  {
    m_dlClass = DlClassMapper::GetDlClassForName(jsonValue.GetString("DlClass"));

    m_dlClassHasBeenSet = true;
  }

  return *this;
}

JsonValue LoRaWANMulticast::Jsonize() const
{
  JsonValue payload;

  if(m_rfRegionHasBeenSet)
  {
   payload.WithString("RfRegion", SupportedRfRegionMapper::GetNameForSupportedRfRegion(m_rfRegion));
  }

  if(m_dlClassHasBeenSet)
  {
   payload.WithString("DlClass", DlClassMapper::GetNameForDlClass(m_dlClass));
  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
