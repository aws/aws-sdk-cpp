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

TimecodeConfig::TimecodeConfig(const JsonValue& jsonValue) : 
    m_source(TimecodeConfigSource::NOT_SET),
    m_sourceHasBeenSet(false),
    m_syncThreshold(0),
    m_syncThresholdHasBeenSet(false)
{
  *this = jsonValue;
}

TimecodeConfig& TimecodeConfig::operator =(const JsonValue& jsonValue)
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
