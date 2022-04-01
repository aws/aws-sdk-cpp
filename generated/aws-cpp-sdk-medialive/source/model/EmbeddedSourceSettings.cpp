/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/EmbeddedSourceSettings.h>
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

EmbeddedSourceSettings::EmbeddedSourceSettings() : 
    m_convert608To708(EmbeddedConvert608To708::NOT_SET),
    m_convert608To708HasBeenSet(false),
    m_scte20Detection(EmbeddedScte20Detection::NOT_SET),
    m_scte20DetectionHasBeenSet(false),
    m_source608ChannelNumber(0),
    m_source608ChannelNumberHasBeenSet(false),
    m_source608TrackNumber(0),
    m_source608TrackNumberHasBeenSet(false)
{
}

EmbeddedSourceSettings::EmbeddedSourceSettings(JsonView jsonValue) : 
    m_convert608To708(EmbeddedConvert608To708::NOT_SET),
    m_convert608To708HasBeenSet(false),
    m_scte20Detection(EmbeddedScte20Detection::NOT_SET),
    m_scte20DetectionHasBeenSet(false),
    m_source608ChannelNumber(0),
    m_source608ChannelNumberHasBeenSet(false),
    m_source608TrackNumber(0),
    m_source608TrackNumberHasBeenSet(false)
{
  *this = jsonValue;
}

EmbeddedSourceSettings& EmbeddedSourceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("convert608To708"))
  {
    m_convert608To708 = EmbeddedConvert608To708Mapper::GetEmbeddedConvert608To708ForName(jsonValue.GetString("convert608To708"));

    m_convert608To708HasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte20Detection"))
  {
    m_scte20Detection = EmbeddedScte20DetectionMapper::GetEmbeddedScte20DetectionForName(jsonValue.GetString("scte20Detection"));

    m_scte20DetectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source608ChannelNumber"))
  {
    m_source608ChannelNumber = jsonValue.GetInteger("source608ChannelNumber");

    m_source608ChannelNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source608TrackNumber"))
  {
    m_source608TrackNumber = jsonValue.GetInteger("source608TrackNumber");

    m_source608TrackNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue EmbeddedSourceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_convert608To708HasBeenSet)
  {
   payload.WithString("convert608To708", EmbeddedConvert608To708Mapper::GetNameForEmbeddedConvert608To708(m_convert608To708));
  }

  if(m_scte20DetectionHasBeenSet)
  {
   payload.WithString("scte20Detection", EmbeddedScte20DetectionMapper::GetNameForEmbeddedScte20Detection(m_scte20Detection));
  }

  if(m_source608ChannelNumberHasBeenSet)
  {
   payload.WithInteger("source608ChannelNumber", m_source608ChannelNumber);

  }

  if(m_source608TrackNumberHasBeenSet)
  {
   payload.WithInteger("source608TrackNumber", m_source608TrackNumber);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
