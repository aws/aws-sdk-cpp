/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/UdpOutputSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

UdpOutputSettings::UdpOutputSettings() : 
    m_bufferMsec(0),
    m_bufferMsecHasBeenSet(false),
    m_containerSettingsHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_fecOutputSettingsHasBeenSet(false)
{
}

UdpOutputSettings::UdpOutputSettings(JsonView jsonValue) : 
    m_bufferMsec(0),
    m_bufferMsecHasBeenSet(false),
    m_containerSettingsHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_fecOutputSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

UdpOutputSettings& UdpOutputSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bufferMsec"))
  {
    m_bufferMsec = jsonValue.GetInteger("bufferMsec");

    m_bufferMsecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerSettings"))
  {
    m_containerSettings = jsonValue.GetObject("containerSettings");

    m_containerSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetObject("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fecOutputSettings"))
  {
    m_fecOutputSettings = jsonValue.GetObject("fecOutputSettings");

    m_fecOutputSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue UdpOutputSettings::Jsonize() const
{
  JsonValue payload;

  if(m_bufferMsecHasBeenSet)
  {
   payload.WithInteger("bufferMsec", m_bufferMsec);

  }

  if(m_containerSettingsHasBeenSet)
  {
   payload.WithObject("containerSettings", m_containerSettings.Jsonize());

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("destination", m_destination.Jsonize());

  }

  if(m_fecOutputSettingsHasBeenSet)
  {
   payload.WithObject("fecOutputSettings", m_fecOutputSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
