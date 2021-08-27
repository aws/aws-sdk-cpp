/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/FileSourceSettings.h>
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

FileSourceSettings::FileSourceSettings() : 
    m_convert608To708(FileSourceConvert608To708::NOT_SET),
    m_convert608To708HasBeenSet(false),
    m_framerateHasBeenSet(false),
    m_sourceFileHasBeenSet(false),
    m_timeDelta(0),
    m_timeDeltaHasBeenSet(false)
{
}

FileSourceSettings::FileSourceSettings(JsonView jsonValue) : 
    m_convert608To708(FileSourceConvert608To708::NOT_SET),
    m_convert608To708HasBeenSet(false),
    m_framerateHasBeenSet(false),
    m_sourceFileHasBeenSet(false),
    m_timeDelta(0),
    m_timeDeltaHasBeenSet(false)
{
  *this = jsonValue;
}

FileSourceSettings& FileSourceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("convert608To708"))
  {
    m_convert608To708 = FileSourceConvert608To708Mapper::GetFileSourceConvert608To708ForName(jsonValue.GetString("convert608To708"));

    m_convert608To708HasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerate"))
  {
    m_framerate = jsonValue.GetObject("framerate");

    m_framerateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceFile"))
  {
    m_sourceFile = jsonValue.GetString("sourceFile");

    m_sourceFileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeDelta"))
  {
    m_timeDelta = jsonValue.GetInteger("timeDelta");

    m_timeDeltaHasBeenSet = true;
  }

  return *this;
}

JsonValue FileSourceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_convert608To708HasBeenSet)
  {
   payload.WithString("convert608To708", FileSourceConvert608To708Mapper::GetNameForFileSourceConvert608To708(m_convert608To708));
  }

  if(m_framerateHasBeenSet)
  {
   payload.WithObject("framerate", m_framerate.Jsonize());

  }

  if(m_sourceFileHasBeenSet)
  {
   payload.WithString("sourceFile", m_sourceFile);

  }

  if(m_timeDeltaHasBeenSet)
  {
   payload.WithInteger("timeDelta", m_timeDelta);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
