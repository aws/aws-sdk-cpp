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

#include <aws/medialive/model/MultiplexStatmuxVideoSettings.h>
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

MultiplexStatmuxVideoSettings::MultiplexStatmuxVideoSettings() : 
    m_maximumBitrate(0),
    m_maximumBitrateHasBeenSet(false),
    m_minimumBitrate(0),
    m_minimumBitrateHasBeenSet(false)
{
}

MultiplexStatmuxVideoSettings::MultiplexStatmuxVideoSettings(JsonView jsonValue) : 
    m_maximumBitrate(0),
    m_maximumBitrateHasBeenSet(false),
    m_minimumBitrate(0),
    m_minimumBitrateHasBeenSet(false)
{
  *this = jsonValue;
}

MultiplexStatmuxVideoSettings& MultiplexStatmuxVideoSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maximumBitrate"))
  {
    m_maximumBitrate = jsonValue.GetInteger("maximumBitrate");

    m_maximumBitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minimumBitrate"))
  {
    m_minimumBitrate = jsonValue.GetInteger("minimumBitrate");

    m_minimumBitrateHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiplexStatmuxVideoSettings::Jsonize() const
{
  JsonValue payload;

  if(m_maximumBitrateHasBeenSet)
  {
   payload.WithInteger("maximumBitrate", m_maximumBitrate);

  }

  if(m_minimumBitrateHasBeenSet)
  {
   payload.WithInteger("minimumBitrate", m_minimumBitrate);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
