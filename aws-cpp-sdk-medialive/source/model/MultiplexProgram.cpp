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

#include <aws/medialive/model/MultiplexProgram.h>
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

MultiplexProgram::MultiplexProgram() : 
    m_channelIdHasBeenSet(false),
    m_multiplexProgramSettingsHasBeenSet(false),
    m_packetIdentifiersMapHasBeenSet(false),
    m_programNameHasBeenSet(false)
{
}

MultiplexProgram::MultiplexProgram(JsonView jsonValue) : 
    m_channelIdHasBeenSet(false),
    m_multiplexProgramSettingsHasBeenSet(false),
    m_packetIdentifiersMapHasBeenSet(false),
    m_programNameHasBeenSet(false)
{
  *this = jsonValue;
}

MultiplexProgram& MultiplexProgram::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channelId"))
  {
    m_channelId = jsonValue.GetString("channelId");

    m_channelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("multiplexProgramSettings"))
  {
    m_multiplexProgramSettings = jsonValue.GetObject("multiplexProgramSettings");

    m_multiplexProgramSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("packetIdentifiersMap"))
  {
    m_packetIdentifiersMap = jsonValue.GetObject("packetIdentifiersMap");

    m_packetIdentifiersMapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programName"))
  {
    m_programName = jsonValue.GetString("programName");

    m_programNameHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiplexProgram::Jsonize() const
{
  JsonValue payload;

  if(m_channelIdHasBeenSet)
  {
   payload.WithString("channelId", m_channelId);

  }

  if(m_multiplexProgramSettingsHasBeenSet)
  {
   payload.WithObject("multiplexProgramSettings", m_multiplexProgramSettings.Jsonize());

  }

  if(m_packetIdentifiersMapHasBeenSet)
  {
   payload.WithObject("packetIdentifiersMap", m_packetIdentifiersMap.Jsonize());

  }

  if(m_programNameHasBeenSet)
  {
   payload.WithString("programName", m_programName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
