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
    m_addGwMetadataHasBeenSet(false)
{
}

LoRaWANServiceProfile::LoRaWANServiceProfile(JsonView jsonValue) : 
    m_addGwMetadata(false),
    m_addGwMetadataHasBeenSet(false)
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

  return *this;
}

JsonValue LoRaWANServiceProfile::Jsonize() const
{
  JsonValue payload;

  if(m_addGwMetadataHasBeenSet)
  {
   payload.WithBool("AddGwMetadata", m_addGwMetadata);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
