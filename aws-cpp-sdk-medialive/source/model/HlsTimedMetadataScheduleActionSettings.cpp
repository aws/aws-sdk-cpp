/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsTimedMetadataScheduleActionSettings.h>
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

HlsTimedMetadataScheduleActionSettings::HlsTimedMetadataScheduleActionSettings() : 
    m_id3HasBeenSet(false)
{
}

HlsTimedMetadataScheduleActionSettings::HlsTimedMetadataScheduleActionSettings(JsonView jsonValue) : 
    m_id3HasBeenSet(false)
{
  *this = jsonValue;
}

HlsTimedMetadataScheduleActionSettings& HlsTimedMetadataScheduleActionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id3"))
  {
    m_id3 = jsonValue.GetString("id3");

    m_id3HasBeenSet = true;
  }

  return *this;
}

JsonValue HlsTimedMetadataScheduleActionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_id3HasBeenSet)
  {
   payload.WithString("id3", m_id3);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
