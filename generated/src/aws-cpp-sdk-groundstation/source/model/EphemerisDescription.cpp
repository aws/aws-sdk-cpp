/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/EphemerisDescription.h>
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

EphemerisDescription::EphemerisDescription() : 
    m_ephemerisDataHasBeenSet(false),
    m_sourceS3ObjectHasBeenSet(false)
{
}

EphemerisDescription::EphemerisDescription(JsonView jsonValue) : 
    m_ephemerisDataHasBeenSet(false),
    m_sourceS3ObjectHasBeenSet(false)
{
  *this = jsonValue;
}

EphemerisDescription& EphemerisDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ephemerisData"))
  {
    m_ephemerisData = jsonValue.GetString("ephemerisData");

    m_ephemerisDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceS3Object"))
  {
    m_sourceS3Object = jsonValue.GetObject("sourceS3Object");

    m_sourceS3ObjectHasBeenSet = true;
  }

  return *this;
}

JsonValue EphemerisDescription::Jsonize() const
{
  JsonValue payload;

  if(m_ephemerisDataHasBeenSet)
  {
   payload.WithString("ephemerisData", m_ephemerisData);

  }

  if(m_sourceS3ObjectHasBeenSet)
  {
   payload.WithObject("sourceS3Object", m_sourceS3Object.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
