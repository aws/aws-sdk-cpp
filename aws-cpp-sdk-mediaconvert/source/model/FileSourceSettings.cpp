/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_sourceFileHasBeenSet(false),
    m_timeDelta(0),
    m_timeDeltaHasBeenSet(false)
{
}

FileSourceSettings::FileSourceSettings(const JsonValue& jsonValue) : 
    m_convert608To708(FileSourceConvert608To708::NOT_SET),
    m_convert608To708HasBeenSet(false),
    m_sourceFileHasBeenSet(false),
    m_timeDelta(0),
    m_timeDeltaHasBeenSet(false)
{
  *this = jsonValue;
}

FileSourceSettings& FileSourceSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("convert608To708"))
  {
    m_convert608To708 = FileSourceConvert608To708Mapper::GetFileSourceConvert608To708ForName(jsonValue.GetString("convert608To708"));

    m_convert608To708HasBeenSet = true;
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
