/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/EphemerisMetaData.h>
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

EphemerisMetaData::EphemerisMetaData() : 
    m_ephemerisIdHasBeenSet(false),
    m_epochHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_source(EphemerisSource::NOT_SET),
    m_sourceHasBeenSet(false)
{
}

EphemerisMetaData::EphemerisMetaData(JsonView jsonValue) : 
    m_ephemerisIdHasBeenSet(false),
    m_epochHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_source(EphemerisSource::NOT_SET),
    m_sourceHasBeenSet(false)
{
  *this = jsonValue;
}

EphemerisMetaData& EphemerisMetaData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ephemerisId"))
  {
    m_ephemerisId = jsonValue.GetString("ephemerisId");

    m_ephemerisIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("epoch"))
  {
    m_epoch = jsonValue.GetDouble("epoch");

    m_epochHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source"))
  {
    m_source = EphemerisSourceMapper::GetEphemerisSourceForName(jsonValue.GetString("source"));

    m_sourceHasBeenSet = true;
  }

  return *this;
}

JsonValue EphemerisMetaData::Jsonize() const
{
  JsonValue payload;

  if(m_ephemerisIdHasBeenSet)
  {
   payload.WithString("ephemerisId", m_ephemerisId);

  }

  if(m_epochHasBeenSet)
  {
   payload.WithDouble("epoch", m_epoch.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", EphemerisSourceMapper::GetNameForEphemerisSource(m_source));
  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
