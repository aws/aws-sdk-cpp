/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANServiceProfile.h>
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

LoRaWANServiceProfile::LoRaWANServiceProfile(JsonView jsonValue)
{
  *this = jsonValue;
}

LoRaWANServiceProfile& LoRaWANServiceProfile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AddGwMetadata"))
  {
    m_addGwMetadata = jsonValue.GetBool("AddGwMetadata");
    m_addGwMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DrMin"))
  {
    m_drMin = jsonValue.GetInteger("DrMin");
    m_drMinHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DrMax"))
  {
    m_drMax = jsonValue.GetInteger("DrMax");
    m_drMaxHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrAllowed"))
  {
    m_prAllowed = jsonValue.GetBool("PrAllowed");
    m_prAllowedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RaAllowed"))
  {
    m_raAllowed = jsonValue.GetBool("RaAllowed");
    m_raAllowedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TxPowerIndexMin"))
  {
    m_txPowerIndexMin = jsonValue.GetInteger("TxPowerIndexMin");
    m_txPowerIndexMinHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TxPowerIndexMax"))
  {
    m_txPowerIndexMax = jsonValue.GetInteger("TxPowerIndexMax");
    m_txPowerIndexMaxHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NbTransMin"))
  {
    m_nbTransMin = jsonValue.GetInteger("NbTransMin");
    m_nbTransMinHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NbTransMax"))
  {
    m_nbTransMax = jsonValue.GetInteger("NbTransMax");
    m_nbTransMaxHasBeenSet = true;
  }
  return *this;
}

JsonValue LoRaWANServiceProfile::Jsonize() const
{
  JsonValue payload;

  if(m_addGwMetadataHasBeenSet)
  {
   payload.WithBool("AddGwMetadata", m_addGwMetadata);

  }

  if(m_drMinHasBeenSet)
  {
   payload.WithInteger("DrMin", m_drMin);

  }

  if(m_drMaxHasBeenSet)
  {
   payload.WithInteger("DrMax", m_drMax);

  }

  if(m_prAllowedHasBeenSet)
  {
   payload.WithBool("PrAllowed", m_prAllowed);

  }

  if(m_raAllowedHasBeenSet)
  {
   payload.WithBool("RaAllowed", m_raAllowed);

  }

  if(m_txPowerIndexMinHasBeenSet)
  {
   payload.WithInteger("TxPowerIndexMin", m_txPowerIndexMin);

  }

  if(m_txPowerIndexMaxHasBeenSet)
  {
   payload.WithInteger("TxPowerIndexMax", m_txPowerIndexMax);

  }

  if(m_nbTransMinHasBeenSet)
  {
   payload.WithInteger("NbTransMin", m_nbTransMin);

  }

  if(m_nbTransMaxHasBeenSet)
  {
   payload.WithInteger("NbTransMax", m_nbTransMax);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
