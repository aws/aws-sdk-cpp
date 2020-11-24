/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmfcSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

CmfcSettings::CmfcSettings() : 
    m_audioDuration(CmfcAudioDuration::NOT_SET),
    m_audioDurationHasBeenSet(false),
    m_scte35Esam(CmfcScte35Esam::NOT_SET),
    m_scte35EsamHasBeenSet(false),
    m_scte35Source(CmfcScte35Source::NOT_SET),
    m_scte35SourceHasBeenSet(false)
{
}

CmfcSettings::CmfcSettings(JsonView jsonValue) : 
    m_audioDuration(CmfcAudioDuration::NOT_SET),
    m_audioDurationHasBeenSet(false),
    m_scte35Esam(CmfcScte35Esam::NOT_SET),
    m_scte35EsamHasBeenSet(false),
    m_scte35Source(CmfcScte35Source::NOT_SET),
    m_scte35SourceHasBeenSet(false)
{
  *this = jsonValue;
}

CmfcSettings& CmfcSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioDuration"))
  {
    m_audioDuration = CmfcAudioDurationMapper::GetCmfcAudioDurationForName(jsonValue.GetString("audioDuration"));

    m_audioDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35Esam"))
  {
    m_scte35Esam = CmfcScte35EsamMapper::GetCmfcScte35EsamForName(jsonValue.GetString("scte35Esam"));

    m_scte35EsamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35Source"))
  {
    m_scte35Source = CmfcScte35SourceMapper::GetCmfcScte35SourceForName(jsonValue.GetString("scte35Source"));

    m_scte35SourceHasBeenSet = true;
  }

  return *this;
}

JsonValue CmfcSettings::Jsonize() const
{
  JsonValue payload;

  if(m_audioDurationHasBeenSet)
  {
   payload.WithString("audioDuration", CmfcAudioDurationMapper::GetNameForCmfcAudioDuration(m_audioDuration));
  }

  if(m_scte35EsamHasBeenSet)
  {
   payload.WithString("scte35Esam", CmfcScte35EsamMapper::GetNameForCmfcScte35Esam(m_scte35Esam));
  }

  if(m_scte35SourceHasBeenSet)
  {
   payload.WithString("scte35Source", CmfcScte35SourceMapper::GetNameForCmfcScte35Source(m_scte35Source));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
