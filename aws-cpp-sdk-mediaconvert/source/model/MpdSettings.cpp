/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MpdSettings.h>
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

MpdSettings::MpdSettings() : 
    m_captionContainerType(MpdCaptionContainerType::NOT_SET),
    m_captionContainerTypeHasBeenSet(false),
    m_scte35Esam(MpdScte35Esam::NOT_SET),
    m_scte35EsamHasBeenSet(false),
    m_scte35Source(MpdScte35Source::NOT_SET),
    m_scte35SourceHasBeenSet(false)
{
}

MpdSettings::MpdSettings(JsonView jsonValue) : 
    m_captionContainerType(MpdCaptionContainerType::NOT_SET),
    m_captionContainerTypeHasBeenSet(false),
    m_scte35Esam(MpdScte35Esam::NOT_SET),
    m_scte35EsamHasBeenSet(false),
    m_scte35Source(MpdScte35Source::NOT_SET),
    m_scte35SourceHasBeenSet(false)
{
  *this = jsonValue;
}

MpdSettings& MpdSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("captionContainerType"))
  {
    m_captionContainerType = MpdCaptionContainerTypeMapper::GetMpdCaptionContainerTypeForName(jsonValue.GetString("captionContainerType"));

    m_captionContainerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35Esam"))
  {
    m_scte35Esam = MpdScte35EsamMapper::GetMpdScte35EsamForName(jsonValue.GetString("scte35Esam"));

    m_scte35EsamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35Source"))
  {
    m_scte35Source = MpdScte35SourceMapper::GetMpdScte35SourceForName(jsonValue.GetString("scte35Source"));

    m_scte35SourceHasBeenSet = true;
  }

  return *this;
}

JsonValue MpdSettings::Jsonize() const
{
  JsonValue payload;

  if(m_captionContainerTypeHasBeenSet)
  {
   payload.WithString("captionContainerType", MpdCaptionContainerTypeMapper::GetNameForMpdCaptionContainerType(m_captionContainerType));
  }

  if(m_scte35EsamHasBeenSet)
  {
   payload.WithString("scte35Esam", MpdScte35EsamMapper::GetNameForMpdScte35Esam(m_scte35Esam));
  }

  if(m_scte35SourceHasBeenSet)
  {
   payload.WithString("scte35Source", MpdScte35SourceMapper::GetNameForMpdScte35Source(m_scte35Source));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
