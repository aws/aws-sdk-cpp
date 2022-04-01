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

LoRaWANServiceProfile::LoRaWANServiceProfile() : 
    m_addGwMetadata(false),
    m_addGwMetadataHasBeenSet(false),
    m_drMin(0),
    m_drMinHasBeenSet(false),
    m_drMax(0),
    m_drMaxHasBeenSet(false)
{
}

LoRaWANServiceProfile::LoRaWANServiceProfile(JsonView jsonValue) : 
    m_addGwMetadata(false),
    m_addGwMetadataHasBeenSet(false),
    m_drMin(0),
    m_drMinHasBeenSet(false),
    m_drMax(0),
    m_drMaxHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
