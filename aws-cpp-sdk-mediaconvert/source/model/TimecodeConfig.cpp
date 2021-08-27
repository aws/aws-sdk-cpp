/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/TimecodeConfig.h>
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

TimecodeConfig::TimecodeConfig() : 
    m_anchorHasBeenSet(false),
    m_source(TimecodeSource::NOT_SET),
    m_sourceHasBeenSet(false),
    m_startHasBeenSet(false),
    m_timestampOffsetHasBeenSet(false)
{
}

TimecodeConfig::TimecodeConfig(JsonView jsonValue) : 
    m_anchorHasBeenSet(false),
    m_source(TimecodeSource::NOT_SET),
    m_sourceHasBeenSet(false),
    m_startHasBeenSet(false),
    m_timestampOffsetHasBeenSet(false)
{
  *this = jsonValue;
}

TimecodeConfig& TimecodeConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("anchor"))
  {
    m_anchor = jsonValue.GetString("anchor");

    m_anchorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source"))
  {
    m_source = TimecodeSourceMapper::GetTimecodeSourceForName(jsonValue.GetString("source"));

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("start"))
  {
    m_start = jsonValue.GetString("start");

    m_startHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestampOffset"))
  {
    m_timestampOffset = jsonValue.GetString("timestampOffset");

    m_timestampOffsetHasBeenSet = true;
  }

  return *this;
}

JsonValue TimecodeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_anchorHasBeenSet)
  {
   payload.WithString("anchor", m_anchor);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", TimecodeSourceMapper::GetNameForTimecodeSource(m_source));
  }

  if(m_startHasBeenSet)
  {
   payload.WithString("start", m_start);

  }

  if(m_timestampOffsetHasBeenSet)
  {
   payload.WithString("timestampOffset", m_timestampOffset);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
