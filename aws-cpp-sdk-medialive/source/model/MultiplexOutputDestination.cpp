/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MultiplexOutputDestination.h>
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

MultiplexOutputDestination::MultiplexOutputDestination() : 
    m_mediaConnectSettingsHasBeenSet(false)
{
}

MultiplexOutputDestination::MultiplexOutputDestination(JsonView jsonValue) : 
    m_mediaConnectSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

MultiplexOutputDestination& MultiplexOutputDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mediaConnectSettings"))
  {
    m_mediaConnectSettings = jsonValue.GetObject("mediaConnectSettings");

    m_mediaConnectSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiplexOutputDestination::Jsonize() const
{
  JsonValue payload;

  if(m_mediaConnectSettingsHasBeenSet)
  {
   payload.WithObject("mediaConnectSettings", m_mediaConnectSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
