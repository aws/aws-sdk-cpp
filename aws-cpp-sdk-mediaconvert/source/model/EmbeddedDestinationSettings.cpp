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

#include <aws/mediaconvert/model/EmbeddedDestinationSettings.h>
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

EmbeddedDestinationSettings::EmbeddedDestinationSettings() : 
    m_destination608ChannelNumber(0),
    m_destination608ChannelNumberHasBeenSet(false)
{
}

EmbeddedDestinationSettings::EmbeddedDestinationSettings(JsonView jsonValue) : 
    m_destination608ChannelNumber(0),
    m_destination608ChannelNumberHasBeenSet(false)
{
  *this = jsonValue;
}

EmbeddedDestinationSettings& EmbeddedDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destination608ChannelNumber"))
  {
    m_destination608ChannelNumber = jsonValue.GetInteger("destination608ChannelNumber");

    m_destination608ChannelNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue EmbeddedDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_destination608ChannelNumberHasBeenSet)
  {
   payload.WithInteger("destination608ChannelNumber", m_destination608ChannelNumber);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
