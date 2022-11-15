/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AvailSettings.h>
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

AvailSettings::AvailSettings() : 
    m_esamHasBeenSet(false),
    m_scte35SpliceInsertHasBeenSet(false),
    m_scte35TimeSignalAposHasBeenSet(false)
{
}

AvailSettings::AvailSettings(JsonView jsonValue) : 
    m_esamHasBeenSet(false),
    m_scte35SpliceInsertHasBeenSet(false),
    m_scte35TimeSignalAposHasBeenSet(false)
{
  *this = jsonValue;
}

AvailSettings& AvailSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("esam"))
  {
    m_esam = jsonValue.GetObject("esam");

    m_esamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35SpliceInsert"))
  {
    m_scte35SpliceInsert = jsonValue.GetObject("scte35SpliceInsert");

    m_scte35SpliceInsertHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35TimeSignalApos"))
  {
    m_scte35TimeSignalApos = jsonValue.GetObject("scte35TimeSignalApos");

    m_scte35TimeSignalAposHasBeenSet = true;
  }

  return *this;
}

JsonValue AvailSettings::Jsonize() const
{
  JsonValue payload;

  if(m_esamHasBeenSet)
  {
   payload.WithObject("esam", m_esam.Jsonize());

  }

  if(m_scte35SpliceInsertHasBeenSet)
  {
   payload.WithObject("scte35SpliceInsert", m_scte35SpliceInsert.Jsonize());

  }

  if(m_scte35TimeSignalAposHasBeenSet)
  {
   payload.WithObject("scte35TimeSignalApos", m_scte35TimeSignalApos.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
