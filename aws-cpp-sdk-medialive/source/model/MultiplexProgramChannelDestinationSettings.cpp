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

#include <aws/medialive/model/MultiplexProgramChannelDestinationSettings.h>
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

MultiplexProgramChannelDestinationSettings::MultiplexProgramChannelDestinationSettings() : 
    m_multiplexIdHasBeenSet(false),
    m_programNameHasBeenSet(false)
{
}

MultiplexProgramChannelDestinationSettings::MultiplexProgramChannelDestinationSettings(JsonView jsonValue) : 
    m_multiplexIdHasBeenSet(false),
    m_programNameHasBeenSet(false)
{
  *this = jsonValue;
}

MultiplexProgramChannelDestinationSettings& MultiplexProgramChannelDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("multiplexId"))
  {
    m_multiplexId = jsonValue.GetString("multiplexId");

    m_multiplexIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programName"))
  {
    m_programName = jsonValue.GetString("programName");

    m_programNameHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiplexProgramChannelDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_multiplexIdHasBeenSet)
  {
   payload.WithString("multiplexId", m_multiplexId);

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
