/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/EphemerisTypeDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

EphemerisTypeDescription::EphemerisTypeDescription() : 
    m_oemHasBeenSet(false),
    m_tleHasBeenSet(false)
{
}

EphemerisTypeDescription::EphemerisTypeDescription(JsonView jsonValue) : 
    m_oemHasBeenSet(false),
    m_tleHasBeenSet(false)
{
  *this = jsonValue;
}

EphemerisTypeDescription& EphemerisTypeDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("oem"))
  {
    m_oem = jsonValue.GetObject("oem");

    m_oemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tle"))
  {
    m_tle = jsonValue.GetObject("tle");

    m_tleHasBeenSet = true;
  }

  return *this;
}

JsonValue EphemerisTypeDescription::Jsonize() const
{
  JsonValue payload;

  if(m_oemHasBeenSet)
  {
   payload.WithObject("oem", m_oem.Jsonize());

  }

  if(m_tleHasBeenSet)
  {
   payload.WithObject("tle", m_tle.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
