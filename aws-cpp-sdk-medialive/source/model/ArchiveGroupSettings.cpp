/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ArchiveGroupSettings.h>
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

ArchiveGroupSettings::ArchiveGroupSettings() : 
    m_archiveCdnSettingsHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_rolloverInterval(0),
    m_rolloverIntervalHasBeenSet(false)
{
}

ArchiveGroupSettings::ArchiveGroupSettings(JsonView jsonValue) : 
    m_archiveCdnSettingsHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_rolloverInterval(0),
    m_rolloverIntervalHasBeenSet(false)
{
  *this = jsonValue;
}

ArchiveGroupSettings& ArchiveGroupSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("archiveCdnSettings"))
  {
    m_archiveCdnSettings = jsonValue.GetObject("archiveCdnSettings");

    m_archiveCdnSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetObject("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rolloverInterval"))
  {
    m_rolloverInterval = jsonValue.GetInteger("rolloverInterval");

    m_rolloverIntervalHasBeenSet = true;
  }

  return *this;
}

JsonValue ArchiveGroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_archiveCdnSettingsHasBeenSet)
  {
   payload.WithObject("archiveCdnSettings", m_archiveCdnSettings.Jsonize());

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("destination", m_destination.Jsonize());

  }

  if(m_rolloverIntervalHasBeenSet)
  {
   payload.WithInteger("rolloverInterval", m_rolloverInterval);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
