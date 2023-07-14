/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MultiplexProgramChannelDestinationSettings.h>
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

MultiplexProgramChannelDestinationSettings::MultiplexProgramChannelDestinationSettings() : 
    m_multiplexIdHasBeenSet(false),
    m_programNameHasBeenSet(false)
{
}

MultiplexProgramChannelDestinationSettings::MultiplexProgramChannelDestinationSettings(JsonView jsonValue) : 
    m_multiplexIdHasBeenSet(false),
    m_programNameHasBeenSet(false)
{
  *this = jsonValue;
}

MultiplexProgramChannelDestinationSettings& MultiplexProgramChannelDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("multiplexId"))
  {
    m_multiplexId = jsonValue.GetString("multiplexId");

    m_multiplexIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programName"))
  {
    m_programName = jsonValue.GetString("programName");

    m_programNameHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiplexProgramChannelDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_multiplexIdHasBeenSet)
  {
   payload.WithString("multiplexId", m_multiplexId);

  }

  if(m_programNameHasBeenSet)
  {
   payload.WithString("programName", m_programName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
