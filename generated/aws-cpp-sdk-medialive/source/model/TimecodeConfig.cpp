/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/TimecodeConfig.h>
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

TimecodeConfig::TimecodeConfig() : 
    m_source(TimecodeConfigSource::NOT_SET),
    m_sourceHasBeenSet(false),
    m_syncThreshold(0),
    m_syncThresholdHasBeenSet(false)
{
}

TimecodeConfig::TimecodeConfig(JsonView jsonValue) : 
    m_source(TimecodeConfigSource::NOT_SET),
    m_sourceHasBeenSet(false),
    m_syncThreshold(0),
    m_syncThresholdHasBeenSet(false)
{
  *this = jsonValue;
}

TimecodeConfig& TimecodeConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = TimecodeConfigSourceMapper::GetTimecodeConfigSourceForName(jsonValue.GetString("source"));

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("syncThreshold"))
  {
    m_syncThreshold = jsonValue.GetInteger("syncThreshold");

    m_syncThresholdHasBeenSet = true;
  }

  return *this;
}

JsonValue TimecodeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", TimecodeConfigSourceMapper::GetNameForTimecodeConfigSource(m_source));
  }

  if(m_syncThresholdHasBeenSet)
  {
   payload.WithInteger("syncThreshold", m_syncThreshold);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
