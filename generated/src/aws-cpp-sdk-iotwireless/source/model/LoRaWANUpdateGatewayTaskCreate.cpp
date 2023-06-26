/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANUpdateGatewayTaskCreate.h>
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

LoRaWANUpdateGatewayTaskCreate::LoRaWANUpdateGatewayTaskCreate() : 
    m_updateSignatureHasBeenSet(false),
    m_sigKeyCrc(0),
    m_sigKeyCrcHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_updateVersionHasBeenSet(false)
{
}

LoRaWANUpdateGatewayTaskCreate::LoRaWANUpdateGatewayTaskCreate(JsonView jsonValue) : 
    m_updateSignatureHasBeenSet(false),
    m_sigKeyCrc(0),
    m_sigKeyCrcHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_updateVersionHasBeenSet(false)
{
  *this = jsonValue;
}

LoRaWANUpdateGatewayTaskCreate& LoRaWANUpdateGatewayTaskCreate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UpdateSignature"))
  {
    m_updateSignature = jsonValue.GetString("UpdateSignature");

    m_updateSignatureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SigKeyCrc"))
  {
    m_sigKeyCrc = jsonValue.GetInt64("SigKeyCrc");

    m_sigKeyCrcHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentVersion"))
  {
    m_currentVersion = jsonValue.GetObject("CurrentVersion");

    m_currentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateVersion"))
  {
    m_updateVersion = jsonValue.GetObject("UpdateVersion");

    m_updateVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue LoRaWANUpdateGatewayTaskCreate::Jsonize() const
{
  JsonValue payload;

  if(m_updateSignatureHasBeenSet)
  {
   payload.WithString("UpdateSignature", m_updateSignature);

  }

  if(m_sigKeyCrcHasBeenSet)
  {
   payload.WithInt64("SigKeyCrc", m_sigKeyCrc);

  }

  if(m_currentVersionHasBeenSet)
  {
   payload.WithObject("CurrentVersion", m_currentVersion.Jsonize());

  }

  if(m_updateVersionHasBeenSet)
  {
   payload.WithObject("UpdateVersion", m_updateVersion.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
