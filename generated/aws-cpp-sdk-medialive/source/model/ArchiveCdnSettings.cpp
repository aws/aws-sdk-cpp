/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ArchiveCdnSettings.h>
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

ArchiveCdnSettings::ArchiveCdnSettings() : 
    m_archiveS3SettingsHasBeenSet(false)
{
}

ArchiveCdnSettings::ArchiveCdnSettings(JsonView jsonValue) : 
    m_archiveS3SettingsHasBeenSet(false)
{
  *this = jsonValue;
}

ArchiveCdnSettings& ArchiveCdnSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("archiveS3Settings"))
  {
    m_archiveS3Settings = jsonValue.GetObject("archiveS3Settings");

    m_archiveS3SettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue ArchiveCdnSettings::Jsonize() const
{
  JsonValue payload;

  if(m_archiveS3SettingsHasBeenSet)
  {
   payload.WithObject("archiveS3Settings", m_archiveS3Settings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
