/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MxfXavcProfileSettings.h>
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

MxfXavcProfileSettings::MxfXavcProfileSettings() : 
    m_durationMode(MxfXavcDurationMode::NOT_SET),
    m_durationModeHasBeenSet(false),
    m_maxAncDataSize(0),
    m_maxAncDataSizeHasBeenSet(false)
{
}

MxfXavcProfileSettings::MxfXavcProfileSettings(JsonView jsonValue) : 
    m_durationMode(MxfXavcDurationMode::NOT_SET),
    m_durationModeHasBeenSet(false),
    m_maxAncDataSize(0),
    m_maxAncDataSizeHasBeenSet(false)
{
  *this = jsonValue;
}

MxfXavcProfileSettings& MxfXavcProfileSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("durationMode"))
  {
    m_durationMode = MxfXavcDurationModeMapper::GetMxfXavcDurationModeForName(jsonValue.GetString("durationMode"));

    m_durationModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxAncDataSize"))
  {
    m_maxAncDataSize = jsonValue.GetInteger("maxAncDataSize");

    m_maxAncDataSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue MxfXavcProfileSettings::Jsonize() const
{
  JsonValue payload;

  if(m_durationModeHasBeenSet)
  {
   payload.WithString("durationMode", MxfXavcDurationModeMapper::GetNameForMxfXavcDurationMode(m_durationMode));
  }

  if(m_maxAncDataSizeHasBeenSet)
  {
   payload.WithInteger("maxAncDataSize", m_maxAncDataSize);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
